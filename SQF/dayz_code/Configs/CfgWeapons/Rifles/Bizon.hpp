class Bizon_DZ : bizon
{
	model = "z\addons\dayz_communityweapons\bizon\bizon.p3d";
	displayName = $STR_DZ_WPN_BIZON_NAME;
	
	magazines[] =
	{
		64Rnd_9x19_Bizon,
		64Rnd_9x19_SD_Bizon
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single                                                                   // new sound
	{                                                                                       // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\BIZON_s1",5,1,700};       // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\BIZON_s2",5,1,700};       // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\BIZON_s3",5,1,700};       // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\BIZON_s4",5,1,700};       // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};           // new sound
	};                                                                                      // new sound
	class FullAuto : FullAuto                                                               // new sound
	{                                                                                       // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\BIZON_s1",5,1,700};       // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\BIZON_s2",5,1,700};       // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\BIZON_s3",5,1,700};       // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\BIZON_s4",5,1,700};       // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};           // new sound
	};                                                                                      // new sound
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {50,100,150};
	discreteDistanceInitIndex = 1;
	
	class Attachments
	{
		Attachment_SupBizon = "Bizon_SD_DZ";//left to maintain old attachment suppressor
		Attachment_Sup9 = "Bizon_SD_DZ";
	};
};

class Bizon_SD_DZ : bizon_silenced
{
	model = "z\addons\dayz_communityweapons\bizon\bizon_sd.p3d";
	displayName = $STR_DZ_WPN_BIZON_SD_NAME;
	
	magazines[] =
	{
		64Rnd_9x19_SD_Bizon,
		64Rnd_9x19_Bizon
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single                                                                   // new sound
	{                                                                                       // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\BizonSD_s1",1,1,50};      // new sound
		soundBegin[] = {"begin1",1};                                                        // new sound
	};                                                                                      // new sound
	class FullAuto : FullAuto                                                               // new sound
	{                                                                                       // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\Bizon\sounds\BizonSD_s1",1,1,50};      // new sound
		soundBegin[] = {"begin1",1};                                                        // new sound
	};                                                                                      // new sound
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {50,100,150};
	discreteDistanceInitIndex = 1;
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'Bizon_DZ'] call player_removeAttachment";
		};
	};
};