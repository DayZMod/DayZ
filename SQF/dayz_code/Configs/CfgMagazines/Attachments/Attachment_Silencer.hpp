class Attachment_MakarovSilencer : CA_Magazine {
	scope = public;
	displayName = "Makarov Silencer";
	descriptionShort = "Makarov Silencer";
	count = 1;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	type = 256;

	oringal = "Makarov";
	weapon = "MakarovSD";

	class ItemActions {
		class Use {
			text = "Attach Silencer to Makarov";
			script = "spawn player_useAttchment;";
		};
	};
};

class Attachment_M9Silencer : CA_Magazine {
	scope = public;
	displayName = "M9 Silencer";
	descriptionShort = "M9 Silencer";
	count = 1;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	type = 256;

	oringal = "M9";
	weapon = "M9SD";

	class ItemActions {
		class Use {
			text = "Attach Silencer to M9";
			script = "spawn player_useAttchment;";
		};
	};
};

class Attachment_M4A1_AIM_SD_camo : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_Silencer;
	descriptionShort = "M4A1 Silencer. Weapon needed M4A1_AIM_CAMO";
	count = 1;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	type = 256;

	oringal = "M4A1_Aim_camo";
	weapon = "M4A1_AIM_SD_camo";

	class ItemActions {
		class Use {
			text = "Attach Silencer to M4A1";
			script = "spawn player_useAttchment;";
		};
	};
};

class Attachment_bizonSilencer : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_Silencer;
	descriptionShort = "Bizon Silencer. Weapon needed Bizon";
	count = 1;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	type = 256;

	oringal = "bizon";
	weapon = "bizon_silenced";

	class ItemActions {
		class Use {
			text = "Attach Silencer to Bizon";
			script = "spawn player_useAttchment;";
		};
	};
};

class Attachment_SCAR_H_CQC_CCO_Silencer : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_Silencer;
	descriptionShort = "SCAR CQC Silencer. Weapon needed SCAR CQC";
	count = 1;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	type = 256;

	oringal = "SCAR_H_CQC_CCO";
	weapon = "SCAR_H_CQC_CCO_SD";

	class ItemActions {
		class Use {
			text = "Attach Silencer to SCAR";
			script = "spawn player_useAttchment;";
		};
	};
};

class Attachment_MP5A5_Silencer : CA_Magazine {
    scope = public;
	displayName = "MP5A5 Silencer";
	descriptionShort = "MP5A5 Silencer. Weapon needed: MP5A5";
	count = 1;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	type = 256;

	oringal = "MP5A5";
	weapon = "MP5SD";

	class ItemActions {
        class Use {
            text = "Attach Silencer to MP5A5";
            script = "spawn player_useAttchment;";
        };
	};
};
