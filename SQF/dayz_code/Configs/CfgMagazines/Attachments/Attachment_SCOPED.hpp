//New Type

class Attachment_SCOPED : CA_Magazine {
	scope = 2;
	displayName = $STR_ATTACHMENT_NAME_SCOPE;
	descriptionShort = $STR_ATTACHMENT_DESC_SCOPE;
	count = 1;
	model = "z\addons\dayz_communityweapons\models\attachments\SCOPE";
	picture = "\z\addons\dayz_communityweapons\models\attachments\SCOPE.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_SCOPE;
			type = "Attachment_SCOPED";
			script = "spawn player_attachAttachment;";
		};
	};
};
