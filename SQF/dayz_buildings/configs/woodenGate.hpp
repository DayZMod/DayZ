#include "CommonActions.hpp"

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
		class Upgrade {ACTION_UPGRADE};
		class Maintenance {ACTION_MAINTENANCE};
		class Disassembly {ACTION_DISASSEMBLY};
	};
};

class WoodenGate_ghost: WoodenGate_Base
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_1_ghost;//"Wooden Gate (Ghost)"
	model = "z\addons\dayz_buildings\models\gates\gate_wood_ghost.p3d"; //Model needs updating to be the ghost of the final model.
    buildCollisionPoints = 4;
    buildCollisionPaths[] = {{0,1,3,2,0,3},{1,2}};
	class UserActions {};
};
//Stage Foundation
class WoodenGate_foundation: WoodenGate_Base
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_Foundation;//"Wooden Gate Level foundation"
	model = "z\addons\dayz_buildings\models\gates\gate0_dzam.p3d";
	
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
		class OpenDoors {ACTION_OPEN_DOORS};
		class CloseDoors {ACTION_CLOSE_DOORS};
		class Upgrade {ACTION_UPGRADE};
		class Maintenance {ACTION_MAINTENANCE};
		class Disassembly {ACTION_DISASSEMBLY};
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
	
	class UserActions {
		class Upgrade {ACTION_UPGRADE};
		class Maintenance {ACTION_MAINTENANCE};
		class Disassembly {ACTION_DISASSEMBLY};
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
		class Maintenance {ACTION_MAINTENANCE};
		class Disassembly {ACTION_DISASSEMBLY};
	};
	class eventHandlers {
		//[Object,[High Explosive Damage, Medium Explosive Damage, Melee Damage]]
		HandleDamage = "[_this,[0.5,0.25,0]] call fnc_Obj_FenceHandleDam;";
	};
};