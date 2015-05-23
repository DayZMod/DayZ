class Blueprint_AntibacterialWipe : Recipe {
	displayName = $STR_CRAFT_NAME_AntibacterialWipe;
	input[] = 
	{
		{"ItemBandage","CfgMagazines",1},
		{"ItemAntibiotic","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemAntibacterialWipe","CfgMagazines",2}
	};
	required[] = 
	{
	};
};
