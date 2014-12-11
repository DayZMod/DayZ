class ItemFuelcan : CA_Magazine {
		scope = public;
		count = 1;
		fuelQuantity = 5;
		emptycan = "ItemFuelcanEmpty";
		type = 256;
		displayName = $STR_ITEM_NAME_FUELCAN;
		descriptionShort = $STR_ITEM_DESC_FUELCAN;
		model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_fuelcan_CA.paa";
	};
	class ItemFuelcanEmpty :  ItemFuelcan {
		scope = public;
		count = 1;
		fuelQuantity = 0;
		fullcan = "ItemFuelcan";
		type = 256;
		displayName = $STR_ITEM_NAME_FUELCAN_EMPTY;
		descriptionShort = $STR_ITEM_DESC_FUELCAN_EMPTY;
		model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_fuelcan_empty_CA.paa";
	};