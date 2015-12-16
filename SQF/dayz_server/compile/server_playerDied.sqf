#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

private ["_characterID","_minutes","_newObject","_playerID","_key", "_pos"];
//[unit, weapon, muzzle, mode, ammo, magazine, projectile]

_characterID = 	_this select 0;
_minutes =	_this select 1;
_newObject = 	_this select 2;
_playerID = 	_this select 3;
_playerName = 	name _newObject;

//diag_log format["CID: %1, PID: %2",_characterID,_playerID];

//Mark player as dead so we bypass the ghost system
dayz_died set [count dayz_died, _playerID];

_newObject setVariable["processedDeath",diag_tickTime];
_newObject setVariable ["bodyName", _playerName, true];

_pos = getPosATL _newObject;

// force to follow the terrain slope in sched_corpses.sqf
if (_pos select 2 < 0.1) then { _pos set [2,0]; };
_newObject setVariable [ "deathPos", _pos];

if (typeName _minutes == "STRING") then 
{
	_minutes = parseNumber _minutes;
};

if (_characterID != "0") then 
{
	_key = format["CHILD:202:%1:%2:",_characterID,_minutes];
	//diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
};

#ifdef PLAYER_DEBUG
diag_log format ["Player UID#%3 CID#%4 %1 as %5 died at %2", 
	_newObject call fa_plr2str, (getPosATL _newObject) call fa_coor2str,
	getPlayerUID _newObject,_characterID,
	typeOf _newObject
];
#endif
_newObject setDamage 1;
_newObject setOwner 0;
//dead_bodyCleanup set [count dead_bodyCleanup,_newObject];