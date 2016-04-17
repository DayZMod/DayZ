#include "\dayz\dayz_code\util\Array.hpp"
#include "\dayz\dayz_code\util\Vector.hpp"
#include "\dayz\dayz_code\util\Mutex.hpp"
#include "\dayz\dayz_code\util\Request.hpp"
#include "\dayz\dayz_code\util\Player.hpp"

#define MESSAGE_FAIL_BLOCKED 0
#define MESSAGE_FAIL_SLOPE 1

#ifndef SERVER

#define INTERRUPT_NONE 0
#define INTERRUPT_CANCEL 1
#define INTERRUPT_FINISH 2

#define ROT_SPEED_MAX 360
#define ROT_SPEED_INCREASE 5
#define ROT_SPEED_INITIAL 5

//If defined, build validity is checked periodically,
//and the build option hidden if the position is invalid.
//How often should the validity be checked (in seconds).
#define CHECK_AUTO 0.3

dz_build_mutex = Mutex_New();
dz_build_active = false;

dz_build_distance = 4;

dz_build_rotLeft = false;
dz_build_rotRight = false;
dz_build_rotSpeed = ROT_SPEED_INITIAL;

dz_build_messages =
[
	//TODO: move to stringtable
	"Failed to build. The site is blocked.",
	"Failed to build. The terrain is sloped.",
];

dz_fn_build =
{
	_missingItem = _this call dz_fn_build_removeItems;
	
	if (_missingItem != "") exitWith
		{ format ["Missing item: %1", _missingItem] call dz_fn_rollmsg; };
	
	_this spawn dz_pc_build;
};

dz_pc_build =
{
	if (!Mutex_TryLock_Fast(dz_build_mutex)) exitWith
		{ "Already building." call dz_fn_rollmsg; }; //TODO: move to stringtable
	
	scopeName "root";
	
	dz_build_active = true;
	dz_build_interrupt = INTERRUPT_NONE;
	dz_build_rotation = 0;
#ifdef CHECK_AUTO
	dz_build_canBuild = false;
#endif
	_preview = _this createVehicleLocal [0,0,0];
	_actions = call dz_fn_build_showActions;
	//dbg_buildPreview = _preview;
	
#ifdef CHECK_AUTO
	//Auto check timer
	_ccTime = diag_tickTime;
#endif
	
	while {true} do
	{
		_pos = call dz_fn_build_calculatePosition;
		[_preview, _pos] call dz_fn_build_setPos;
		
		//Sleep for one frame
		_frame = diag_frameNo;
		waitUntil { _frame != diag_frameNo };
		
		if (dz_build_interrupt == INTERRUPT_CANCEL) exitWith
		{
			_actions call dz_fn_build_hideActions;
			deleteVehicle _preview;
		};
		
		if (dz_build_interrupt == INTERRUPT_FINISH) then
		{
			dz_build_interrupt = INTERRUPT_NONE;
			
			if (_preview call dz_fn_build_checkGradient) exitWith
				{ dz_build_messages select MESSAGE_FAIL_SLOPE call dz_fn_rollmsg; };
			
			if (_preview call dz_fn_build_checkCollision) exitWith
				{ dz_build_messages select MESSAGE_FAIL_BLOCKED call dz_fn_rollmsg; };
			
			_actions call dz_fn_build_hideActions;
			deleteVehicle _preview;
			
			//TODO: start animation
			
			_result = Request_Wait(Request_Send("build", Array_New2(_this, _pos), true));
			
			if (_result >= 0) then
			{
				dz_build_messages select _result call dz_fn_rollmsg;
				_this call dz_fn_build_returnItems;
			};
			
			breakTo "root";
		};
		
		_time = diag_tickTime;
		
		if (dz_build_rotLeft && !dz_build_rotRight) then
		{
			_delta = _time - dz_build_rotLeftTime;
			if (_delta == 0) exitWith {};
			dz_build_rotLeftTime = _time;
			dz_build_rotation = dz_build_rotation - dz_build_rotSpeed * _delta;
			dz_build_rotSpeed = ROT_SPEED_MAX min (dz_build_rotSpeed + dz_build_rotSpeed * _delta * ROT_SPEED_INCREASE);
		};
		
		if (dz_build_rotRight && !dz_build_rotLeft) then
		{
			_delta = _time - dz_build_rotRightTime;
			if (_delta == 0) exitWith {};
			dz_build_rotRightTime = _time;
			dz_build_rotation = dz_build_rotation + dz_build_rotSpeed * _delta;
			dz_build_rotSpeed = ROT_SPEED_MAX min (dz_build_rotSpeed + dz_build_rotSpeed * _delta * ROT_SPEED_INCREASE);
		};
		
	#ifdef CHECK_AUTO
		_delta = _time - _ccTime;
		if (_delta > CHECK_AUTO) then
		{
			dz_build_canBuild = !(_preview call dz_fn_build_checkGradient || { _preview call dz_fn_build_checkCollision } );
			_ccTime = _time;
		};
	#endif
	};
	
	dz_build_active = false;
	
	Mutex_Unlock(dz_build_mutex);
};

dz_fn_build_removeItems =
{
	private ["_removed", "_fail"];
	
	_fail = "";
	_removed = [];
	
	{
		if !Player_RemoveMagazine_Fast(_x) exitWith
			{ _fail = _x };
		
		Array_PushBack_Fast(_removed, _x);
	}
	foreach getArray (configFile >> "CfgVehicles" >> "Build" >> "Consume");
	
	if (_fail != "") then
	{
		{
			Player_AddMagazine(_x);
		}
		foreach _removed;
	};
	
	_fail
};

dz_fn_build_returnItems =
{
	{
		Player_AddMagazine(_x);
	}
	foreach getArray (configFile >> "CfgVehicles" >> "Build" >> "Consume");
};

dz_fn_build_showActions =
{
#ifdef CHECK_AUTO
	#define BUILD_ACTION_CONDITION "dz_build_canBuild"
#else
	#define BUILD_ACTION_CONDITION ""
#endif
	
	private ["_buildAction", "_cancelAction"];
	_buildAction = player addAction ["Build", "\dayz\dayz_code\actions\build_confirm.sqf", _preview, 10, false, true, "", BUILD_ACTION_CONDITION];
	_cancelAction = player addAction ["Cancel build", "\dayz\dayz_code\actions\build_cancel.sqf", nil, 9, false, true];
	[_buildAction, _cancelAction]
	
	#undef BUILD_ACTION_CONDITION
};

dz_fn_build_hideActions =
{
	player removeAction (_this select 0);
	player removeAction (_this select 1);
};

dz_fn_build_calculatePosition =
{
	private "_pos";
	_pos = Vector_Add(getPosATL player, Vector_Multiply(Vector_Rotate2D(Vector_NORTH, getDir player), dz_build_distance));
	_pos set [2, 0];
	[_pos, getDir player + dz_build_rotation]
};

dz_fn_build_beginRotLeft =
{
	if !dz_build_active exitWith { false };
	
	if !dz_build_rotLeft then
	{
		dz_build_rotLeft = true;
		dz_build_rotLeftTime = diag_tickTime;
	};
	
	true
};

dz_fn_build_endRotLeft =
{
	if !dz_build_active exitWith { false };
	dz_build_rotLeft = false;
	dz_build_rotSpeed = ROT_SPEED_INITIAL;
	true
};

dz_fn_build_beginRotRight =
{
	if !dz_build_active exitWith { false };
	
	if !dz_build_rotRight then
	{
		dz_build_rotRight = true;
		dz_build_rotRightTime = diag_tickTime;
	};
	
	true
};

dz_fn_build_endRotRight =
{
	if !dz_build_active exitWith { false };
	dz_build_rotRight = false;
	dz_build_rotSpeed = ROT_SPEED_INITIAL;
	true
};

#endif

dz_fn_build_checkCollision =
{
	scopeName "root";
	
	_result = false;
	
	{
		#define GET_POINT(n) ATLToASL (_this modelToWorld (_this selectionPosition format ["buildCollision%1", _x select n]))
		
		_p2 = GET_POINT(0);
		
		for "_i" from 1 to count _x - 1 do
		{
			_p1 = _p2;
			_p2 = GET_POINT(_i);
			
			{
				_type = typeOf _x;
				if (_type != "" && { sizeOf _type >= 8 } ) then
				{
					_result = true;
					breakTo "root";
				};
			}
			foreach lineIntersectsWith [_p1, _p2, _this];
		};
	
		#undef GET_POINT
	}
	foreach getArray (configFile >> "CfgVehicles" >> typeOf _this >> "buildCollision");
	
	_result
};

dz_fn_build_checkGradient =
{
	//TODO: check terrain gradient
};

dz_fn_build_setPos =
{
	_this select 0 setDir (_this select 1 select 1);
	_this select 0 setPosATL (_this select 1 select 0);
	_this select 0 setVectorUp surfaceNormal (_this select 1 select 0);
};