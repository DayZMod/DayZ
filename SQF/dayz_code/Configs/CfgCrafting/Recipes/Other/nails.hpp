class Blueprint_nails : Recipe {
	displayName = "Metal Nails";
	input[] = 
	{
		{"equip_metal_sheet","CfgMagazines",1}
	};
	output[] = 
	{
		{"equip_nails","CfgMagazines",4}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};