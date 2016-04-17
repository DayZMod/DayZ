class DZ_ZombieHunter1 : DZ_ZombieBase
{ 
	displayName = $STR_ZNAME_HUNTER;
	
	model = "\ca\characters2\civil\Woodlander\Woodlander";
	hiddenSelections[] = {"Camo"};
	
	zombieLoot = ZombieHunter;
	
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"ca\characters2\civil\Woodlander\data\Woodlander.rvmat",
			"ca\characters2\civil\Woodlander\data\W1_Woodlander.rvmat",
			"ca\characters2\civil\Woodlander\data\W2_Woodlander.rvmat",
			"ca\characters\heads\male\defaulthead\data\hhl.rvmat",
			"ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat",
			"ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"
		};
	};
};

class DZ_ZombieVillager2 : DZ_ZombieVillager1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\Woodlander\Data\woodlander_v2_co.paa"};
};

class DZ_ZombieVillager3 : DZ_ZombieVillager1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\Woodlander\Data\woodlander_v3_co.paa"};
};

class DZ_ZombieVillager4 : DZ_ZombieVillager1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\Woodlander\Data\woodlander_v4_co.paa"};
};