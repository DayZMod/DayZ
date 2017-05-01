#include "Configs\basicDefines.hpp"
#include "version.hpp"

class CfgPatches
{
	class dayz_code
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"map_eu",
			
			//dayz_anim references all CA addons
			"dayz_anim",
			
			//dayz addons
			"dayz",
			"dayz_buildings",
			"dayz_communityassets",
			"dayz_communityweapons",
			"dayz_equip",
			"dayz_sfx",
			"dayz_vehicles",
			"dayz_weapons",
			"community_crossbow",
			
			//shacktac addons
			"st_bunnyhop",
			"st_collision",
			"st_evasive"
		};
	};
};

class CfgMods
{
	class DayZ
	{
		dir = "DayZ";
		name = "DayZ";
		picture = "z\addons\dayz_code\gui\mod.paa";
		hidePicture = 0;
		hideName = 0;
		action = "http://www.dayzmod.com";
		version = DayZVersion;
		hiveVersion = 0.96;
		requiredAddons[] = {"Chernarus"};
	};
};

class CfgAddons
{
	access = 1;
	class PreloadBanks {};
	class PreloadAddons
	{
		class dayz
		{
			list[] =
			{
				"dayz_code",
				"dayz",
				"dayz_equip",
				"dayz_communityassets",
				"dayz_weapons",
				"dayz_communityweapons",
				"dayz_sfx",
				"ST_bunnyhop",
				"st_collision",
				"st_evasive",
				"CfgVehicles"
			};
		};
	};
};

class DefaultEventhandlers {
	init = "if (isNil 'BIS_Effects_Init_DZ') then {[] call compile preProcessFileLineNumbers '\z\addons\dayz_code\system\BIS_Effects\init.sqf';};";
};

#include "Configs\rscTitles.hpp"
#include "Configs\CfgWorlds.hpp"
#include "Configs\CfgMoves.hpp"
#include "Configs\CfgVehicles\CfgVehicles.hpp"
#include "Configs\CfgWeapons\CfgWeapons.hpp"
#include "Configs\CfgCrafting\CfgCrafting.hpp"
#include "Configs\CfgConstruction\CfgConstruction.hpp"
#include "Configs\CfgMagazines\CfgMagazines.hpp"
#include "Configs\CfgLoot\CfgLoot.hpp"
#include "Configs\CfgMarkers.hpp"
#include "Configs\CfgAmmo.hpp"
#include "Configs\CfgObjectCompositions.hpp"
#include "Configs\CfgTownGenerator\CfgTownGeneratorChernarus.hpp"
#include "Configs\CfgGrid\CfgGrid.hpp"
#include "Configs\CfgFaces.hpp"
#include "Configs\CfgGlasses.hpp"
#include "Configs\CfgArma.hpp"
#include "Configs\CfgRecoils.hpp"
#include "gui\padlock\padlock_ui.hpp"

class CfgTasks
{
	//agentTasks[] = {"ZedMainTask"};
	class ZedMainTask
	{
		name = "Zed Main Task";
		//fsm = "\ca\animals2\Data\scripts\main.fsm";
		fsm = "\z\AddOns\dayz_code\system\main.fsm";
		condition = "\ca\animals2\Data\scripts\createSingleTask.sqf";
		description = "Zed master task";
		destination = "";
		resources[] = {};
	};
};