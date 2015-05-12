class Blueprint_transfusionKit : Recipe {
	displayName = $STR_CRAFT_NAME_transfusionKit;
	input[] = 
	{
		{"equip_hose","CfgMagazines",1},
		{"emptyBloodBag","CfgMagazines",1}
	};
	output[] = 
	{
		{"transfusionKit","CfgMagazines",1}
	};
	required[] = 
	{
	};
};
