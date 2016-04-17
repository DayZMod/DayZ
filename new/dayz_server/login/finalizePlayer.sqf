#include "PlayerSession.hpp"

/*TODO: Goals:
	- Save player to database.
	- End session (persistent database record, not PlayerSession object).
	- Set session ghost object to null indicating that the player has safely disconnected.
	- Delete player object.
*/

_player = _this select 0;
_session = _this select 1;

//assert (!isNil "_player");
assert (!isNil "_session");

if (isNull _player) exitWith
{
	diag_log format ["ERROR: Attempted to finalize null player. UID:%1", PlayerSession_GetUID(_session)];
};

if (!alive _player) exitWith
{
	diag_log format ["DEBUG: Attempted to finalize dead player. UID:%1", PlayerSession_GetUID(_session)];
};

_player allowDamage false;
_player removeAllEventHandlers "HandleDamage";

//Set ghost object to null
PlayerSession_SetGhost(_session, objNull);

if (vehicle _player != _player) then
	{ _player action ["eject", vehicle _player]; };

//TODO: Save player state to database
//TODO: End session in database

//delete player and group
_playerGroup = group _player;
deleteVehicle _player;
deleteGroup _playerGroup;