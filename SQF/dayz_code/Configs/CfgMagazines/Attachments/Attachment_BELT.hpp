//New Type

class Attachment_BELT : CA_Magazine {
	scope = public;
	displayName = "Ammo Belt";
	descriptionShort = "Ammo Belt Attachment.";
	count = 1;
	model = "z\addons\dayz_communityweapons\models\attachments\BELT";
	picture = "\z\addons\dayz_communityweapons\models\attachments\BELT.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = "Attach";
			type = "BELT"
			script = "spawn player_attachAttchment;";
		};
	};
};