class M40A3_Gh_DZ : M40A3
{
	displayName = $STR_DZ_WPN_M40A3_GH_NAME;
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'M40A3_DZ'] call player_removeAttachment";
		};
	};
};

class M40A3_DZ : M40A3_Gh_DZ
{
	model = "z\addons\dayz_communityweapons\m40a3\m40a3.p3d";
	displayName = $STR_DZ_WPN_M40A3_NAME;
	
	memoryPointCamera = "opticView";
	
	class Attachments
	{
		attachments[] =
		{
			"Attachment_Ghillie"
		};
		
		Attachment_Ghillie = "M40A3_Gh_DZ";
	};
	
	class ItemActions {};
};