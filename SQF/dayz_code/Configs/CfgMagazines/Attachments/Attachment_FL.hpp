//New Type

class Attachment_FL : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_FL;
	descriptionShort = $STR_ATTACHMENT_DESC_FL;
	count = 1;
	model = "z\addons\dayz_communityweapons\models\attachments\FL";
	picture = "\z\addons\dayz_communityweapons\models\attachments\FL.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_FL;
			type = "Attachment_FL";
			script = "spawn player_attachAttachment;";
		};
	};
};
