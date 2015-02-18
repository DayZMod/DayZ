class Attachment_M4A1_Aim : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_AIM_M4A1;
	descriptionShort = $STR_ATTACHMENT_DESC_AIM_M4A1;
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_aim.paa";
	type = 256;
	
	oringal = "M4A1";
	weapon = "M4A1_Aim";
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_M4;
			script = "spawn player_useAttchment;";
		};
	};
};

class Attachment_Sa58V_EP1_Aim : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_AIM_SA58;
	descriptionShort = $STR_ATTACHMENT_DESC_AIM_SA58;
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_aim.paa";
	type = 256;
	
	oringal = "Sa58V_EP1";
	weapon = "Sa58V_CCO_EP1";
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_SA58;
			script = "spawn player_useAttchment;";
		};
	};
};
