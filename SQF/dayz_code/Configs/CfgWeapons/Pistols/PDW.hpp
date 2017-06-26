class PDW_DZ : UZI_EP1
{
	magazines[] =
	{
		30Rnd_9x19_UZI,
		30Rnd_9x19_UZI_SD
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\PDW\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\PDW\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single                                                                 // new sound
	{                                                                                     // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\PDW\sounds\Uzi_s1",5,1,700};         // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\PDW\sounds\Uzi_s2",5,1,700};         // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\PDW\sounds\Uzi_s3",5,1,700};         // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\PDW\sounds\Uzi_s4",5,1,700};         // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};                                                                                    // new sound
	class FullAuto : FullAuto                                                             // new sound
	{                                                                                     // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\PDW\sounds\Uzi_s1",5,1,700};         // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\PDW\sounds\Uzi_s2",5,1,700};         // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\PDW\sounds\Uzi_s3",5,1,700};         // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\PDW\sounds\Uzi_s4",5,1,700};         // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};                                                                                    // new sound
};