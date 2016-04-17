#include "\z\addons\dayz_code\util\mutex.hpp"
#include "\z\addons\dayz_code\util\dictionary.hpp"
#include "\z\addons\dayz_code\new\login\LoginInfo.hpp"
#include "PlayerSession.hpp"

scopeName "root";

_player = _this select 0;
_version = _this select 1;
_uid = getPlayerUID _player;
_name = name _player;

if (isNil "sm_done") exitWith
{
	diag_log format ["WARNING: Aborted login. Server not ready. UID:%1", _uid];
	LoginInfo_New(LoginInfo_FAIL, nil, 0);
};

if (_name == "" || {_name == "__SERVER__"} || {local _player} || {_uid == ""} || {_uid == "ERROR"}) exitWith
{
	diag_log format ['WARNING: Login failed with name:"%1" UID:"%2"', _name, _uid];
	LoginInfo_New(LoginInfo_FAIL, nil, 1);
};

_session = Dictionary_Get(dz_player_sessions, _uid);

//Player has disconnected
if (PlayerSession_GetLogout(_session)) exitWith
{
	diag_log format ["WARNING: Login request received after disconnect. Name:%1 UID: %2", _name, _uid];
	
	//Prevent anything from being sent back to the client. See utils\request.sqf
	__reply = false;
};

_loadState =
{
	//TODO: load state i.e. food, drink, medical etc.
};

_charID = nil; //TODO: get char id? is it even necessary?

//Lock session to prevent the ghost controller from finalizing
_ghost = PlayerSession_GetGhost(_session);
_mutex = PlayerSession_GetMutex(_session);
_lock = Mutex_TryLock_Fast(_mutex);

if ( _lock && { !isNull _ghost && { alive _ghost } } ) exitWith
{
	//Player is in ghost mode, tell client to take control
	
	//Terminate the ghost controller
	terminate PlayerSession_GetController(_session);
	
	//Unlock session
	Mutex_Unlock(_mutex);
	
	_ghost allowDamage false;
	_ghost removeAllEventHandlers "HandleDamage";
	
	//Return LoginInfo object
	_data = [_ghost, call _loadState];
	LoginInfo_New(LoginInfo_CONTROL, _charID, _data);
};

//Unlock session
if (_lock)
	then { Mutex_Unlock(_mutex); };

//TODO: start new session in database

/*Session is from login to finalization i.e. ghost disconnect does not end session therefore
preventing the player from being on multiple servers on the same hive at the same time. */

//Check if player has a live character in the database and if not tell client to create a new one
if ( ! /* check... */ ) exitWith //TODO: data access
{
	//Return LoginInfo object
	LoginInfo_New(LoginInfo_CREATE, _charID, nil);
};

//TODO: data access
_class = nil; //get char class
_position = nil; //get char position
_gear = nil; //get gear
_backpack = nil; //get backpack

//Return LoginInfo object
_data = [_class, _position, _gear, _backpack, call _loadState];
LoginInfo_New(LoginInfo_LOAD, _charID, _data);