private ["_playerPos","_item","_location","_config","_text","_dir","_dis","_sfx","_consumetext","_stashname","_stashtype","_stash","_consume","_hasitemcount","_worldspace"];

//check if can pitch here
call gear_ui_init;
closeDialog 1;

if (dayz_actionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };
dayz_actionInProgress = true;

//Player Pos
_playerPos = getPosATL player;

//Classname
_item = _this;

//Config
_config = configFile >> "CFGWeapons" >> _item;
_text = getText (_config >> "displayName");
_stashtype = "0";
_consume = getText (_config >> "consume");
_consumetext = getText (configFile >> "CfgMagazines" >> _consume >> "displayName");

_hasitemcount = {_x == _consume} count magazines player;

if (_hasitemcount > 0) then { _stashtype = getText (_config >> "stashsmall"); };
_stashname = getText (configFile >> "CfgVehicles" >> _stashtype >> "displayName");

// Items are missing
if ((!(_consume IN magazines player))) exitWith {
	dayz_actionInProgress = false;
	format[localize "str_player_31_stash",_consumetext] call dayz_rollingMessages;
};

_location = player modeltoworld [0,2.5,0];
_location set [2,0];

//blocked
if (["concrete",dayz_surfaceType] call fnc_inString) exitwith {
	dayz_actionInProgress = false;
};

_worldspace = [_stashtype, player] call fn_niceSpot;

if ((count _worldspace) == 2) then {
	player removeMagazine _consume;
	_dir = round(direction player);

	//wait a bit
	player playActionNow "Medic";
	uiSleep 1;

	_dis=20;
	_sfx = "tentunpack";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	uiSleep 5;
	//place tent (local)
	_stash = createVehicle [_stashtype, _location, [], 0, "CAN_COLLIDE"];
	_stash setdir _dir;
	_stash setposATL _location;
	player reveal _stash;
	
	_stash setVariable ["characterID",dayz_characterID,true];
	
	PVDZ_obj_Publish = [dayz_characterID,_stash,[_dir,_location],[]];
	publicVariableServer "PVDZ_obj_Publish";
    diag_log [diag_ticktime, __FILE__, "New Networked object, request to save to hive. PVDZ_obj_Publish:", PVDZ_obj_Publish];

	format[localize "str_success_stash_pitch",_stashname] call dayz_rollingMessages;
} else {
	format[localize "str_fail_stash_pitch",_stashname] call dayz_rollingMessages;
};

dayz_actionInProgress = false;