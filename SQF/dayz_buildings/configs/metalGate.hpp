class MetalGate_Base: Land_Gate_IndVar2_5
{	
	scope = 1;
	displayName = $STR_BLD_name_MetalGate_Base;//"Metal Gate Level 1"
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
class MetalGate_ghost: MetalGate_Base
{	
	displayName = $STR_BLD_name_MetalGate_Base_ghost;//"Metal Gate (Ghost)"
	model = "z\addons\dayz_buildings\models\gates\gate1_metal_dzam_ghost.p3d";
};
class MetalGate_1: MetalGate_Base
{	
	displayName = $STR_BLD_name_MetalGate_2;//"Metal Gate Level 2"
	model = "z\addons\dayz_buildings\models\gates\gate2_metal_dzam.p3d";
};
class MetalGate_2: MetalGate_Base
{	
	displayName = $STR_BLD_name_MetalGate_2;//"Metal Gate Level 2"
	model = "z\addons\dayz_buildings\models\gates\gate2_metal_dzam.p3d";
};
class MetalGate_3: MetalGate_Base
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