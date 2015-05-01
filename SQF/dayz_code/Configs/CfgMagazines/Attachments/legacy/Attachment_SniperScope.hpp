class Attachment_M14_SniperScope : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_SCOPE_M14;
	descriptionShort = $STR_ATTACHMENT_DESC_SCOPE_M14;
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_sniperscope.paa";
	type = 256;
	
	oringal = "M14_EP1";
	weapon = "DMR_DZ";
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_M14;
			script = "spawn player_useAttchment;";
		};
	};
};
