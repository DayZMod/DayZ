class Attachment_MakarovSilencer : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_SILENCER_MAKAROV;
	descriptionShort = $STR_ATTACHMENT_DESC_SILENCER_MAKAROV;
	count = 1;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	type = 256;

	oringal = "Makarov";
	weapon = "MakarovSD";

	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_MAKAROV;
			script = "spawn player_useAttchment;";
		};
	};
};

class Attachment_M9Silencer : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_SILENCER_M9;
	descriptionShort = $STR_ATTACHMENT_DESC_SILENCER_M9;
	count = 1;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	type = 256;

	oringal = "M9";
	weapon = "M9SD";

	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_M9;
			script = "spawn player_useAttchment;";
		};
	};
};

class Attachment_M4A1_AIM_SD_camo : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_SILENCER_M4;
	descriptionShort = $STR_ATTACHMENT_DESC_SILENCER_M4;
	count = 1;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	type = 256;

	oringal = "M4A1_Aim_camo";
	weapon = "M4A1_AIM_SD_camo";

	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_M4;
			script = "spawn player_useAttchment;";
		};
	};
};

class Attachment_bizonSilencer : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_SILENCER_BIZON;
	descriptionShort = $STR_ATTACHMENT_DESC_SILENCER_BIZON;
	count = 1;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	type = 256;

	oringal = "bizon";
	weapon = "bizon_silenced";

	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_BIZON;
			script = "spawn player_useAttchment;";
		};
	};
};

class Attachment_SCAR_H_CQC_CCO_Silencer : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_SILENCER_SCAR;
	descriptionShort = $STR_ATTACHMENT_DESC_SILENCER_SCAR;
	count = 1;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	type = 256;

	oringal = "SCAR_H_CQC_CCO";
	weapon = "SCAR_H_CQC_CCO_SD";

	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_SCAR;
			script = "spawn player_useAttchment;";
		};
	};
};

class Attachment_MP5A5_Silencer : CA_Magazine {
    scope = public;
	displayName = $STR_ATTACHMENT_NAME_SILENCER_MP5;
	descriptionShort = $STR_ATTACHMENT_DESC_SILENCER_MP5;
	count = 1;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	type = 256;

	oringal = "MP5A5";
	weapon = "MP5SD";

	class ItemActions {
        class Use {
            text = $STR_ACTIONS_ATTACH_MP5;
            script = "spawn player_useAttchment;";
        };
	};
};
