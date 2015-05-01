//New Type

class Attachment_BELT : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_BELT;
	descriptionShort = $STR_ATTACHMENT_DESC_BELT;
	count = 1;
	model = "z\addons\dayz_communityweapons\models\attachments\BELT";
	picture = "\z\addons\dayz_communityweapons\models\attachments\BELT.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_BELT;
			type = "Attachment_BELT";
			script = "spawn player_attachAttachment;";
		};
	};
};
