// (c) facoptere@gmail.com, licensed to DayZMod for the community
private ["_classType","_item","_action","_missingTools","_missingItem","_emergingLevel","_isClass","_classname","_requiredTools",
"_requiredParts","_ghost","_placement","_text","_onLadder","_isWater","_object","_string","_actionBuildHidden","_getBeams",
"_o","_offset","_rot","_r","_p","_bn","_bb","_h","_bx","_by","_minElevation","_maxElevation","_insideCheck","_building",
"_unit","_bbb","_ubb","_check","_min","_max","_myX","_myY","_checkBuildingCollision","_objColliding","_inside","_checkOnRoad",
"_roadCollide","_checkBeam2Magnet","_a","_beams","_best","_b","_d","_checkNotBuried","_elevation","_position","_delta","_overElevation",
"_maxplanting","_safeDistance","_dir","_angleRef","_tmp","_actionCancel","_sfx","_actionBuild","_byPassChecks","_keepOnSlope","_msg",
"_isCollisionBypass","_ok","_missing","_upgradeParts","_ownerID","_posReference"];

/*
Needs a full rewrite to keep up with the demand of everything we plan to add.
*/

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

call gear_ui_init;
closeDialog 1;

_item = _this select 0;
_action = _this select 1;
_classType = "ItemActions";

//diag_log (_item);

if (count _this > 2) then {
	_classType = _this select 2;
};

_emergingLevel = 1.1;

_isClass = switch (1==1) do {
	case (isClass (configFile >> "CfgMagazines" >> _item)): {"CfgMagazines"};
	case (isClass (configFile >> "CfgWeapons" >> _item)): {"CfgWeapons"};
};

//need to swap all build systems to this "ItemActions"
_classname = getText (configFile >> _isClass >> _item >> _classType >> _action >> "create");
_requiredTools = getArray (configFile >> _isClass >> _item >> _classType >> _action >> "require");
_requiredParts   = getArray (configFile >> _isClass >> _item >> _classType >> _action >> "consume");
_ghost = getText (configFile >> _isClass >> _item >> _classType >> _action >> "ghost");
//need to move to array and separate what checks need to be done.
_byPassChecks = getText (configFile >> _isClass >> _item >> _classType >> _action >> "byPass");

if (_byPassChecks == "") then { _byPassChecks = "BaseItems" };
if (_ghost == "") then { _ghost = _classname; };

//Remove tents and stashes from new collision system until we find a better way then build tent for hiding items.
_isCollisionBypass = (isText (configFile >> _isClass >> _item >> _classType >> _action >> "bypassCollision"));

_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
_keepOnSlope = 0 == (getNumber (configFile >> "CfgVehicles" >> _classname >> "canbevertical"));

_onLadder = {getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder") == 1};
_isWater = {(surfaceIsWater (getPosATL _object)) or dayz_isSwimming};

if (0 != count Dayz_constructionContext) exitWith {
	dayz_actionInProgress = false;
	localize "str_already_building" call dayz_rollingMessages;
};

// item is missin - this really is pointless but it aint broke so dont fix it
if (isClass (configFile >> _isClass >> _item)) then {
	if ((!(_item IN magazines player))) exitWith {
		_string = switch true do {
			case (_item isKindOf "Land_A_tent"): {"str_player_31_pitch"};
			default {"str_player_31_build"};
		};
		//cutText [format [localize "str_player_31",_text,(localize _string)] , "PLAIN DOWN"];
		_msg = format [localize "str_player_31",_text,(localize _string)];
		_msg call dayz_rollingMessages;
		//diag_log(format["player_build: item:%1 require:%2  Player items:%3  magazines:%4", _item, _requiredTools, (items player), (magazines player)]);
	};
};

// lets check player has requiredTools for upgrade
_ok = true;
_missing = "";
{
	if (!(_x IN items player)) exitWith {
		//systemchat("Missing tools for upgrade." +str());
		_missing = getText (configFile >> "CfgWeapons" >> _x >> "displayName");
		_ok = false;
	};
} count _requiredTools;

if (!_ok) exitWith {
	dayz_actionInProgress = false;
	//cutText [format [localize "str_player_31_missingtools",_text,_missing] , "PLAIN DOWN"]; 
	_msg = format [localize "str_player_31_missingtools",_text,_missing];
	_msg call dayz_rollingMessages;
};

// lets check player has requiredParts for upgrade
_ok = true;
_upgradeParts = [];
{
	if (!(_x IN magazines player)) exitWith {
		_missing = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
		_ok = false;
	};
	if (_x IN magazines player) then {
		_upgradeParts set [count _upgradeParts, _x];
		player removeMagazine _x;
	};
} count _requiredParts;

if (!_ok) exitWith {
	{ player addMagazine _x; } foreach _upgradeParts;
	dayz_actionInProgress = false;
   // cutText [format [localize "str_player_31", _missing, localize "str_player_31_build"] , "PLAIN DOWN"];
	_msg = format [localize "str_player_31", _missing, localize "str_player_31_build"];
	_msg call dayz_rollingMessages;
};


_msg = localize "str_player_build_rotate";
_msg call dayz_rollingMessages;

//Get fence beams based on model
_getBeams = {
		private [ "_p", "_r", "_bn", "_bb", "_bx", "_by" ];
		
		_o = _this select 0;
		_offset = _this select 1;
		_rot = _this select 2;
		_r = [];
		
		for "_bn" from 1 to 4 do {
				_p = _o selectionPosition Format [ "beam%1", _bn ];
				if (_p distance [0,0,0] == 0) exitWith { 
					if (_bn == 1) then { // no memory points defined
						_bb = boundingBox _o;
						_h = _offset + ((_o worldToModel (getPosATL _o)) select 2);
						_p = [ (_bb select 0) select 0, 0, _h ];
						_r set [ 0, _o modelToWorld _p];
						_p = [ (_bb select 1) select 0, 0, _h ];
						_r set [ 1, _o modelToWorld _p];
					};
				};
				if (_rot != 0) then {
					_bx = _p select 0;
					_by = _p select 1;
					_p set [0, (_bx * cos _rot) - (_by * sin _rot)];
					_p set [1, (_bx * sin _rot) + (_by * cos _rot)];
				};
				_p set [2, (_p select 2) + _offset];

				_r set [ count _r, _o modelToWorld _p];
		};
		_r
};

_minElevation = {
	private "_r";
	
	_r = 400;
	{ _r = _r min (_x select 2); } count _this;

	_r
};

_maxElevation = {
	private "_r";
	
	_r = -400;
	{ _r = _r max (_x select 2); } count _this;

	_r
};

#define COLLIDABLE_OBJECT_MIN_SIZE 8

//check if building being placed and objects around placement is free to be built on.
//Fence owners must build all the foundations by one player anyone can still upgrade (pending lock build level)
_checkBuildingCollision =
{
	scopeName "root";
	
	_objColliding = objNull;
	
	local _count = getNumber (configFile >> "CfgVehicles" >> _ghost >> "buildCollisionPoints");
	if (_count == 0) exitWith {};
	
	local _wall = _object isKindOf "DZ_buildables";
	
	//Make sure no one can build within 6 meters of someone elses walls. Also block placement from anyone from the model origin.	
	if (_wall && {
    local _result = false;
    {
        if (_x != _object && { _x distance _object < 1.5 || { _x getVariable ["ownerArray", [""]] select 0 != getPlayerUID player } } ) exitWith
            { _objColliding = _x; _result = true; };
    } foreach (nearestObjects [_object, ["DZ_buildables"], 6]);
    _result
	}) exitWith {};
		
	//Load object collision points
	local _points = [];
	_points resize _count;
	for "_i" from 0 to _count - 1 do
        { _points set [_i, ATLtoASL (_object modelToWorld (_object selectionPosition format ["buildCollision%1", _i]))]; };
		
	//Trace paths
    {
        local _p2 = _x select 0; //[0,1,3,2,0,3]
        
        for "_i" from 1 to count _x - 1 do
        {
            local _p1 = _p2;
            _p2 = _x select _i;
            
            {			 
                if (!_wall || { !(_x isKindOf "DZ_buildables" && { _x getVariable ["ownerArray", [""]] select 0 == getPlayerUID player }) }) then
                {
                    local _type = typeof _x;
                    
                    if (_type != "" && { sizeof _type >= COLLIDABLE_OBJECT_MIN_SIZE }) then
                    {
                        _objColliding = _x;
                        breakTo "root";
                    };
                };
            } foreach lineIntersectsWith [_points select _p1, _points select _p2, _object, player];
        };
    } foreach getArray (configFile >> "CfgVehicles" >> _ghost >> "buildCollisionPaths");
};

//Is placement on a road?
_checkOnRoad = {
	_roadCollide = false;
	{
		_x set [2,0];
		if (isOnRoad _x) exitWith { _roadCollide = true; };
	} forEach ([_object, 0,0] call _getBeams);
	_roadCollide
};

//Make the object attach to beams if it can
_checkBeam2Magnet = {
	_a = [];
	{
		if ((!isNull _x) and (_x != _object)) then { _a = _a + ([_x, 0,0] call _getBeams); };
	} forEach (nearestObjects [getPosATL _object, ["DZ_buildables"], 15]);

	_beams = [_object, 0,0] call _getBeams;
	_best = [50,[0,0,0],[0,0,0]];
	{
		_b = _x;
		{
			_d = [_x, _b] call BIS_fnc_distance2D;
			if (_d < _best select 0) then {
				_best = [_d,_b,_x];
			};
		} forEach _a;
	} count _beams;
	// _best contains the best beam to dock to. [ distance, coor of beam found around, coor of beam of ghost object ]
};

_checkNotBuried = {
	// lift up the object so that any beams are buried, but also don't lift further the planting level (straight placement only)
	_elevation = _position select 2;
	_delta = 0;
	_overElevation = 0;
	_beams = [_object, 0,0] call _getBeams;
	if (_elevation < 0) then { _delta = -_elevation; }
	else {
		_overElevation = _beams call _minElevation;
		if (_overElevation>0.05) then { // bury the object so that posATL is still positif and all beams are above the ground
			_delta = - (_overElevation min _elevation);
		};
		if (_overElevation < -0.05) then { // lift up the object because a beam is burried
			_delta = - _overElevation + 0.10;
		};
	};
	_position set [ 2, _elevation + _delta ];
	_maxplanting = _beams call _maxElevation;
	// _maxplanting is the height of the emerging foundations, must not be so high because we don't want some "floating" foundations
};

_object = _ghost createVehicleLocal getMarkerpos "respawn_west";
_safeDistance = 0.5 + (sizeOf _ghost) * 0.5; // beware of hedgehogs
_dir = getDir player;
_object setDir _dir;
Dayz_constructionContext = [_object, round (_dir/5)*5, cameraView, false, true, _keepOnSlope]; 
							// ghost, angle, previous camera, build view on/off, continue on/off, slope on/off
_posReference = getPosATL player;
_objColliding = objNull;
_best = [50,[0,0,0],[0,0,0]];
_maxplanting = 10;
_position = getPosATL _object;

_actionBuildHidden = true;
_actionCancel = player addAction [localize "str_player_build_cancel", "\z\addons\dayz_code\actions\object_build.sqf", [_object, _requiredParts, _classname, _text, false, 0, "none"], 1, true, true, "", "0 != count Dayz_constructionContext"];

while {Dayz_constructionContext select 4} do {

	// force the angle so that the ghost is showing always the same side
	_angleRef=Dayz_constructionContext select 1;
	_dir = _angleRef - (getDir player);
	if (_dir > 180) then {_dir = _dir - 360}; 
	if (_dir < -180) then {_dir = _dir + 360};
	if (_dir < -75) then {
		_angleRef = ceil(((getDir player) - 75)/5)*5;
		Dayz_constructionContext set [ 1, _angleRef];
	};
	if (_dir > 75) then {
		_angleRef = floor(((getDir player) + 75)/5)*5;
		Dayz_constructionContext set [ 1, _angleRef];
	};

	// move object according to player position
	if ((abs(([_object, player] call BIS_fnc_distance2D) - _safeDistance) > (if (_best select 0 < 0.50) then {0.50} else {0.05})) 
		or (abs([player, _object] call BIS_fnc_relativeDirTo) > (if (_best select 0 < 0.50) then {5} else {1})) or (r_interrupt)) then {
		r_interrupt = false;
		_object setDir _angleRef;
		_tmp = player modelToWorld [0, _safeDistance,0];
		
		if ((Dayz_constructionContext select 5) or (_keepOnSlope)) then {
			_tmp set [2, 0];
			_object setVectorUp surfaceNormal _tmp;
		}
		else {
			_tmp set [2, _position select 2];
			_object setVectorUp [0,0,1];
		};
		_position = +(_tmp);
		_object setPosATL _position;		
	};
	
	//Need to add config based bypass checks array.
	if (!_isCollisionBypass) then {
		// check now that ghost is not colliding
		call _checkBuildingCollision;
	};
	
	// try to dock a beam from current ghost to another beams nearby
	call _checkBeam2Magnet;
	
	if (_best select 0 < 0.50) then {
		_position = [
			(_position select 0) + ((_best select 2) select 0) - ((_best select 1) select 0),
			(_position select 1) + ((_best select 2) select 1) - ((_best select 1) select 1),
			_position select 2
		];
		_object setPosATL _position;
	};

	if (Dayz_constructionContext select 5 or _keepOnSlope) then {
		_maxplanting = 0;
		_position set [2, 0];
	}
	else {
		// adjust the elevation of the object according to slope and beams to keep them visible (straight placement only)
		call _checkNotBuried;
	};
	_object setPosATL _position;

	if ((((vehicle player) != player or _posReference distance player > 20 or 0 !=  player getVariable["startcombattimer",0]) or {(!alive player)}) or {((call _onLadder) or {(call _isWater)})}) exitWith {
		[[],[],[],[_object, _requiredParts  , _classname, _text, false, 0, "none"]] call object_build;
	};
	
	if (_byPassChecks == "byPassRoadCheck") then {
		if (isNull _objColliding and _maxplanting <= _emergingLevel) then { // placement is fine, enable "Build" in the menu
			if (_actionBuildHidden) then {
				_actionBuildHidden = false;
				player removeAction _actionCancel;
				_sfx = if (_object isKindOf "Land_A_tent") then {"tentunpack"} else {"repair"};
				_actionBuild = player addAction [localize "str_player_build_complete", "\z\addons\dayz_code\actions\object_build.sqf", [_object, _requiredParts , _classname, _text, true, 20, _sfx], 1, true, true, "", "0 != count Dayz_constructionContext"];
				_actionCancel = player addAction [localize "str_player_build_cancel", "\z\addons\dayz_code\actions\object_build.sqf", [_object, _requiredParts  , _classname, _text, false, 0, "none"], 1, true, true, "", "0 != count Dayz_constructionContext"];
		   };
		} else {
			if (!_actionBuildHidden) then {
				_actionBuildHidden = true;
				player removeAction _actionBuild;
			};
		};
	};
	
	if (_byPassChecks == "BaseItems") then {
		if (isNull _objColliding and _maxplanting <= _emergingLevel and !(call _checkOnRoad)) then { // placement is fine, enable "Build" in the menu
			if (_actionBuildHidden) then {
				_actionBuildHidden = false;
				player removeAction _actionCancel;
				_sfx = if (_object isKindOf "Land_A_tent") then {"tentunpack"} else {"repair"};
				_actionBuild = player addAction [localize "str_player_build_complete", "\z\addons\dayz_code\actions\object_build.sqf", [_object, _requiredParts , _classname, _text, true, 20, _sfx], 1, true, true, "", "0 != count Dayz_constructionContext"];
				_actionCancel = player addAction [localize "str_player_build_cancel", "\z\addons\dayz_code\actions\object_build.sqf", [_object, _requiredParts  , _classname, _text, false, 0, "none"], 1, true, true, "", "0 != count Dayz_constructionContext"];
		   };
		} else {
			if (!_actionBuildHidden) then {
				_actionBuildHidden = true;
				player removeAction _actionBuild;
			};
		};
	};
	uiSleep 0.03;
};

if (!_actionBuildHidden) then { // player can't build until all is fine
	_actionBuildHidden = true;
	player removeAction _actionBuild;
};
player removeAction _actionCancel;

if (Dayz_constructionContext select 3) then { // "build" camera was on, switch it off
	call fn_buildCamera;
};

Dayz_constructionContext = [];
dayz_actionInProgress = false;
//systemChat "Dayz_constructionContext reset";
