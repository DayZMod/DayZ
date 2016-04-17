#define DEFAULT(var, val) if (isNil #var || { typename var !=  typename val }) then { var = val }

DEFAULT(dz_cfg_preset, 0);

DEFAULT(dz_cfg_instance, 1337);
DEFAULT(dz_cfg_antihack, false);
DEFAULT(dz_cfg_quickSwitch, false);
DEFAULT(dz_cfg_poi, true);
DEFAULT(dz_cfg_infectiousWaterHoles, true);
DEFAULT(dz_cfg_damageMultiplier, 1);
DEFAULT(dz_cfg_maxGlobalZeds, 500);

DEFAULT(dz_cfg_combatTimer, 60 * 5);
DEFAULT(dz_cfg_zombieCombatTimer, 30);
DEFAULT(dz_cfg_openTargetTimer, 60 * 10);

switch (dz_cfg_preset) do
{
	//Vanilla
	case 0:
	{
		DEFAULT(dz_cfg_spawnSelection, true);
		
		DEFAULT(dz_cfg_carePackageClutterCutter, 2);
		DEFAULT(dz_cfg_crashSiteClutterCutter, 2);
		DEFAULT(dz_cfg_infectedCampClutterCutter, 2);
		
		DEFAULT(dz_cfg_bleedingEffect, 3);
		DEFAULT(dz_cfg_forceFullMoon, true);
		DEFAULT(dz_cfg_temperatureOverride, false);
		DEFAULT(dz_cfg_advancedNutrition, true);
	};
	
	//Classic
	case 1:
	{
		DEFAULT(dz_cfg_spawnSelection, false);
		
		DEFAULT(dz_cfg_carePackageClutterCutter, 0);
		DEFAULT(dz_cfg_crashSiteClutterCutter, 0);
		DEFAULT(dz_cfg_infectedCampClutterCutter, 0);
		
		DEFAULT(dz_cfg_bleedingEffect, 2);
		DEFAULT(dz_cfg_forceFullMoon, false);
		DEFAULT(dz_cfg_temperatureOverride, true);
		DEFAULT(dz_cfg_advancedNutrition, false);
	};
	
	//Elite
	case 2:
	{
		DEFAULT(dz_cfg_spawnSelection, false);
		
		DEFAULT(dz_cfg_carePackageClutterCutter, 0);
		DEFAULT(dz_cfg_crashSiteClutterCutter, 0);
		DEFAULT(dz_cfg_infectedCampClutterCutter, 0);
		
		DEFAULT(dz_cfg_bleedingEffect, 3);
		DEFAULT(dz_cfg_forceFullMoon, false);
		DEFAULT(dz_cfg_temperatureOverride, false);
		DEFAULT(dz_cfg_advancedNutrition, true);
	};
};