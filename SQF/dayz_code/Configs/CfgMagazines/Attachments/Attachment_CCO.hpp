//New Type

class Attachment_CCO : CA_Magazine {
	scope = public;
	displayName = "CCO RedDot";
	descriptionShort = "CCO RedDot Attachment.";
	count = 1;
	model = "z\addons\dayz_communityweapons\models\attachments\CCO";
	picture = "\z\addons\dayz_communityweapons\models\attachments\CCO.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = "Attach";
			type = "CCO"
			script = "spawn player_attachAttchment;";
		};
	};
};