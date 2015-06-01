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
class CfgMagazines {
	class CA_Magazine;	// External class reference
	
/*
	class ItemMetalSheet: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemMetalSheet;//"Corrugated Sheet"
		picture = "\z\addons\dayz_buildings\equip\item_sheetmetal.paa";
		model = "z\addons\dayz_buildings\models\sheet_metal.p3d";
		descriptionShort = $STR_BLD_desc_ItemMetalSheet;//"Metal Sheeting"
	};		
	class ItemConcreteBlock: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemConcreteBlock;//"Concrete Block"
		picture = "\z\addons\dayz_buildings\equip\concreteblock.paa";
		model = "z\addons\dayz_buildings\models\concreteblock.p3d";
		descriptionShort = $STR_BLD_desc_ItemConcreteBlock;//"Concrete Block"
	};	
	class ItemRSJ: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemRSJ;//"Steel Beam"
		picture = "\z\addons\dayz_buildings\equip\item_rsj.paa";
		model = "z\addons\dayz_buildings\models\rsj.p3d";
		descriptionShort = $STR_BLD_desc_ItemRSJ;//"Steel RSJ Support Beam"
	};	
	class ItemScrews: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemScrews;//"Box of screws for metal"
		picture = "\z\addons\dayz_buildings\equip\item_screws.paa";
		model = "z\addons\dayz_buildings\models\screws.p3d";
		descriptionShort = $STR_BLD_desc_ItemScrews;//"Box of screws"
	};	

	//Temp Item, Items not finished these are End Game Buildings
	class ItemBuildingBlueprint: CA_Magazine
	{
		scope = 1;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemBuildingBlueprint;//"Blueprint"
		picture = "\z\addons\dayz_buildings\equip\buildingplan1.paa";
		model = "z\addons\dayz_buildings\models\buildingplan1.p3d";
		descriptionShort = $STR_BLD_desc_ItemBuildingBlueprint;//""
	};
	class ItemWorkshop: ItemBuildingBlueprint
	{
		displayName = $STR_BLD_name_ItemWorkshop;//"Workshop"
		descriptionShort = $STR_BLD_desc_ItemWorkshop;//"Building Plans for a Basic Shanty House."
		scope = 2;
		
		class ItemActions {
			class Build {
				text = $STR_BLD_build_ItemWorkshop;//"WorkshopBase"
				script = "; ['ItemWorkshop','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[] = {"ItemEtool"};
				consume[] = {"ItemWorkshop"};
				create = "SurvivorWorkshop";
			};
		};
	};
	class ItemShantyHouse: ItemBuildingBlueprint
	{
		displayName = $STR_BLD_name_ItemShantyHouse;//"ShantyHouse"
		descriptionShort = $STR_BLD_desc_ItemShantyHouse;//"Building Plans for a Basic Shanty House."
		scope = 2;
		
		class ItemActions {
			class Build {
				text = $STR_BLD_build_ItemShantyHouse;//"ShantyHouseBase"
				script = "; ['ItemShantyHouse','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[] = {"ItemEtool"};
				consume[] = {"ItemShantyHouse"};
				create = "ShantyHouse";
			};
		};
	};
*/
};	

class CfgVehicleClasses {
 
	class dayz_buildings {
	displayName = $STR_BLD_name_ItemShantyHouse;//"DayZ Buildings"
	};
};
 
class CfgVehicles
{
	class WeaponHolderBase;
/*
	class WeaponHolder_ItemWorkBench: WeaponHolderBase
	{
		scope=2;
		displayName = $STR_BLD_name_WeaponHolder_ItemWorkBench;//"Workbench"
		model = "z\addons\dayz_buildings\models\workbench_flat.p3d";
		class eventHandlers
		{
			init="[(_this select 0),'cfgMagazines','ItemWorkBench'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};

	class WeaponHolder_ItemMetalSheet: WeaponHolderBase
	{
		scope=2;
		displayName = $STR_BLD_name_WeaponHolder_ItemMetalSheet;//"Metal Sheet"
		model = "z\addons\dayz_buildings\models\sheet_metal.p3d";
        destrType = "DestructNo";
		class eventHandlers
		{
			init="[(_this select 0),'cfgMagazines','ItemMetalSheet'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_ItemConcreteBlock: WeaponHolderBase
	{
		scope=2;
		displayName = $STR_BLD_name_WeaponHolder_ItemConcreteBlock;//"Concrete Blocks"
		model = "z\addons\dayz_buildings\models\concreteblock_wep.p3d";
        destrType = "DestructNo";
		class eventHandlers
		{
			init="[(_this select 0),'cfgMagazines','ItemConcreteBlock'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_ItemRSJ: WeaponHolderBase
	{
		scope=2;
		displayName = $STR_BLD_name_WeaponHolder_ItemRSJ;//"Steel Beam"
		model = "z\addons\dayz_buildings\models\rsj_wep.p3d";
        destrType = "DestructNo";
		class eventHandlers
		{
			init="[(_this select 0),'cfgMagazines','ItemRSJ'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
*/
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
	
	//Houses
	#include "configs\shantyHouse.hpp"
	#include "configs\survivorWorkshop.hpp"
	
	//Fences
	class CardboardBox;
	#include "configs\woodenFence.hpp"
	#include "configs\metalFence.hpp"
	
	//Gates
	class Land_Gate_IndVar2_5;
	#include "configs\woodenGate.hpp"
	#include "configs\metalGate.hpp"
		
};

class CfgWeapons 
{
	class ItemCore;
	class ItemDIY_wood: ItemCore {
		scope = 2;
		picture = "\z\addons\dayz_buildings\equip\icon_diy_wood.paa";
		model = "z\addons\dayz_buildings\models\diymanual_wood.p3d";
		icon = "Ca\misc\data\icons\i_danger_CA.paa";
		displayName = $STR_BLD_name_ItemDIY_wood;//"DIY Manual (Wood)"
		descriptionShort = $STR_BLD_desc_ItemDIY_wood;//"For wooden fences"
			
		class ItemActions {
			class Build {
				text = $STR_BLD_build_ItemDIY_wood;//"Wooden fence"
				script = "; ['ItemDIY_wood','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[] = {"ItemEtool"};
				consume[] = {"ItemLog", "ItemStone", "ItemStone"};
				ghost = "WoodenFence_ghost";
				create = "WoodenFence_1_foundation";
			};

		};
	};
	
	class ItemDIY_Gate: ItemCore {
		scope = 2;
		picture = "\z\addons\dayz_buildings\equip\icon_diy_wood.paa";
		model = "z\addons\dayz_buildings\models\diymanual_wood.p3d";
		icon = "Ca\misc\data\icons\i_danger_CA.paa";
		displayName = $STR_BLD_name_ItemDIY_woodGate;//"DIY Manual (Gate's)"
		descriptionShort = $STR_BLD_desc_ItemDIY_woodGate;//"For wooden Gates"
			
		class ItemActions {
			class Build {
				text = $STR_BLD_build_ItemDIY_woodGate;//"Wooden Gate"
				script = "; ['ItemDIY_Gate','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[] = {"ItemEtool"};
				consume[] = {"ItemLog"};
				ghost = "WoodenGate_ghost"; //Ghost model needs to be changed to WoodenGate4 so the player sees the finished fully upgrade model as the ghost
				create = "WoodenGate_foundation"; //Foundation model is using wooden fence foundation (needs to change)
			};

		};
	};
	
	//Left in place to stop problems with dbs
	class ItemDIY_metal: ItemCore {
		scope = 2;
		picture = "\z\addons\dayz_buildings\equip\icon_diy_metal.paa";
		model = "z\addons\dayz_buildings\models\diymanual_metal.p3d";
		icon = "Ca\misc\data\icons\i_danger_CA.paa";
		displayName = $STR_BLD_name_ItemDIY_metal;//"DIY Manual (Metal)"
		descriptionShort = $STR_BLD_desc_ItemDIY_metal;//"For Metal fences"
		/*
		class ItemActions {
			class Build {
				text = $STR_BLD_build_ItemDIY_metal;//"Metal fence"
				script = "; ['ItemDIY_metal','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[] = {"ItemEtool"};
				consume[] = {"ItemRSJ", "ItemStone", "ItemStone" };
				ghost = "MetalFence_ghost";
				create = "MetalFence_1_foundation";
			};
		};
		*/
	};
};
