class equip_woodensplint : CA_Magazine {
	scope = public;
	count = 1;
	displayName = "$STR_ITEM_WOODENSPLINT";
	descriptionShort = "Wooden Splint - can be used to brace broken leg";
	model = "\z\addons\dayz_communityassets\models\woodensplint.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_woodensplint_ca.paa";
	type = 256;
	class ItemActions {
		class Use {
			text = "Brace Leg";
			script = "spawn player_useMeds;";
		};
	};
};

