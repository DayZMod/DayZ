class Attachment_SCOPED : CA_Magazine
{
	scope = 2;
	displayName = $STR_ATTACHMENT_NAME_SCOPE;
	descriptionShort = $STR_ATTACHMENT_DESC_SCOPE;
	count = 1;
	model = "z\addons\dayz_communityweapons\models\attachments\SCOPE";
	picture = "\z\addons\dayz_communityweapons\models\attachments\SCOPE.paa";
	type = 256;
	
	class ItemActions
	{
		class Use
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			action = "[_this select 0, 1] call dz_fn_attachment_attach";
			condition = "[_this select 0, 1] call dz_fn_attachment_canAttach";
			closeDisplay = true;
		};
	};
};
