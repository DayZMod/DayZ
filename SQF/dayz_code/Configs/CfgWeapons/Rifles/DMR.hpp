class DMR_DZ : DMR
{
	//model = "z\addons\dayz_communityweapons\dmr\dmr.p3d";
	displayName = $STR_DZ_WPN_DMR_NAME;
	
	//memoryPointCamera = "opticView";
	
	magazines[] = {20Rnd_762x51_DMR};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\DMR\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\DMR\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single                                                                 
	{                                                                                     
		reloadTime = 0.6;                                                                 
		recoil = "recoil_single_primary_4outof10";                                        
		recoilProne = "recoil_single_primary_prone_4outof10";                             
		begin1[] = {"\z\addons\dayz_communityweapons\DMR\sounds\DMR_s1",5,1,1600};        // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\DMR\sounds\DMR_s2",5,1,1600};        // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\DMR\sounds\DMR_s3",5,1,1600};        // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\DMR\sounds\DMR_s4",5,1,1600};        // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};
	
	visionMode[] = {"Normal"};
	
	class Attachments
	{
		Attachment_Ghillie = "DMR_Gh_DZ";
	};
};

class DMR_Gh_DZ : DMR_DZ
{
	model = "z\addons\dayz_communityweapons\dmr\dmr_ghillie.p3d";
	picture = "\z\addons\dayz_communityweapons\dmr\data\w_dmr_ghillie_ca.paa";
	displayName = $STR_DZ_WPN_DMR_GH_NAME;
	
	memoryPointCamera = "opticView";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'DMR_DZ'] call player_removeAttachment";
		};
	};
};