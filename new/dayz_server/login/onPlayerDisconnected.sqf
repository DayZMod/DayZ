#include "\dayz\dayz_code\util\Dictionary.hpp"
#include "PlayerSession.hpp"

//TODO: check this
#define DEFAULT_PLAYER_TYPE "Survivor_DZ"

if (_name == "__SERVER__") exitWith {};

_session = Dictionary_Get(dz_player_sessions, _uid);
_player = { if (_uid == getPlayerUID _x) exitWith { _x }; } foreach playableUnits;

if (isNil "_session") exitWith
{
	diag_log format ["ERROR: No session record for disconnecting player. Name:%1 UID:%2", _name, _uid];
	deleteVehicle _player;
};

if (typeOf _player == DEFAULT_PLAYER_TYPE) exitWith
{
	diag_log format ["WARNING: Player disconnected during login. Name:%1 UID:%2", _name, _uid];
	deleteVehicle _player;
};

//the logout handler has run
if (PlayerSession_GetLogout(_session)) then
{
	//Finalize the player object
	[_player, _session] call dz_fn_player_finalize;
}
else //the logout handler has not run
{
	//Set the logout flag to tell the logout pv handler that this handler has run
	PlayerSession_SetLogout(_session, true);
	
	//Set the ghost parameters
	PlayerSession_SetGhost(_session, _player);
	PlayerSession_SetGhostTime(_session, diag_tickTime);
	
	//Start the ghost controller script
	_controller = [_player, _session] spawn dz_pc_ghostController;
	PlayerSession_SetController(_session, _controller);
};