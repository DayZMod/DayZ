class SurvivorWorkshop_Base: DZ_buildables
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\cabin1_stage1.p3d";
	icon = "Ca\misc\data\icons\i_danger_CA.paa";
	displayName = $STR_BLD_name_SurvivorWorkshop_Base;//"Workshop Foundation"
	mapSize = 0.7;
	accuracy = 0.2;
	vehicleClass = "dayz_buildings";
	destrType = "DestructNo";
	placement = "vertical";
};   
class SurvivorWorkshopBase_ghost: SurvivorWorkshop_Base
{
	model = "z\addons\dayz_buildings\models\cabin1_stage1_ghost.p3d";
	displayName = $STR_BLD_name_SurvivorWorkshopBase_ghost;//"Workshop Framework (Ghost)"
};
class SurvivorWorkshop: SurvivorWorkshop_Base
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\cabin1_stage1.p3d";
	icon = "Ca\misc\data\icons\i_danger_CA.paa";
	displayName = $STR_BLD_name_SurvivorWorkshop;//"Workshop Foundation"
	
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "SurvivorWorkshopStage2";
	};
}; 
 
class SurvivorWorkshopStage2: SurvivorWorkshop_Base
{
	model = "z\addons\dayz_buildings\models\cabin1_stage2.p3d";
	displayName = $STR_BLD_name_SurvivorWorkshopStage2;//"Workshop Framework"
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		randomcreate[] = {"SurvivorWorkshopAStage3","SurvivorWorkshopBStage3","SurvivorWorkshopCStage3"};
		create = "";
	};
};

class SurvivorWorkshopAStage3: SurvivorWorkshop_Base
{
		model = "z\addons\dayz_buildings\models\cabin1_stage3.p3d";
		displayName = $STR_BLD_name_SurvivorWorkshopAStage3;//"Workshop Walls"
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "SurvivorWorkshopAStage4";
	};
};
class SurvivorWorkshopBStage3: SurvivorWorkshopAStage3
{
		model = "z\addons\dayz_buildings\models\cabin2_stage3.p3d";
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "SurvivorWorkshopBStage4";
	};
};
class SurvivorWorkshopCStage3: SurvivorWorkshopAStage3
{
		model = "z\addons\dayz_buildings\models\cabin3_stage3.p3d";
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "SurvivorWorkshopCStage4";
	};
};

class SurvivorWorkshopAStage4: SurvivorWorkshop_Base
{
		model = "z\addons\dayz_buildings\models\cabin1_stage4.p3d";
		displayName = $STR_BLD_name_SurvivorWorkshopAStage4;//"Workshop Roof"
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "SurvivorWorkshopAStage5";
	};
};
class SurvivorWorkshopBStage4: SurvivorWorkshopAStage4
{
		model = "z\addons\dayz_buildings\models\cabin2_stage4.p3d";
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "SurvivorWorkshopBStage5";
	};
};
class SurvivorWorkshopCStage4: SurvivorWorkshopAStage4
{
		model = "z\addons\dayz_buildings\models\cabin3_stage4.p3d";
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {};
		create = "SurvivorWorkshopCStage5";
	};
};

class SurvivorWorkshopAStage5: SurvivorWorkshop_Base
{
	model = "z\addons\dayz_buildings\models\cabin1_stage5.p3d";
	displayName = $STR_BLD_name_SurvivorWorkshopAStage5;//"Workshop Complete"

	class AnimationSources
	{
		class door        
		{
			source = "user";
			animPeriod = 2;  
			initPhase=0;
		};             
	};
	class UserActions
	{
		class open_the_door
		{
			displayName = $STR_BLD_name_SurvivorWorkshopAStage5;//"Open door"
			onlyforplayer = true;
			position="door_button";
			radius=2;
			condition="this animationPhase ""door"" < 0.5";
			statement="this animate [""door"", 1]";
		};
	   
		class close_the_door : open_the_door
		{
			displayName = $STR_BLD_name_close_the_door;//"Close door"
			condition="this animationPhase ""door"" >= 0.5";
			statement="this animate [""door"", 0]";
		};
	};	
};

class SurvivorWorkshopBStage5: SurvivorWorkshopAStage5
{
		model = "z\addons\dayz_buildings\models\cabin2_stage5.p3d";
};
class SurvivorWorkshopCStage5: SurvivorWorkshopAStage5
{
		model = "z\addons\dayz_buildings\models\cabin3_stage5.p3d";
};