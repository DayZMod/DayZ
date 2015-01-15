class ItemWaterbottle : FoodDrink {
	scope = public;
	refillable = 1;
	sfx = "drink";
	sfxdis = 1;
	Nutrition[] = {0,0,1000,0}; //[Energy,food,water,temp]
	displayName = $STR_EQUIP_NAME_12;
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\z\addons\dayz_communityassets\textures\waterbottle.paa";
	descriptionShort = $STR_EQUIP_DESC_12;
};

class ItemWaterbottleBoiled : ItemWaterbottle {
	displayName = $STR_ITEMWATERBOTTLEBOILED_CODE_NAME;
	descriptionShort = $STR_ITEMWATERBOTTLEBOILED_CODE_DESC;
 };

class ItemWaterBottleInfected : ItemWaterbottle { 
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\z\addons\dayz_communityassets\textures\waterbottle.paa";
};

//Removed Later
class ItemSodaCoke : ItemSoda {
	displayName = $STR_EQUIP_NAME_36a;
	model = "\dayz_equip\models\soda_coke.p3d";
	picture = "\dayz_equip\textures\equip_soda_coke_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_36;
	Nutrition[] = {90,0,100,0}; //[Energy,food,water,temp]
};
class ItemSodaPepsi : ItemSoda {
	displayName = "$STR_EQUIP_NAME_36b";
	model = "\dayz_equip\models\soda_pepsi.p3d";
	picture = "\dayz_equip\textures\equip_soda_pepsi_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_36;
	Nutrition[] = {90,0,100,0}; //[Energy,food,water,temp]
};
class ItemSodaMdew : ItemSoda {
	displayName = $STR_EQUIP_NAME_37;
	model = "\dayz_equip\models\soda_mdew.p3d";
	picture = "\dayz_equip\textures\equip_soda_mdew_ca.paa";
	descriptionShort = $STR_EQUIP_NAME_37;
	Nutrition[] = {90,0,200,0}; //[Energy,food,water,temp]
};

class ItemSodaMtngreen : ItemSoda {
	displayName = $STR_EQUIP_NAME_37;
	descriptionShort = $STR_EQUIP_NAME_37;
	model = "z\addons\dayz_communityassets\models\soda_mtngreen_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mtngreen_clean_full_ca.paa";
	Nutrition[] = {90,0,300,0}; //[Energy,food,water,temp]
};

class ItemSodaR4z0r : ItemSoda {
	displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_1;
	descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_1;
	model = "z\addons\dayz_communityassets\models\soda_r4z0r_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_r4z0r_clean_full_ca.paa";
	Nutrition[] = {90,0,150,0}; //[Energy,food,water,temp]
};
class ItemSodaClays : ItemSoda {
	displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_2;
	descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_2;
	model = "z\addons\dayz_communityassets\models\soda_clays_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_clays_clean_full_ca.paa";
	Nutrition[] = {90,0,120,0}; //[Energy,food,water,temp]
};
class ItemSodaSmasht : ItemSoda {
	displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_3;
	descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_3;
	model = "z\addons\dayz_communityassets\models\soda_smasht_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_smasht_clean_full_ca.paa";
	Nutrition[] = {90,0,180,0}; //[Energy,food,water,temp]
};

class ItemSodaDrwaste : ItemSoda {
	displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_4;
	descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_4;
	model = "z\addons\dayz_communityassets\models\soda_drwaste_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_drwaste_clean_full_ca.paa";
	Nutrition[] = {90,0,140,0}; //[Energy,food,water,temp]
};

class ItemSodaFranka : ItemSoda {
	displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_5;
	descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_5;
	model = "z\addons\dayz_communityassets\models\soda_franka_clean_full.p3d";
picture = "\z\addons\dayz_communityassets\pictures\equip_soda_franka_clean_full_ca.paa";
	Nutrition[] = {90,0,140,0}; //[Energy,food,water,temp]
};

class ItemSodaLemonade : ItemSoda {
	displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_6;
	descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_6;
	model = "z\addons\dayz_communityassets\models\soda_lemonade_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lemonade_clean_full_ca.paa";
	Nutrition[] = {90,0,300,0}; //[Energy,food,water,temp]
};

class ItemSodaLirik : ItemSoda {
	displayName = $STR_EQUIP_NAME_36a;
	descriptionShort = $STR_EQUIP_DESC_36;
	model = "z\addons\dayz_communityassets\models\soda_lirik_clean_full.p3d";
picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lirik_clean_full_ca.paa";
	Nutrition[] = {90,0,100,0}; //[Energy,food,water,temp]
};

class ItemSodaLvg : ItemSoda {
	displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_8;
	descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_8;
	model = "z\addons\dayz_communityassets\models\soda_lvg_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lvg_clean_full_ca.paa";
	Nutrition[] = {90,0,350,0}; //[Energy,food,water,temp]
};
class ItemSodaMzly : ItemSoda {
	displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_9;
	descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_9;
	model = "z\addons\dayz_communityassets\models\soda_mzly_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mzly_clean_full_ca.paa";
	Nutrition[] = {90,0,180,0}; //[Energy,food,water,temp]
};

class ItemSodaPeppsy : ItemSoda {
	displayName = $STR_EQUIP_NAME_36b;
	descriptionShort = $STR_EQUIP_DESC_36;
	model = "z\addons\dayz_communityassets\models\soda_peppsy_clean_full.p3d";
picture = "\z\addons\dayz_communityassets\pictures\equip_soda_peppsy_clean_full_ca.paa";
	Nutrition[] = {90,0,100,0}; //[Energy,food,water,temp]
};

class ItemSodaRabbit : ItemSoda {
	displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_11;
	descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_11;
	model = "z\addons\dayz_communityassets\models\soda_rabbit_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rabbit_clean_full_ca.paa";
	Nutrition[] = {90,0,350,0}; //[Energy,food,water,temp]
};

class ItemSodaSacrite : ItemSoda {
	displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_12;
	descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_12;
	model = "z\addons\dayz_communityassets\models\soda_sacrite_clean_full.p3d";
picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sacrite_clean_full_ca.paa";
	Nutrition[] = {90,0,350,0}; //[Energy,food,water,temp]
};

class ItemSodaRocketFuel : ItemSoda {
	displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_13;
	descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_13;
	model = "z\addons\dayz_communityassets\models\soda_rocket_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rocket_clean_full_ca.paa";
	Nutrition[] = {90,0,350,0}; //[Energy,food,water,temp]
};
class ItemSodaGrapeDrink : ItemSoda {
	displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_14;
	descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_14;
	model = "z\addons\dayz_communityassets\models\soda_grape_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_grape_clean_full_ca.paa";
	Nutrition[] = {90,0,600,0}; //[Energy,food,water,temp]
};

class ItemSherbet : ItemSoda {
	displayName = "Sherbet";
	descriptionShort = "Sherbet";
	model = "z\addons\dayz_communityassets\models\soda_sherbet_clean_full.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sherbet_clean_full_ca.paa";
	Nutrition[] = {90,0,300,0}; //[Energy,food,water,temp]
};
