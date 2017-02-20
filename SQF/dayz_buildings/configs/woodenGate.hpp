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
		//Items to never return if they exist
		removedParts[] = {"ItemPadlock", "ItemStone","equip_nails"};
		//Chance other items will be returned.
		removedChance = 0.3;
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
		class Upgrade {
			displayNameDefault = $STR_UPGRADE;
			displayName = $STR_UPGRADE;
			position = "";
			radius = 3;
			onlyForPlayer = 1;
			condition = "(['ObjectUpgrade',this] call userActionConditions)";
			statement = "this execVM ""\z\addons\dayz_code\actions\object_upgradebuilding.sqf""";
		};
		class Maintenance {
			displayNameDefault = $STR_MAINTENANCE;
			displayName = $STR_MAINTENANCE;
			position = "";
			radius = 3;
			onlyForPlayer = 1;
			condition = "(['ObjectMaintenance',this] call userActionConditions)";
			statement = "this execVM ""\z\addons\dayz_code\actions\object_maintenance.sqf""";
		};
		class Disassembly {
			displayNameDefault = $STR_DISASSEMBLY;
			displayName = $STR_DISASSEMBLY;
			position = "";
			radius = 3;
			onlyForPlayer = 1;
			condition = "(['ObjectDisassembly',this] call userActionConditions)";
			statement = "this execVM ""\z\addons\dayz_code\actions\object_disassembly.sqf""";
		};
	};
};

class WoodenGate_ghost: WoodenGate_Base
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_1_ghost;//"Wooden Gate (Ghost)"
	model = "z\addons\dayz_buildings\models\gates\gate_wood_ghost.p3d"; //Model needs updating to be the ghost of the final model.
    buildCollisionPoints = 4;
    buildCollisionPaths[] = {{0,1,3,2,0,3},{1,2}};
	
	class UserActions {
		delete Upgrade;
		delete Maintenance;
		delete Disassembly;
	};
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
			onlyForPlayer = 1;
			condition = "this animationPhase ""DoorR"" < 0.5";
			statement = "this animate [""DoorR"", 1];this animate [""DoorL"", 1]";
		};	
		class CloseDoors : OpenDoors {
			displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""DoorR"" >= 0.5";
			statement = "this animate [""DoorR"", 0];this animate [""DoorL"", 0]";
		};
		class Upgrade {
			displayNameDefault = $STR_UPGRADE;
			displayName = $STR_UPGRADE;
			position = "";
			radius = 3;
			onlyForPlayer = 1;
			condition = "(['ObjectUpgrade',this] call userActionConditions)";
			statement = "this execVM ""\z\addons\dayz_code\actions\object_upgradebuilding.sqf""";
		};
		class Maintenance {
			displayNameDefault = $STR_MAINTENANCE;
			displayName = $STR_MAINTENANCE;
			position = "";
			radius = 3;
			onlyForPlayer = 1;
			condition = "(['ObjectMaintenance',this] call userActionConditions)";
			statement = "this execVM ""\z\addons\dayz_code\actions\object_maintenance.sqf""";
		};
		class Disassembly {
			displayNameDefault = $STR_DISASSEMBLY;
			displayName = $STR_DISASSEMBLY;
			position = "";
			radius = 3;
			onlyForPlayer = 1;
			condition = "(['ObjectDisassembly',this] call userActionConditions)";
			statement = "this execVM ""\z\addons\dayz_code\actions\object_disassembly.sqf""";
		};
	};
	actionBegin1 = "OpenDoors";
	actionEnd1 = "OpenDoors";
	
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemLog","ItemPadlock"};
		create = "WoodenGate_2";
	};
};
//stage 2, Locked, Only accessed by the owner (still need to add others?)
class WoodenGate_2: WoodenGate_1
{
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_2;//"Wooden Gate Level 2"
	model = "z\addons\dayz_buildings\models\gates\gate2_dzam.p3d";
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemLog","ItemPlank","ItemScrews"};
		create = "WoodenGate_3";
	};
};

class WoodenGate_3: WoodenGate_2
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_3;//"Wooden Gate Level 3"
	model = "z\addons\dayz_buildings\models\gates\gate3_dzam.p3d";
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemLog","ItemLog","ItemPlank","ItemScrews"};
		create = "WoodenGate_4";
	};
};

class WoodenGate_4: WoodenGate_3
{	
	armor =1000;
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_4;//"Wooden Gate Level 4"
	model = "z\addons\dayz_buildings\models\gates\gate4_dzam.p3d";
	
	class UserActions {
		delete Upgrade;
	};
	class eventHandlers {
		//[Object,[High Explosive Damage, Medium Explosive Damage, Melee Damage]]
		HandleDamage = "[_this,[0.5,0.25,0]] call fnc_Obj_FenceHandleDam;";
	};
};