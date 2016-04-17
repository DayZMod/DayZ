class DZ_BP_Base : Bag_Base_EP1
{
	class EventHandlers
	{
		init = "if isNil 'dz_fn_backpack_init' then { call compile preprocessFileLineNumbers '\dayz\dayz_code\functions\backpack_init.sqf' }; _this call dz_fn_backpack_init";
	};
};

class DZ_BP_VestPouch : DZ_BP_Base
{
	scope = public;
	
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";
	displayName = $STR_BACKPACK_NAME_VEST;
	descriptionShort = $STR_BACKPACK_DESC_VEST;
	
	transportMaxWeapons = 1;
	transportMaxMagazines = 8;
};

class DZ_BP_Patrol : DZ_BP_Base
{
	scope = public;
	
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
	displayName = $STR_BACKPACK_NAME_PATROL;
	descriptionShort = $STR_BACKPACK_DESC_PATROL;
	
	transportMaxWeapons = 2;
	transportMaxMagazines = 10;
};

class DZ_BP_Assault : DZ_BP_Base
{
	scope = public;
	
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
	displayName = $STR_BACKPACK_NAME_ACU;
	descriptionShort = $STR_BACKPACK_DESC_ACU;
	
	transportMaxWeapons = 2;
	transportMaxMagazines = 12;
};

class DZ_BP_Survival : DZ_BP_Base
{
	scope = public;
	
	model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
	displayName = $STR_BACKPACK_NAME_SURVACU;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU;
	
	transportMaxWeapons = 2;
	transportMaxMagazines = 14;
};

class DZ_BP_Alice : DZ_BP_Base
{
	scope = public;
	
	model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
	displayName = $STR_BACKPACK_NAME_ALICE;
	descriptionShort = $STR_BACKPACK_DESC_ALICE;
	
	transportMaxWeapons = 3;
	transportMaxMagazines = 16;
};

/*class DZ_BP_Improvised : DZ_BP_Base
{
	scope = public;
	
	model = todo;
	picture = todo;
	displayName = "Improvised backpack";
	descriptionShort = todo;
	
	transportMaxWeapons = 3;
	transportMaxMagazines = 18;
};*/

class DZ_BP_British : DZ_BP_Base
{
	scope = public;
	
	model = "\ca\weapons_baf\Backpack_Small_BAF";
	picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
	displayName = $STR_BACKPACK_NAME_BRITISH;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH;
	
	transportMaxWeapons = 4;
	transportMaxMagazines = 20;
};

class DZ_BP_Czech : DZ_BP_Base
{
	scope = public;
	
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
	displayName = $STR_BACKPACK_NAME_CZECH;
	descriptionShort = $STR_BACKPACK_DESC_CZECH;
	
	transportMaxWeapons = 4;
	transportMaxMagazines = 22;
};

class DZ_BP_Coyote : DZ_BP_Base
{
	scope = public;
	
	model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
	displayName = $STR_BACKPACK_NAME_COYOTE;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE;
	
	transportMaxWeapons = 4;
	transportMaxMagazines = 24;
};