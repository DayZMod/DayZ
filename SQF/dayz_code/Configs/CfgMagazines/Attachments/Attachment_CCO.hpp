//New Type

class Attachment_CCO : CA_Magazine {
	scope = public;
	displayName = "CCO RedDot";
	descriptionShort = "CCO RedDot Attachment.";
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_aim.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = "Attach";
			type = "CCO"
			script = "spawn player_attachAttchment;";
		};
	};
};