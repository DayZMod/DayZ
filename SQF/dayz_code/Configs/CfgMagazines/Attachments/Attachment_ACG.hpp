class Attachment_M16_ACG : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_ACG;
	descriptionShort = $STR_ATTACHMENT_DESC_ACG;
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_acg.paa";
	type = 256;

	oringal = "m16a4";
	weapon = "m16a4_acg";
	
	class ItemActions {
		class Use {
			text = "Attach to M16A4";
			script = "spawn player_useattchment;";
		};
	};
};

class Attachment_SA58_ACG : CA_Magazine {
	scope = public;
	displayName = "SA58 ACOG Attachment";
	descriptionShort = "Can be attached to an SA58.";
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_acg.paa";
	type = 256;

	oringal = "Sa58V_EP1";
	weapon = "Sa58V_RCO_EP1";
	
	class ItemActions {
		class Use {
			text = "Attach to SA58.";
			script = "spawn player_useattchment;";
		};
	};
};