class Attachment_M14_SniperScope : CA_Magazine {
	scope = public;
	displayName = "M14 Sniper Scope";
	descriptionShort = "Fits an M14 Aim.";
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_sniperscope.paa";
	type = 256;
	
	oringal = "M14_EP1";
	weapon = "DMR_DZ";
	
	class ItemActions {
		class Use {
			text = "Attach to M14 Aim";
			script = "spawn player_useAttchment;";
		};
	};
};
