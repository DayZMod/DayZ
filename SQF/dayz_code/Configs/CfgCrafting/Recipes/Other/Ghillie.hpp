class Blueprint_Ghillie : Recipe {
	displayName = $STR_CRAFT_NAME_Binoculars;
	input[] = 
	{
		{"WeaponHolder_ItemCamoNet","CfgMagazines",1},
		{"equip_rag","CfgMagazines",1}
	};
	output[] = 
	{
		{"Skin_Sniper1_DZ","CfgMagazines",2}
	};
	required[] = 
	{
		{"ItemKnife","CfgWeapons",1}
	};

