//New Type

class Attachment_M203 : CA_Magazine {
	scope = public;
	displayName = "M203";
	descriptionShort = "Attachment M203";
	count = 1;
	model = "z\addons\dayz_communityweapons\models\attachments\BELT";
	picture = "\z\addons\dayz_communityweapons\models\attachments\BELT.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_BELT;
			type = "Attachment_M203";
			script = "spawn player_attachAttachment;";
		};
	};
};
