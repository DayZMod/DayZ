class ItemPainkiller_base : CA_Magazine {
	scope = 1;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_18;
	model = "\dayz_equip\models\med_painkiller_gear.p3d";
	picture = "\dayz_equip\textures\equip_painkiller_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_18;
};

class ItemPainkiller : ItemPainkiller_base {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_18;
	model = "\dayz_equip\models\med_painkiller_gear.p3d";
	picture = "\dayz_equip\textures\equip_painkiller_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_18;
	
	class medical {
		chance = 0.50;
		amount = -1;
		qtyRemaining = "ItemPainkiller6";
	};
	
	class ItemActions {
		class Use {
			text = $STR_TAKE_ANTIBIOTIC;
			script = "spawn player_useMeds;";
		};
	};
};
class ItemPainkiller6 : ItemPainkiller {
	displayName = $STR_EQUIP_NAME_18;
	descriptionShort = "A moderate painkiller suitable for regular use of relief of pain and inflammation caused by moderate wounds. 6 left!";
	
	class medical {
		amount = 6;
		qtyRemaining = "ItemPainkiller5";
	};
};
class ItemPainkiller5 : ItemPainkiller {
	displayName = $STR_EQUIP_NAME_18;
	descriptionShort = "A moderate painkiller suitable for regular use of relief of pain and inflammation caused by moderate wounds. 5 left!";
	
	class medical {
		amount = 5;
		qtyRemaining = "ItemPainkiller4";
	};
};
class ItemPainkiller4 : ItemPainkiller {
	displayName = $STR_EQUIP_NAME_18;
	descriptionShort = "A moderate painkiller suitable for regular use of relief of pain and inflammation caused by moderate wounds. 4 left!";
	
	class medical {
		amount = 4;
		qtyRemaining = "ItemPainkiller3";
	};
};
class ItemPainkiller3 : ItemPainkiller {
	displayName = $STR_EQUIP_NAME_18;
	descriptionShort = "A moderate painkiller suitable for regular use of relief of pain and inflammation caused by moderate wounds. 3 left!";
	
	class medical {
		amount = 3;
		qtyRemaining = "ItemPainkiller2";
	};
};
class ItemPainkiller2 : ItemPainkiller {
	displayName = $STR_EQUIP_NAME_18;
	descriptionShort = "A moderate painkiller suitable for regular use of relief of pain and inflammation caused by moderate wounds. 2 left!";
	
	class medical {
		amount = 2;
		qtyRemaining = "ItemPainkiller1";
	};
	
};
class ItemPainkiller1 : ItemPainkiller {
	displayName = $STR_EQUIP_NAME_18;
	descriptionShort = "A moderate painkiller suitable for regular use of relief of pain and inflammation caused by moderate wounds. 1 left!";
	
	class medical {
		amount = 1;
		qtyRemaining = "ItemPainkillerEmpty";
	};
};

class ItemPainkillerEmpty : ItemPainkiller_base {
	displayName = $STR_EQUIP_NAME_18;
	descriptionShort = "Empty box of painkillers";
};
