class Attachment_FL_Pist : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "ca\weapons\mag_univ.p3d";
	picture = "\z\addons\dayz_communityweapons\data\m_placeholder_ca.paa";
	
	displayName = $STR_DZ_ATT_FL_PST_NAME;
	descriptionShort = "Rail attachable pistol flashlight TODO";
	
	class ItemActions
	{
		class AttachToSecondary
		{
			text = $STR_DZ_ATT_ACT_TO_SECONDARY;
			script = "; [_id,0] call player_attachAttachment";
		};
	};
};