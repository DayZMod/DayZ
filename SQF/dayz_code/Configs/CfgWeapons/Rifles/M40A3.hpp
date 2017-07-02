class M40A3_Gh_DZ : M40A3
{
	picture = "\z\addons\dayz_communityweapons\m40a3\data\w_m40a3_ghillie_ca.paa";
	displayName = $STR_DZ_WPN_M40A3_GH_NAME;
	
	magazines[] = {5Rnd_762x51_M24};
	
	reloadSound[] = {"\z\addons\dayz_communityweapons\M40A3\sounds\Bolt",1,1,35};           // new sound
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\M40A3\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\M40A3\sounds\Dry",0.01,1,10};            // new sound
	begin1[] = {"\z\addons\dayz_communityweapons\M40A3\sounds\M40_s1",5,1,1600};            // new sound
	begin2[] = {"\z\addons\dayz_communityweapons\M40A3\sounds\M40_s2",5,1,1600};            // new sound
	begin3[] = {"\z\addons\dayz_communityweapons\M40A3\sounds\M40_s3",5,1,1600};            // new sound
	begin4[] = {"\z\addons\dayz_communityweapons\M40A3\sounds\M40_s4",5,1,1600};            // new sound
	soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};               // new sound
	
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
	picture = "\z\addons\dayz_communityweapons\m40a3\data\w_m40a3_ca.paa";
	displayName = $STR_DZ_WPN_M40A3_NAME;
	
	memoryPointCamera = "opticView";
	
	class Attachments
	{
		Attachment_Ghillie = "M40A3_Gh_DZ";
	};
	
	class ItemActions {};
};