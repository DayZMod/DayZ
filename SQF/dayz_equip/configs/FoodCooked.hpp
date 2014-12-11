class FoodmeatCooked : FoodCooked {
	displayName = $STR_FOODCOOKED_EQUIP_CODE_NAME_0;
	model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
	descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_0;
	bloodRegen = 800;
	Nutrition[] = {282,400,0,2}; //[Energy,food,water,temp]
};

class FoodgoatCooked : FoodCooked {
	displayName = $STR_FOOD_NAME_GOAT_COOKED;
	model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
	descriptionShort = $STR_FOOD_EQUIP_GOAT_COOKED;
	bloodRegen = 600;
	Nutrition[] = {143,300,0,0}; //[Energy]
};

class FoodmuttonCooked : FoodCooked {
	displayName = $STR_FOODCOOKED_EQUIP_CODE_NAME_1;
	descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_1;
	model = "z\addons\dayz_communityassets\models\mutton_cooked.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_mutton_cooked_CA.paa";
	bloodRegen = 800;
	Nutrition[] = {294,400,0,0}; //[Energy]
};

class FoodchickenCooked : FoodCooked {
	displayName = $STR_FOODCOOKED_EQUIP_CODE_NAME_2;
	model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
	descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_2;
	bloodRegen = 800;
	Nutrition[] = {219,400,0,0}; //[Energy]
};

class FoodbaconCooked : FoodCooked {
	displayName = $STR_FOODCOOKED_EQUIP_CODE_NAME_4;
	model = "z\addons\dayz_communityassets\models\bacon_fried.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bacon_fried_CA.paa";
	descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_4;
	bloodRegen = 600;
	Nutrition[] = {417,400,0,0}; //[Energy]
};

class FoodrabbitCooked : FoodCooked {
	displayName = $STR_FOODCOOKED_EQUIP_CODE_NAME_3;
	model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
	descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_3;
	bloodRegen = 1000;
	Nutrition[] = {517,600,0,0}; //[Energy]
};

class FoodbeefCooked : FoodCooked {
	displayName = $STR_FOODCOOKED_EQUIP_CODE_NAME_6;
	model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
	descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_6;
	bloodRegen = 800;
	Nutrition[] = {332,400,0,0}; //[Energy]
};

class FoodSteakCooked : FoodEdible {
	scope = public;
	displayName = $STR_EQUIP_NAME_25;
	model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
	picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_25;
	bloodRegen = 800;
	Nutrition[] = {332,400,0,0}; //[Energy]
};

class FishCookedTrout : FoodCooked {
	displayName = $STR_FOOD_NAME_TROUT_COOKED;
	descriptionShort = $STR_FOOD_EQUIP_TROUT_COOKED;
	model = "\z\addons\dayz_communityassets\models\trout_cooked.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trout_cooked_CA.paa";	
	bloodRegen = 1000;
	Nutrition[] = {117,400,0,0}; //[Energy]
};
class FishCookedSeaBass : FoodCooked {
	displayName = $STR_FOOD_NAME_SEABASS_COOKED;
	descriptionShort = $STR_FOOD_EQUIP_SEABASS_COOKED;
	model = "\z\addons\dayz_communityassets\models\seabass_cooked.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_seabass_cooked_CA.paa";	
	bloodRegen = 1400;
	Nutrition[] = {110,600,0,0}; //[Energy]
};
class FishCookedTuna : FoodCooked {
	displayName = $STR_FOOD_NAME_TUNA_COOKED;
	descriptionShort = $STR_FOOD_EQUIP_TUNA_COOKED;
	model = "\z\addons\dayz_communityassets\models\tuna_cooked.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_tuna_cooked_CA.paa";	
	bloodRegen = 2000;
	Nutrition[] = {123,800,0,0}; //[Energy]
};