class PKM_DZ : PK
{
	type = WeaponSlotPrimary;
	
	model = "z\addons\dayz_communityweapons\pkm\pkm.p3d";
	displayName = $STR_DZ_WPN_PKM_NAME;
	
	magazines[] = {100Rnd_762x54_PK};
	
	modes[] = {FullAuto};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\PKM\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\PKM\sounds\Dry",0.01,1,10};            // new sound
	class FullAuto : Manual
	{
		reloadTime = 0.08;
		begin1[] = {"\z\addons\dayz_communityweapons\PKM\sounds\PKM_s1",5,1,1500};		  // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\PKM\sounds\PKM_s2",5,1,1500};        // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\PKM\sounds\PKM_s3",5,1,1500};        // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\PKM\sounds\PKM_s4",5,1,1500};        // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 2;
};