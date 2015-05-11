class Blueprint_HerbalDrink : Recipe {
	displayName = $STR_CRAFT_NAME_HerbalDrink;
	input[] = 
	{
		{"ItemWaterbottleBoiled","CfgMagazines",1},
		{"equip_herb_box","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemWaterBottleHerbal","CfgMagazines",1}
	};
	required[] = 
	{
	};
};
