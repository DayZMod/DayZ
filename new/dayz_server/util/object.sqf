#include "\dayz\dayz_code\util\Debug.hpp"
#include "\dayz\dayz_code\util\String.hpp"
#include "\dayz\dayz_code\util\Dictionary.hpp"
#include "\dayz\dayz_code\util\PlayerSession.hpp"
#include "Request.hpp"

#define LOCK_MSG_FAIL1 "Player UID:%1 failed to lock object (%2). Already locked by UID:%3."
#define LOCK_MSG_FAIL2 "Player UID:%1 failed to lock object (%2). Already locking object (%3)."
#define LOCK_MSG_SUCCESS "Player UID:%1 succesfully locked object (%2)."

private "_handler";
	
//Lock handler
_handler =
{
	if (isNull (_this select 0)) exitWith
	{
		diag_log format ["ERROR: Player UID:%1 attempted to lock a null object.", _this select 1];
		false
	};
	
	_locker = _this select 0 getVariable ["lock", nil];
	
	//Make sure object is not locked
	if (!isNil "_locker") exitWith
	{
		Debug_Log(String_Format3(LOCK_MSG_FAIL1, _this select 1, _this select 0, _locker));
		false
	};
	
	_session = Dictionary_Get(dz_player_sessions, _this select 1);
	_current = PlayerSession_GetLockedObject(_session);
	
	//Make sure player hasn't already locked another object
	if (!isNil "_current") exitWith
	{
		Debug_Log(String_Format3(LOCK_MSG_FAIL2, _this select 1, _this select 0, _current));
		false
	};
	
	//Lock object
	_this select 0 setVariable ["lock", _this select 1];
	PlayerSession_SetLockedObject(_var, _this select 0);
	Debug_Log(String_Format2(LOCK_MSG_SUCCESS, _this select 1, _this select 0));
	true
};

Request_RegisterHandler(1, _handler, false);



#define UNLOCK_MSG_FAIL1 "Player UID:%1 failed to unlock object (%2). Not locked."
#define UNLOCK_MSG_FAIL2 "Player UID:%1 failed to unlock object (%2). Locked by UID:%3"
#define UNLOCK_MSG_SUCCESS "Player UID:%1 succesfully unlocked object (%2)."

//Unlock handler
_handler =
{
	if (isNull (_this select 0)) exitWith
	{
		diag_log format ["ERROR: Player UID:%1 attempted to unlock a null object.", _this select 1];
	};
	
	_locker = _this select 0 getVariable ["lock", nil];
	
	//Make sure object is locked
	if (isNil "_locker") exitWith
	{
		Debug_Log(String_Format2(UNLOCK_MSG_FAIL1, _this select 1, _this select 0));
	};
	
	//Make sure locker is the player
	if (_locker != (_this select 1)) exitWith
	{
		Debug_Log(String_Format3(UNLOCK_MSG_FAIL2, _this select 1, _this select 0, _locker));
	};
	
	//Unlock the object
	PlayerSession_SetLockedObject(Dictionary_Get(dz_player_sessions, _this select 1), nil);
	_this select 0 setVariable ["lock", nil];
	Debug_Log(String_Format2(UNLOCK_MSG_SUCCESS, _this select 1, _this select 0));
};

Request_RegisterHandler(2, _handler, false);