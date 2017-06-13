class UK59_DZ : PKM_DZ
{
	model = "z\addons\dayz_communityweapons\uk59\uk59.p3d";
	picture = "\z\addons\dayz_communityweapons\uk59\data\w_uk59_ca.paa";
	displayName = $STR_DZ_WPN_UK59_NAME;
	descriptionShort = $STR_DZ_WPN_UK59_DESC;
	
	magazines[] = {50Rnd_762x54_UK59};

	discreteDistance[] = {100,200,300,400,500,600,700,800};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\UK59\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\UK59\sounds\Dry",0.01,1,10};            // new sound
	class FullAuto : FullAuto
	{
		reloadTime = 0.10;
		begin1[] = {"\z\addons\dayz_communityweapons\UK59\sounds\M60_s1",5,1,1500};		   // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\UK59\sounds\M60_s2",5,1,1500};        // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\UK59\sounds\M60_s3",5,1,1500};        // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\UK59\sounds\M60_s4",5,1,1500};        // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};          // new sound
	};
};