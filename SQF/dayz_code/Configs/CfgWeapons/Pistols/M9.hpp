class M9_DZ : M9
{
	displayName = $STR_DZ_WPN_M9_NAME;

	magazines[] =
	{
		15Rnd_9x19_M9,
		15Rnd_9x19_M9SD
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\M9\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\M9\sounds\Dry",0.01,1,10};            // new sound
	begin1[] = {"\z\addons\dayz_communityweapons\M9\sounds\M9_s1",5,1,700};              // new sound
	begin2[] = {"\z\addons\dayz_communityweapons\M9\sounds\M9_s2",5,1,700};              // new sound
	begin3[] = {"\z\addons\dayz_communityweapons\M9\sounds\M9_s3",5,1,700};              // new sound
	begin4[] = {"\z\addons\dayz_communityweapons\M9\sounds\M9_s4",5,1,700};              // new sound
	soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};            // new sound
	
	class Attachments
	{
		Attachment_Sup9 = "M9_SD_DZ";
	};
};

class M9_SD_DZ : M9SD
{
	//model = "z\addons\dayz_communityweapons\m9\m9_sd.p3d";
	displayName = $STR_DZ_WPN_M9_SD_NAME;
	
	magazines[] =
	{
		15Rnd_9x19_M9SD,
		15Rnd_9x19_M9
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\M9\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\M9\sounds\Dry",0.01,1,10};            // new sound
	begin1[] = {"\z\addons\dayz_communityweapons\M9\sounds\M9SD_s1",1,1,50};             // new sound
	soundBegin[] = {"begin1",1};                                                         // new sound
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'M9_DZ'] call player_removeAttachment";
		};
	};
};