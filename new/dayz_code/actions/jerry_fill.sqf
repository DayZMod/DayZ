#define JERRY_CAN "ItemJerrycan"
#define JERRY_CAN_EMPTY "ItemJerrycanEmpty"
#define FUEL_CAN "ItemFuelcan"
#define FUEL_CAN_EMPTY "ItemFuelcanEmpty"

_begin =
{
	[player, "refuel", 0, false, 5] call dayz_zombieSpeak;
	[player, 5, true, getPosATL player] call player_alertZombies;
};

_finish =
{
	["Working", 0, [20, 40, 15, 0]] call dayz_NutritionSystem;
	
	_jerry = { _x == JERRY_CAN_EMPTY } count magazines player;
	_fuel = { _x == FUEL_CAN_EMPTY } count magazines player;
	
	player removeMagazines JERRY_CAN_EMPTY;
	player removeMagazines FUEL_CAN_EMPTY;
	
	for "_i" from 1 to _jerry do
		{ player addMagazine JERRY_CAN };
	
	for "_i" from 1 to _fuel do
		{ player addMagazine FUEL_CAN };
};

["jerry_fill", _finish, _begin] call dz_fn_action_register;