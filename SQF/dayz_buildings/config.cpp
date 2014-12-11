class CfgPatches               
{      
        class dayz_buildings    
        {
                units[] = {""};
                weapons[] = {};
                requiredVersion = 0.1;
                requiredAddons[] = {};
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
	
	class ItemWorkBench : CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemWorkBench;//"Work Bench (Packed)"
		model = "z\addons\dayz_buildings\models\workbench_flat.p3d";
		picture = "\z\addons\dayz_buildings\equip\item_workbench.paa"; // add to PBO
		descriptionShort = $STR_BLD_desc_ItemWorkBench;//"A Folded Workbench, required for House Building and Some Crafting"
		vehicle = "WorkBench";
		sfx = "tentunpack";
		class ItemActions {
			class Build {
				text = $STR_BLD_build_ItemWorkBench;//"place WorkBench"
				script = "; ['ItemWorkBench','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[] = {};
				consume[] = {"ItemWorkBench"};
				create = "WorkBench";
			};
		};
	};	
	
	class ItemLog: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemLog;//"Wooden Log"
		picture = "\z\addons\dayz_buildings\equip\item_log.paa";
		model = "z\addons\dayz_buildings\models\logs.p3d";
		descriptionShort = $STR_BLD_desc_ItemLog;//"Rough Wooden Log"
		class ItemActions
		{
			class Crafting
			{
				text = $STR_BLD_craft_ItemLog;//"Wooden Plank"
				script = "spawn player_craftItem;";
				neednearby[] = {}; 
				requiretools[] = {"ItemHatchet"};
				output[] = {{"ItemPlank","CfgMagazines",2}};
				input[] = {{"ItemLog","CfgMagazines",1}};
			};
		};
	};	

	class ItemPlank: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemPlank;//"Sawn Planks"
		picture = "\z\addons\dayz_buildings\equip\item_plank.paa";
		model = "z\addons\dayz_buildings\models\planks.p3d";
		descriptionShort = $STR_BLD_desc_ItemPlank;//"Saw Planks"
		class ItemActions
		{
			class Crafting
			{
				text = $STR_BLD_craft_ItemPlank;//"Wood Piles"
				script = "spawn player_craftItem;";
				neednearby[] = {}; 
				requiretools[] = {"ItemHatchet"};
				output[] = {{"PartWoodPile","CfgMagazines",2}};
				input[] = {{"ItemPlank","CfgMagazines",1}};
			};
		};
	};

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

	class ItemStone: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemStone;//"Rough Stone"
		picture = "\z\addons\dayz_buildings\equip\rocks.paa";
		model = "z\addons\dayz_buildings\models\rocks.p3d";
		descriptionShort = $STR_BLD_desc_ItemStone;//"Rough Stone"
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
	class ItemPadlock: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemPadlock;//"Padlock"
		picture = "\z\addons\dayz_buildings\equip\padlock.paa";
		model = "z\addons\dayz_buildings\models\padlock.p3d";
		descriptionShort = $STR_BLD_desc_ItemPadlock;//"Padlock - Used for securing Workshop's & Houses."
	};	
	
	//Temp Item
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
};	

class CfgVehicleClasses {
 
	class dayz_buildings {
	displayName = $STR_BLD_name_ItemShantyHouse;//"DayZ Buildings"
	};
};
 
class CfgVehicles
{
	class WeaponHolderBase;
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

    class House;
	class DZ_buildables: House
	{
		scope = 2;
		displayName = $STR_BLD_name_DZ_buildables;//"Buildables"
		placement = "vertical";
	};
		
	class SurvivorWorkshop_Base: DZ_buildables
    {
		scope = 2;
		model = "z\addons\dayz_buildings\models\cabin1_stage1.p3d";
		icon = "Ca\misc\data\icons\i_danger_CA.paa";
		displayName = $STR_BLD_name_SurvivorWorkshop_Base;//"Workshop Foundation"
		mapSize = 0.7;
		accuracy = 0.2;
		vehicleClass = "dayz_buildings";
		destrType = "DestructNo";
		placement = "vertical";
    };   
	class SurvivorWorkshopBase_ghost: SurvivorWorkshop_Base
    {
        model = "z\addons\dayz_buildings\models\cabin1_stage1_ghost.p3d";
		displayName = $STR_BLD_name_SurvivorWorkshopBase_ghost;//"Workshop Framework (Ghost)"
    };
	class SurvivorWorkshop: SurvivorWorkshop_Base
    {
		scope = 2;
		model = "z\addons\dayz_buildings\models\cabin1_stage1.p3d";
		icon = "Ca\misc\data\icons\i_danger_CA.paa";
		displayName = $STR_BLD_name_SurvivorWorkshop;//"Workshop Foundation"
		
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "SurvivorWorkshopStage2";
		};
    };  
    class SurvivorWorkshopStage2: SurvivorWorkshop_Base
    {
        model = "z\addons\dayz_buildings\models\cabin1_stage2.p3d";
		displayName = $STR_BLD_name_SurvivorWorkshopStage2;//"Workshop Framework"
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			randomcreate[] = {"SurvivorWorkshopAStage3","SurvivorWorkshopBStage3","SurvivorWorkshopCStage3"};
			create = "";
		};
    };

    class SurvivorWorkshopAStage3: SurvivorWorkshop_Base
    {
            model = "z\addons\dayz_buildings\models\cabin1_stage3.p3d";
			displayName = $STR_BLD_name_SurvivorWorkshopAStage3;//"Workshop Walls"
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "SurvivorWorkshopAStage4";
		};
    };
    class SurvivorWorkshopBStage3: SurvivorWorkshopAStage3
    {
            model = "z\addons\dayz_buildings\models\cabin2_stage3.p3d";
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "SurvivorWorkshopBStage4";
		};
    };
    class SurvivorWorkshopCStage3: SurvivorWorkshopAStage3
    {
            model = "z\addons\dayz_buildings\models\cabin3_stage3.p3d";
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "SurvivorWorkshopCStage4";
		};
    };
	
	class SurvivorWorkshopAStage4: SurvivorWorkshop_Base
    {
            model = "z\addons\dayz_buildings\models\cabin1_stage4.p3d";
			displayName = $STR_BLD_name_SurvivorWorkshopAStage4;//"Workshop Roof"
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "SurvivorWorkshopAStage5";
		};
    };
	class SurvivorWorkshopBStage4: SurvivorWorkshopAStage4
    {
            model = "z\addons\dayz_buildings\models\cabin2_stage4.p3d";
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "SurvivorWorkshopBStage5";
		};
    };
	class SurvivorWorkshopCStage4: SurvivorWorkshopAStage4
    {
            model = "z\addons\dayz_buildings\models\cabin3_stage4.p3d";
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "SurvivorWorkshopCStage5";
		};
    };
	
    class SurvivorWorkshopAStage5: SurvivorWorkshop_Base
    {
		model = "z\addons\dayz_buildings\models\cabin1_stage5.p3d";
		displayName = $STR_BLD_name_SurvivorWorkshopAStage5;//"Workshop Complete"

		class AnimationSources
		{
			class door        
			{
				source = "user";
				animPeriod = 2;  
				initPhase=0;
			};             
		};
		class UserActions
		{
			class open_the_door
			{
				displayName = $STR_BLD_name_SurvivorWorkshopAStage5;//"Open door"
				onlyforplayer = true;
				position="door_button";
				radius=2;
				condition="this animationPhase ""door"" < 0.5";
				statement="this animate [""door"", 1]";
			};
		   
			class close_the_door : open_the_door
			{
				displayName = $STR_BLD_name_close_the_door;//"Close door"
				condition="this animationPhase ""door"" >= 0.5";
				statement="this animate [""door"", 0]";
			};
		};	
    };

	class SurvivorWorkshopBStage5: SurvivorWorkshopAStage5
	{
	        model = "z\addons\dayz_buildings\models\cabin2_stage5.p3d";
	};
	class SurvivorWorkshopCStage5: SurvivorWorkshopAStage5
	{
	        model = "z\addons\dayz_buildings\models\cabin3_stage5.p3d";
	};
	
	// SHANTY HOUSES
	
    class ShantyHouse_Base: DZ_buildables
    {           
		model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseBase.p3d";
		displayName = $STR_BLD_name_ShantyHouse_Base;//"Shanty House Base"
		scope = 1;
		icon = "Ca\misc\data\icons\i_danger_CA.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		vehicleClass = "dayz_buildings";
		destrType = "DestructNo";
		placement = "vertical";
    };
	
	class ShantyHouse: ShantyHouse_Base
    {
		model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseBase.p3d";
		displayName = $STR_BLD_name_ShantyHouse;//"Shanty House Base"
		scope = 2;
			
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "ShantyHouseStage2";
		};
    };
	
    class ShantyHouse_ghost: ShantyHouse_Base
    {
            model = "z\addons\dayz_buildings\models\ShantyHouseBase_ghost.p3d";
			displayName = $STR_BLD_name_ShantyHouse_ghost;//"Shanty House (Ghost)"
    };
    class ShantyHouseStage2: ShantyHouse_Base
    {
            model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage2.p3d";
			displayName = $STR_BLD_name_ShantyHouseStage2;//"Shanty House Stage 2"
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "ShantyHouseStage3";
		};
    };
	
    class ShantyHouseStage3: ShantyHouse_Base
    {
            model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage3.p3d";
			displayName = $STR_BLD_name_ShantyHouseStage3;//"Shanty House Stage 3"
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "ShantyHouseStage4";
		};
    };
	
    class ShantyHouseStage4: ShantyHouse_Base
    {
            model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage4.p3d";
			displayName = $STR_BLD_name_ShantyHouseStage4;//"Shanty House Stage 4"
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "ShantyHouseStage5";
		};
    };
	
    class ShantyHouseStage5: ShantyHouse_Base
    {
            model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage5.p3d";
			displayName = $STR_BLD_name_ShantyHouseStage5;//"Shanty House Stage 5"
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "ShantyHouseStage6";
		};
    };
	
    class ShantyHouseStage6: ShantyHouse_Base
    {
            model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage6.p3d";
			displayName = $STR_BLD_name_ShantyHouseStage6;//"Shanty House Stage 6"
			
		class Upgrade {
			requiredTools[] = {"ItemEtool"};
			requiredParts[] = {};
			create = "ShantyHouseStage7";
		};
    };
	
    class ShantyHouseStage7: ShantyHouse_Base
    {
            model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage7.p3d";
			displayName = $STR_BLD_name_ShantyHouseStage7;//"Shanty House Stage 7"
			ladders[]={{"ladderstart","ladderend"}};
            class AnimationSources
            {
                    class door
                    {
                            animPeriod = 2;
                            source = "user";
							initPhase = 0;
                    };
					
                    class door2
                    {
                            animPeriod = 2;
                            source = "user";
							initPhase = 0;
                    };
            };
			
			class UserActions
            { 
					class OpenDoor
                    {
                            displayName = $STR_BLD_name_ShantyHouseStage7;//"Open door"
                            onlyforplayer = 1;
                            position="door_axis";
                            radius=2;
                            condition="this animationPhase ""door"" < 0.5";
                            statement="this animate [""door"", 1]";
                    };
                   
                    class CloseDoor
                    {
                            displayName = $STR_BLD_name_ShantyHouseStage7;//"Close door"
							radius=2;
                            position="door_axis";
                            condition="this animationPhase ""door"" >= 0.5";
                            statement="this animate [""door"", 0]";
                            onlyforplayer = 1;
                    };
			};
			
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
	
		class CardboardBox;
		/*
	class WoodenFenceBox1 : CardboardBox {
		scope = 2;
		displayName = $STR_BLD_name_WoodenFenceBox1;//"Contains WoodenFence"
		model = "\dayz_equip\models\cardboard_box_med.p3d";
		
		class transportmagazines {
			class _xx_equip_nails {
				magazine = "equip_nails";
				count = 1;
			};
			class _xx_ItemLog {
				magazine = "ItemLog";
				count = 1;
			};
			class _xx_ItemPlank {
				magazine = "ItemPlank";
				count = 7;
			};
			class _xx_ItemStone {
				magazine = "ItemStone";
				count = 1;
			};
		};
	};
	
	class WoodenFenceBox2 : CardboardBox {
		scope = 2;
		displayName = $STR_BLD_name_WoodenFenceBox2;//"Contains WoodenFence"
		model = "\dayz_equip\models\cardboard_box_med.p3d";
		
		class transportmagazines {
			class _xx_equip_nails {
				magazine = "equip_nails";
				count = 2;
			};
			class _xx_ItemLog {
				magazine = "ItemLog";
				count = 1;
			};
			class _xx_ItemPlank {
				magazine = "ItemPlank";
				count = 10;
			};
			class _xx_ItemStone {
				magazine = "ItemStone";
				count = 1;
			};
		};
	};
	class WoodenFenceBox3 : CardboardBox {
		scope = 2;
		displayName = $STR_BLD_name_WoodenFenceBox3;//"Contains WoodenFence"
		model = "\dayz_equip\models\cardboard_box_med.p3d";
		
		class transportmagazines {
			class _xx_equip_nails {
				magazine = "equip_nails";
				count = 3;
			};
			class _xx_ItemLog {
				magazine = "ItemLog";
				count = 1;
			};
			class _xx_ItemPlank {
				magazine = "ItemPlank";
				count = 13;
			};
			class _xx_ItemStone {
				magazine = "ItemStone";
				count = 1;
			};
		};
	};
	class WoodenFenceBox4 : CardboardBox {
		scope = 2;
		displayName = $STR_BLD_name_WoodenFenceBox4;//"Contains WoodenFence"
		model = "\dayz_equip\models\cardboard_box_med.p3d";
		
		class transportmagazines {
			class _xx_equip_nails {
				magazine = "equip_nails";
				count = 4;
			};
			class _xx_ItemLog {
				magazine = "ItemLog";
				count = 4;
			};
			class _xx_ItemPlank {
				magazine = "ItemPlank";
				count = 13;
			};
			class _xx_ItemStone {
				magazine = "ItemStone";
				count = 2;
			};
		};
	};
	class WoodenFenceBox5 : CardboardBox {
		scope = 2;
		displayName = $STR_BLD_name_WoodenFenceBox5;//"Contains WoodenFence Level 5"
		model = "\dayz_equip\models\cardboard_box_med.p3d";
		
		class transportmagazines {
			class _xx_equip_nails {
				magazine = "equip_nails";
				count = 5;
			};
			class _xx_ItemLog {
				magazine = "ItemLog";
				count = 4;
			};
			class _xx_ItemPlank {
				magazine = "ItemPlank";
				count = 16;
			};
			class _xx_ItemStone {
				magazine = "ItemStone";
				count = 3;
			};
		};
	};
	class WoodenFenceBox6 : CardboardBox {
		scope = 2;
		displayName = $STR_BLD_name_WoodenFenceBox6;//"Contains WoodenFence Level 5"
		model = "\dayz_equip\models\cardboard_box_med.p3d";
		
		class transportmagazines {
			class _xx_equip_nails {
				magazine = "equip_nails";
				count = 6;
			};
			class _xx_ItemLog {
				magazine = "ItemLog";
				count = 4;
			};
			class _xx_ItemPlank {
				magazine = "ItemPlank";
				count = 19;
			};
			class _xx_ItemStone {
				magazine = "ItemStone";
				count = 4;
			};
		};
	};
	class WoodenFenceBox7 : CardboardBox {
		scope = 2;
		displayName = $STR_BLD_name_WoodenFenceBox7;//"Contains WoodenFence Level 5"
		model = "\dayz_equip\models\cardboard_box_med.p3d";
		
		class transportmagazines {
			class _xx_equip_nails {
				magazine = "equip_nails";
				count = 7;
			};
			class _xx_ItemLog {
				magazine = "ItemLog";
				count = 4;
			};
			class _xx_ItemPlank {
				magazine = "ItemPlank";
				count = 22;
			};
			class _xx_ItemStone {
				magazine = "ItemStone";
				count = 5;
			};
		};
	};*/
	
	//////Base buildings items
	class WoodenFence_base: DZ_buildables
	{
        scope = 1;
        canbevertical = 1;
		class Upgrade {
			requiredParts[] = {"ItemLog", "ItemStone", "ItemStone"}; // copy of ItemDIY_wood upgrade section
			require[] = {"ItemEtool"};
		};
    }; 	
	class WoodenFence_ghost: WoodenFence_base
	{
		scope = 2;
		model = "z\addons\dayz_buildings\models\fence_ghost.p3d";
        displayName = $STR_BLD_name_WoodenFence_ghost;//"Wooden Fence (Ghost)"
    }; 
	class WoodenFence_1_foundation: WoodenFence_base  // <-- ItemDIY_wood
	{
		scope = 2;
		model = "z\addons\dayz_buildings\models\fence1_ground.p3d";
		displayName = $STR_BLD_name_WoodenFence_1_foundation;//"Wooden Fence Frame"
		class Upgrade { //to next stage
			requiredTools[] = {"ItemEtool","ItemToolbox"}; 
			requiredParts[] = {"ItemLog"};
			create = "WoodenFence_1_frame";
		};
        class Disassembly {
            requiredTools[] = {"ItemEtool"};
        };
    }; 
	class WoodenFence_1_frame: WoodenFence_1_foundation
	{
		scope = 2;
		model = "z\addons\dayz_buildings\models\fence1_frame.p3d";
		displayName = $STR_BLD_name_WoodenFence_1_frame;//"Wooden Fence 1st Panel"
		class Upgrade {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {"ItemPlank","equip_nails"};
			create = "WoodenFence_quaterpanel";
		};
		class Disassembly {
			requiredTools[] = {"ItemToolbox"};
		};		
    }; 
	class WoodenFence_quaterpanel: WoodenFence_1_frame
	{
		scope = 2;
		model = "z\addons\dayz_buildings\models\fence1_stage1.p3d";
		displayName = $STR_BLD_name_WoodenFence_quaterpanel;//"Wooden Fence 2nd Panel"
		class Upgrade {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {"ItemPlank","ItemPlank"};
			create = "WoodenFence_halfpanel";
		};
 		class Disassembly {
			requiredTools[] = {"ItemToolbox"};
		};		
   }; 
	class WoodenFence_halfpanel: WoodenFence_quaterpanel
	{
		scope = 2;
		model = "z\addons\dayz_buildings\models\fence1_stage2.p3d";
		displayName = $STR_BLD_name_WoodenFence_halfpanel;//"Wooden Fence 3rd Panel"
		class Upgrade {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {"ItemPlank","ItemPlank"};
			create = "WoodenFence_thirdpanel";
		};
 		class Disassembly {
			requiredTools[] = {"ItemToolbox"};
		};		
   }; 
	class WoodenFence_thirdpanel: WoodenFence_halfpanel
	{
		scope = 2;
		model = "z\addons\dayz_buildings\models\fence1_stage3.p3d";
		displayName = $STR_BLD_name_WoodenFence_thirdpanel;//"Wooden Fence 4th Panel"
		class Upgrade {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {"ItemPlank","ItemPlank"};
			create = "WoodenFence_1";
		};
		class Disassembly {
			requiredTools[] = {"ItemToolbox"};
		};		
    }; 
	class WoodenFence_1: WoodenFence_thirdpanel
	{
		scope = 2;
		model = "z\addons\dayz_buildings\models\fence1.p3d";
		displayName = $STR_BLD_name_WoodenFence_1;//"Wooden Fence Level 1"
		class Upgrade {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {"equip_nails","ItemPlank","ItemPlank","ItemPlank"};
			create = "WoodenFence_2";
		};
		class Disassembly {
			requiredTools[] = {"ItemToolbox"};
		};/*
		class Maintenance {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {};
			active = "true";
		};*/
    }; 	
	class WoodenFence_2: WoodenFence_1
	{
	        scope = 2;
			model = "z\addons\dayz_buildings\models\fence2.p3d";
            displayName = $STR_BLD_name_WoodenFence_2;//"Wooden Fence Level 2"
		class Upgrade {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {"equip_nails","ItemPlank","ItemPlank","ItemPlank"};
			create = "WoodenFence_3";
		};
		class Disassembly {
			requiredTools[] = {"ItemToolbox"};
		};/*
		class Maintenance {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {};
			active = "true";
		};*/
    }; 
	class WoodenFence_3: WoodenFence_2
	{
            scope = 2;
			model = "z\addons\dayz_buildings\models\fence3.p3d";
            displayName = $STR_BLD_name_WoodenFence_3;//"Wooden Fence Level 3"
		class Upgrade {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {"equip_nails","ItemLog","ItemLog","ItemLog"};
			create = "WoodenFence_4";
		};
		class Disassembly {
			requiredTools[] = {"ItemToolbox"};
		};/*
		class Maintenance {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {};
			active = "true";
		};*/
    }; 
	class WoodenFence_4: WoodenFence_3
	{
            scope = 2;
			model = "z\addons\dayz_buildings\models\fence4.p3d";
            displayName = $STR_BLD_name_WoodenFence_4;//"Wooden Fence Level 4"
		class Upgrade {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {"equip_nails","ItemPlank","ItemPlank","ItemPlank"};
			create = "WoodenFence_5";
		};
		class Disassembly {
			requiredTools[] = {"ItemToolbox"};
		};/*
		class Maintenance {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {};
		};*/
    }; 
	class WoodenFence_5: WoodenFence_4
	{
            scope = 2;
			model = "z\addons\dayz_buildings\models\fence5.p3d";
            displayName = $STR_BLD_name_WoodenFence_5;//"Wooden Fence Level 5"
		class Upgrade {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {"equip_nails","ItemPlank","ItemPlank","ItemPlank"};
			create = "WoodenFence_6";
		};
		class Disassembly {
			requiredTools[] = {"ItemToolbox"};
		};/*
		class Maintenance {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {};
			active = "true";
		};*/
    }; 
	class WoodenFence_6: WoodenFence_5
	{
			scope = 2;
			model = "z\addons\dayz_buildings\models\fence6.p3d";
            displayName = $STR_BLD_name_WoodenFence_6;//"Wooden Fence Level 6"
		class Upgrade {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {"equip_nails","ItemPlank","ItemPlank","ItemPlank"};
			create = "WoodenFence_7";
		};
		class Disassembly {
			requiredTools[] = {"ItemToolbox"};
		};/*
		class Maintenance {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {};
			active = "true";
		};*/
    }; 
	class WoodenFence_7: WoodenFence_6 
	{
			scope = 2;
			model = "z\addons\dayz_buildings\models\fence7.p3d";
            displayName = $STR_BLD_name_WoodenFence_7;//"Wooden Fence Level 7"
			ladders[]={{"ladderstart","ladderend"}};
		class Disassembly {
			requiredTools[] = {"ItemToolbox"};
		};
        class Upgrade {
        	delete create;
        };
		/*
		class Maintenance {
			requiredTools[] = {"ItemToolbox"};
			requiredParts[] = {};
			active = "true";
		};*/
    }; 
	

/*
	//METAL FENCE

    class MetalFenceBox1 : CardboardBox {
        scope = 2;
        displayName = $STR_BLD_name_MetalFenceBox1;//"Contains kit for MetalFence #1"
        model = "\dayz_equip\models\cardboard_box_med.p3d";
        
        class transportmagazines {
        	// "ItemRSJ","ItemRSJ","ItemLog", "ItemStone", "ItemStone","equip_metal_sheet_rusted","ItemMetalSheet",
        	// "ItemScrews","equip_metal_sheet_rusted","ItemMetalSheet","ItemScrews","ItemScrews","equip_metal_sheet_rusted","ItemMetalSheet"
            class _1 {
                magazine = "ItemScrews";
                count = 3; //+2
            };
            class _2 {
                magazine = "ItemLog";
                count = 2;
            };
            class _3 {
                magazine = "equip_metal_sheet_rusted";
                count = 3; //+1
            };
            class _4 {
                magazine = "ItemRSJ";
                count = 2;
            };
            class _5 {
                magazine = "ItemStone";
                count = 2; //+
            };
            class _6 {
                magazine = "ItemMetalSheet";
                count = 3; //+
            };
        };
    };

     class MetalFenceBox2 : CardboardBox {
        scope = 2;
        displayName = $STR_BLD_name_MetalFenceBox2;//"Contains kit for MetalFence #2"
        model = "\dayz_equip\models\cardboard_box_med.p3d";
        
        class transportmagazines {
            class _1 {
                magazine = "ItemScrews";
                count = 5;
            };
            class _2 {
                magazine = "ItemLog";
                count = 2;
            };
            class _3 {
                magazine = "equip_metal_sheet_rusted";
                count = 4;
            };
            class _4 {
                magazine = "ItemRSJ";
                count = 4;
            };
             class _5 {
                magazine = "ItemStone";
                count = 2; //+
            };
            class _6 {
                magazine = "ItemMetalSheet";
                count = 3; //+
            };
       };
    };

       class MetalFenceBox3 : CardboardBox {
        scope = 2;
        displayName = $STR_BLD_name_MetalFenceBox3;//"Contains kit for MetalFence #3"
        model = "\dayz_equip\models\cardboard_box_med.p3d";
        
        class transportmagazines {
            class _1 {
                magazine = "ItemScrews";
                count = 5;
            };
            class _3 {
                magazine = "equip_metal_sheet_rusted";
                count = 4;
            };
            class _4 {
                magazine = "ItemRSJ";
                count = 6;
            };
            class _5 {
                magazine = "ItemStone";
                count = 2; //+
            };
            class _6 {
                magazine = "ItemMetalSheet";
                count = 3; //+
            };
        };
    };


       class MetalFenceBox4 : CardboardBox {
        scope = 2;
        displayName = $STR_BLD_name_MetalFenceBox4;//"Contains kit for MetalFence #4"
        model = "\dayz_equip\models\cardboard_box_med.p3d";
        
        class transportmagazines {
            class _1 {
                magazine = "ItemScrews";
                count = 5;
            };
            class _3 {
                magazine = "equip_metal_sheet_rusted";
                count = 8;
            };
            class _4 {
                magazine = "ItemRSJ";
                count = 6;
            };
            class _5 {
                magazine = "ItemStone";
                count = 2; //+
            };
            class _6 {
                magazine = "ItemMetalSheet";
                count = 3; //+
            };
        };
    };

     class MetalFenceBox5 : CardboardBox {
        scope = 2;
        displayName = $STR_BLD_name_MetalFenceBox5;//"Contains kit for MetalFence #5"
        model = "\dayz_equip\models\cardboard_box_med.p3d";
        
        class transportmagazines {
            class _1 {
                magazine = "ItemScrews";
                count = 6;
            };
            class _3 {
                magazine = "equip_metal_sheet_rusted";
                count = 8;
            };
            class _4 {
                magazine = "ItemRSJ";
                count = 8;
             class _5 {
                magazine = "ItemStone";
                count = 2; //+
            };
            class _6 {
                magazine = "ItemMetalSheet";
                count = 3; //+
            };
           };
        };
    };

     class MetalFenceBox6 : CardboardBox {
        scope = 2;
        displayName = $STR_BLD_name_MetalFenceBox6;//"Contains kit for MetalFence #6"
        model = "\dayz_equip\models\cardboard_box_med.p3d";
        
        class transportmagazines {
            class _1 {
                magazine = "ItemScrews";
                count = 7;
            };
            class _3 {
                magazine = "equip_metal_sheet_rusted";
                count = 8;
            };
            class _4 {
                magazine = "ItemRSJ";
                count = 8;
            };
            class _5 {
                magazine = "equip_metal_sheet";
                count = 2;
            };
            class _6 {
                magazine = "equip_2inch_metal_pipe";
                count = 3;
            };
              class _7 {
                magazine = "ItemStone";
                count = 2; //+
            };
            class _8 {
                magazine = "ItemMetalSheet";
                count = 3; //+
            };
      };
    };

     class MetalFenceBox7 : CardboardBox {
        scope = 2;
        displayName = $STR_BLD_name_MetalFenceBox7;//"Contains kit for MetalFence #7"
        model = "\dayz_equip\models\cardboard_box_med.p3d";
        
        class transportmagazines {
            class _1 {
                magazine = "ItemScrews";
                count = 8;
            };
            class _3 {
                magazine = "equip_metal_sheet_rusted";
                count = 8;
            };
            class _4 {
                magazine = "ItemRSJ";
                count = 8;
            };
            class _5 {
                magazine = "equip_metal_sheet";
                count = 2;
            };
            class _6 {
                magazine = "equip_2inch_metal_pipe";
                count = 5;
            };
            class _7 {
                magazine = "equip_1inch_metal_pipe";
                count = 5;
            };
            class _8 {
                magazine = "ItemStone";
                count = 2; //+
            };
            class _9 {
                magazine = "ItemMetalSheet";
                count = 3; //+
            };
        };
    };*/

	class MetalFence_base: DZ_buildables
	{
        scope = 1;
        canbevertical = 1;
 		class Upgrade {
			requiredParts[] = {"ItemRSJ", "ItemStone", "ItemStone"}; // copy of DIY_metal upgrade section
			require[] = {"ItemEtool"};
		};
           
    }; 	
	class MetalFence_ghost: MetalFence_base
	{
		scope = 2;
		model = "z\addons\dayz_buildings\models\metal_fence_ghost.p3d";
        displayName = $STR_BLD_name_MetalFence_ghost;//"Metal Fence (Ghost)"
    }; 

	class MetalFence_1_foundation: MetalFence_base
	{
		scope = 2;
		model = "z\addons\dayz_buildings\models\metal_fence1_foundation.p3d";
        displayName = $STR_BLD_name_MetalFence_1_foundation;//"Metal Fence Foundation"
		class Upgrade { //to next stage
			requiredTools[] = {"ItemEtool"}; 
			requiredParts[] = {"ItemRSJ","ItemLog","ItemLog"};
			create = "MetalFence_1_frame";
		};
        class Disassembly {
            requiredTools[] = {"ItemEtool"};
        };
   }; 

	class MetalFence_1_frame: MetalFence_1_foundation
	{
		scope = 2;
		model = "z\addons\dayz_buildings\models\metal_fence1_stage1.p3d";
        displayName = $STR_BLD_name_MetalFence_1_frame;//"Metal Fence Frame"
		class Upgrade { //to next stage
			requiredTools[] = {"ItemToolbox","ItemEtool"}; 
			requiredParts[] = {"equip_metal_sheet_rusted","ItemMetalSheet","ItemScrews"}; 
			create = "MetalFence_halfpanel";
		};
        class Disassembly {
            requiredTools[] = {"ItemEtool"};
        };
   }; 

	class MetalFence_halfpanel: MetalFence_1_frame
	{
			scope = 2;
			model = "z\addons\dayz_buildings\models\metal_fence1_stage2.p3d";
            displayName = $STR_BLD_name_MetalFence_halfpanel;//"Metal Fence one third"
		class Upgrade {
			requiredTools[] = {"ItemToolbox"}; 
			requiredParts[] = {"equip_metal_sheet_rusted","ItemMetalSheet","ItemScrews"}; 
			create = "MetalFence_thirdpanel";
		};
        class Disassembly {
            requiredTools[] = {"ItemToolbox"};
        };
   }; 

	class MetalFence_thirdpanel: MetalFence_halfpanel
	{
			scope = 2;
			model = "z\addons\dayz_buildings\models\metal_fence1_stage3.p3d";
            displayName = $STR_BLD_name_MetalFence_thirdpanel;//"Metal Fence two third"
		class Upgrade { 
			requiredTools[] = {"ItemToolbox"}; 
			requiredParts[] = {"equip_metal_sheet_rusted","ItemMetalSheet","ItemScrews"};
			create = "MetalFence_1";
		};
        class Disassembly {
            requiredTools[] = {"ItemToolbox"};
        };
   }; 

    class MetalFence_1: MetalFence_thirdpanel
    {
        scope = 2;
        model = "z\addons\dayz_buildings\models\metal_fence1.p3d";
        displayName = $STR_BLD_name_MetalFence_1;//"Metal Fence Level 1"
        class Upgrade {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {"ItemScrews","equip_metal_sheet_rusted","ItemMetalSheet"}; 
            create = "MetalFence_2";
        };
        class Disassembly {
            requiredTools[] = {"ItemToolbox"};
        };/*
        class Maintenance {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {};
            active = "true";
        };*/
    };  
    class MetalFence_2: MetalFence_1
    {
            scope = 2;
            model = "z\addons\dayz_buildings\models\metal_fence2.p3d";
            displayName = $STR_BLD_name_MetalFence_2;//"Metal Fence Level 2"
        class Upgrade {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {"ItemRSJ","ItemRSJ"};
            create = "MetalFence_3";
            produce[] = {"ItemLog", "ItemLog"}; // will be put in a weaponholder
        };
        class Disassembly {
            requiredTools[] = {"ItemToolbox"};
        };/*
        class Maintenance {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {};
            active = "true";
        };*/
    }; 
    class MetalFence_3: MetalFence_2
    {
            scope = 2;
            model = "z\addons\dayz_buildings\models\metal_fence3.p3d";
            displayName = $STR_BLD_name_MetalFence_3;//"Metal Fence Level 3"
        class Upgrade {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {"ItemScrews","equip_metal_sheet_rusted","equip_metal_sheet_rusted","equip_metal_sheet_rusted","equip_metal_sheet_rusted"};
            create = "MetalFence_4";
        };
        class Disassembly {
            requiredTools[] = {"ItemToolbox"};
        };
        /*
        class Maintenance {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {};
            active = "true";
        };*/
    }; 
    class MetalFence_4: MetalFence_3
    {
            scope = 2;
            model = "z\addons\dayz_buildings\models\metal_fence4.p3d";
            displayName = $STR_BLD_name_MetalFence_4;//"Metal Fence Level 4"
        class Upgrade {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {"ItemScrews","ItemRSJ","ItemRSJ"};
            create = "MetalFence_5";
        };
        class Disassembly {
            requiredTools[] = {"ItemToolbox"};
        };/*
        class Maintenance {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {};
        };*/
    }; 
    class MetalFence_5: MetalFence_4
    {
            scope = 2;
            model = "z\addons\dayz_buildings\models\metal_fence5.p3d";
            displayName = $STR_BLD_name_MetalFence_5;//"Metal Fence Level 5"
        class Upgrade {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {"ItemScrews","equip_metal_sheet","equip_metal_sheet","equip_2inch_metal_pipe","equip_2inch_metal_pipe","equip_2inch_metal_pipe"};
            create = "MetalFence_6";
        };
        class Disassembly {
            requiredTools[] = {"ItemToolbox"};
        };
        /*
        class Maintenance {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {};
            active = "true";
        };*/
    }; 
    class MetalFence_6: MetalFence_5
    {
            scope = 2;
            model = "z\addons\dayz_buildings\models\metal_fence6.p3d";
            displayName = $STR_BLD_name_MetalFence_6;//"Metal Fence Level 6"
        class Upgrade {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {"ItemScrews","equip_2inch_metal_pipe","equip_2inch_metal_pipe","equip_1inch_metal_pipe","equip_1inch_metal_pipe","equip_1inch_metal_pipe"};
            create = "MetalFence_7";
        };
        class Disassembly {
            requiredTools[] = {"ItemToolbox"};
        };
        /*
        class Maintenance {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {};
            active = "true";
        };*/
    }; 
    class MetalFence_7: MetalFence_6 
    {
        scope = 2;
        model = "z\addons\dayz_buildings\models\metal_fence7.p3d";
        displayName = $STR_BLD_name_MetalFence_7;//"Metal Fence Level 7"
        ladders[]={{"ladderstart","ladderend"}};
        class Disassembly {
            requiredTools[] = {"ItemToolbox"};
        };
        class Upgrade {
        	delete create;
        };
       /*
        class Maintenance {
            requiredTools[] = {"ItemToolbox"};
            requiredParts[] = {};
            active = "true";
        };*/
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
	
	class Land_Gate_IndVar2_5;
	class WoodenGate_1: Land_Gate_IndVar2_5
	{	
		scope = 2;
		displayName = $STR_BLD_name_WoodenGate_1;//"Wooden Gate Level 1"
		model = "z\addons\dayz_buildings\models\gates\gate1_dzam.p3d";
		icon = "Ca\misc\data\icons\i_danger_CA.paa";
		mapSize = 0.2;
        accuracy = 0.2;
        vehicleClass = "dayz_buildings";
		destrType="DestructNo";
		placement = "vertical";
		class AnimationSources
		{
			class DoorR
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
			class DoorL
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class WoodenGate_1_ghost: WoodenGate_1
	{	
		displayName = $STR_BLD_name_WoodenGate_1_ghost;//"Wooden Gate Level 1 (Ghost)"
		model = "z\addons\dayz_buildings\models\gates\gate1_dzam.p3d";
	};
	class WoodenGate_2: WoodenGate_1
	{	
		displayName = $STR_BLD_name_WoodenGate_2;//"Wooden Gate Level 2"
		model = "z\addons\dayz_buildings\models\gates\gate2_dzam.p3d";
	};
	class WoodenGate_3: WoodenGate_1
	{	
		displayName = $STR_BLD_name_WoodenGate_3;//"Wooden Gate Level 3"
		model = "z\addons\dayz_buildings\models\gates\gate3_dzam.p3d";
	};
	class WoodenGate_4: House
	{	
		scope = 2;
		icon = "Ca\misc\data\icons\i_danger_CA.paa";
		mapSize = 0.2;
        accuracy = 0.2;
        vehicleClass = "dayz_buildings";
		destrType="DestructNo";
		displayName = $STR_BLD_name_WoodenGate_4;//"Wooden Gate Level 4"
		model = "z\addons\dayz_buildings\models\gates\gate4_dzam.p3d";
		placement = "vertical";
		class AnimationSources {
			class DoorR {
				source = "User";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class DoorL {
				source = "User";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		
		/*class UserActions {
			class OpenDoors {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = "DoorL";
				radius = 10;
				onlyForPlayer = 0;
				condition = "this animationPhase ""DoorR"" < 0.5";
				statement = "this animate [""DoorR"", 1];this animate [""DoorL"", 1]";
			};
			
			class CloseDoors : OpenDoors {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				condition = "this animationPhase ""DoorR"" >= 0.5";
				statement = "this animate [""DoorR"", 0];this animate [""DoorL"", 0]";
			};
		};
		actionBegin1 = "OpenDoors";
		actionEnd1 = "OpenDoors";*/
	};
	
	//metal gates
	
	class MetalGate_1: Land_Gate_IndVar2_5
	{	
		scope = 2;
		displayName = $STR_BLD_name_MetalGate_1;//"Metal Gate Level 1"
		model = "z\addons\dayz_buildings\models\gates\gate1_metal_dzam.p3d";
		icon = "Ca\misc\data\icons\i_danger_CA.paa";
		mapSize = 0.2;
        accuracy = 0.2;
        vehicleClass = "dayz_buildings";
		destrType="DestructNo";
		placement = "vertical";
		class AnimationSources
		{
			class DoorR
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
			class DoorL
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class MetalGate_1_ghost: MetalGate_1
	{	
		displayName = $STR_BLD_name_MetalGate_1_ghost;//"Metal Gate (Ghost)"
		model = "z\addons\dayz_buildings\models\gates\gate1_metal_dzam_ghost.p3d";
	};
	class MetalGate_2: MetalGate_1
	{	
		displayName = $STR_BLD_name_MetalGate_2;//"Metal Gate Level 2"
		model = "z\addons\dayz_buildings\models\gates\gate2_metal_dzam.p3d";
	};
	class MetalGate_3: MetalGate_1
	{	
		displayName = $STR_BLD_name_MetalGate_3;//"Metal Gate Level 3"
		model = "z\addons\dayz_buildings\models\gates\gate3_metal_dzam.p3d";
	};
	class MetalGate_4: House
	{	
		scope = 2;
		icon = "Ca\misc\data\icons\i_danger_CA.paa";
		mapSize = 0.2;
        accuracy = 0.2;
        vehicleClass = "dayz_buildings";
		destrType="DestructNo";
		displayName = $STR_BLD_name_MetalGate_4;//"Metal Gate Level 4"
		model = "z\addons\dayz_buildings\models\gates\gate4_metal_dzam.p3d";
		placement = "vertical";
		class AnimationSources {
			class DoorR {
				source = "User";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class DoorL {
				source = "User";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
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
		
	class ItemDIY_metal: ItemDIY_wood {
		picture = "\z\addons\dayz_buildings\equip\icon_diy_metal.paa";
		model = "z\addons\dayz_buildings\models\diymanual_metal.p3d";
		icon = "Ca\misc\data\icons\i_danger_CA.paa";
		displayName = $STR_BLD_name_ItemDIY_metal;//"DIY Manual (Metal)"
		descriptionShort = $STR_BLD_desc_ItemDIY_metal;//"For Metal fences"
			
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
	};
};
