class Attachment_Ghillie : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "ca\weapons\mag_univ.p3d";
	picture = "\z\addons\dayz_communityweapons\data\m_placeholder_ca.paa";
	
	displayName = $STR_DZ_ATT_GHIL_NAME;
	descriptionShort = "Small roll of camo netting. TODO";
	
	class ItemActions
	{
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
		
		/*class AttachToSecondary
		{
			text = $STR_DZ_ATT_ACT_TO_SECONDARY;
			script = "; [_id,0] call player_attachAttachment";
		};*/
	};
};