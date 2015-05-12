class Blueprint_Binoculars : Recipe {
	displayName = $STR_CRAFT_NAME_Binoculars;
	input[] = 
	{
		{"Attachment_SCOPED","CfgMagazines",2},
		{"equip_duct_tape","CfgMagazines",1}
	};
	output[] = 
	{
		{"Binocular","CfgWeapons",1}
	};
	required[] = 
	{
	};
};

