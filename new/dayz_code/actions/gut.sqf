#include "\dayz\dayz_code\util\array.hpp"
#include "\dayz\dayz_code\util\request.hpp"

#define SOUND_EFFECT "gut"
#define SOUND_DISTANCE 10

dz_gut_knives = ["ItemKnife1", "ItemKnife2", "ItemKnife3", "ItemKnife4", "ItemKnife5", "ItemKnife", "ItemKnifeBlunt"];

_begin =
{
	[player, SOUND_EFFECT, 0, false, SOUND_DISTANCE] call dayz_zombieSpeak;
	[player, SOUND_DISTANCE, true, getPosATL player] call player_alertZombies;
};

_finish =
{
	["Working", 0, [20, 40, 15, 0]] call dayz_NutritionSystem;
	
	_knife = Array_First(weapons player, {_x in dz_gut_knives});
	if isNil "_knife" exitWith {};
	
	_sharpness = getNumber (configFile >> "CfgWeapons" >> _knife >> "sharpness");
	Request_Send("gut", Array_New2(_this, _sharpness), false);
	
	_wear = _knife call dz_fn_weaponWear;
	
	if (_wear != _knife) then
	{
		player removeWeapon _knife;
		Player_AddWeapon(_wear);
	};
};

["gut", _finish, _begin] call dz_fn_action_register;