class DZ_Hero_M : DZ_PlayerBase_M
{
	scope = public;
	displayName = $STR_CHAR_1;
	model = "\dayz\characters\man_hero";
	HiddenSelections[] = {"camo1", "camo2", "camo3"};
	
	HiddenSelectionsTextures[] =
	{
		"ca\characters_pmc\pmc_soldier\data\bauer_co.paa",
		"ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa",
		"ca\characters_pmc\pmc_soldier\data\headgear_co.paa"
	};
};