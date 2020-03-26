#include "CommonActions.hpp"

//////Base buildings items
class  Roof_base: DZ_buildables
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
class Roof_ghost: roof_base
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\roof_ghost.p3d";
	displayName = $STR_BLD_name_Roof_ghost;//"roof (Ghost)"
    buildCollisionPoints = 4;
    buildCollisionPaths[] = {{0,1,3,2,0,3},{1,2}};
	class UserActions {};
	delete Disassembly;
}; 
class Roof_stage_1: roof_base  // <-- ItemDIY_roofs
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\roof_stage_1.p3d";
	displayName = $STR_BLD_name_Roof_stage_1;//"Roof Stage 1"
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemScrews", "ItemScrews", "ItemLog", "ItemLog"};
		create = "Roof_stage_2";
	};
	class UserActions {
		class Upgrade {ACTION_UPGRADE};
		class Maintenance {ACTION_MAINTENANCE};
		class Disassembly {ACTION_DISASSEMBLY};
	};
	delete Disassembly;
}; 
class  Roof_stage_2:  Roof_stage_1
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\roof_stage_2.p3d";
	displayName = $STR_BLD_name_Roof_stage_2;//"Roof stage 2"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemScrews", "ItemLog", "ItemLog", "ItemLog", "ItemLog"};
		create = "WoodenFence_quaterpanel";
	};
	class UserActions {
		class Upgrade {ACTION_UPGRADE};
		class Maintenance {ACTION_MAINTENANCE};
		class Disassembly {ACTION_DISASSEMBLY};
	};
}; 
class  Roof_stage_3:  Roof_stage_2
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\roof_stage_3.p3d";
	displayName = $STR_BLD_name_Roof_stage_3; //"Roof stage 3"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_4";
	};
}; 
class  Roof_stage_4:  Roof_stage_3
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\roof_stage_4.p3d";
	displayName = $STR_BLD_name_Roof_stage_4;//"Roof stage 4"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_5";
	};
}; 
class  Roof_stage_5:  Roof_stage_4
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\roof_stage_5.p3d";
	displayName = $STR_BLD_name_Roof_stage_5;//"Roof stage 5"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_6";
	};
}; 
class Roof_stage_6: Roof_stage_5
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\roof_stage_6.p3d";
	displayName = $STR_BLD_name_Roof_stage_6;//"Roof stage 6"
	armor = 100;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_7";
	};
};
 
class Roof_stage_7: Roof_stage_6
{
		scope = 2;
		armor = 200;
		model = "z\addons\dayz_buildings\models\roof_stage_7.p3d";
		displayName = $STR_BLD_name_Roof_stage_7;//"Roof stage 7"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemLog", "ItemLog", "ItemLog", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_8";
	};
}; 
class Roof_stage_8: Roof_stage_7
{
		scope = 2;
		armor = 300;
		model = "z\addons\dayz_buildings\models\roof_stage_8.p3d";
		displayName = $STR_BLD_name_Roof_stage_8;//"Roof stage 8"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemPlank", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_9";
	};
}; 
class Roof_stage_9: Roof_stage_8
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\roof_stage_9.p3d";
		displayName = $STR_BLD_name_Roof_stage_9;//"Roof stage 9"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemPlank", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_10";
	};
}; 
class Roof_stage_10: Roof_stage_9
{
		scope = 2;
		armor = 500;
		model = "z\addons\dayz_buildings\models\roof_stage_10.p3d";
		displayName = $STR_BLD_name_Roof_stage_10;//"Roof stage 10"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_11";
	};
	class eventHandlers {
		//[Object,[High Explosive Damage, Medium Explosive Damage, Melee Damage]]
		HandleDamage = "[_this,[0.5,0.25,0]] call fnc_Obj_FenceHandleDam;";
	};
};
class Roof_stage_11: Roof_stage_10
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\roof_stage_11.p3d";
		displayName = $STR_BLD_name_Roof_stage_11;//"Roof stage 11"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_12";
	};
};
class Roof_stage_12: Roof_stage_11
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\roof_stage_12.p3d";
		displayName = $STR_BLD_name_Roof_stage_12;//"Roof stage 12"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_13";
	};
};
class Roof_stage_13: Roof_stage_12
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\roof_stage_13.p3d";
		displayName = $STR_BLD_name_Roof_stage_13;//"Roof stage 13"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_14";
	};
};
class Roof_stage_14: Roof_stage_13
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\roof_stage_14.p3d";
		displayName = $STR_BLD_name_Roof_stage_14;//"Roof stage 14"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_15";
	};
};
class Roof_stage_15: Roof_stage_14
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\roof_stage_15.p3d";
		displayName = $STR_BLD_name_Roof_stage_15;//"Roof stage 15"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_16";
	};
};
class Roof_stage_16: Roof_stage_15
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\roof_stage_16.p3d";
		displayName = $STR_BLD_name_Roof_stage_16;//"Roof stage 16"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews", "ItemPlank", "ItemPlank", "ItemPlank"};
		create = "Roof_stage_17";
	};
};
class Roof_stage_17: Roof_stage_16
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\roof_stage_17.p3d";
		displayName = $STR_BLD_name_Roof_stage_17;//"Roof stage 17"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews","ItemScrews", "equip_metal_sheet_rusted", "equip_metal_sheet_rusted", "equip_metal_sheet_rusted", "equip_metal_sheet_rusted"};
		create = "Roof_stage_18";
	};
};
class Roof_stage_18: Roof_stage_17
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\roof_stage_18.p3d";
		displayName = $STR_BLD_name_Roof_stage_18;//"Roof stage 18"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemScrews","ItemScrews", "equip_metal_sheet_rusted", "equip_metal_sheet_rusted", "equip_metal_sheet_rusted", "equip_metal_sheet_rusted"};
		create = "Roof_stage_19";
	};
};
class Roof_stage_19: Roof_stage_18
{
		scope = 2;
		model = "z\addons\dayz_buildings\models\roof_stage_19.p3d";
		displayName = $STR_BLD_name_Roof_stage_19;//"Roof stage 19"
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
