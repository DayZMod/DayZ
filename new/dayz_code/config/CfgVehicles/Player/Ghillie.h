class DZ_Ghillie_M : DZ_PlayerBase_M
{
	scope = public;
	displayName = "Sniper";
	
	camouflage = 0.5;
	
	model = "\ca\characters_e\Ghillie\Ghillie_Overall";
	
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] =
	{
		"\ca\characters2\Data\ghillie_overall2_co.paa",
	};
	
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"ca\characters_d_baf\Data\armour.rvmat",
			"ca\characters_d_baf\Data\W1_armour.rvmat",
			"ca\characters_d_baf\Data\W2_armour.rvmat",
			
			"ca\characters_d_baf\Data\camo.rvmat",
			"ca\characters_d_baf\Data\W1_camo.rvmat",
			"ca\characters_d_baf\Data\W2_camo.rvmat"
		};
	};
};