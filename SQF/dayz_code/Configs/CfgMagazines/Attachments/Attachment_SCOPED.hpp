//New Type

class Attachment_SCOPED : CA_Magazine {
	scope = public;
	displayName = "Scoped Sight";
	descriptionShort = "Scoped Sight Attachment.";
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_aim.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = "Attach";
			type = "SCOPED"
			script = "spawn player_attachAttchment;";
		};
	};
};