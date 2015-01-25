//New Type

class Attachment_BELT : CA_Magazine {
	scope = public;
	displayName = "Ammo Belt";
	descriptionShort = "Ammo Belt Attachment.";
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_aim.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = "Attach";
			type = "BELT"
			script = "spawn player_attachAttchment;";
		};
	};
};