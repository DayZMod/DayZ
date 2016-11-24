class MetalGate_Base: Land_Gate_IndVar2_5
{	
	scope = 1;
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
		requiredParts[] = {"ItemRSJ"};
	};
	class Disassembly {
		requiredTools[] = {"ItemEtool"};
	};	
	class Maintenance {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"ItemMetalSheet","ItemScrews"};
	};
	class eventHandlers {
		HandleDamage = "this call fnc_Obj_handleDam;";
	};
};
class MetalGate_ghost: MetalGate_Base
{	
	displayName = $STR_BLD_name_MetalGate_1_ghost;//"Metal Gate (Ghost)"
	model = "z\addons\dayz_buildings\models\gates\gate1_metal_dzam_ghost.p3d";
};
class MetalGate_foundation: MetalGate_Base
{	
	displayName = "MetalGate Foundation";//"Metal Gate Level 2"
	model = "z\addons\dayz_buildings\models\gates\gate2_metal_dzam.p3d";
	
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemRSJ"};
		create = "MetalGate_1";
	};
	class Disassembly {
		requiredTools[] = {"ItemEtool"};
	};	
};
class MetalGate_1: MetalGate_Base
{	
	displayName = $STR_BLD_name_MetalGate_2;//"Metal Gate Level 2"
	model = "z\addons\dayz_buildings\models\gates\gate2_metal_dzam.p3d";
	
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemRSJ"};
		create = "MetalGate_2";
	};
	class Disassembly {
		requiredTools[] = {"ItemEtool"};
	};	
};
class MetalGate_2: MetalGate_Base
{	
	displayName = $STR_BLD_name_MetalGate_2;//"Metal Gate Level 2"
	model = "z\addons\dayz_buildings\models\gates\gate2_metal_dzam.p3d";
	
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemRSJ"};
		create = "MetalGate_3";
	};
	class Disassembly {
		requiredTools[] = {"ItemEtool"};
	};
};
class MetalGate_3: MetalGate_Base
{	
	displayName = $STR_BLD_name_MetalGate_3;//"Metal Gate Level 3"
	model = "z\addons\dayz_buildings\models\gates\gate3_metal_dzam.p3d";
	
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemRSJ"};
		create = "MetalGate_4";
	};
	class Disassembly {
		requiredTools[] = {"ItemEtool"};
	};
};
class MetalGate_4: MetalGate_Base
{	
	displayName = $STR_BLD_name_MetalGate_4;//"Metal Gate Level 4"
	model = "z\addons\dayz_buildings\models\gates\gate4_metal_dzam.p3d";

	class Disassembly {
		requiredTools[] = {"ItemEtool"};
	};
};