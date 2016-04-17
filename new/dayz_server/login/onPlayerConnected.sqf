#include "\dayz\dayz_code\util\Dictionary.hpp"
#include "PlayerSession.hpp"

if (isNil "dz_player_sessions") then
{
	dz_player_sessions = Dictionary_New();
};

//Get existing session record
_session = Dictionary_Get(dz_player_sessions, _uid);

//Player connected for the first time, create new session
if (isNil "_session") then
{
	_session = PlayerSession_New();
	Dictionary_Add(dz_player_sessions, _uid, _session);
}
else
{
	//Reset logout flag
	PlayerSession_SetLogout(_session, false);
};

/*//If unit is dead set reference to null
if (!isNull (_session select 0) && {!alive (_session select 0)}) then
{
	_session set [0, objNull];
};

//Send login info to player
_ghostTime = dayz_enableGhosting ? dayz_ghostTimer - diag_tickTime + (_session select 1) : 0;
DZ_PVC_login = [_session select 0, _ghostTime];
_owner publicVariableClient "DZ_PVC_login";*/