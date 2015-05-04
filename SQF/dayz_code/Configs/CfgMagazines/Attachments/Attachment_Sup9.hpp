class Attachment_Sup9 : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityweapons\attachments\suppressor9\9mm_suppressor.p3d";
	picture = "\z\addons\dayz_communityweapons\data\m_placeholder_ca.paa";
	
	displayName = $STR_DZ_ATT_SUP9_NAME;
	descriptionShort = "9mm Sound Suppressor TODO";
	
	class ItemActions
	{
		class AttachToSecondary
		{
			text = $STR_DZ_ATT_ACT_TO_SECONDARY;
			script = "; [_id,0] call player_attachAttachment";
		};
	};
};