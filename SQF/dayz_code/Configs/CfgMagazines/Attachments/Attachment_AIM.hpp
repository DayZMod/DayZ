class Attachment_M4A1_Aim : CA_Magazine {
	scope = public;
	displayName = "M4A1 Aim";
	descriptionShort = "AIM attachment fits a m4a1 weapon";
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_aim.paa";
	type = 256;
	
	oringal = "M4A1";
	weapon = "M4A1_Aim";
	
	class ItemActions {
		class Use {
			text = "Attach to M4A1";
			script = "spawn player_useAttchment;";
		};
	};
};

class Attachment_Sa58V_EP1_Aim : CA_Magazine {
	scope = public;
	displayName = "SA58 Aim";
	descriptionShort = "AIM attachment fits an SA58";
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_aim.paa";
	type = 256;
	
	oringal = "Sa58V_EP1";
	weapon = "Sa58V_CCO_EP1";
	
	class ItemActions {
		class Use {
			text = "Attach to SA58";
			script = "spawn player_useAttchment;";
		};
	};
};