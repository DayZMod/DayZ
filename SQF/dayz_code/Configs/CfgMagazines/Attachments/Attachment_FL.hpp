//New Type

class Attachment_FL : CA_Magazine {
	scope = public;
	displayName = "Flashlight";
	descriptionShort = "FlashLight Attachment.";
	count = 1;
	model = "z\addons\dayz_communityweapons\models\attachments\FL";
	picture = "\z\addons\dayz_communityweapons\models\attachments\FL.paa";
	type = 256;
	
	class ItemActions {
		class Use {
			text = "Attach";
			type = "FL";
			script = "spawn player_attachAttchment;";
		};
	};
};