//class Land_A_tent;
class DZ_storage_base : Land_A_tent {
	scope=public;
	armor = 5;
	displayname = $STR_VEH_NAME_STASH;
	icon = "";
	mapsize = 3;
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
};
class StashSmall_base : DZ_storage_base {
	armor = 5;
	displayname = $STR_VEH_NAME_STASH;
	icon = "\Ca\misc3\data\Icons\icon_Atent_ca.paa";
	mapsize = 3;
	model = "\z\addons\dayz_communityassets\models\dirt_stash.p3d";
	scope = 2;
	vehicleClass = "Survival";
	transportMaxMagazines = 12;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {"PartWoodPile"};
		create = "StashSmall1";
	};
};
class StashSmall : StashSmall_base {
	armor = 5;
	displayname = $STR_VEH_NAME_STASH;
	transportMaxMagazines = 12;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {"PartWoodPile"};
		create = "StashSmall1";
	};
};
class StashSmall1 : StashSmall_base {
	armor = 10;
	displayname = $STR_VEH_NAME_STASH1;
	transportMaxMagazines = 14;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {"PartWoodPile"};
		create = "StashSmall2";
	};
};
class StashSmall2 : StashSmall_base {
	armor = 15;
	displayname = $STR_VEH_NAME_STASH2;
	transportMaxMagazines = 16;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {"PartWoodPile"};
		create = "StashSmall3";
	};
};
class StashSmall3 : StashSmall_base {
	armor = 20;
	displayname = $STR_VEH_NAME_STASH3;
	transportMaxMagazines = 18;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {"PartWoodPile"};
		create = "StashSmall4";
	};
};
class StashSmall4 : StashSmall_base {
	armor = 25;
	displayname = $STR_VEH_NAME_STASH4;
	transportMaxMagazines = 20;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {"PartWoodPile"};
		create = "StashMedium";
	};
};

class StashMedium_base : DZ_storage_base {
	armor = 50;
	displayname = $STR_VEH_NAME_STASH_MED;
	icon = "\Ca\misc3\data\Icons\icon_Atent_ca.paa";
	mapsize = 3;
	model = "\z\addons\dayz_communityassets\models\dirt_stash_reinforced.p3d";
	scope = 2;
	vehicleClass = "Survival";
	transportMaxMagazines = 25;
	transportMaxWeapons = 1;
	transportMaxBackpacks = 0;
};
class StashMedium : StashMedium_base {
	armor = 50;
	displayname = $STR_VEH_NAME_STASH_MED;
	transportMaxMagazines = 25;
	transportMaxWeapons = 1;
	transportMaxBackpacks = 0;
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {"PartWoodPile"};
		create = "StashMedium1";
	};
};
class StashMedium1 : StashMedium_base {
	armor = 75;
	displayname = $STR_VEH_NAME_STASH_MED1;
	transportMaxMagazines = 50;
	transportMaxWeapons = 2;
	transportMaxBackpacks = 0;
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {"PartWoodPile"};
		create = "StashMedium2";
	};
};
class StashMedium2 : StashMedium_base {
	armor = 100;
	displayname = $STR_VEH_NAME_STASH_MED2;
	transportMaxMagazines = 75;
	transportMaxWeapons = 4;
	transportMaxBackpacks = 0;
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {"PartWoodPile","equip_nails"};
		create = "StashMedium3";
	};
};
class StashMedium3 : StashMedium_base {
	armor = 125;
	displayname = $STR_VEH_NAME_STASH_MED3;
	transportMaxMagazines = 100;
	transportMaxWeapons = 8;
	transportMaxBackpacks = 0;
	class Upgrade {
		requiredTools[] = {"ItemEtool"};
		requiredParts[] = {"equip_nails","PartWoodPile"};
		create = "StashMedium4";
	};
};
class StashMedium4 : StashMedium_base {
	armor = 150;
	displayname = $STR_VEH_NAME_STASH_MED4;
	transportMaxMagazines = 125;
	transportMaxWeapons = 16;
	transportMaxBackpacks = 0;
};
class TentStorage_base : DZ_storage_base {
	vehicleClass="Military";
	model = "\z\addons\dayz_communityassets\models\A_tent.p3d";
	destrType=DestructTent;
	displayName = $STR_VEH_NAME_TENT;
	pack = "WeaponHolder_ItemTent";
	transportMaxMagazines = 130;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
};
class TentStorage : TentStorage_base {
	displayName = $STR_VEH_NAME_TENT;
	vehicleClass = "Survival";
	pack = "WeaponHolder_ItemTent";
	transportMaxMagazines = 130;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "TentStorage0";
	};
};
class TentStorage0 : TentStorage_base {
	displayName = $STR_VEH_NAME_TENT1;
	armor = 20;
	transportMaxMagazines = 140;
	transportMaxWeapons = 12;
	transportMaxBackpacks = 5;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "TentStorage1";
	};
};
class TentStorage1 : TentStorage_base {
	displayName = $STR_VEH_NAME_TENT2;
	armor = 30;
	transportMaxMagazines = 150;
	transportMaxWeapons = 14;
	transportMaxBackpacks = 5;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "TentStorage2";
	};
};
class TentStorage2 : TentStorage_base {
	displayName = $STR_VEH_NAME_TENT3;
	armor = 40;
	transportMaxMagazines = 160;
	transportMaxWeapons = 16;
	transportMaxBackpacks = 5;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "TentStorage3";
	};
};
class TentStorage3 : TentStorage_base {
	displayName = $STR_VEH_NAME_TENT4;
	armor = 50;
	transportMaxMagazines = 170;
	transportMaxWeapons = 18;
	transportMaxBackpacks = 5;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "TentStorage4";
	};
};
class TentStorage4 : TentStorage_base {
	displayName = $STR_VEH_NAME_TENT5;
	armor = 60;
	transportMaxMagazines = 180;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 5;
	create = "";
};

class DomeTentStorage_base : TentStorage_base {
	armor = 50;
	model = "\z\addons\dayz_communityassets\models\D_tent.p3d";
	displayname = $STR_VEH_NAME_DOME_TENT;
	icon = "\Ca\buildings\Icons\i_Astan_CA.paa";
	pack = "WeaponHolder_ItemDomeTent";
	vehicleClass = "Survival";
	transportMaxMagazines = 150;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 5;
};

class DomeTentStorage : DomeTentStorage_base {
	armor = 50;
	displayname = $STR_VEH_NAME_DOME_TENT;
	transportMaxMagazines = 75;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 5;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "DomeTentStorage0";
	};
};
class DomeTentStorage0 : DomeTentStorage_base {
	armor = 60;
	displayname = $STR_VEH_NAME_DOME_TENT1;
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "DomeTentStorage1";
	};
};
class DomeTentStorage1 : DomeTentStorage_base {
	armor = 70;
	displayname = $STR_VEH_NAME_DOME_TENT2;
	transportMaxMagazines = 125;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 7;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "DomeTentStorage2";
	};
};
class DomeTentStorage2 : DomeTentStorage_base {
	armor = 80;
	displayname = $STR_VEH_NAME_DOME_TENT3;
	transportMaxMagazines = 150;
	transportMaxWeapons = 30;
	transportMaxBackpacks = 8;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "DomeTentStorage3";
	};
};
class DomeTentStorage3 : DomeTentStorage_base {
	armor = 90;
	displayname = $STR_VEH_NAME_DOME_TENT4;
	transportMaxMagazines = 175;
	transportMaxWeapons = 35;
	transportMaxBackpacks = 9;
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "DomeTentStorage4";
	};
};
class DomeTentStorage4 : DomeTentStorage_base {
	armor = 100;
	displayname = $STR_VEH_NAME_DOME_TENT5;
	transportMaxMagazines = 200; //same as ural
	transportMaxWeapons = 40;
	transportMaxBackpacks = 10;
};