class Attachment_Crossbow_CCO : CA_Magazine {
	scope = public;
	displayName = "Crossbow CCO RedDot";
	descriptionShort = "Fits a Compound Crossbow.";
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_aim.paa";
	type = 256;
	
	oringal = "Crossbow_DZ";
	weapon = "Crossbow_CCO";
	
	class ItemActions {
		class Use {
			text = "Attach to Crossbow";
			script = "spawn player_useAttchment;";
		};
	};
};