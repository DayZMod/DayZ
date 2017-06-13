class CZ550_DZ : Huntingrifle
{
	model = "z\addons\dayz_communityweapons\CZ550\CZ550.p3d";
	magazines[] = {5Rnd_17HMR};

	reloadSound[] = {"\z\addons\dayz_communityweapons\CZ550\sounds\Bolt",1,1,35};           // new sound
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\CZ550\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\CZ550\sounds\Dry",0.01,1,10};            // new sound
	begin1[] = {"\z\addons\dayz_communityweapons\CZ550\sounds\CZ550_s1",5,1,1500};          // new sound
	begin2[] = {"\z\addons\dayz_communityweapons\CZ550\sounds\CZ550_s2",5,1,1500};          // new sound
	begin3[] = {"\z\addons\dayz_communityweapons\CZ550\sounds\CZ550_s3",5,1,1500};          // new sound
	begin4[] = {"\z\addons\dayz_communityweapons\CZ550\sounds\CZ550_s4",5,1,1500};          // new sound
	soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};               // new sound
	
	//CZ550_SCOPE
	optics = true;
	modelOptics = "\ca\weapons\2Dscope_Hunter_12";

	class OpticsModes : OpticsModes
	{
		class StepScope : StepScope {};
		class Ironsights
		{
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[] = {};
			cameraDir = "";
		};
	};
	//CZ550_SCOPE end
};