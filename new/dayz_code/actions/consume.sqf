/*
	Player action for consuming items
	
	Single parameter:
		string		item classname
	
	Author:
		Foxy
*/

#include "\dayz\dayz_code\util\player.hpp"

dz_fn_player_consume =
{
	private ["_cfg", "_nutrition", "_bloodRegen", "_infectionChance", "_sound", "_output", "_hungerCount", "_thirstCount", "_soundDistance"];
	
	_cfg = (configFile >> "CfgMagazines" >> _this);

	//class doesn't exist
	if !isClass _cfg exitWith
	{
		diag_log format ["ERROR: Invalid magazine classname given to player_consume: %1", _this];
	};

	//class isn't a consumable
	if !isArray (_cfg >> "nutrition") exitWith
	{
		diag_log format ["ERROR: Non-consumable item classname given to player_consume: %1", _this];
	};

	//player is on a ladder
	if Player_IsOnLadder() exitWith
	{
		(localize "str_player_21") call dz_fn_rollmsg;
	};

	//player doesn't have the consumable item
	if !(_this in magazines player) exitWith {};

	//if player is not in a vehicle play animation
	if !Player_IsInVehicle() then
	{
		player playActionNow "PutDown";
	};

	//Remove consumed item
	player removeMagazine _this;

	//Get values from config
	_nutrition = getArray (_cfg >> "Nutrition");
	_bloodRegen = getNumber (_cfg >> "bloodRegen");
	_infectionChance = getNumber (_cfg >> "infectionChance");
	_sound = getText (_cfg >> "consumeSound");
	_output = getText (_cfg >> "consumeOutput");
	
	_hungerCount = _nutrition select 1;
	_thirstCount = _nutrition select 2;

	//Apply nutrition and blood regen
	if dayz_nutritionValuesSystem then
	{
		if (_hungerCount > 0) then { dayz_lastMeal = time; };
		if (_thirstCount > 0) then { dayz_lastDrink = time; };
		
		["FoodDrink", _bloodRegen, _nutrition] call dayz_NutritionSystem;
		r_player_foodstack = r_player_foodstack + 1;
	}
	else
	{
		if (_hungerCount > 0) then { dayz_hunger = 0; dayz_lastMeal = time; };
		if (_thirstCount > 0) then { dayz_thirst = 0; dayz_lastDrink = time; };
	};

	//Apply or cure infection base on infectionChance
	if (_infectionChance != 0 && { abs _infectionChance > random 1 } ) then
	{
		if (_infectionChance > 0) then
		{
			r_player_infected = true;
			player setVariable["USEC_infected", true, true];
		}
		else
		{
			r_player_infected = false;
			player setVariable["USEC_infected", false, true];
		};
	};

	//Publish messing
	player setVariable ["messing", [dayz_hunger, dayz_thirst, dayz_nutrition], false]; //No need to be sent to everyplayer
	PVDZ_serverStoreVar = [player, "messing", [dayz_hunger, dayz_thirst, dayz_nutrition]]; //update server side only
	publicVariableServer "PVDZ_serverStoreVar";

	//Play sound and alert zombies
	if (_sound != "") then
	{
		private ["_soundDistance"];
		_soundDistance = getNumber (_cfg >> "consumeSoundDistance");
		
		[player, _sound, 0, false, _soundDistance] call dayz_zombieSpeak;
		[player, _soundDistance, true, getPosATL player] call player_alertZombies;
	};
	
	if (_output != "") then
	{
		if (getNumber (_cfg >> "consumeDrop") == 0) then
		{
			Player_AddMagazine(_output);
		}
		else
		{
			Player_DropMagazine(_output);
		};
	};
};