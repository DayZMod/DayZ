class WoodenGate_Base: DZ_buildables
{	
//Not Used Just Base Class
	scope = 1;
	armor =1000;
	//Make sure gate goes vertical
	canbevertical = 1;
	displayName = $STR_BLD_name_WoodenGate_1;//"Wooden Gate Level 1"
	model = "z\addons\dayz_buildings\models\gates\gate4_dzam.p3d";
	icon = "Ca\misc\data\icons\i_danger_CA.paa";
	mapSize = 0.2;
	accuracy = 0.2;
	vehicleClass = "dayz_buildings";
	destrType="DestructBuilding";
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
	class Upgrade { //to next stage
		requiredParts[] = {"ItemLog"};
	};
	class Disassembly {
		requiredTools[] = {"ItemEtool"};
	};	
	class Maintenance {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemPlank","equip_nails"};
	};
};

class WoodenGate_ghost: WoodenGate_Base
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_1_ghost;//"Wooden Gate (Ghost)"
	model = "z\addons\dayz_buildings\models\gates\gate0_dzam_ghost.p3d"; //Model needs updating to be the ghost of the final model.
};
//Stage Foundation
class WoodenGate_foundation: WoodenGate_Base
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_Foundation;//"Wooden Gate Level foundation"
	model = "z\addons\dayz_buildings\models\fence1_ground.p3d";
	
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemLog","ItemStone"};
		create = "WoodenGate_1";
	};
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};	
};
//Stage 1 Not Locked, Access by anyone
class WoodenGate_1: WoodenGate_Base
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_1;//"Wooden Gate Level 1"
	model = "z\addons\dayz_buildings\models\gates\gate1_dzam.p3d";
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
	
	class UserActions {
		class OpenDoors {
			displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_O_DOOR;
			position = "DoorL";
			radius = 3;
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
	actionEnd1 = "OpenDoors";
	
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemLog","ItemPadlock"};
		create = "WoodenGate_2";
	};
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
};
//stage 2, Locked, Only accessed by the owner (still need to add others?)
class WoodenGate_2: WoodenGate_Base
{
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_2;//"Wooden Gate Level 2"
	model = "z\addons\dayz_buildings\models\gates\gate2_dzam.p3d";
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemLog","ItemPlank","equip_nails"};
		create = "WoodenGate_3";
	};
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
};

class WoodenGate_3: WoodenGate_Base
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_3;//"Wooden Gate Level 3"
	model = "z\addons\dayz_buildings\models\gates\gate3_dzam.p3d";
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemLog","ItemLog","ItemPlank"};
		create = "WoodenGate_4";
	};
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
};

class WoodenGate_4: WoodenGate_Base
{	
	armor =1000;
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_4;//"Wooden Gate Level 4"
	model = "z\addons\dayz_buildings\models\gates\gate4_dzam.p3d";
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
};