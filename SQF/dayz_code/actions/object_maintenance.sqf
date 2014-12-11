//if (!isNil "faco_object_maintenance") exitWith { _this call faco_object_maintenance;};

private ["_isMedic"];

_cursorTarget = _this select 3;

//Remove action Menu
player removeAction s_player_maintenance;
s_player_maintenance = -1;

//Item
_item = typeof _cursorTarget;
//diag_log (str(_item));

//Get tools needed
_classname = configFile >> "CfgVehicles" >> _item;
_displayname = getText (_classname >> "displayname");
_requiredTools = getArray (_classname >> "Disassembly" >> "requiredTools");
//diag_log (str(_requiredTools));

//get parts needed
_requiredParts = getArray (_classname >> "Disassembly" >> "requiredParts"); 
//diag_log (str(_requiredParts));


//Normal blocked stuff
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = 		(surfaceIsWater (getPosATL player)) or dayz_isSwimming;

_upgradeParts = [];
_startMaintenance = false;

if(_isWater or _onLadder) exitWith {
	cutText [localize "str_CannotUpgrade", "PLAIN DOWN"];
};

// lets check player has requiredTools for upgrade
{
	if (!(_x IN items player)) exitWith {
		cutText[ format[ localize "str_maintenanceMissingTool", "PLAIN DOWN"]; //"Missing %1 to do maintenance %2."
	};
	if (_x IN items player) then {
		_startMaintenance = true;
	};
} count _requiredTools;

// lets check player has requiredParts for upgrade

{
	if (!(_x IN magazines player)) exitWith {
		cutText[ format[ localize "str_maintenanceMissingPart",_x,_displayname], "PLAIN DOWN"]; //"Missing %1 to maintenance %2."
	};
	if (_x IN magazines player) then {
		_startMaintenance = true;
	};
} count _requiredParts;

if (count _requiredParts < 1) then { _startMaintenance = true; };


if (_startMaintenance) then {
	//play animation
	player playActionNow "Medic";
	_dis=20;
	_sfx = "tentpack";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;
	
	//Animation Loop
	r_doLoop = true;
	_started = false;
	_finished = false;
	while {r_doLoop} do {
		_animState = animationState player;
		_isRefuel = ["medic",_animState] call fnc_inString;
		if (_isRefuel) then {
			_started = true;
		};
		if (_started and !_isRefuel) then {
			r_doLoop = false;
			_finished = true;
		};
		sleep 0.1;
	};

	r_doLoop = false;
	
	if (_finished) then {
		PVDZ_veh_Save = [_cursorTarget,"maintenance"];
		publicVariableServer "PVDZ_veh_Save";
		if (isServer) then {
			PVDZ_veh_Save call server_updateObject;
		};
	}
	
	cutText [localize "str_maintenanceDone", "PLAIN DOWN"];
} else {
	cutText [localize "str_maintenanceNoOption", "PLAIN DOWN"];
};

