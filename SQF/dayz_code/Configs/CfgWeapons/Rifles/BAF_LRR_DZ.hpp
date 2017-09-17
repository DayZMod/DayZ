class BAF_LRR_DZ: Rifle
{
	scope = 2;
	model = "\ca\weapons_BAF\LRR_scoped_BAF";
	picture="\CA\weapons_baf\data\UI\LRR_scoped_ca.paa";  
	UiPicture="\CA\weapons\data\Ico\i_sniper_ca.paa";
	magazines[] = {1Rnd_86x70_L115A1};
	dexterity = 1.7;
	initSpeed = 936;
	handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M24.rtm"};	
	optics = true;		
	modelOptics = "\ca\Weapons_baf\LRR_optic"; 
	visionMode[] = {"Normal"};
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1400};
	discreteDistanceInitIndex = 2;
	opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
	opticsFlare = true;
	opticsDisablePeripherialVision = true;
	opticsZoomMin = 0.0498; distanceZoomMin=400;
	opticsZoomMax = 0.15; distanceZoomMax=120;
	discretefov[] = {0.0755,0.0249};
	discreteInitIndex = 0;
	displayname = $STR_BAF_CFGWEAPONS_BAF_LRR_SCOPED0;
	modes[] = {"Single"};
	/// type = WeaponSlotPrimary + WeaponSlotSecondary;		
	class Single: Mode_SemiAuto
	{
		dispersion = 0.00018;
		soundContinuous = 0;
		reloadTime=2;
		backgroundReload = true;
		recoil =          "recoil_single_primary_2outof10";
		recoilProne =     "recoil_single_primary_prone_2outof10";
		begin1[]={"ca\sounds_baf\weapons\AS50_rel", db9, 1,1300}; 
		soundBegin[]={begin1,1};
		minRange=2;
		minRangeProbab=0.10;
		midRange=250;
		midRangeProbab=0.7;
		maxRange=1500;
		maxRangeProbab=0.05;
	};
	class Library {libTextDesc = $STR_BAF_CFGWEAPONS_BAF_LRR_SCOPED_LIBRARY0;}; 
	descriptionShort = $STR_BAF_CFGWEAPONS_BAF_LRR_SCOPED0_0;
};