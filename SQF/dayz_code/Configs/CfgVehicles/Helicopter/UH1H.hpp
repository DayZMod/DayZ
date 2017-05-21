#include "\z\addons\dayz_code\Configs\CfgVehicles\CommonActions.hpp"

class UH1H_base: Helicopter 
{
	class UserActions; //Inherit external
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class ViewOptics: ViewOptics {};
			class Turrets: Turrets {};
		};
		class LeftDoorGun: MainTurret
		{
			class Turrets: Turrets {};
		};
	};
};

class UH1H_DZ: UH1H_base
{
	scope = 2;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 4;
	
	class Turrets : Turrets 
	{
		class MainTurret : MainTurret 
		{
			magazines[] = {"100Rnd_762x51_M240"};
		};
		class LeftDoorGun : LeftDoorGun
		{
			magazines[] = {"100Rnd_762x51_M240"};
		};
	};
	class UserActions: UserActions
	{
		class RearmVehicle
		{
			displayName = "Add Ammo to M240";
			displayNameDefault = "Add Ammo to M240";
			ACTION_REARM;
			statement = "[this,(vehicle player) weaponsTurret ((assignedVehicleRole player) select 1) select 0,((assignedVehicleRole player) select 1)] execVM ""\z\addons\dayz_code\actions\ammo.sqf"";";\
		};
	};
};

class UH1H_2_DZ : UH1H_DZ
{
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] =
	{
		"ca\air_E\UH1H\data\UH1D_TKA_CO.paa",
		"ca\air_E\UH1H\data\UH1D_in_TKA_CO.paa",
		"ca\air_E\UH1H\data\default_TKA_co.paa"
	};
};