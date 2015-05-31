class Loot : Default
{
	scope = public;
	value = 0;
	type = WeaponNoSlot;
	displayName = "Use";
	canDrop = false;
	muzzles[] = {this};
	modes[] = {this};
	useAction = false;
	useActionTitle = "";
	enableAttack = false;
	showToPlayer = false;
	
	//Insert here magazines to show up as "Take x" in action menu
	magazines[] =
	{
		"ItemBandage",
		"ItemHeatPack",
		"PartWoodPile",
		"PartFueltank",
		"PartWheel",
		"PartGeneric",
		"PartEngine",
		"PartVRotor",
		"PartGlass",
		"ItemWaterbottle",
		"ItemWaterbottleUnfilled",
		"ItemEpinephrine",
		"ItemMorphine",
		//"ItemBloodbag",//old type removed
		"ItemAntibiotic",
		"ItemPainkiller",
		"ItemJerrycan",
		"ItemGenerator",
		"ItemTent",
		"ItemSandbag",
		"ItemTankTrap",
		"ItemWire",
		"FoodSteakRaw",
		"TrashTinCan",
		"ItemSodaLirik",
		"ItemSodaMtngreen",
		"FoodEdible",
		"FoodSteakCooked",
		"FoodCanBakedBeans",
		"FoodCanSardines",
		"FoodCanFrankBeans",
		"FoodCanPasta"
	};
};