class WoodenGate_Base: Land_Gate_IndVar2_5
{	
	scope = 1;
	displayName = $STR_BLD_name_WoodenGate_1;//"Wooden Gate Level 1"
	model = "z\addons\dayz_buildings\models\gates\gate4_dzam.p3d";
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

class WoodenGate_1_ghost: WoodenGate_Base
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_1_ghost;//"Wooden Gate Level 1 (Ghost)"
	model = "z\addons\dayz_buildings\models\gates\gate0_dzam_ghost.p3d";
};

class WoodenGate_1: WoodenGate_Base
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_2;//"Wooden Gate Level 2"
	model = "z\addons\dayz_buildings\models\gates\gate1_dzam.p3d";
};

class WoodenGate_2: WoodenGate_Base
{
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_2;//"Wooden Gate Level 3"
	model = "z\addons\dayz_buildings\models\gates\gate2_dzam.p3d";
};

class WoodenGate_3: WoodenGate_Base
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_3;//"Wooden Gate Level 4"
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
	class UserActions {
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
	actionEnd1 = "OpenDoors";
};