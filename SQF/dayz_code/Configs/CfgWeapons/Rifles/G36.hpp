class G36K_Camo_DZ : G36C
{
	model = "z\addons\dayz_communityweapons\g36\g36k_camo.p3d";
	picture = "\z\addons\dayz_communityweapons\g36\data\w_g36k_camo_ca.paa";
	displayName = $STR_DZ_WPN_G36K_CAMO_NAME;
	
	magazines[] =
	{
		30Rnd_556x45_G36,
		30Rnd_556x45_G36SD
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\G36\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\G36\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single
	{
		dispersion = 0.0011;
		begin1[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36_s1",5,1,1100};        // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36_s2",5,1,1100};        // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36_s3",5,1,1100};        // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36_s4",5,1,1100};        // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};
	class Burst : Burst
	{
		dispersion = 0.0011;
		begin1[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36_s1",5,1,1100};        // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36_s2",5,1,1100};        // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36_s3",5,1,1100};        // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36_s4",5,1,1100};        // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};
	class FullAuto : FullAuto
	{
		dispersion = 0.0011;
		begin1[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36_s1",5,1,1100};        // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36_s2",5,1,1100};        // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36_s3",5,1,1100};        // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36_s4",5,1,1100};        // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};
	
	//G36 Optic
	optics = true;
	opticsDisablePeripherialVision = true;
	modelOptics = "z\addons\dayz_communityweapons\g36\2dscope_g36.p3d";
	opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur2"};
	opticsZoomMin=0.083; opticsZoomMax=0.083;
	distanceZoomMin=100; distanceZoomMax=100;
	
	dexterity = 1.8;

	class OpticsModes
	{
		class Kolimator
		{
			opticsID = 1;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin=100;
			distanceZoomMax=100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
			cameraDir = "";
		};
		
		class Scope
		{
			opticsID = 2;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.083;
			opticsZoomMax = 0.083;
			opticsZoomInit= 0.083;
			distanceZoomMin=200;
			distanceZoomMax=200;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
			cameraDir = "";
		};
	};
	//G36 Optic end
	
	class Attachments
	{
		Attachment_Sup556 = "G36K_Camo_SD_DZ";
	};
};

class G36K_Camo_SD_DZ : G36_C_SD_eotech
{
	model = "z\addons\dayz_communityweapons\g36\g36k_camo_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36\data\w_g36k_camo_sd_ca.paa";
	displayName = $STR_DZ_WPN_G36K_CAMO_SD_NAME;
	
	magazines[] =
	{
	//	30Rnd_556x45_G36,
		30Rnd_556x45_G36SD
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\G36\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\G36\sounds\Dry",0.01,1,10};	          // new sound
	class Single : Single                                                                 
	{                                                                                     
		dispersion = 0.0011;                                                              
		begin1[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36SD_s1",1,1,100};       // new sound
		soundBegin[] = {"begin1",1};                                                      // new sound
	};
	class Burst : Burst                                                                 
	{                                                                                     
		dispersion = 0.0011;                                                              
		begin1[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36SD_s1",1,1,100};       // new sound
		soundBegin[] = {"begin1",1};                                                      // new sound
	};
	class FullAuto : FullAuto                                                             
	{                                                                                     
		dispersion = 0.0011;                                                              
		begin1[] = {"\z\addons\dayz_communityweapons\G36\sounds\G36SD_s1",1,1,100};       // new sound
		soundBegin[] = {"begin1",1};                                                      // new sound
	};
	
	//G36 Optic
	optics = true;
	opticsDisablePeripherialVision = true;
	modelOptics = "z\addons\dayz_communityweapons\g36\2dscope_g36_noflash.p3d";
	opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur2"};
	opticsZoomMin=0.083; opticsZoomMax=0.083;
	distanceZoomMin=100; distanceZoomMax=100;
	
	dexterity = 1.7;

	class OpticsModes
	{
		class Kolimator
		{
			opticsID = 1;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin=100;
			distanceZoomMax=100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
			cameraDir = "";
		};
		
		class Scope
		{
			opticsID = 2;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.083;
			opticsZoomMax = 0.083;
			opticsZoomInit= 0.083;
			distanceZoomMin=200;
			distanceZoomMax=200;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
			cameraDir = "";
		};
	};
	//G36 Optic end
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'G36K_Camo_DZ'] call player_removeAttachment";
		};
	};
};

class G36A_Camo_DZ : G36K_Camo_DZ
{
	model = "z\addons\dayz_communityweapons\g36\g36a_camo.p3d";
	picture = "\z\addons\dayz_communityweapons\g36\data\w_g36a_camo_ca.paa";
	displayName = $STR_DZ_WPN_G36A_CAMO_NAME;
	
	dexterity = 1.66;
	
	class Single : Single
	{
		dispersion = 0.0007;
	};	
	class Burst : Burst
	{
		dispersion = 0.0007;
	};	
	class FullAuto : FullAuto
	{
		dispersion = 0.0007;
	};
	
	class Attachments {};
};

/*class G36A_Camo_SD_DZ : G36K_Camo_SD_DZ
{
	model = "z\addons\dayz_communityweapons\g36\g36a_camo_sd";
	picture = "\z\addons\dayz_communityweapons\g36\data\w_g36a_camo_sd_ca.paa";
	displayName = $STR_DZ_WPN_G36K_CAMO_SD_NAME;
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'G36K_Camo_DZ'] call player_removeAttachment";
		};
	};
};*/