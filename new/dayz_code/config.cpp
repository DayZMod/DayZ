#include "config\BasicDefines.h"

class CfgPatches
{
	class Dayz_Code
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
		version = "DayZMod 1.8.7.dev1";
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

#include "ui\Rsc\Rsc.h"

#include "config\CfgArma.h"

#include "config\CfgVehicles\CfgVehicles.h"

#include "config\CfgAmmo\CfgAmmo.h"
#include "config\CfgMagazines\CfgMagazines.h"
#include "config\CfgWeapons\CfgWeapons.h"
#include "config\CfgRecoils.h"

#include "config\CfgObjectCompositions\CfgObjectCompositions.h"