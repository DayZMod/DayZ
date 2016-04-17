class DZ_ZombieSuit1 : DZ_ZombieBase
{
	displayName = $STR_ZNAME_SUIT;
	
	model = "\ca\characters2\civil\Functionary\Functionary";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary_co.paa"};
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\Functionary\data\Functionary.rvmat", "ca\characters2\civil\Functionary\data\W1_Functionary.rvmat", "ca\characters2\civil\Functionary\data\W2_Functionary.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};

class DZ_ZombieSuit2 : DZ_ZombieSuit1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary2_co.paa"};
};