#include "\dayz\dayz_code\util\debug.hpp"

Debug_LogTrace("Login: Selecting player.");

private "_old";
_old = player;

//Wait for player to be selected
if !Util_WaitUntil({ !alive _this || { player == _this && { local _this }}}, 30) exitWith
{
	if (!alive _this) then
	{
		Debug_LogInfo("Login failed. Character is dead.");
	}
	else
	{
		Debug_LogError("Login failed. Failed to select player.");
	};
	
	false
};

//Delete old unit
deleteVehicle _old;

Debug_LogTrace("Login: Player selected.");

true