class Attachment_M4A1_Aim_camo : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_CAMO_M4;
	descriptionShort = $STR_ATTACHMENT_DESC_CAMO_M4;
	count = 1;
	picture = "\z\addons\dayz_communityassets\CraftingPlaceHolders\equip_part_camo.paa";
	type = 256;
	
	primary = true;
		
	oringal = "M4A1_Aim";
	weapon = "M4A1_Aim_camo";
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_M4;
			script = "spawn player_useAttchment;";
		};
	};
};
