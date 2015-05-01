//New Type

class Attachment_Sup556 : CA_Magazine {
	scope = public;
	displayName = "Sup556";
	descriptionShort = "Attachment Sup556";
	count = 1;
	model = "z\addons\dayz_communityweapons\models\attachments\BELT";
	picture = "\z\addons\dayz_communityweapons\models\attachments\BELT.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_BELT;
			type = "Attachment_Sup556";
			script = "spawn player_attachAttachment;";
		};
	};
};
