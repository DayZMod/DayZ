class CfgPatches               
{      
	class dayz_buildings    
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_anim"};
	};
};
 
class CfgAddons
{
	class dayz_buildings
	{
		list[]=
		{
			"Days Buildings"
		};
	};
};

class CfgVehicleClasses {
 
	class dayz_buildings {
	displayName = $STR_BLD_name_ItemShantyHouse;//"DayZ Buildings"
	};
};
 
class CfgVehicles
{
	class WeaponHolderBase;
    class House;
	class DZ_buildables: House
	{
		scope = 2;
		displayName = $STR_BLD_name_DZ_buildables;//"Buildables"
		placement = "vertical";
	};
		
	class Metal_Ladder: House
    { 
		scope = 2;
		model = "z\addons\dayz_buildings\models\metal_ladder.p3d";
		displayName = $STR_BLD_name_Metal_Ladder;//"Metal Ladder"
		icon = "Ca\misc\data\icons\i_danger_CA.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		vehicleClass = "dayz_buildings";
		destrType = "DestructNo";
		placement = "vertical";
		ladders[]={{"ladderstart","ladderend"}};
    };
	class Stairs1: House
	{
            scope = 2;
			model = "z\addons\dayz_buildings\models\stairs.p3d";
            icon = "Ca\misc\data\icons\i_danger_CA.paa";
            displayName = $STR_BLD_name_Stairs1;//"Wooden Stair Platform"
            mapSize = 0.2;
            accuracy = 0.2;
            vehicleClass = "dayz_buildings";
			destrType="DestructNo";
			placement = "vertical";
    }; 
	class Stairs1_ghost: Stairs1
	{
			model = "z\addons\dayz_buildings\models\stairs_ghost.p3d";
            displayName = $STR_BLD_name_Stairs1_ghost;//"Wooden Stair (Ghost)"
    }; 
	
	class Land_A_tent;
	class WorkBench: Land_A_tent
	{
		vehicleClass="Survival";
		displayName = $STR_BLD_name_WorkBench;//"Workbench"
		model = "z\addons\dayz_buildings\models\workbench.p3d";
		transportMaxMagazines=3000;
		transportMaxWeapons=0;
		transportMaxBackpacks=0;
	};
	class WorkBench_Internal: Workbench
	{
		displayName = $STR_BLD_name_WorkBench_Internal;//"Workshop Workbench"
		destrType="DestructNo";
	};
	class WorkBench_Hidden: Land_A_tent
	{
		vehicleClass="Survival";
		transportMaxMagazines=0;
		transportMaxWeapons=0;
		transportMaxBackpacks=0;
		displayName = $STR_BLD_name_WorkBench_Hidden;//"Hidden Workbench"
		destrType="DestructNo";
	};
	class ItemStorage: Land_A_tent
	{
		vehicleClass="Survival";
		displayName = $STR_BLD_name_ItemStorage;//"Storage Box"
		model = "z\addons\dayz_buildings\models\item_storage.p3d";
		transportMaxMagazines=30;
		transportMaxWeapons=0;
		transportMaxBackpacks=2;
		destrType="DestructNo";
	};	
	class WeaponStorage: Land_A_tent
	{
		vehicleClass="Survival";
		displayName = $STR_BLD_name_WeaponStorage;//"Weapon Box"
		model = "z\addons\dayz_buildings\models\weapon_storage.p3d";
		transportMaxMagazines=12;
		transportMaxWeapons=5;
		transportMaxBackpacks=0;
		destrType="DestructNo";
	};
	class WeaponStorage_shanty: Land_A_tent
	{
		vehicleClass="Survival";
		displayName = $STR_BLD_name_WeaponStorage_shanty;//"Storage Box"
		model = "z\addons\dayz_buildings\models\weapon_storage_shanty.p3d";
		transportMaxMagazines=15;
		transportMaxWeapons=3;
		transportMaxBackpacks=1;
		destrType="DestructNo";
	};
	class Land_Fire;
	class Stove: Land_Fire
	{
		scope = 2;
		vehicleClass = "Survival";
		displayName = $STR_BLD_name_Stove;//"Makeshift Stove"
		model = "z\addons\dayz_buildings\models\stove.p3d";
		destrType="DestructNo";
	};
	
	//Fences
	class CardboardBox;
	#include "configs\woodenFence.hpp"
	#include "configs\woodenFenceDamaged.hpp"
	#include "configs\metalFence.hpp"
	
	//Gates
	class Land_Gate_IndVar2_5;
	#include "configs\woodenGate.hpp"
	#include "configs\metalGate.hpp"
		
};

class CfgWeapons 
{
	class ItemCore;
	#include "configs\ItemDIYBooks.hpp"
};
