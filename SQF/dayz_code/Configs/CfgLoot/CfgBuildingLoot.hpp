#include "CfgLoot.hpp"

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		lootType[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {"SMAW","Javelin","G36C","Stinger"};
	};
	class Church: Default {
		zombieChance = 0.3;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
		lootChance = 0.3;
		lootPos[] = {};
		lootType[] = {
			{"equip_Crossbow_Kit","magazine",0.01},
			{"ItemSodaClays","magazine",0.01},
			{"ItemSodaMzly","magazine",0.01},
			{"ItemMatchbox","weapon",0.02},
			{"ItemBookBible","magazine",0.03},
			{"WoodenArrow","magazine",0.02},
			{"FoodCanCurgon","magazine",0.01},
			{"FoodCanRusStew","magazine",0.02},
			{"FoodChipsSulahoops","magazine",0.01},
			{"equip_rag","magazine",0.02},
			{"M1911_DZ","weapon",0.05},
			{"MeleeBaseBallBat","weapon",0.02},
			{"ItemTrashPaperMusic","magazine",0.03},
		//Bags
			{"DZ_ALICE_Pack_EP1","object",0.02},
		//multiple spawns	
			{"","Trash",0.10},
			{"","ammo",0.05},
			{"","attachmentsGeneric",0.03},
			{"","generic",0.08}
		};
	};
	class Castle: Default {
		zombieClass[] = {"z_new_villager2","z_new_villager3","z_new_villager4"};
		lootChance = 0.2;
		lootPos[] = {};
		lootType[] = {
		//one spawn
			{"ItemMatchbox","weapon",0.01},
			{"equip_Crossbow_Kit","magazine",0.01},
			{"ItemKnife","weapon",0.01},
			{"ItemMap","generic",0.01},
			{"ItemCompass","weapon",0.01},
			{"ItemFlashlight","weapon",0.02},
			{"ItemSandbag","magazine",0.04},
			{"Mosin_Nagant","weapon",0.01},
			{"Mosin_Nagant_broken","weapon",0.03},	
			{"WeaponHolder_ItemHatchet","object",0.01},
			{"WeaponHolder_ItemTent","object",0.01},
			{"WeaponHolder_ItemCamoNet","object",0.01},
			{"equip_rope","magazine",0.03},
			{"PartWoodPile","magazine",0.04},
			{"ItemPadlock","magazine",0.01},
			{"ItemPickaxe","weapon",0.01},
			{"ItemPickaxeBroken","weapon",0.02},
		//Bags
			{"DZ_Assault_Pack_EP1","object",0.04},
			{"DZ_Czech_Vest_Puch","object",0.04},
		//Multiple spawns	
			{"","Residential",0.10},
			{"","ammo",0.05},
			{"","Trash",0.10},
			{"","attachmentsGeneric",0.03},
			{"","generic",0.08}
		};
	};	
	class CarePackages: Default {
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
		//one spawn
			{"ItemSandbag","magazine",0.04},
			{"WeaponHolder_ItemTent","object",0.01},
			{"WeaponHolder_ItemCamoNet","object",0.01},
			{"WeaponHolder_ItemDomeTent","object",0.02},
			{"equip_rope","magazine",0.03},
			{"PartWoodPile","magazine",0.04},
			{"FoodCanBeef","magazine",0.05},
			{"FoodCanCurgon","magazine",0.05},
			{"equip_Crossbow_Kit","magazine",0.01},
			{"FoodCanRusCorn","magazine",0.05},
			{"FoodCanBoneboy","magazine",0.05},
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.04},
			{"ItemSodaLirik","magazine",0.05},
			{"ItemSodaPeppsy","magazine",0.10},
			{"","ammo",0.05},
			{"","attachmentsGeneric",0.03}
		};
	};	
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.5;
		lootPos[] = {};
		lootType[] = {
		//one spawn
			{"FoodCakeCremeCakeClean","magazine",0.01},
			{"ItemSodaMtngreen","magazine",0.01},
			{"ItemMatchbox","weapon",0.03},
			{"ItemWatch","generic",0.03},
			{"ItemKnife","generic",0.05},
			{"ItemFlashlight","generic",0.05},
			{"Makarov_DZ","weapon",0.02},
			{"Revolver_DZ","weapon",0.01},
			{"equip_Crossbow_Kit","magazine",0.01},
			{"Mosin_Nagant","weapon",0.01},	
			{"MR43","weapon",0.02},
			{"LeeEnfield_DZ","weapon",0.01},
			{"Winchester1866","weapon",0.03},
			{"M1911_DZ","weapon",0.05},
			{"MeleeBaseBallBat","weapon",0.02},
			{"WeaponHolder_ItemFuelcan","object",0.03},
			{"equip_herb_box","magazine",0.03},
			{"equip_pvc_box","magazine",0.03},
			{"ItemPainkiller","magazine",0.04},
			{"ItemBandage","magazine",0.06},
			//Bags
			{"DZ_ALICE_Pack_EP1","object",0.06},
			{"DZ_Patrol_Pack_EP1","object",0.08},
			{"DZ_Assault_Pack_EP1","object",0.06},
			{"WeaponHolder_ItemTent","object",0.01},
			{"ItemTrashPaper","magazine",0.03},
			{"ItemTrashPaperMusic","magazine",0.03},
			{"ItemDIY_wood","weapon",0.02},
			{"ItemDIY_Gate","weapon",0.01},
			{"equip_lever","magazine",0.01},
		//multiple spawns	
			{"","Residential",0.10},
			{"","Trash",0.10},
			{"","attachmentsGeneric",0.03},
			{"","ammo",0.05},
			{"","generic",0.08}
		};
	};

	class Construction: Default {
		zombieChance = 0.2;
		maxRoaming = 1;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		lootChance = 0.4;
		lootPos[] = {};
		lootType[] = {
			{"ItemLog","magazine", 0.09},
			{"ItemPlank","magazine", 0.09},
			{"equip_nails","magazine", 0.08},
			{"equip_metal_sheet_rusted","magazine", 0.09},
			{"equip_metal_sheet","magazine", 0.09},
			{"ItemStone","magazine", 0.05},
			{"ItemPickaxe","weapon",0.01},
			{"ItemPickaxeBroken","weapon",0.02},
			{"ItemSledgeHammer","weapon",0.01},
			{"ItemSledgeHammerBroken","weapon",0.02},
			{"equip_lever","magazine",0.01},
		/*	{"ItemDIY_wood","weapon",0.04}, // temporary
			{"ItemEtool","weapon",0.02}, // temporary*/
			{"","Trash",0.10},
			{"","attachmentsGeneric",0.03}
		};
	};

	class ResidentialRuins: Default {
		zombieChance = 0.3;
		maxRoaming = 1;
		zombieClass[] = {"z_new_villager2","z_new_villager3","z_new_villager4"};
		lootChance = 0.4;
		lootPos[] = {};
		lootType[] = {
			{"ItemLog","magazine", 0.10},
			{"ItemStone","magazine", 0.10},
			{"equip_metal_sheet_rusted","magazine", 0.07},
			/*{"ItemDIY_wood","weapon",0.04}, // temporary
			{"ItemEtool","weapon",0.02}, // temporary*/
			{"","Trash",0.04},
			{"","attachmentsGeneric",0.03}
		};
	};

	class Wood: Default {
		zombieChance = 0;
		maxRoaming = 0;
		zombieClass[] = {};
		lootChance = 0.5;
		lootPos[] = {};
		lootType[] = {
			{"ItemLog","magazine", 0.01},
			{"ItemPlank","magazine", 0.01},
			{"PartWoodPile","magazine", 0.01}
		};
	};

	class Industrial: Default { //254
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3","z_new_worker2","z_new_worker3","z_new_worker4"};
		maxRoaming = 2;
		lootChance = 0.3;
		lootPos[] = {};
		lootType[] = {
		//one spawn
			{"ItemKnife","weapon",0.03},
			{"ItemToolbox","weapon",0.06},
			{"ItemFlashlight","weapon",0.02},
			{"ItemSandbag","magazine",0.06},
			{"WeaponHolder_ItemCrowbar","object",0.08},
			{"WeaponHolder_ItemHatchet","object",0.05},
			{"WeaponHolder_PartGeneric","object",0.04},
			{"WeaponHolder_PartWheel","object",0.05},
			{"WeaponHolder_PartFueltank","object",0.02},
			{"WeaponHolder_PartEngine","object",0.02},
			{"WeaponHolder_PartGlass","object",0.04},
			{"WeaponHolder_ItemJerrycan","object",0.04},
			{"WeaponHolder_ItemFuelcan","object",0.03},
			{"equip_rope","magazine",0.03},
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.04},
			{"ItemSodaSmasht","magazine",0.01},
			{"ItemSodaDrwaste","magazine",0.01},
			{"FoodCanPowell","magazine",0.01},
			{"FoodChipsSulahoops","magazine",0.01},
			{"equip_brick","magazine",0.01},
			{"equip_duct_tape","magazine",0.03},
			{"equip_hose","magazine",0.02},
			{"equip_nails","magazine",0.06},
			{"Mosin_Nagant","weapon",0.01},
			{"Mosin_Nagant_broken","weapon",0.03},	
			{"equip_rag","magazine",0.01},
			{"ItemPickaxe","weapon",0.01},
			{"ItemPickaxeBroken","weapon",0.02},
			{"ItemSledgeHammer","weapon",0.01},
			{"ItemSledgeHammerBroken","weapon",0.02},
			{"equip_lever","magazine",0.01},
			{"equip_scrapelectronics","magazine",0.01},
			{"equip_metal_sheet","magazine",0.02},
			{"equip_2inch_metal_pipe","magazine",0.02},
			{"equip_1inch_metal_pipe","magazine",0.02},
			{"ItemPlank","magazine", 0.16},
		//multiple spawns	
			{"","Trash",0.10},
			{"","ammo",0.05},
			{"","generic",0.08},
			{"","attachmentsGeneric",0.03}
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_new_villager2","z_new_villager3","z_new_villager4"};
		lootChance = 0.5;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"ItemMatchbox","weapon",0.05},
			{"ItemSandbag","magazine",0.04},
			{"WeaponHolder_ItemHatchet","object",0.05},
			{"CZ550_DZ","weapon",0.02},
			{"LeeEnfield_DZ","weapon",0.03},
			{"Winchester1866","weapon",0.03},
			{"Crossbow_DZ","weapon",0.03},
			{"Mosin_Nagant","weapon",0.01},
			{"Mosin_Nagant_broken","weapon",0.03},	
			{"MR43","weapon",0.05},
			{"MeleeMachete","weapon",0.04},
			{"WeaponHolder_ItemJerrycan","object",0.03},
			{"equip_rope","magazine",0.03},
			{"equip_duct_tape","magazine",0.03},
			{"TrapBear","magazine",0.01},
			{"PartWoodPile","magazine",0.08},
			{"2Rnd_shotgun_74Pellets","magazine",0.08},
			{"5x_22_LR_17_HMR","magazine",0.01},
			{"10x_303","magazine",0.04},
			{"15Rnd_W1866_Slug","magazine",0.02},
			{"WoodenArrow","magazine",0.04},
			{"FoodCanBoneboy","magazine",0.01},
			{"equip_nails","magazine",0.06},
			{"equip_string","magazine",0.04},
			{"equip_lever","magazine",0.02},
		//bags
		//multiple spawns		
			{"","Trash",0.10},
			{"","ammo",0.05},
			{"","attachmentsGeneric",0.03},
			{"","generic",0.08}
		};
	};
	class Supermarket: Default {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_new_villager2","z_new_villager3","z_new_villager4"};
		lootType[] = {
		//one spawn
			{"ItemWatch","generic",0.05},
			{"ItemCompass","generic",0.01},
			{"ItemMap","generic",0.06},
			{"ItemFlashlight","generic",0.05},
			{"ItemKnife","generic",0.02},
			{"ItemMatchbox","weapon",0.05},
			{"Binocular","weapon",0.03},
			{"Makarov_DZ","weapon",0.02},
			{"LeeEnfield_DZ","weapon",0.01},
			{"Mosin_Nagant","weapon",0.01},
			{"Mosin_Nagant_broken","weapon",0.03},	
			{"Revolver_DZ","weapon",0.01},
			{"Winchester1866","weapon",0.03},
			{"Crossbow_DZ","weapon",0.01},
			{"MR43","weapon", 0.01},			
			{"WeaponHolder_ItemTent","object",0.01},
			{"WeaponHolder_ItemCamoNet","object",0.01},
			{"equip_pvc_box","magazine",0.03},
			{"equip_herb_box","magazine",0.03},
			{"equip_duct_tape","magazine",0.03},
			{"PartWoodPile","magazine",0.04},
			{"DZ_Patrol_Pack_EP1","object",0.05}, //12
			{"DZ_Czech_Vest_Puch","object",0.02}, // 16
			{"DZ_TK_Assault_Pack_EP1","object",0.02}, // 16
			{"ItemDIY_wood","weapon",0.02},
			{"ItemDIY_Gate","weapon",0.01},
			//med
			//{"ItemAntibiotic",0.01},
			{"ItemPainkiller","magazine",0.03},
			{"ItemAntibacterialWipe","magazine",0.04},
		//ammo
			{"8Rnd_9x18_Makarov","magazine",0.05},
			//{"7Rnd_45ACP_1911",0.03}, //military/police
			{"10x_303","magazine",0.04},
			{"6Rnd_45ACP","magazine",0.05},
			{"15Rnd_W1866_Slug","magazine",0.06},
			{"WoodenArrow","magazine",0.04},
			{"2Rnd_shotgun_74Pellets","magazine",0.08},
			{"HandChemGreen","magazine",0.04},
			{"HandChemBlue","magazine",0.04},
			{"HandChemRed","magazine",0.04},
			{"HandRoadFlare","magazine",0.05},
		//drinks
			{"ItemWaterbottleUnfilled","magazine",0.01},
			{"ItemWaterbottle","magazine",0.01},
			{"ItemWaterbottleDmg","magazine",0.03},
			{"ItemSodaLirik","magazine",0.05},
			{"ItemSodaPeppsy","magazine",0.05},
			{"ItemSodaMtngreen","magazine",0.01},
			{"ItemSodaR4z0r","magazine",0.01},
			{"ItemSodaClays","magazine",0.01},
			{"ItemSodaSmasht","magazine",0.01},
			{"ItemSodaDrwaste","magazine",0.01},
			{"ItemSodaLemonade","magazine",0.01},
			{"ItemSodaLvg","magazine",0.01},
			{"ItemSodaMzly","magazine",0.01},
			{"ItemSodaRabbit","magazine",0.01},
		//food
			{"FoodNutmix","magazine",0.03},
			{"FoodCanBakedBeans","magazine",0.01},
			{"FoodCanSardines","magazine",0.01},
			{"FoodCanFrankBeans","magazine",0.01},
			{"FoodCanPasta","magazine",0.01},
			{"FoodCanBadguy","magazine",0.01},
			{"FoodCanBoneboy","magazine",0.05},
			{"FoodCanCorn","magazine",0.01},
			{"FoodCanCurgon","magazine",0.05},
			{"FoodCanDemon","magazine",0.01},
			{"FoodCanFraggleos","magazine",0.01},
			{"FoodCanBeef","magazine",0.05},
			{"FoodCanHerpy","magazine",0.01},
			{"FoodCanDerpy","magazine",0.01},
			{"FoodCanOrlok","magazine",0.01},
			{"FoodCanPowell","magazine",0.01},
			{"FoodCanTylers","magazine",0.01},
			{"FoodCanUnlabeled","magazine",0.04},
			{"FoodPistachio","magazine",0.03},
			{"FoodNutmix","magazine",0.04},
			{"FoodChipsSulahoops","magazine",0.01},
			{"FoodChipsMysticales","magazine",0.01},
			{"FoodCandyAnders","magazine",0.01},
			{"FoodCandyLegacys","magazine",0.01},
			{"FoodCandyMintception","magazine",0.01},
			{"FoodCanRusStew","magazine",0.05},
			{"FoodCanRusPork","magazine",0.05},
			{"FoodCanRusPeas","magazine",0.05},
			{"FoodCanRusMilk","magazine",0.04},
			{"FoodCanRusCorn","magazine",0.05},
			{"FoodCakeCremeCakeClean","magazine",0.03},
		//special
			{"equip_nails","magazine",0.06},
		//multiple spawns
			{"","ammo",0.05},	
			{"","attachmentsGeneric",0.03},			
			{"","Trash",0.10}
		};
	};	
	class Office: Residential {
		maxRoaming = 3;
		lootChance = 0.2;
		zombieClass[] = {"z_suit1","z_suit2"};
		lootType[] = {
		//one spawn
			{"ItemWatch","weapon",0.08},
			{"ItemMap","weapon",0.06}, 
			{"ItemAntibacterialWipe","magazine",0.04},
			{"ItemPainkiller","magazine",0.04},
			{"M1911_DZ","weapon",0.05},
			{"Mosin_Nagant_broken","weapon",0.03},	
			{"MeleeBaseBallBat","weapon",0.02},
			{"equip_duct_tape","magazine",0.03},
		//multiple spawns
			{"","Trash",0.10},
			{"","ammo",0.05},
			{"","attachmentsGeneric",0.03},
			{"","generic",0.08}
		};
	};
	class InfectedCamps: Default { //5
		lootPos[] = {};
		lootType[] = {
		//No Objects IMPORTANT
		//one spawn
		//drinks
			{"ItemWaterbottleUnfilled","generic",0.01},
			{"ItemWaterbottle","generic",0.01},
			{"ItemWaterbottleDmg","magazine",0.03},
			{"ItemSodaLirik","generic",0.05},
			{"ItemSodaPeppsy","generic",0.05},
			{"ItemSodaMtngreen","generic",0.01},
			{"ItemSodaR4z0r","generic",0.01},
			{"ItemSodaClays","generic",0.01},
			{"ItemSodaSmasht","generic",0.01},
			{"ItemSodaDrwaste","generic",0.01},
			{"ItemSodaLemonade","generic",0.01},
			{"ItemSodaLvg","generic",0.01},
			{"ItemSodaMzly","generic",0.01},
			{"ItemSodaRabbit","generic",0.01},
			//food
			{"FoodNutmix","generic",0.03},
			{"FoodCanBakedBeans","generic",0.01},
			{"FoodCanSardines","generic",0.01},
			{"FoodCanFrankBeans","generic",0.01},
			{"FoodCanPasta","generic",0.01},
			{"FoodCanBadguy","generic",0.01},
			{"FoodCanBoneboy","generic",0.05},
			{"FoodCanBeef","generic",0.05},
			{"FoodCanCorn","generic",0.01},
			{"FoodCanCurgon","generic",0.05},
			{"FoodCanDemon","generic",0.01},
			{"FoodCanFraggleos","generic",0.01},
			{"FoodCanHerpy","generic",0.01},
			{"FoodCanDerpy","generic",0.01},
			{"FoodCanOrlok","generic",0.01},
			{"FoodCanPowell","generic",0.01},
			{"FoodCanTylers","generic",0.01},
			{"FoodCanUnlabeled","generic",0.04},
			{"FoodPistachio","generic",0.03},
			{"FoodNutmix","generic",0.04},
			{"FoodChipsSulahoops","generic",0.01},
			{"FoodChipsMysticales","generic",0.01},
			{"FoodCandyAnders","generic",0.01},
			{"FoodCandyLegacys","generic",0.01},
			{"FoodCandyMintception","generic",0.01},
			{"FoodCanRusStew","generic",0.05},
			{"FoodCanRusPork","generic",0.05},
			{"FoodCanRusPeas","generic",0.05},
			{"FoodCanRusMilk","generic",0.04},
			{"FoodCanRusCorn","generic",0.05},
			{"FoodCakeCremeCakeClean","generic",0.03},
		//tools
			{"ItemWatch","tool",0.05},
			{"ItemCompass","tool",0.05},
			{"ItemFlashlight","tool",0.06},
			{"ItemKnife","tool",0.07},
			{"equip_lever","magazine",0.02},
			{"ItemMatchbox","tool",0.06},
			{"Binocular","tool",0.06},
			{"ItemCrowbar","tool",0.08},
		//weapons
			{"Makarov_DZ","weapon",0.04},
			{"LeeEnfield_DZ","weapon",0.03},
			{"Mosin_Nagant","weapon",0.01},
			{"Revolver_DZ","weapon",0.04},
			{"Winchester1866","weapon",0.03},
			{"Crossbow_DZ","weapon",0.01},
			{"MR43","weapon",0.03},
			{"MeleeBaseBallBat","weapon",0.02},
		//special
			{"PartGeneric","generic",0.04},
			{"PartWheel","generic",0.02},
			{"PartFueltank","generic",0.02},
			{"PartEngine","generic",0.02},
			{"ItemDIY_wood","weapon",0.02},
			{"ItemDIY_Gate","weapon",0.01},
		//Medical	
			{"ItemBandage","magazine",0.06},
			{"ItemPainkiller","magazine",0.04},
			{"ItemMorphine","magazine",0.04},
			{"ItemEpinephrine","magazine",0.03},
			{"ItemAntibacterialWipe","magazine",0.04},
			{"ItemAntibiotic","magazine",0.01},
			{"emptyBloodBag","magazine",0.04},
			{"bloodBagOPOS","magazine",0.01},
			{"bloodBagONEG","magazine",0.01},
			{"bloodBagABPOS","magazine",0.01},
			{"bloodBagABNEG","magazine",0.01},
			{"bloodBagBPOS","magazine",0.01},
			{"bloodBagBNEG","magazine",0.01},
			{"bloodBagAPOS","magazine",0.01},
			{"bloodBagANEG","magazine",0.01},
			{"equip_gauzepackaged","magazine",0.02},
			{"equip_gauze","magazine",0.04},
			{"bloodTester","magazine",0.06},
			{"transfusionKit","magazine",0.04},
		//mags special
			{"equip_rope","magazine",0.03},
			{"equip_herb_box","magazine",0.03},
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.04},
			{"ItemSodaMtngreen","magazine",0.01},
			{"PartWoodPile","magazine",0.06},
			{"Skin_Camo1_DZ","magazine",0.01},
			{"ItemBookBible","magazine",0.02}
		};
	};
	class HeliCrashWEST: Default {
		zombieChance = 1;
		maxRoaming = 8;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"NVGoggles","weapon",0.01},
		//weapons
			{"FNFAL_DZ","weapon",0.04},
			{"FNFAL_ANPVS4_DZ","weapon",0.01},
			{"Mk48_DZ","weapon",0.03},
			{"M249_DZ","weapon",0.04},
			{"L85_Holo_DZ","weapon",0.03},
			{"G36C_DZ","weapon",0.03},
			{"G36A_Camo_DZ","weapon",0.03},
			{"G36K_Camo_DZ","weapon",0.03},
			{"M9_DZ","weapon",0.02},
			{"M24_DZ","weapon",0.01},
		//special
			{"MedBox2","object",0.05},
			{"AmmoBoxSmall_556","object",0.05},
			{"WeaponHolder_ItemCamoNet","object",0.01},
		//mags special
			{"Skin_Camo1_DZ","magazine",0.02},
			{"Skin_Sniper1_DZ","magazine",0.02},
			{"Tranquiliser_Bolt","magazine",0.02},
		//bags
		//multiple spawns
			{"","medical",0.05},
			{"","ammo",0.05},
			{"","attachmentsWest",0.03},
			{"","militaryWEST",0.10}
		};
	};
	class HeliCrashEAST: Default {
		zombieChance = 1;
		maxRoaming = 8;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"Binocular","weapon",0.01},
			{"ItemKnife","generic",0.03},
			{"ItemCompass","generic",0.04},
		//weapons
			{"AKM_DZ","weapon",0.03}, 
			{"AKS74U_DZ","weapon",0.03},
			{"SVD_DZ","weapon",0.01},
			{"M14_DZ","weapon",0.03},
			{"DMR_DZ","weapon",0.02},
			{"Bizon_DZ","weapon",0.04},
			{"RPK74_DZ","weapon",0.02},
			{"Makarov_DZ","weapon",0.02},
		//special
			{"MedBox2","object",0.05},
			{"AmmoBoxSmall_762","object",0.03},
			{"WeaponHolder_PartVRotor","object",0.02},
			{"WeaponHolder_ItemCamoNet","object",0.01},
			{"Tranquiliser_Bolt","magazine",0.02},
		//mags special
			{"100Rnd_762x54_PK","magazine",0.01},
			{"Skin_Sniper1_DZ","magazine",0.03},
		//bags
		//multiple spawns
			{"","medical",0.05},
			{"","ammo",0.05},
			{"","attachmentsEast",0.03},
			{"","militaryEAST",0.10}
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 4;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 0.4;
		lootPos[] = {};
		lootType[] = {
			{"MedBox2","object",0.01},
			{"MedBox1","object",0.01},
			{"ItemBandage","magazine",0.06},
			{"ItemPainkiller","magazine",0.04},
			{"ItemMorphine","magazine",0.04},
			{"ItemEpinephrine","magazine",0.03},
			{"ItemAntibacterialWipe","magazine",0.04},
			{"ItemAntibiotic","magazine",0.01},
			{"emptyBloodBag","magazine",0.04},
			{"bloodBagOPOS","magazine",0.02},
			{"bloodBagONEG","magazine",0.02},
			{"bloodBagABPOS","magazine",0.02},
			{"bloodBagABNEG","magazine",0.02},
			{"bloodBagBPOS","magazine",0.02},
			{"bloodBagBNEG","magazine",0.02},
			{"bloodBagAPOS","magazine",0.02},
			{"bloodBagANEG","magazine",0.02},
			{"equip_gauzepackaged","magazine",0.02},
			{"equip_gauze","magazine",0.04},
			{"bloodTester","magazine",0.03},
			{"transfusionKit","magazine",0.04},
		//multiple spawns
			{"","Trash",0.10},
			{"","attachmentsGeneric",0.03},
			{"","ammo",0.05}
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_new_worker2","z_new_worker3","z_new_worker4"};
		lootChance = 0.2;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"Binocular","weapon",0.05},
			{"ItemFlashlightRed","generic",0.06},
			{"ItemKnife","generic",0.06},
			{"ItemGPS","weapon",0.01},
			{"ItemMap","generic",0.03},
			{"ItemEtool","weapon",0.03},
		//weapons
			{"M1911_DZ","weapon",0.05},
			{"M9_DZ","weapon",0.05},
			{"M16A2","weapon",0.05},
			{"Makarov_DZ","weapon",0.05},
			{"AK74_DZ","weapon",0.06},
			{"M4A1_DZ","weapon",0.02},
			{"AKS74U_DZ","weapon",0.04},
			{"AKM_DZ","weapon",0.02},
			{"M1014_DZ","weapon",0.04},
			{"PDW_DZ","weapon",0.05},
			{"Remington870_lamp","weapon",0.05},
			{"G17_DZ","weapon",0.03},
			{"MP5_DZ","weapon",0.04},
			{"Skin_Soldier1_DZ","magazine",0.02},
		//special
		//mags special
			{"ItemSandbag","magazine",0.04},
		//bags
			{"DZ_British_ACU","object",0.02}, // 18
			{"DZ_CivilBackpack_EP1","object",0.01}, // 24			
		//multiple spawns
			{"","military",0.10},
			{"","Trash",0.10},
			{"","ammo",0.10},
			{"","attachmentsGeneric",0.04},
			{"","attachmentsEast",0.02},
			{"","generic",0.08}
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.8;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy","z_new_worker2","z_new_worker3","z_new_worker4"};
		lootChance = 0.1;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"Binocular","weapon",0.03},
			{"ItemFlashlightRed","generic",0.05},
			{"ItemKnife","generic",0.05},
			{"ItemGPS","weapon",0.01},
			{"ItemMap","generic",0.03},
			{"Binocular_Vector","generic",0.01},
		//weapons
			{"M16A2","weapon",0.05},
			{"M249_DZ","weapon",0.02},
			{"M9_DZ","weapon",0.05},
			{"Makarov_DZ","weapon",0.05},
			{"AK74_DZ","weapon",0.05},
			{"M4A1_DZ","weapon",0.02},
			{"AKS74U_DZ","weapon",0.05},
			{"AKM_DZ","weapon",0.04},
			{"M24_DZ","weapon",0.01},
			{"SVD_DZ","weapon",0.02},
			{"M1014_DZ","weapon",0.05},
			{"M14_DZ","weapon",0.02},
			{"UZI_DZ","weapon",0.08},
			{"Remington870_lamp","weapon",0.07},
			{"G17_DZ","weapon",0.03},
			{"M240_DZ","weapon",0.01},
			{"M16A4_DZ","weapon",0.04},
			{"Mk48_DZ","weapon",0.01},
			{"M40A3_DZ","weapon",0.01},
			{"SA58_DZ","weapon",0.04},
			{"SA58_CCO_DZ","weapon",0.03},
			{"SA58_ACOG_DZ","weapon",0.02},
			{"Tranquiliser_Bolt","magazine",0.02},
		//special
			{"AmmoBoxSmall_556","object",0.04},
			{"AmmoBoxSmall_762","object",0.02},
			{"WeaponHolder_ItemCamoNet","object",0.03},
		//mags special
			{"PipeBomb","magazine",0.01},
			{"100Rnd_762x54_PK","magazine",0.01},
			{"Skin_Camo1_DZ","magazine",0.02},
			{"Skin_Sniper1_DZ","magazine",0.02},
		//bags
			{"DZ_CivilBackpack_EP1","object",0.01}, // 24
			{"DZ_Backpack_EP1","object",0.01}, // 24		
		//multiple spawns
			{"","military",0.10},
			{"","Trash",0.10},
			{"","attachmentsGeneric",0.05},
			{"","attachmentsEast",0.04},
			{"","attachmentsWest",0.03},
			{"","generic",0.08}
		};
	};
	class Hunting: Default {
		zombieChance = 0.6;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		lootChance = 0.8;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"ItemMap","weapon",0.06},
			{"ItemFlashlight","generic",0.06},
			{"ItemKnife","generic",0.07},
			{"ItemMatchbox","generic",0.07},
			{"ItemCompass","weapon",0.02},
		//weapons
			{"Crossbow_DZ","weapon",0.02},
			{"Crossbow_Stock","weapon",0.03},
			{"MeleeMachete","weapon",0.04},
			{"CZ550_DZ","weapon",0.05},
			{"MR43","weapon",0.08}, 			
			{"Winchester1866","weapon",0.06},	
			{"Mosin_Nagant","weapon",0.01},
			{"Mosin_Nagant_broken","weapon",0.03},	
		//special
			{"WeaponHolder_ItemDomeTent","object",0.02},
			{"ItemSandbag","magazine",0.04},
		//mags special
			{"equip_rope","magazine",0.03},
			{"TrapBear","magazine",0.01},
		//med
			{"ItemBandage","magazine",0.5},
			{"ItemHeatPack","magazine",0.02},
			{"5x_22_LR_17_HMR","magazine",0.03},
			{"15Rnd_W1866_Slug","magazine",0.06},
			{"10x_303","magazine",0.03},
			{"8Rnd_B_Beneli_74Slug","magazine",0.06},
			{"2Rnd_shotgun_74Pellets","magazine",0.08},
			{"WoodenArrow","magazine",0.10},
			{"ItemWaterbottleUnfilled","magazine",0.02},
			{"FoodCanRusUnlabeled","magazine",0.05},
			{"FoodCanRusStew","magazine",0.02},
			{"FoodCanRusPork","magazine",0.02},
			{"equip_duct_tape","magazine",0.03},
			{"FoodNutmix","magazine",0.03},
			{"DZ_British_ACU","object",0.02}, // 18
			{"equip_string","magazine",0.04},
			{"Crossbow_EX_Bolt","magazine",0.02},
		//multiple spawns
			{"","Trash",0.10},
			{"","ammo",0.05},
			{"","attachmentsGeneric",0.03},
			{"","generic",0.08}
		};
	};
#include "CfgBuildingPos.hpp"

};
