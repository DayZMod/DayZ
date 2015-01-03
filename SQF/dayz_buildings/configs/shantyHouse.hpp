class ShantyHouse_Base: DZ_buildables
{           
	model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseBase.p3d";
	displayName = $STR_BLD_name_ShantyHouse_Base;//"Shanty House Base"
	scope = 1;
	icon = "Ca\misc\data\icons\i_danger_CA.paa";
	mapSize = 0.7;
	accuracy = 0.2;
	vehicleClass = "dayz_buildings";
	destrType = "DestructNo";
	placement = "vertical";
};

class ShantyHouse: ShantyHouse_Base
{
	model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseBase.p3d";
	displayName = $STR_BLD_name_ShantyHouse;//"Shanty House Base"
	scope = 2;
		
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "ShantyHouseStage2";
	};
};

class ShantyHouse_ghost: ShantyHouse_Base
{
	model = "z\addons\dayz_buildings\models\ShantyHouseBase_ghost.p3d";
	displayName = $STR_BLD_name_ShantyHouse_ghost;//"Shanty House (Ghost)"
};
class ShantyHouseStage2: ShantyHouse_Base
{
	model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage2.p3d";
	displayName = $STR_BLD_name_ShantyHouseStage2;//"Shanty House Stage 2"
	
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "ShantyHouseStage3";
	};
};

class ShantyHouseStage3: ShantyHouse_Base
{
	model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage3.p3d";
	displayName = $STR_BLD_name_ShantyHouseStage3;//"Shanty House Stage 3"
	
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "ShantyHouseStage4";
	};
};

class ShantyHouseStage4: ShantyHouse_Base
{
	model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage4.p3d";
	displayName = $STR_BLD_name_ShantyHouseStage4;//"Shanty House Stage 4"
	
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "ShantyHouseStage5";
	};
};

class ShantyHouseStage5: ShantyHouse_Base
{
	model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage5.p3d";
	displayName = $STR_BLD_name_ShantyHouseStage5;//"Shanty House Stage 5"
	
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "ShantyHouseStage6";
	};
};

class ShantyHouseStage6: ShantyHouse_Base
{
	model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage6.p3d";
	displayName = $STR_BLD_name_ShantyHouseStage6;//"Shanty House Stage 6"
		
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "ShantyHouseStage7";
	};
};

class ShantyHouseStage7: ShantyHouse_Base
{
	model = "z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage7.p3d";
	displayName = $STR_BLD_name_ShantyHouseStage7;//"Shanty House Stage 7"
	ladders[]={{"ladderstart","ladderend"}};
	class AnimationSources
	{
		class door
		{
			animPeriod = 2;
			source = "user";
			initPhase = 0;
		};
			
		class door2
		{
			animPeriod = 2;
			source = "user";
			initPhase = 0;
		};
	};
	class UserActions
	{ 
		class OpenDoor
		{
			displayName = $STR_BLD_name_ShantyHouseStage7;//"Open door"
			onlyforplayer = 1;
			position="door_axis";
			radius=2;
			condition="this animationPhase ""door"" < 0.5";
			statement="this animate [""door"", 1]";
		};
		   
		class CloseDoor
		{
			displayName = $STR_BLD_name_ShantyHouseStage7;//"Close door"
			radius=2;
			position="door_axis";
			condition="this animationPhase ""door"" >= 0.5";
			statement="this animate [""door"", 0]";
			onlyforplayer = 1;
		};
	};	
};