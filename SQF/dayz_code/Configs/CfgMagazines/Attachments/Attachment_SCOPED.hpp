//New Type

class Attachment_SCOPED : CA_Magazine {
	scope = 2;
	displayName = "Scoped Sight";
	descriptionShort = "Scoped Sight Attachment.";
	count = 1;
	model = "z\addons\dayz_communityweapons\models\attachments\SCOPE";
	picture = "\z\addons\dayz_communityweapons\models\attachments\SCOPE.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = "Attach";
			type = "SCOPED";
			script = "spawn player_attachAttchment;";
		};
	};
};