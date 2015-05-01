private["_playerPos","_canFill","_isPond","_isWell","_pondPos","_objectsWell","_onLadder","_hasbottleitem","_config","_item","_text","_objectsPond","_qty","_dis","_sfx"];

call gear_ui_init;
closeDialog 0;

_item = _this;
_playerPos = getPosATL player;
_canFill = count nearestObjects [_playerPos, ["Land_pumpa","Land_water_tank"], 4] > 0;
_isPond = false;
_isWell = false;
_isInfected = false;
_pondPos = [];
_objectsWell = [];

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [localize "str_player_21", "PLAIN DOWN"]};

_hasbottleitem = _this in magazines player;

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

if (!_hasbottleitem) exitWith {cutText [format [localize "str_player_31",_text,localize "str_player_31_fill"] , "PLAIN DOWN"]};

if (!dayz_isSwimming) then {
	player playActionNow "PutDown";
};

if (!_canFill) then {
	_objectsWell = nearestObjects [_playerPos, [], 4];
	{
		//Check for Well
		_isWell = ["_well",str(_x),false] call fnc_inString;
		if (_isWell) then { _canFill = true };
	} forEach _objectsWell;
};

if (!_canFill) then {
	_objectsPond = nearestObjects [_playerPos, [], 50];
	{
		//Check for pond
		_isPond = ["pond",str(_x),false] call fnc_inString;
		
		//Check for Dead Bodies
		_bodiesNear = ["dead",str(_x),false] call fnc_inString;
		if (!_bodiesNear) then {
			_bodiesNear = ["massgrave",str(_x),false] call fnc_inString;
		};
		if (_bodiesNear) then {
			_isInfected = true; 
		};
		if (_isPond) then {
			_pondPos = (_x worldToModel _playerPos) select 2;
			if (_pondPos < 0) then {
				_canFill = true;
			};
		};
	} forEach _objectsPond;
};

if (_canFill) then {
	if ("ItemWaterbottleUnfilled" in magazines player) then {
		_qty = {_x == "ItemWaterbottleUnfilled"} count magazines player;
		player removeMagazines "ItemWaterbottleUnfilled";
		_dis=5;
		_sfx = "fillwater";
		[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
		[player,_dis,true,(getPosATL player)] call player_alertZombies;		
		
		for "_x" from 1 to _qty do {			
			if (_isInfected) then {
				player addMagazine "ItemWaterBottleInfected";
			} else {
				if (_isWell) then {
					player addMagazine "ItemWaterBottleSafe";
				} else {
					player addMagazine "ItemWaterbottle";
				};
			};
		};
		cutText [format [localize "str_player_01",_qty], "PLAIN DOWN"];
	} else {
		cutText [localize "str_player_02", "PLAIN DOWN"];
	};
} else {
	cutText [localize "str_player_20", "PLAIN DOWN"];
};