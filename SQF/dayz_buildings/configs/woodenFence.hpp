//////Base buildings items
class WoodenFence_base: DZ_buildables
{
	scope = 1;
	canbevertical = 1;
	destrType="DestructBuilding";
	armor = 100;
	class Upgrade {
		requiredParts[] = {"ItemLog", "ItemStone", "ItemStone"}; // copy of ItemDIY_wood upgrade section
		require[] = {"ItemEtool"};
	};
	class Maintenance {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemPlank","equip_nails"};
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
		requiredParts[] = {"ItemLog","ItemStone"};
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
	armor = 100;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_nails","ItemPlank","ItemPlank","ItemPlank"};
		create = "WoodenFence_2";
	};
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
};
 
class WoodenFence_2: WoodenFence_1
{
		scope = 2;
		armor = 200;
		model = "z\addons\dayz_buildings\models\fence2.p3d";
		displayName = $STR_BLD_name_WoodenFence_2;//"Wooden Fence Level 2"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_nails","ItemPlank","ItemPlank","ItemPlank"};
		create = "WoodenFence_3";
	};
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
}; 
class WoodenFence_3: WoodenFence_2
{
		scope = 2;
		armor = 300;
		model = "z\addons\dayz_buildings\models\fence3.p3d";
		displayName = $STR_BLD_name_WoodenFence_3;//"Wooden Fence Level 3"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_nails","ItemLog","ItemLog","ItemLog"};
		create = "WoodenFence_4";
	};
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
}; 
class WoodenFence_4: WoodenFence_3
{
		scope = 2;
		armor = 400;
		model = "z\addons\dayz_buildings\models\fence4.p3d";
		displayName = $STR_BLD_name_WoodenFence_4;//"Wooden Fence Level 4"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_nails","ItemPlank","ItemPlank","ItemPlank"};
		create = "WoodenFence_5";
	};
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
}; 
class WoodenFence_5: WoodenFence_4
{
		scope = 2;
		armor = 500;
		model = "z\addons\dayz_buildings\models\fence5.p3d";
		displayName = $STR_BLD_name_WoodenFence_5;//"Wooden Fence Level 5"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_nails","ItemPlank","ItemPlank","ItemPlank"};
		create = "WoodenFence_6";
	};
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
}; 

class WoodenFence_6: WoodenFence_5
{
		scope = 2;
		armor = 1000;
		model = "z\addons\dayz_buildings\models\fence6.p3d";
		displayName = $STR_BLD_name_WoodenFence_6;//"Wooden Fence Level 6"
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_nails","ItemPlank","ItemPlank","ItemPlank"};
		create = "WoodenFence_7";
	};
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
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
}; 
