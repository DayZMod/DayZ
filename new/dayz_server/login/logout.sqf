#include "\z\addons\dayz_code\util\dictionary.hpp"
#include "PlayerSession.hpp"

//TODO: check this
#define DEFAULT_PLAYER_TYPE "Survivor_DZ"

_player = _this select 0;
_session = Dictionary_Get(dz_player_sessions, getPlayerUID _player);

if (typeOf _player == DEFAULT_PLAYER_TYPE) exitWith
{
	diag_log format ["WARNING: Player attempted logout during login. Name:%1 UID:%2", _name, _uid];
};

//The onPlayerDisconnect handler has run
if (PlayerSession_GetLogout(_session)) then
{
	//Terminate ghost controller
	terminate PlayerSession_GetController(_session);
	
	//Finalize player object
	[_player, _session] call dz_fn_player_finalize;
}
else //onPlayerDisconnect has not run
{
	//Tell onPlayerDisconnect that this handler has run
	PlayerSession_SetLogout(_session, true);
};