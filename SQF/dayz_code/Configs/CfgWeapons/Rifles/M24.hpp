class M24_DZ : M24
{
	model = "ca\weapons\m24_green.p3d";
	displayName = $STR_DZ_WPN_M24_NAME;
		
	magazines[] = {5Rnd_762x51_M24};
	
	reloadSound[] = {"\z\addons\dayz_communityweapons\M24\sounds\Bolt",1,1,35};           // new sound
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\M24\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\M24\sounds\Dry",0.01,1,10};            // new sound
	begin1[] = {"\z\addons\dayz_communityweapons\M24\sounds\M24_s1",5,1,1500};            // new sound
	begin2[] = {"\z\addons\dayz_communityweapons\M24\sounds\M24_s2",5,1,1500};            // new sound
	begin3[] = {"\z\addons\dayz_communityweapons\M24\sounds\M24_s3",5,1,1500};            // new sound
	begin4[] = {"\z\addons\dayz_communityweapons\M24\sounds\M24_s4",5,1,1500};            // new sound
	soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};             // new sound
	
	class Attachments
	{
		Attachment_Ghillie = "M24_Gh_DZ";
	};
};

class M24_Gh_DZ : M24_DZ
{
	model = "z\addons\dayz_communityweapons\m24\m24_ghillie.p3d";
	picture = "\ca\weapons\data\equip\w_m24_camo_ca.paa";
	
	displayName = $STR_DZ_WPN_M24_GH_NAME;
	
	memoryPointCamera = "opticView";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'M24_DZ'] call player_removeAttachment";
		};
	};
};