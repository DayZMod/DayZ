class MetalFence_base: DZ_buildables
{
	scope = 1;
	canbevertical = 1;
	armor = 1000;
	class Upgrade {
		requiredParts[] = {"ItemRSJ", "ItemStone", "ItemStone"}; // copy of DIY_metal upgrade section
		require[] = {"ItemEtool"};
	};
	class Maintenance {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemMetalSheet","ItemScrews"};
	};
	
	class eventHandlers {
		HandleDamage = "if ((_this select 4) == 'PipeBomb') then {_this call fnc_Obj_handleDam;};";
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
		requiredParts[] = {"ItemRSJ","ItemLog","ItemStone"};
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
	armor = 1000;
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
		armor = 1250;
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
		armor = 1500;
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
		armor = 1750;
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
		armor = 2000;
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
		armor = 2250;
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
	armor = 2500;
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