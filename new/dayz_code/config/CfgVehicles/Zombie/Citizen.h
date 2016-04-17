class DZ_ZombieCitizen1 : DZ_ZombieBase
{
	model = "\ca\characters_e\civil\citizen\citizen.p3d";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\citizen_co.paa"};
	
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"ca\characters_e\Civil\Citizen\data\citizen.rvmat",
			"ca\characters_e\Civil\Citizen\data\w1_citizen.rvmat",
			"ca\characters_e\Civil\Citizen\data\w2_citizen.rvmat"
		};
	};
};

class DZ_ZombieCitizen2 : DZ_ZombieCitizen1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\citizen_v2_co.paa"};
};

class DZ_ZombieCitizen3 : DZ_ZombieCitizen1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\citizen_v3_co.paa"};
};

class DZ_ZombieCitizen4 : DZ_ZombieCitizen1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\citizen_v4_co.paa"};
};



class DZ_ViralCitizen1 : DZ_ViralBase
{
	model = "\ca\characters_e\civil\citizen\citizen.p3d";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\citizen_co.paa"};
	
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"ca\characters_e\Civil\Citizen\data\citizen.rvmat",
			"ca\characters_e\Civil\Citizen\data\w1_citizen.rvmat",
			"ca\characters_e\Civil\Citizen\data\w2_citizen.rvmat"
		};
	};
};

class DZ_ViralCitizen2 : DZ_ViralCitizen1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\citizen_v2_co.paa"};
};

class DZ_ViralCitizen3 : DZ_ViralCitizen1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\citizen_v3_co.paa"};
};

class DZ_ViralCitizen4 : DZ_ViralCitizen1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\citizen_v4_co.paa"};
};