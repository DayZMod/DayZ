#include "\dayz\dayz_code\util\array.hpp"
#include "\dayz\dayz_code\util\request.hpp"
#include "\dayz\dayz_code\util\command.hpp"
#include "\dayz\dayz_code\rpc.hpp"

#define JERRY_CAN "ItemJerrycan"
#define FUEL_CAN "ItemFuelcan"

#define SOUND_EFFECT "refuel"
#define SOUND_DISTANCE 5

#define ADD_FUEL(veh, amount) ((veh) setFuel (1 min (fuel (veh) + (amount) / getNumber (configFile >> "CfgVehicles" >> typeof (veh) >> "fuelCapacity"))))

_begin =
{
	[player] allowGetIn false;
	
	[player, SOUND_EFFECT, 0, false, SOUND_DISTANCE] call dayz_zombieSpeak;
	[player, SOUND_DISTANCE, true, getPosATL player] call player_alertZombies;
};

_finish =
{
	_cans = [JERRY_CAN, FUEL_CAN];
	_cans = Array_Where(magazines player, {_x in _cans});
	
	if (count _cans == 0) exitWith { "Jerry can not found." call dz_fn_rollmsg };
	
	["Working", 0, [20, 40, 15, 0]] call dayz_NutritionSystem;
	
	_can = _cans select 0;
	
	_fuel = getNumber (configFile >> "CfgMagazines" >> _can >> "fuelCapacity");
	
	if local _this then
		{ ADD_FUEL(_this, _fuel) }
	else
		{ Request_Send(RPC_REQUEST_REFUEL, Array_New2(_this, _fuel)) };
	
	player removeMagazine _can;
	player addMagazine getText (configFile >> "CfgMagazines" >> _can >> "emptycan");
	
	[player] allowGetIn true;
	
	count _cans > 1
};

_cancel =
{
	[player] allowGetIn true;
};

["refuel", _finish, _begin, _cancel] call dz_fn_action_register;

_handler =
{
	if !local (_this select 0) exitWith { false };
	ADD_FUEL(_this select 0, _this select 1);
	true
};

Command_RegisterHandler(RPC_COMMAND_REFUEL, _handler);