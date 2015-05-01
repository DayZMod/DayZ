//New Type

class Attachment_HOLO : CA_Magazine {
	scope = public;
	displayName = "HOLO";
	descriptionShort = "HOLO attachment";
	count = 1;
	model = "z\addons\dayz_communityweapons\models\attachments\BELT";
	picture = "\z\addons\dayz_communityweapons\models\attachments\BELT.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_ATTACH_BELT;
			type = "Attachment_HOLO";
			script = "spawn player_attachAttachment;";
		};
	};
};
