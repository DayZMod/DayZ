class Blueprint_woodensplint : Recipe {
	displayName = $STR_ITEM_NAME_WOODENSPLINT;
	input[] = 
	{
		{"ItemPlank","CfgMagazines",1},
		{"equip_string","CfgMagazines",1},
		{"equip_duct_tape","CfgMagazines",1}
	};
	output[] = 
	{
		{"equip_woodensplint","CfgMagazines",2}
	};
	required[] = 
	{
	};
};
