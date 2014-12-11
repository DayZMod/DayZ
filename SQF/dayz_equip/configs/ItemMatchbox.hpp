class ItemMatchbox : ItemCore {
	scope = 1;
	displayName = $STR_EQUIP_NAME_3;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3;
	chance = 30;
	matches = 0;

	class ItemActions {
		class Use {
			text = $STR_ACTIONS_LIGHTFIRE;
			script = "spawn player_makeFire;";
			use[] = {"PartWoodPile"};
		};
	};
};
class Item5Matchbox : ItemMatchbox {
	scope = public;
	displayName = $STR_EQUIP_NAME_3;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3_A;
	qtyRemaining = "Item4Matchbox";
	matches = 5;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_LIGHTFIRE;
			script = "spawn player_makeFire;";
			use[] = {"PartWoodPile"};
		};
	};
};

class Item4Matchbox : ItemMatchbox {
	scope = public;
	displayName = $STR_EQUIP_NAME_3;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3_B;
	qtyRemaining = "Item3Matchbox";
	matches = 4;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_LIGHTFIRE;
			script = "spawn player_makeFire;";
			use[] = {"PartWoodPile"};
		};
	};
};
class Item3Matchbox : ItemMatchbox {
	scope = public;
	displayName = $STR_EQUIP_NAME_3;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3_C;
	qtyRemaining = "Item2Matchbox";
	matches = 3;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_LIGHTFIRE;
			script = "spawn player_makeFire;";
			use[] = {"PartWoodPile"};
		};
	};
};
class Item2Matchbox : ItemMatchbox {
	scope = public;
	displayName = $STR_EQUIP_NAME_3;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3_D;
	qtyRemaining = "Item1Matchbox";
	matches = 2;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_LIGHTFIRE;
			script = "spawn player_makeFire;";
			use[] = {"PartWoodPile"};
		};
	};
};
class Item1Matchbox : ItemMatchbox {
	scope = public;
	displayName = $STR_EQUIP_NAME_3;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3_E;
	qtyRemaining = "ItemMatchboxEmpty";
	matches = 1;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_LIGHTFIRE;
			script = "spawn player_makeFire;";
			use[] = {"PartWoodPile"};
		};
	};
};


class ItemMatchboxEmpty : ItemMatchbox {
	scope = public;
	displayName = $STR_EQUIP_NAME_3_EMPTY;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3_EMPTY;
};