#include "\dayz\dayz_code\util\command.hpp"
#include "\dayz\dayz_code\rpc.hpp"

//TODO: gui for repair. asks server for hitpoint damage, invalidated using servertime timestamp

#define SOUND_EFFECT "repair"
#define SOUND_DISTANCE 20

_begin =
{
	[player, SOUND_EFFECT, 0, false, SOUND_DISTANCE] call dayz_zombieSpeak;
	[player, SOUND_DISTANCE, true, getPosATL player] call player_alertZombies;
};

_finish =
{
	["Working", 0, [20, 40, 15, 0]] call dayz_NutritionSystem;
};

_handler =
{
	if !local (_this select 0) exitWith { false };
	_this call dz_fn_vehicle_sethit;
	true
};

Command_RegisterHandler(RPC_COMMAND_REPAIR, _handler);