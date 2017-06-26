class L85_Holo_DZ : BAF_L85A2_RIS_Holo
{	
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_StanagSD
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\L85\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\L85\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single                                                                 // new sound
	{                                                                                     // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\L85\sounds\L85_s1",5,1,1000};        // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\L85\sounds\L85_s2",5,1,1000};        // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\L85\sounds\L85_s3",5,1,1000};        // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\L85\sounds\L85_s4",5,1,1000};        // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};                                                                                    // new sound
	class FullAuto : FullAuto                                                             // new sound
	{                                                                                     // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\L85\sounds\L85_s1",5,1,1000};        // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\L85\sounds\L85_s2",5,1,1000};        // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\L85\sounds\L85_s3",5,1,1000};        // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\L85\sounds\L85_s4",5,1,1000};        // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};                                                                                    // new sound
};