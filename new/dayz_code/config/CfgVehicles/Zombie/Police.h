class DZ_ZombiePolice : DZ_ZombieBase
{
	displayName = $STR_ZNAME_POLICEMAN;
	model = "ca\characters2\civil\policeman\policeman.p3d";
	
	zombieLoot = ZombiePolice;
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\policeman\data\policeman.rvmat", "ca\characters2\civil\policeman\data\w1_policeman.rvmat", "ca\characters2\civil\policeman\data\w2_policeman.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
	};
};