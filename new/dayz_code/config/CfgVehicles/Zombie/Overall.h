class DZ_ZombieOverall1 : DZ_ZombieBase
{ 
	displayName = $STR_ZNAME_WORKER;
	
	model = "\Ca\characters_E\Overall\Overall";
	hiddenSelections[] = {"Camo"};
	
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"Ca\characters_E\Overall\Data\Overall.rvmat",
			"Ca\characters_E\Overall\Data\W1_Overall.rvmat",
			"Ca\characters_E\Overall\Data\W2_Overall.rvmat"
		};
	};
}; 
class DZ_ZombieOverall2 : DZ_ZombieOverall1
{
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_2_co.paa"};
};

class DZ_ZombieOverall3 : DZ_ZombieOverall1
{
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_3_co.paa"};
};

class DZ_ZombieOverall4 : DZ_ZombieOverall1
{
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_4_co.paa"};
};

class DZ_ZombieOverall5 : DZ_ZombieOverall1
{
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_5_co.paa"};
};



class DZ_ViralOverall1 : DZ_ViralBase
{ 
	model = "\Ca\characters_E\Overall\Overall";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_1_co.paa"};
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters_E\Overall\Data\Overall.rvmat", "Ca\characters_E\Overall\Data\W1_Overall.rvmat", "Ca\characters_E\Overall\Data\W2_Overall.rvmat"};
	};
}; 
class DZ_ViralOverall2 : DZ_ViralOverall1
{
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_2_co.paa"};
};

class DZ_ViralOverall3 : DZ_ViralOverall1
{
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_3_co.paa"};
};

class DZ_ViralOverall4 : DZ_ViralOverall1
{
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_4_co.paa"};
};

class DZ_ViralOverall5 : DZ_ViralOverall1
{
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_5_co.paa"};
};