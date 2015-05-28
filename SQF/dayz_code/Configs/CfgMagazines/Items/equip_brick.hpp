class equip_brick : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_brick;
	descriptionShort = "Maybe this could be used to sharpen a knife.";
	model = "\z\addons\dayz_communityassets\models\brick.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_brick.paa";
	type = 256;
	
	class ItemActions {
		class FixKnife {
			text = "Sharpen Knife";
			script = "; ['ItemKnifeBlunt','ItemWaterbottle','ItemKnife'] spawn player_sharpen;";
		};
	};
};