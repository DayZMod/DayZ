/*
Spawns the specified loot definition at the specified location.

Parameters:
	array		Loot definition
	vector		Spawn position relative to world

Return value:
	object		Spawned vehicle.

Author:
	Foxy
*/

#include "Loot.hpp"

#define MAX_WEAPON_MAGAZINES 2

#ifdef SERVER
	#define INCREMENT_WEAPON_HOLDERS()
#else
	#define INCREMENT_WEAPON_HOLDERS() dayz_currentWeaponHolders = dayz_currentWeaponHolders + 1
#endif

private
[
	"_lootInfo",
	"_vehicle",
	"_spawnCount",
	"_magazines"
];

_lootInfo = _this select 0;
_vehicle = objNull;

//Switch on type of loot
switch (_lootInfo select 0) do
{
	//Spawn a single weapon with [0,MAX_WEAPON_MAGAZINES] magazines.
	case Loot_WEAPON:
	{
		_vehicle = createVehicle ["WeaponHolder", _this select 1, [], 0, "CAN_COLLIDE"];
		_vehicle addWeaponCargoGlobal [_lootInfo select 1, 1];
		_vehicle setPosATL (_this select 1);
		INCREMENT_WEAPON_HOLDERS();
		
		_magazines = getArray (configFile >> "CfgWeapons" >> _lootInfo select 1 >> "magazines");
		
		if (count _magazines > 0 && {getNumber (configFile >> "CfgWeapons" >> _lootInfo select 1 >> "isMelee") != 1}) then
		{
			_vehicle addMagazineCargoGlobal [_magazines select 0, floor random (MAX_WEAPON_MAGAZINES + 1)];
		};
	};
	
	//Spawn a single magazine
	case Loot_MAGAZINE:
	{
		_vehicle = createVehicle ["WeaponHolder", _this select 1, [], 0, "CAN_COLLIDE"];
		_vehicle addMagazineCargoGlobal [_lootInfo select 1, 1];
		_vehicle setPosATL (_this select 1);
		INCREMENT_WEAPON_HOLDERS();
	};
	
	case Loot_BACKPACK:
	{
		_vehicle = createVehicle [_lootInfo select 1, _this select 1, [], 0, "CAN_COLLIDE"];
		_vehicle setDir random 360;
		_vehicle setPosATL (_this select 1);
	};
	
	//Spawn multiple items from a given group. All but weapons and magazines are ignored.
	case Loot_PILE:
	{
		_spawnCount = (_lootInfo select 2) + floor random ((_lootInfo select 3) - (_lootInfo select 2) + 1);
		_vehicle = createVehicle ["WeaponHolder", _this select 1, [], 0, "CAN_COLLIDE"];
		Loot_InsertCargo(_vehicle, _lootInfo select 1, _spawnCount);
		_vehicle setPosATL (_this select 1);
		INCREMENT_WEAPON_HOLDERS();
	};
	
	//Spawn a vehicle
	case Loot_VEHICLE:
	{
		_vehicle = createVehicle [_lootInfo select 1, _this select 1, [], 0, "CAN_COLLIDE"];
		_vehicle setDir random 360;
		_vehicle setPosATL (_this select 1);
	};
	
	//Spawn a container and populate it with loot from a given group
	case Loot_CONTAINER:
	{
		_vehicle = createVehicle [_lootInfo select 1, _this select 1, [], 0, "CAN_COLLIDE"];
		INCREMENT_WEAPON_HOLDERS();
		
		//Number of items to spawn
		_spawnCount = (_lootInfo select 3) + floor random ((_lootInfo select 4) - (_lootInfo select 3) + 1);
		
		Loot_InsertCargo(_vehicle, _lootInfo select 2, _spawnCount);
		
		_vehicle setDir random 360;
		_vehicle setPosATL (_this select 1);
	};
	
	//Call a function which is assumed to return an object reference.
	case Loot_CUSTOM:
	{
		_vehicle = call (_lootInfo select 1);
		if ((typeName _vehicle) != "OBJECT") exitWith {};
		if (!isNull _vehicle) then { _vehicle setPosATL (_this select 1); };
	};
};

_vehicle