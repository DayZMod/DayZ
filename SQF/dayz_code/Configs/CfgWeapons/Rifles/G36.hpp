class G36A_Camo_DZ : G36C_camo
{
	model = "z\addons\dayz_communityweapons\g36\g36a_camo.p3d";
	displayName = $STR_DZ_WPN_G36A_CAMO_NAME;
	
	magazines[] =
	{
		30Rnd_556x45_G36,
		30Rnd_556x45_G36SD
	};
	
	//G36 Optic
	optics = true;
	opticsDisablePeripherialVision = true;
	modelOptics = "z\addons\dayz_communityweapons\g36\2dscope_g36.p3d";
	opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur2"};
	opticsZoomMin=0.083; opticsZoomMax=0.083;
	distanceZoomMin=100; distanceZoomMax=100;

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
		attachments[] =
		{
			"Attachment_Sup556"
		};
		
		Attachment_Sup556 = "G36A_Camo_SD_DZ";
	};
};

class G36A_Camo_SD_DZ : G36_C_SD_camo
{
	model = "z\addons\dayz_communityweapons\g36\g36a_camo_sd.p3d";
	displayName = $STR_DZ_WPN_G36A_CAMO_SD_NAME;
	
	magazines[] =
	{
		30Rnd_556x45_G36SD,
		30Rnd_556x45_G36
	};
	
	//G36 Optic
	optics = true;
	opticsDisablePeripherialVision = true;
	modelOptics = "z\addons\dayz_communityweapons\g36\2dscope_g36_noflash.p3d";
	opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur2"};
	opticsZoomMin=0.083; opticsZoomMax=0.083;
	distanceZoomMin=100; distanceZoomMax=100;

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
			text = $STR_DZ_ATT_SUP556_RMVE;
			script = "; ['Attachment_Sup556',_id,'G36A_Camo_DZ'] call player_removeAttachment";
		};
	};
};

class G36K_Camo_DZ : G36A_Camo_DZ
{
	model = "z\addons\dayz_communityweapons\g36\g36k_camo";
	displayName = $STR_DZ_WPN_G36K_CAMO_NAME;
	
	class Attachments
	{
		attachments[] =
		{
			"Attachment_Sup556"
		};
		
		Attachment_Sup556 = "G36K_Camo_SD_DZ";
	};
};

class G36K_Camo_SD_DZ : G36A_Camo_SD_DZ
{
	model = "z\addons\dayz_communityweapons\g36\g36k_camo_sd";
	displayName = $STR_DZ_WPN_G36K_CAMO_SD_NAME;
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_DZ_ATT_SUP556_RMVE;
			script = "; ['Attachment_Sup556',_id,'G36K_Camo_DZ'] call player_removeAttachment";
		};
	};
};