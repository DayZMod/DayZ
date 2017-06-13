class MP5_DZ : MP5A5
{
	picture = "\z\addons\dayz_communityweapons\mp5\data\w_mp5_ca.paa";
	displayName = $STR_DZ_WPN_MP5_NAME;
	
	magazines[] =
	{
		30Rnd_9x19_MP5,
		30Rnd_9x19_MP5SD
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\MP5\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\MP5\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single                                                                 // new sound
	{                                                                                     // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5_s1",5,1,700};         // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5_s2",5,1,700};         // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5_s3",5,1,700};         // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5_s4",5,1,700};         // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};                                                                                    // new sound
	class Burst : Burst                                                                   // new sound
	{                                                                                     // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5_s1",5,1,700};         // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5_s2",5,1,700};         // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5_s3",5,1,700};         // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5_s4",5,1,700};         // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};                                                                                    // new sound
	class FullAuto : FullAuto                                                             // new sound
	{                                                                                     // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5_s1",5,1,700};         // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5_s2",5,1,700};         // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5_s3",5,1,700};         // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5_s4",5,1,700};         // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};                                                                                    // new sound
	
	class Attachments
	{
		Attachment_Sup9 = "MP5_SD_DZ";
	};
};

class MP5_SD_DZ : MP5SD
{
	model = "z\addons\dayz_communityweapons\mp5\mp5_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\mp5\data\w_mp5_sd_ca.paa";
	displayName = $STR_DZ_WPN_MP5_SD_NAME;
	
	magazines[] =
	{
		30Rnd_9x19_MP5SD,
		30Rnd_9x19_MP5
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\MP5\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\MP5\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single                                                                 // new sound
	{                                                                                     // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5SD_s1",1,1,50};        // new sound
		soundBegin[] = {"begin1",1};                                                      // new sound
	};                                                                                    // new sound
	class Burst : Burst                                                                   // new sound
	{                                                                                     // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5SD_s1",1,1,50};        // new sound
		soundBegin[] = {"begin1",1};                                                      // new sound
	};                                                                                    // new sound
	class FullAuto : FullAuto                                                             // new sound
	{                                                                                     // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\MP5\sounds\MP5SD_s1",1,1,50};        // new sound
		soundBegin[] = {"begin1",1};                                                      // new sound
	};                                                                                    // new sound
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP5_DZ'] call player_removeAttachment";
		};
	};
};