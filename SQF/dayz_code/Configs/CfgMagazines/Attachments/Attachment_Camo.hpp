class Attachment_M4A1_Aim_camo : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_CAMO;
	descriptionShort = "Camo paint. Weapon needed M4A1_AIM";
	count = 1;
	picture = "\z\addons\dayz_communityassets\CraftingPlaceHolders\equip_part_camo.paa";
	type = 256;
	
	primary = true;
		
	oringal = "M4A1_Aim";
	weapon = "M4A1_Aim_camo";
	
	class ItemActions {
		class Use {
			text = "Attach to Primary";
			script = "spawn player_useAttchment;";
		};
	};
};