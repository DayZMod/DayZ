class DZ_Camo_M : DZ_PlayerBase_M
{
	scope = public;
	displayName = $STR_CHAR_1;
	model = "\ca\characters_d_BAF\BAF_Soldier_light_BAF";
	
	hiddenSelections[] = {"Camo", "Camo2", "Camo3"};
	hiddenSelectionsTextures[] =
	{
		"\ca\characters_W_baf\data\camo_dpm_co.paa",
		"\ca\characters_W_baf\data\armour_dpm_co.paa",
		"\ca\characters_W_baf\data\equip_dpm_co.paa"
	};
	
	camouflage = 1.4;
	
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