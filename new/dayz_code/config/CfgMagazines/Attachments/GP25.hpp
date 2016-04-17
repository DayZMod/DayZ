class Attachment_GP25 : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityweapons\attachments\gp25\gp25.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\gp25\data\m_gp25_ca.paa";
	
	displayName = $STR_DZ_ATT_GP25_NAME;
	descriptionShort = $STR_DZ_ATT_GP25_NAME;
	
	class ItemActions
	{
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			action = "[_this select 0, 1] call dz_fn_attachment_attach";
			condition = "[_this select 0, 1] call dz_fn_attachment_canAttach";
			closeDisplay = true;
		};
	};
};