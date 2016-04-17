class DZ_ZombieVillager1 : DZ_ZombieBase
{
	model = "\ca\characters2\civil\Villager\Villager";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_co.paa"};
	
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"ca\characters\heads\male\defaulthead\data\hhl.rvmat",
			"ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat",
			"ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat",
			"ca\characters2\Civil\Villager\Data\villager.RVmat",
			"ca\characters2\Civil\Villager\Data\villager_w1.RVmat",
			"ca\characters2\Civil\Villager\Data\villager_w2.RVmat"
		};
	};
};

class DZ_ZombieVillager2 : DZ_ZombieVillager1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_v2_co.paa"};
};

class DZ_ZombieVillager3 : DZ_ZombieVillager1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_v3_co.paa"};
};



class DZ_ViralVillager1 : DZ_ViralBase
{
	model = "\ca\characters2\civil\Villager\Villager";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_co.paa"};
	
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"ca\characters\heads\male\defaulthead\data\hhl.rvmat",
			"ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat",
			"ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat",
			"ca\characters2\Civil\Villager\Data\villager.RVmat",
			"ca\characters2\Civil\Villager\Data\villager_w1.RVmat",
			"ca\characters2\Civil\Villager\Data\villager_w2.RVmat"
		};
	};
};

class DZ_ViralVillager2 : DZ_ViralVillager1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_v2_co.paa"};
};

class DZ_ViralVillager3 : DZ_ViralVillager1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_v3_co.paa"};
};