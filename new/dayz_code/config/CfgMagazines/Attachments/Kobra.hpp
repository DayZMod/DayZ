class Attachment_Kobra : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityweapons\attachments\kobra\kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\kobra\data\m_kobra_ca.paa";
	
	displayName = $STR_DZ_ATT_KOBRA_NAME;
	descriptionShort = $STR_DZ_ATT_KOBRA_DESC;
	
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