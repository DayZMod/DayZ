//New Type

class Attachment_FL : CA_Magazine {
	scope = public;
	displayName = "Flashlight";
	descriptionShort = "FlashLight Attachment.";
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_aim.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = "Attach";
			type = "FL"
			script = "spawn player_attachAttchment;";
		};
	};
};