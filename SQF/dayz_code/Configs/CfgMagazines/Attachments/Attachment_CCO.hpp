//New Type

class Attachment_CCO : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_CCO_RED;
	descriptionShort = $STR_ATTACHMENT_DESC_CCO_RED;
	count = 1;
	model = "z\addons\dayz_communityweapons\models\attachments\CCO";
	picture = "\z\addons\dayz_communityweapons\models\attachments\CCO.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_CCO;
			type = "Attachment_CCO";
			script = "spawn player_attachAttachment;";
		};
	};
};
