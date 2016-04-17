#define CFG_ACTIONS_DISABLE(action) class action : None { show = false; }

class CfgActions
{
	class None;
	
	CFG_ACTIONS_DISABLE(Rearm);
	CFG_ACTIONS_DISABLE(Heal);
	CFG_ACTIONS_DISABLE(HealSoldier);
	CFG_ACTIONS_DISABLE(FirstAid);
	CFG_ACTIONS_DISABLE(TakeBag);
	CFG_ACTIONS_DISABLE(Take);
	CFG_ACTIONS_DISABLE(FireInflame);
	CFG_ACTIONS_DISABLE(FirePutDown);
	CFG_ACTIONS_DISABLE(Repair);
	CFG_ACTIONS_DISABLE(Refuel);
	CFG_ACTIONS_DISABLE(TakeWeapon);
	CFG_ACTIONS_DISABLE(PutBag);
	CFG_ACTIONS_DISABLE(DropBag);
	CFG_ACTIONS_DISABLE(AddBag);
	CFG_ACTIONS_DISABLE(DropWeapon);
	CFG_ACTIONS_DISABLE(PutWeapon);
	CFG_ACTIONS_DISABLE(DropMagazine);
	CFG_ACTIONS_DISABLE(PutMagazine);
	CFG_ACTIONS_DISABLE(DeactivateMine);
};

#undef CFG_ACTIONS_DISABLE

class CfgAISkill
{
	aimingspeed[] = {0, 0, 1, 1};
	courage[] = {0, 5, 10, 10};
	endurance[] = {0, 0, 1, 0.1};
	general[] = {0, 0, 1, 0.1};
	reloadspeed[] = {0, 0, 1, 1};
	spotdistance[] = {0, 0, 1, 0.6};
	spottime[] = {0, 0, 1, 0.1};
};

class CfgInGameUI
{
    class PeripheralVision
    {
        cueColor[] = {0,0,0,0};
        cueFriendlyColor[] = {0,0,0,0};
        cueEnemyColor[] = {0,0,0,0};
    };
	
    class IslandMap
    {
        colorFriendly[] = {0,0.5,0,0};
        colorEnemy[] = {0.5,0,0,0};
        colorNeutral[] = {1.0,0.5,0,0};
        colorCivilian[] = {0,0,1,0};
        colorUnknown[] = {1.0,0.5,0,0};
        shadow = 2;
        iconPlayer = "\ca\ui\data\map_player_ca.paa";
        iconPlayerDirection = "\ca\ui\data\map_dir_ca.paa";
        iconCheckpoint = "\ca\ui\data\map_target_ca.paa";
        iconCamera = "\ca\ui\data\map_camera_ca.paa";
        iconSelect = "\ca\ui\data\map_select_ca.paa";
        iconSensor = "\ca\ui\data\map_trigger_ca.paa";
        sizeLeader = 24;
        size = 26;
        sizePlayer = 26;
        colorTracks[] = {0.2,0.13,0,1};
        colorRoads[] = {0.2,0.13,0,1};
        colorMainRoads[] = {0,0,0,1};
        colorTracksFill[] = {0,0,0,0};
        colorRoadsFill[] = {1,0.88,0.65,1};
        colorMainRoadsFill[] = {0.94,0.69,0.2,1};
        cursorLineWidth = 1;
        colorGrid[] = {0.05,0.1,0,0.6};
        colorGridMap[] = {0.05,0.1,0,0.4};
    };
	
	class MPTable
	{
		color[] = {0,0,0,0};
		colorTitleBg[] = {0,0,0,0};
		colorBg[] = {0,0,0,0};
		colorSelected[] = {0,0,0,0};
		colorWest[] = {0,0,0,0};
		colorEast[] = {0,0,0,0};
		colorCiv[] = {0,0,0,0};
		colorRes[] = {0,0,0,0};
		font = "EtelkaNarrowMediumPro";
		size = "0";
		
		class Columns
		{
			class Order
			{
				width = 0;
				colorBg[] = {0,0,0,0};
				doubleLine = 0;
			};
			
			class Player
			{
				width = 0;
				colorBg[] = {0,0,0,0};
				doubleLine = 0;
			};
			
			class KillsInfantry
			{
				width = 0;
				doubleLine = 0;
				colorBg[] = {0,0,0,0};
				picture = "";
			};
			
			class KillsSoft
			{
				width = 0;
				doubleLine = 0;
				colorBg[] = {0,0,0,0};
				picture = "";
			};
			
			class KillsArmor
			{
				width = 0;
				doubleLine = 0;
				colorBg[] = {0,0,0,0};
				picture = "";
			};
			
			class KillsAir
			{
				width = 0;
				doubleLine = 0;
				colorBg[] = {0,0,0,0};
				picture = "";
			};
			
			class Killed
			{
				width = 0;
				doubleLine = 0;
				colorBg[] = {0,0,0,0};
				picture = "";
			};
			
			class KillsTotal
			{
				width = 0;
				doubleLine = 0;
				colorBg[] = {0,0,0,0};
				picture = "";
			};
		};
	};
};

class CfgVoice
{
	class NoVoice
	{
		protocol = "RadioProtocolBase";
		variants[] = {1};
		directories[] = {"", ""};
		identityTypes[] = {"Default", "Zombie1", "Zombie2", "Zombie3"};
	};
};

class CfgIdentities
{
	class Zombie1
	{
		name = "Zombie";
		face = "Zombie1";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
	
	class Zombie2 : Zombie1
	{
		face = "Zombie2";
	};
	
	class Zombie3 : Zombie1
	{
		face = "Zombie3";
	};
};

class CfgFaces
{
	class Default;
	
	class Man : Default
	{
		class Default;
		
		class Zombie1 : Default
		{
			name = "Zombie 1";
			texture = "\dayz\textures\faces\zombie_01_co.paa";
			identityTypes[] = {"Zombie1"};
			disabled = 0;
		};
		
		class Zombie2 : Zombie1
		{
			name = "Zombie 2";
			texture = "\dayz\textures\faces\zombie_02_co.paa";
			identityTypes[] = {"Zombie2"};
		};
		
		class Zombie3 : Zombie1
		{
			name = "Zombie 3";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"Zombie3"};
		};
	};
};

class CfgMissions
{
	class Cutscenes
	{
		class DayZModIntro1
		{
			directory = "z\addons\dayz_code\Configs\CfgWorlds\intro.dayzmod";
		};
	};
};

//TODO: Move to CfgVehicles
class CfgSurvival
{
	class Meat
	{
		class Default
		{
			yield = 2;
			rawfoodtype = "FoodmeatRaw";
		};
		
		class Cow : Default
		{
			yield = 6;
			rawfoodtype = "FoodbeefRaw";
		};
		
		class Cow01 : Cow {};
		class Cow02 : Cow {};
		class Cow03 : Cow {};
		class Cow04 : Cow {};
		
		class Goat : Default
		{
			yield = 4;
			rawfoodtype = "FoodgoatRaw";
		};
		
		class Sheep : Default
		{
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		
		class WildBoar : Default
		{
			yield = 4;
			rawfoodtype = "FoodbaconRaw";
		};
		
		class Hen : Default
		{
			yield = 2;
			rawfoodtype = "FoodchickenRaw";
		};
		
		class Rabbit : Default
		{
			yield = 2;
			rawfoodtype = "FoodrabbitRaw";
		};
	};
};
