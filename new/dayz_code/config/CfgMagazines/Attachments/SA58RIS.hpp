class Attachment_SA58RIS : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "ca\weapons\mag_univ.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\SA58RIS\data\m_sa58ris_ca.paa";
	
	displayName = $STR_DZ_ATT_SA58RIS_NAME;
	descriptionShort = $STR_DZ_ATT_SA58RIS_DESC;
	
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