//TODO: configure recoil, rate of fire etc (different from akm)

class RPK_DZ : AK_47_M
{
	model = "z\addons\dayz_communityweapons\rpk\rpk.p3d";
	picture = "\z\addons\dayz_communityweapons\rpk\data\w_rpk_ca.paa";
	displayName = $STR_DZ_WPN_RPK_NAME;
	descriptionShort = $STR_DZ_WPN_RPK_DESC;
	
	magazines[] =
	{
		75Rnd_762x39_RPK,
		30Rnd_762x39_AK47
	};
	
	modes[] = {FullAuto,Single};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\RPK\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\RPK\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single                                                                 // new sound
	{                                                                                     // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\RPK\sounds\RPK_s1",5,1,1200};		  // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\RPK\sounds\RPK_s2",5,1,1200};        // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\RPK\sounds\RPK_s3",5,1,1200};        // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\RPK\sounds\RPK_s4",5,1,1200};        // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};                                                                                    // new sound
	class FullAuto : FullAuto                                                             // new sound
	{                                                                                     // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\RPK\sounds\RPK_s1",5,1,1200};        // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\RPK\sounds\RPK_s2",5,1,1200};        // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\RPK\sounds\RPK_s3",5,1,1200};        // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\RPK\sounds\RPK_s4",5,1,1200};        // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};         // new sound
	};                                                                                    // new sound
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
	
	class Attachments
	{
		Attachment_Kobra = RPK_Kobra_DZ;
		Attachment_PSO1 = RPK_PSO1_DZ;
	};
	
	class ItemActions {};
};

class RPK_Kobra_DZ : RPK_DZ
{
	model = "z\addons\dayz_communityweapons\rpk\rpk_kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\rpk\data\w_rpk_kobra_ca.paa";
	displayName = $STR_DZ_WPN_RPK_KOBRA_NAME;
	
	//kobra zeroing
	weaponInfoType = "RscWeaponEmpty";
	discreteDistance[] = {};
	discreteDistanceInitIndex = 0;
	distanceZoomMin = 200;
	distanceZoomMax = 200;
	//kobra zeroing end
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'RPK_DZ'] call player_removeAttachment";
		};
	};
};

class RPK_PSO1_DZ : RPK_Kobra_DZ
{
	model = "z\addons\dayz_communityweapons\rpk\rpk_pso.p3d";
	picture = "\z\addons\dayz_communityweapons\rpk\data\w_rpk_pso_ca.paa";
	displayName = $STR_DZ_WPN_RPK_PSO1_NAME;
	
	//PSO-1
	optics = true;
	opticsDisablePeripherialVision = true;
	modelOptics = "\ca\weapons\optika_snpiere";
	opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
	opticsZoomMin=0.0623; opticsZoomMax=0.0623;
	distanceZoomMin= 200; distanceZoomMax= 200;

	class OpticsModes
	{
		class Scope
		{
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit = 0.0623;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur3"};
			cameraDir = "";
		};
		
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
	//PSO-1 end
	
	class Attachments {};
	
	class ItemActions
	{
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'RPK_DZ'] call player_removeAttachment";
		};
	};
};