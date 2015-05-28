class CfgLoot {
	#include "BuildingLoot\Residential.hpp"
	#include "BuildingLoot\militaryEAST.hpp"
	#include "BuildingLoot\militaryWEST.hpp"
	#include "BuildingLoot\Supermarket.hpp"
	#include "CfgBuildingTrashLoot.hpp"
	ammo[] = {
		{"7Rnd_45ACP_1911",0.03},
		{"6Rnd_45ACP",0.03},
		{"15Rnd_W1866_Slug",0.03},
		{"15Rnd_W1866_Slug",0.03},
		{"8Rnd_B_Beneli_74Slug",0.03},
		{"7Rnd_45ACP_1911",0.04},
		{"30Rnd_556x45_Stanag",0.02},
		{"75Rnd_545x39_RPK",0.02},
		{"20Rnd_762x51_DMR",0.02},
		{"20Rnd_762x51_FNFAL",0.03},
		{"17Rnd_9x19_glock17",0.05},
		{"17Rnd_9x19_glock17sd",0.01},
		{"15Rnd_9x19_M9SD",0.01},
		{"8Rnd_9x18_MakarovSD",0.01},
		{"15Rnd_9x19_M9",0.03},
		{"30Rnd_762x39_AK47",0.02},
		{"30Rnd_545x39_AK",0.02},
		{"5Rnd_762x51_M24",0.01},
		{"8Rnd_B_Beneli_74Slug",0.04},
		{"1Rnd_HE_M203",0.01},
		{"1Rnd_HE_GP25",0.02},
		{"8Rnd_B_Beneli_Pellets",0.04},
		{"30Rnd_556x45_StanagSD",0.01},
		{"30Rnd_545x39_AKSD",0.02},
		{"30Rnd_9x19_MP5",0.02},
		{"30Rnd_9x19_MP5SD",0.01},
		{"Mosin_Nagant_Ammo",0.03},
		{"100Rnd_762x51_M240",0.01},
		{"64Rnd_9x19_Bizon",0.03},
		{"64Rnd_9x19_SD_Bizon",0.01}
	};
	//Zed Loot
	policeman[] = {
		{"ItemBandage",0.10},
		{"7Rnd_45ACP_1911",0.03},
		{"6Rnd_45ACP",0.03},
		{"15Rnd_W1866_Slug",0.03},
		{"8Rnd_B_Beneli_74Slug",0.03},
		{"HandRoadFlare",0.05},
		{"ItemWaterbottleUnfilled",0.01}
	};
	attachmentsGeneric[] =
	{
		{"Attachment_BELT",0.03},
		{"Attachment_SCOPED",0.01},
		{"Attachment_FL",0.02},
		{"Attachment_FL_Pist",0.02}
	};
	attachmentsEast[] =
	{
		{"Attachment_Kobra",0.01},
		{"Attachment_PSO1",0.01},
		{"Attachment_SupMakarov",0.03},
		{"Attachment_SupBizon",0.02},
		{"Attachment_Sup545",0.01},
		{"Attachment_GP25",0.01}
	};
	attachmentsWest[] =
	{
		{"Attachment_CCO",0.01},
		{"Attachment_Holo",0.01},
		{"Attachment_Ghillie",0.02},
		{"Attachment_M203",0.01},
		{"Attachment_Sup556",0.01},
		{"Attachment_Sup9",0.03}
	};
	civilian[] = {
		{"ItemBandage",0.06},
		{"ItemPainkiller",0.03},
		{"8Rnd_9x18_Makarov",0.04},
		{"6Rnd_45ACP",0.04},
		{"2Rnd_shotgun_74Pellets",0.08},
		{"ItemSodaLirik",0.02},
		{"ItemSodaPeppsy",0.02},
		{"FoodCanBeef",0.03},
		//{"Item1Matchbox",0.01}, Removed due to item not mag
		{"FoodCanCurgon",0.03}
	};
	viralloot[] = {
		{"ItemBandage",0.02},
		{"8Rnd_9x18_Makarov",0.04},
		{"6Rnd_45ACP",0.04},
		{"2Rnd_shotgun_74Pellets",0.08},
		{"ItemSodaPeppsy",0.04},
		{"FoodCanRusCorn",0.05},
		{"FoodCanCurgon",0.05},
		{"ItemAntibiotic1",0.01},
		{"FoodCanBoneboy",0.05}
	};
	food[] = {
		{"FoodCakeCremeCakeClean",0.01},
		{"ItemSodaMtngreen",0.01}
	};
	generic[] = {
		{"ItemBandage",0.03},
		{"ItemTrashPaper",0.03},
		{"ItemTrashPaperMusic",0.03},
		{"ItemAntibacterialWipe",0.03},
		{"ItemHeatPack",0.04},
		{"8Rnd_9x18_Makarov",0.09},
		{"6Rnd_45ACP",0.04},
		{"2Rnd_shotgun_74Pellets",0.08},
		{"5x_22_LR_17_HMR",0.01},
		{"10x_303",0.04},
		{"15Rnd_W1866_Slug",0.06},
		{"WoodenArrow",0.04},
		{"HandRoadFlare",0.10},
		{"ItemPainkiller",0.02},
		{"HandChemGreen",0.01},
		{"HandChemBlue",0.07},
		{"HandChemRed",0.05},
		{"ItemWaterbottleUnfilled",0.01},
		{"ItemWaterbottle",0.01},
		{"ItemSodaLirik",0.05},
		{"ItemSodaPeppsy",0.05},	
		{"ItemSodaLemonade",0.05},
		{"FoodCanRusCorn",0.05},
		{"FoodCanCurgon",0.05},
		{"FoodCanBoneboy",0.05},
		{"FoodCanBeef",0.05},
		{"FoodCanUnlabeled",0.04},
		{"FoodCanRusStew",0.05},
		{"FoodCanRusPork",0.05},
		{"FoodCanRusPeas",0.05},
		{"FoodCanRusMilk",0.04},
		{"FoodCanRusCorn",0.05},
		{"FoodPistachio",0.03},
		{"FoodNutmix",0.04},
		{"FoodCanGriff",0.05},
		{"FoodCanPotatoes",0.05},
		{"ItemSherbet",0.01},
		{"ItemSodaRocketFuel",0.01},
		{"ItemSodaFranka",0.01},
		{"ItemSodaSacrite",0.01},
		{"ItemCards",0.02}
	};
	medical[] = {
		{"ItemBandage",0.08},
		{"ItemPainkiller",0.05},
		{"ItemMorphine",0.05},
		{"ItemEpinephrine",0.03},
		{"ItemAntibiotic",0.01},
		{"bloodTester",0.05},
		{"transfusionKit",0.03},
		{"ItemAntibacterialWipe",0.04},
		{"ItemHeatPack",0.03}
	};
	military[] = {
		{"ItemBandage",0.04},
		{"ItemPainkiller",0.02},
		{"ItemMorphine",0.01},
		{"ItemHeatPack",0.04},
		{"7Rnd_45ACP_1911",0.04},
		{"30Rnd_556x45_Stanag",0.02},
		{"75Rnd_545x39_RPK",0.02},
		{"20Rnd_762x51_DMR",0.02},
		{"20Rnd_762x51_FNFAL",0.04},
		{"17Rnd_9x19_glock17",0.05},
		{"15Rnd_9x19_M9SD",0.01},
		{"8Rnd_9x18_MakarovSD",0.01},
		{"15Rnd_9x19_M9",0.03},
		{"30Rnd_762x39_AK47",0.02},
		{"30Rnd_545x39_AK",0.02},
		{"5Rnd_762x51_M24",0.01},
		{"8Rnd_B_Beneli_74Slug",0.04},
		{"1Rnd_HE_M203",0.01},
		{"1Rnd_HE_GP25",0.02},
		{"FlareWhite_M203",0.02},
		{"FlareWhite_GP25",0.02},
		{"FlareGreen_M203",0.02},
		{"FlareGreen_GP25",0.02},
		{"1Rnd_Smoke_M203",0.01},
		{"1Rnd_SMOKE_GP25",0.01},
		{"200Rnd_556x45_M249",0.01},
		{"HandGrenade_west",0.01},
		{"HandGrenade_east",0.01},
		{"SmokeShell",0.04},
		{"SmokeShellRed",0.04},
		{"SmokeShellGreen",0.04},
		{"8Rnd_B_Beneli_Pellets",0.04},
		{"30Rnd_556x45_StanagSD",0.01},
		{"30Rnd_545x39_AKSD",0.02},
		{"30Rnd_9x19_MP5",0.02},
		{"30Rnd_9x19_MP5SD",0.01},
		{"100Rnd_762x51_M240",0.01},
		{"HandChemGreen",0.04},
		{"HandChemBlue",0.04},
		{"HandChemRed",0.04},
		{"ItemSodaEmpty",0.06},
		{"ItemSodaLirik",0.04},
		{"ItemSodaPeppsy",0.04},
		{"FoodCanRusCorn",0.05},
		{"FoodCanCurgon",0.05},
		{"FoodCanBoneboy",0.05},
		{"FoodCanBeef",0.05},
		{"FoodCanUnlabeled",0.04},
		{"FoodPistachio",0.03},
		{"FoodNutmix",0.04},
		{"FoodCanRusStew",0.05},
		{"FoodCanRusPork",0.05},
		{"FoodCanRusPeas",0.05},
		{"FoodCanRusMilk",0.04},
		{"FoodCanRusCorn",0.05},
		{"FoodMRE",0.03},
		{"ItemTrashToiletpaper",0.01},
		{"ItemTrashRazor",0.01},
		{"ItemCards",0.02}
	};
};

  //{"ItemSodaSmasht",0.01}, //4 this supermarket, residential, industrail
  //{"FoodCanPowell",0.01}, //4 this, indy, res, super
  //{"FoodChipsSulahoops",0.01}, //4 this, indy, super, church
  
  //{"ItemSodaClays",0.01}, //3 this, supermarket, chruch
  //{"ItemSodaDrwaste",0.01}, //3 supermarket, industrail
  //{"ItemSodaLemonade",0.01},  //3 supermarket, farm, this
  //{"ItemSodaMzly",0.01},  //3 res ,super, church
  //{"FoodCanCurgon",0.01}, //3 this, super, church
  //{"FoodCanDemon",0.01}, //3 this, res,super
  //{"FoodCanFraggleos",0.01}, //3 this, res, super.
  //{"FoodCanDerpy",0.01}, //3 this, res, super
  //{"FoodCanOrlok",0.01}, //3 this, res, super
  //{"FoodCanTylers",0.01}, //3 this, res, super
  //{"FoodCanHerpy",0.001}, //3 this, res, super.
  
  //{"ItemSodaR4z0r",0.01}, //2 this, supermarket
  //{"ItemSodaLvg",0.01}, //2 this, supermarket
  //{"ItemSodaRabbit",0.01}, //2 super, this
  //{"FoodCanBadguy",0.01}, //2 this, super
  //{"FoodCanBoneboy",0.01}, //2 this supper
  //{"FoodCanCorn",0.01}, //2 this super
  //{"FoodChipsMysticales",0.01}, //2 this, super
  //{"FoodCandyAnders",0.01}, //2 this, super
  //{"FoodCandyLegacys",0.01}, //2 this, super
  //{"FoodCandyMintception",0.01}, //2 this, super