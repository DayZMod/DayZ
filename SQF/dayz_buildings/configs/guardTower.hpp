#include "CommonActions.hpp"

//////Base buildings items
class GuardTower_base: DZ_buildables
{
	scope = 1;
	canbevertical = 1;
	destrType="DestructBuilding";
	armor = 100;
	class Upgrade {
		requiredParts[] = {"ItemLog", "ItemStone", "ItemStone"}; // copy of ItemDIY_wood upgrade section
		require[] = {"ItemEtool"};
	};
	class Disassembly {
		//Items to never return if they exist
		removedParts[] = {"equip_nails", "ItemStone"};
		//Chance other items will be returned.
		removedChance = 0.3;
		requiredTools[] = {"ItemEtool"};
	};
	class Maintenance {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemPlank","equip_nails"};
	};
	class eventHandlers {
		//[Object,[High Explosive Damage, Medium Explosive Damage, Melee Damage]]
		HandleDamage = "[_this,[1,0.5,random(0.0005)]] call fnc_Obj_FenceHandleDam;";
	};
	class UserActions {
		class Upgrade {ACTION_UPGRADE};
		class Maintenance {ACTION_MAINTENANCE};
		class Disassembly {ACTION_DISASSEMBLY};
	};
}; 	
class GuardTower_ghost: GuardTower_base
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\guardtower_ghost.p3d";
	displayName = $STR_BLD_name_GuardTower_ghost;//"Guard Tower (Ghost)"
    buildCollisionPoints = 4;
    buildCollisionPaths[] = {{0,1,3,2,0,3},{1,2}};
	class UserActions {};
	delete Disassembly;
}; 
class GuardTower_stage_1: GuardTower_base  // <-- ItemDIY_Guard Tower
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\guardtower_stage_1.p3d";
	displayName = $STR_BLD_name_GuardTower_stage_1;//"Guard Tower Stage 1"
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemScrews", "ItemPlank", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_2";
	};
	class UserActions {
		class Upgrade {ACTION_UPGRADE};
		class Maintenance {ACTION_MAINTENANCE};
		class Disassembly {ACTION_DISASSEMBLY};
	};
	delete Disassembly;
}; 
class GuardTower_stage_2: GuardTower_stage_1
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\guardtower_stage_2.p3d";
	displayName = $STR_BLD_name_GuardTower_stage_2;//"Guard Tower stage 2"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemPlank", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_3";
	};
	class UserActions {
		class Upgrade {ACTION_UPGRADE};
		class Maintenance {ACTION_MAINTENANCE};
		class Disassembly {ACTION_DISASSEMBLY};
	};
}; 
class GuardTower_stage_3: GuardTower_stage_2
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\guardtower_stage_3.p3d";
	displayName = $STR_BLD_name_GuardTower_stage_3; //"Guard Tower stage 3"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemScrews", "ItemLog", "ItemLog", "ItemLog", "ItemLog"};
		create = "GuardTower_stage_4";
	};
}; 
class GuardTower_stage_4: GuardTower_stage_3
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\guardtower_stage_4.p3d";
	displayName = $STR_BLD_name_GuardTower_stage_4;//"Guard Tower stage 4"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_5";
	};
}; 
class GuardTower_stage_5: GuardTower_stage_4
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\guardtower_stage_5.p3d";
	displayName = $STR_BLD_name_GuardTower_stage_5;//"Guard Tower stage 5"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemPlank","ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_6";
	};
}; 
class GuardTower_stage_6: GuardTower_stage_5
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\guardtower_stage_6.p3d";
	displayName = $STR_BLD_name_GuardTower_stage_6;//"Guard Tower stage 6"
	armor = 100;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_7";
	};
};
 
class GuardTower_stage_7: GuardTower_stage_6
{
		scope = 2;
		armor = 200;
		model = "z\addons\dayz_buildings\models\guardtower_stage_7.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_7;//"Guard Tower stage 7"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemPlank", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_8";
	};
}; 
class GuardTower_stage_8: GuardTower_stage_7
{
		scope = 2;
		armor = 300;
		model = "z\addons\dayz_buildings\models\guardtower_stage_8.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_8;//"Guard Tower stage 8"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews","ItemPlank","ItemPlank","ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_9";
	};
}; 
class GuardTower_stage_9: GuardTower_stage_8
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\guardtower_stage_9.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_9;//"Guard Tower stage 9"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemScrews", "ItemLog","ItemLog","ItemLog","ItemLog"};
		create = "GuardTower_stage_10";
	};
}; 
class GuardTower_stage_10: GuardTower_stage_9
{
		scope = 2;
		armor = 500;
		model = "z\addons\dayz_buildings\models\guardtower_stage_10.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_10;//"Guard Tower stage 10"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_11";
	};
	class eventHandlers {
		//[Object,[High Explosive Damage, Medium Explosive Damage, Melee Damage]]
		HandleDamage = "[_this,[0.5,0.25,0]] call fnc_Obj_FenceHandleDam;";
	};
};
class GuardTower_stage_11: GuardTower_stage_10
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\guardtower_stage_11.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_11;//"Guard Tower stage 11"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_12";
	};
};
class GuardTower_stage_12: GuardTower_stage_11
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\guardtower_stage_12.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_12;//"Guard Tower stage 12"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_13";
	};
};
class GuardTower_stage_13: GuardTower_stage_12
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\guardtower_stage_13.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_13;//"Guard Tower stage 13"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemScrews", "ItemLog", "ItemLog"};
		create = "GuardTower_stage_14";
	};
};
class GuardTower_stage_14: GuardTower_stage_13
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\guardtower_stage_14.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_14;//"Guard Tower stage 14"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_15";
	};
};
class GuardTower_stage_15: GuardTower_stage_14
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\guardtower_stage_15.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_15;//"Guard Tower stage 15"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_16";
	};
};
class GuardTower_stage_16: GuardTower_stage_15
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\guardtower_stage_16.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_16;//"Guard Tower stage 16"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_17";
	};
};
class GuardTower_stage_17: GuardTower_stage_16
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\guardtower_stage_17.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_17;//"Guard Tower stage 17"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "GuardTower_stage_18";
	};
};
class GuardTower_stage_18: GuardTower_stage_17
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\guardtower_stage_18.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_18;//"Guard Tower stage 18"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews","ItemScrews", "equip_metal_sheet_rusted", "equip_metal_sheet_rusted", "equip_metal_sheet_rusted", "equip_metal_sheet_rusted"};
		create = "GuardTower_stage_19";
	};
};
class GuardTower_stage_19: GuardTower_stage_18
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\guardtower_stage_19.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_19;//"Guard Tower stage 19"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews","ItemScrews", "equip_metal_sheet_rusted", "equip_metal_sheet_rusted", "equip_metal_sheet_rusted", "equip_metal_sheet_rusted"};
		create = "GuardTower_stage_20";
	};
};
class GuardTower_stage_20: GuardTower_stage_19
{
		scope = 2;
		model = "z\addons\dayz_buildings\models\guardtower_stage_20.p3d";
		displayName = $STR_BLD_name_GuardTower_stage_20;//"Guard Tower stage 20"
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
	class Upgrade {
		delete create;
	};
	class UserActions {
		class Maintenance {ACTION_MAINTENANCE};
		class Disassembly {ACTION_DISASSEMBLY};
	};
}; 
