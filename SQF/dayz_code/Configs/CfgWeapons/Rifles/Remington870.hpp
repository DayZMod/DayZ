#define R870_FLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	position = "flash dir";\
	direction = "flash";\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define R870_MFLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	position = "flash dir";\
	direction = "flash";\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
}

class Remington870_DZ : Rifle
{
	scope = public;
	
	model = "\dayz_weapons\models\Remington870.p3d";
	picture = "\dayz_weapons\textures\equip_remington870_CA.paa";
	displayname = $STR_DZ_WPN_R870_NAME;
	descriptionShort = $STR_DZ_WPN_R870_DESC;
	
	magazines[] =
	{
		8Rnd_12Gauge_Slug,
		8Rnd_12Gauge_Buck,
		2Rnd_12Gauge_Slug,
		2Rnd_12Gauge_Buck
	};
	
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons_E\Data\Anim\LeeEnfield.rtm"};
	
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	modes[] = {"Single"};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\M1014\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\M1014\sounds\Dry",0.01,1,10};            // new sound
	class Single : Mode_SemiAuto
	{
		dispersion = 0.003;
		soundContinuous = 0;
		reloadTime = 0.5;
		begin1[] = {"\z\addons\dayz_communityweapons\M1014\sounds\M1014_s1",5,1,1000};		// new sound
		begin2[] = {"\z\addons\dayz_communityweapons\M1014\sounds\M1014_s2",5,1,1000};      // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\M1014\sounds\M1014_s3",5,1,1000};      // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\M1014\sounds\M1014_s4",5,1,1000};      // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};           // new sound
		recoil = "recoil_single_primary_9outof10";
		recoilProne = "recoil_single_primary_prone_8outof10";
	};

	class Attachments
	{
		Attachment_FL = "Remington870_FL_DZ";
		Attachment_MFL = "Remington870_MFL_DZ";
	};
};

class Remington870_FL_DZ : Remington870_DZ
{
	model = "\dayz_weapons\models\Remington870_lamp.p3d";
	displayname = $STR_DZ_WPN_R870_FL_NAME;
	descriptionShort = $STR_DZ_WPN_R870_FL_DESC;
	
	R870_FLASHLIGHT;

	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'Remington870_DZ'] call player_removeAttachment";
		};
	};
};

class Remington870_MFL_DZ : Remington870_DZ
{
	model = "\dayz_weapons\models\Remington870_lamp.p3d";
	displayname = $STR_DZ_WPN_R870_MFL_NAME;
	descriptionShort = $STR_DZ_WPN_R870_FL_DESC;
	
	R870_MFLASHLIGHT;

	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'Remington870_DZ'] call player_removeAttachment";
		};
	};
};
