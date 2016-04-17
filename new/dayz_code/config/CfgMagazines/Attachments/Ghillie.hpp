class Attachment_Ghillie : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "ca\weapons\mag_univ.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\ghillie\data\m_ghillie_ca.paa";
	
	displayName = $STR_DZ_ATT_GHIL_NAME;
	descriptionShort = $STR_DZ_ATT_GHIL_DESC;
	
	class ItemActions
	{
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			action = "[_this select 0, 1] call dz_fn_attachment_attach";
			condition = "[_this select 0, 1] call dz_fn_attachment_canAttach";
			closeDisplay = true;
		};
		
//		class AttachToSecondary
//		{
//			text = $STR_DZ_ATT_ACT_TO_SECONDARY;
//			action = "[_this select 0, 0] call dz_fn_attachment_attach";
//			condition = "[_this select 0, 0] call dz_fn_attachment_canAttach";
			closeDisplay = true;
//		};
	};
};