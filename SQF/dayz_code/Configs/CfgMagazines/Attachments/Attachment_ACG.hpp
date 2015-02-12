class Attachment_M16_ACG : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_ACG_M16;
	descriptionShort = $STR_ATTACHMENT_DESC_ACG_M16;
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_acg.paa";
	type = 256;

	oringal = "m16a4";
	weapon = "m16a4_acg";
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_M16A4;
			script = "spawn player_useattchment;";
		};
	};
};

class Attachment_SA58_ACG : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_ACG_SA58;
	descriptionShort = $STR_ATTACHMENT_DESC_ACG_SA58;
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_acg.paa";
	type = 256;

	oringal = "Sa58V_EP1";
	weapon = "Sa58V_RCO_EP1";
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_SA58;
			script = "spawn player_useattchment;";
		};
	};
};
