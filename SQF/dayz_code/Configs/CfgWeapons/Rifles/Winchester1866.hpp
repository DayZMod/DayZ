class Winchester1866_DZ : Rifle
{
	scope = public;
	
	model = "\dayz_weapons\models\Winchester1866.p3d";
	picture = "\dayz_weapons\textures\equip_winchester1866_CA.paa";
	displayname = $STR_DZ_WPN_W1866_NAME;
	descriptionShort = $STR_DZ_WPN_W1866_DESC;
	
	magazines[] = {15Rnd_W1866_Slug};
	
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons_E\Data\Anim\LeeEnfield.rtm"};
	
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	modes[] = {"Single"};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\Winchester1866\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\Winchester1866\sounds\Dry",0.01,1,10};            // new sound
	class Single : Mode_SemiAuto
	{
		dispersion = 0.003;
		soundContinuous = 0;
		reloadTime = 0.5;
		begin1[] = {"\z\addons\dayz_communityweapons\Winchester1866\sounds\M110_s1",5,1,1000};		 // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\Winchester1866\sounds\M110_s2",5,1,1000};       // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\Winchester1866\sounds\M110_s3",5,1,1000};       // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\Winchester1866\sounds\M110_s4",5,1,1000};       // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};                    // new sound
		recoil = "recoil_single_primary_9outof10";
		recoilProne = "recoil_single_primary_prone_8outof10";
	};
};