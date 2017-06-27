#define MOSIN_FLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	position = "fl_start";\
	direction = "fl_dir";\
	angle = 40;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
};

#define MOSIN_MFLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	position = "fl_start";\
	direction = "fl_dir";\
	angle = 40;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
};

#define MOSIN_BELT magazineReloadTime = 4.7;

#define MOSIN_BROKEN magazines[] = {};

class Mosin_Base : Rifle
{
	magazineReloadTime = 7.5;
//	reloadMagazineSound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sounds\sound\reload.ogg, 0.010000, 1};
//	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.01,1,10};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M24.rtm"};
	dexterity = 1.6;
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	
	magazines[] = {5Rnd_762x54_Mosin};
	
//	recoil = "Mosin_NagantRecoil";
//	recoilProne = "Mosin_NagantRecoilProne";
	recoil = "recoil_single_primary_9outof10";
	recoilProne = "recoil_single_primary_prone_8outof10";
	
	dispersion = 0.00091;
	reloadTime = 1.4;
//	sound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\Mosin.ogg,1.778279,1,1000};
//	sound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sounds\sound\Mosin.ogg,db-20,1,800};
	reloadSound[] = {"\z\addons\dayz_communityweapons\models\Mosin_nagant\sounds\Bolt",1,1,35};           // new sound
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\models\Mosin_nagant\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\models\Mosin_nagant\sounds\Dry",0.01,1,10};            // new sound
	begin1[] = {"\z\addons\dayz_communityweapons\models\Mosin_nagant\sounds\S12K_s1",5,1,1500};           // new sound
	begin2[] = {"\z\addons\dayz_communityweapons\models\Mosin_nagant\sounds\S12K_s2",5,1,1500};           // new sound
	begin3[] = {"\z\addons\dayz_communityweapons\models\Mosin_nagant\sounds\S12K_s3",5,1,1500};           // new sound
	begin4[] = {"\z\addons\dayz_communityweapons\models\Mosin_nagant\sounds\S12K_s4",5,1,1500};           // new sound
	soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};                             // new sound
	bullet1[] =  {"\z\addons\dayz_communityassets\sounds\Shells\Big_metal (1)",1,1,50};                   // new sound
	bullet2[] =  {"\z\addons\dayz_communityassets\sounds\Shells\Big_metal (3)",1,1,50};                   // new sound
	bullet3[] =  {"\z\addons\dayz_communityassets\sounds\Shells\Big_metal (2)",1,1,50};                   // new sound
	bullet4[] =  {"\z\addons\dayz_communityassets\sounds\Shells\Big_metal (1)",1,1,50};                   // new sound
	bullet5[] =  {"\z\addons\dayz_communityassets\sounds\Shells\Big_dirt (1)",1,1,50};                    // new sound
	bullet6[] =  {"\z\addons\dayz_communityassets\sounds\Shells\Big_dirt (2)",1,1,50};                    // new sound
	bullet7[] =  {"\z\addons\dayz_communityassets\sounds\Shells\Big_dirt (3)",1,1,50};                    // new sound
	bullet8[] =  {"\z\addons\dayz_communityassets\sounds\Shells\Big_dirt (4)",1,1,50};                    // new sound
	bullet9[] =  {"\z\addons\dayz_communityassets\sounds\Shells\Big_soft (1)",1,1,50};                    // new sound
	bullet10[] = {"\z\addons\dayz_communityassets\sounds\Shells\Big_soft (2)",1,1,50};                    // new sound
	bullet11[] = {"\z\addons\dayz_communityassets\sounds\Shells\Big_soft (3)",1,1,50};                    // new sound
	bullet12[] = {"\z\addons\dayz_communityassets\sounds\Shells\Big_soft (4)",1,1,50};                    // new sound
	soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,                     // new sound
					 "bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,                     // new sound
					 "bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};                 // new sound
};



/* Iron sights */

class Mosin_DZ : Mosin_Base
{
	scope = public;
	
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891.paa";
	displayName = $STR_DZ_WPN_MOSIN_NAME;
	descriptionShort = $STR_DZ_WPN_MOSIN_DESC;
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
	discreteDistanceInitIndex = 2;
	
	class Attachments
	{
		Attachment_SCOPED = "Mosin_PU_DZ";
		Attachment_FL = "Mosin_FL_DZ";
		Attachment_MFL = "Mosin_MFL_DZ";
		Attachment_BELT = "Mosin_Belt_DZ";
	};
};

class Mosin_BR_DZ : Mosin_DZ
{
	MOSIN_BROKEN
};

class Mosin_FL_DZ : Mosin_DZ
{
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891_FL.paa";
	displayName = $STR_DZ_WPN_MOSIN_FL_NAME;
	descriptionShort = $STR_DZ_WPN_MOSIN_DESC;
	
	MOSIN_FLASHLIGHT
	
	class Attachments
	{
		Attachment_SCOPED = "Mosin_PU_FL_DZ";
		Attachment_BELT = "Mosin_Belt_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'Mosin_DZ'] call player_removeAttachment";
		};
	};
};

class Mosin_MFL_DZ : Mosin_DZ
{
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891_FL.paa";
	displayName = $STR_DZ_WPN_MOSIN_MFL_NAME;
	descriptionShort = $STR_DZ_WPN_MOSIN_DESC;
	
	MOSIN_MFLASHLIGHT
	
	class Attachments
	{
		Attachment_SCOPED = "Mosin_PU_MFL_DZ";
		Attachment_BELT = "Mosin_Belt_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'Mosin_DZ'] call player_removeAttachment";
		};
	};
};

class Mosin_Belt_DZ : Mosin_DZ
{
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891B.paa";
	displayName = $STR_DZ_WPN_MOSIN_BELT_NAME;
	descriptionShort = $STR_DZ_WPN_MOSIN_DESC;
	
	MOSIN_BELT
	
	class Attachments
	{
		Attachment_SCOPED = "Mosin_PU_Belt_DZ";
		Attachment_FL = "Mosin_Belt_FL_DZ";
		Attachment_MFL = "Mosin_Belt_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveBelt
		{
			text = $STR_DZ_ATT_BELT_RMVE;
			script = "; ['Attachment_BELT',_id,'Mosin_DZ'] call player_removeAttachment";
		};
	};
};

class Mosin_Belt_FL_DZ : Mosin_FL_DZ
{
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891B_FL.paa";
	displayName = $STR_DZ_WPN_MOSIN_BELT_FL_NAME;
	descriptionShort = $STR_DZ_WPN_MOSIN_DESC;
	
	MOSIN_BELT
	
	class Attachments
	{
		Attachment_SCOPED = "Mosin_PU_Belt_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveBelt
		{
			text = $STR_DZ_ATT_BELT_RMVE;
			script = "; ['Attachment_BELT',_id,'Mosin_FL_DZ'] call player_removeAttachment";
		};
		
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'Mosin_Belt_DZ'] call player_removeAttachment";
		};
	};
};

class Mosin_Belt_MFL_DZ : Mosin_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891B_FL.paa";
	displayName = $STR_DZ_WPN_MOSIN_BELT_MFL_NAME;
	descriptionShort = $STR_DZ_WPN_MOSIN_DESC;
	
	MOSIN_BELT
	
	class Attachments
	{
		Attachment_SCOPED = "Mosin_PU_Belt_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveBelt
		{
			text = $STR_DZ_ATT_BELT_RMVE;
			script = "; ['Attachment_BELT',_id,'Mosin_MFL_DZ'] call player_removeAttachment";
		};
		
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'Mosin_Belt_DZ'] call player_removeAttachment";
		};
	};
};



/* PU Scope */

class Mosin_PU_DZ : Mosin_Base
{
	scope = public;
	
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_scoped_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891S.paa";
	displayName = $STR_DZ_WPN_MOSIN_PU_NAME;
	descriptionShort = $STR_DZ_WPN_MOSIN_DESC;
	
	opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
	opticsZoomInit = 0.083;
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300};
	discreteDistanceInitIndex = 2;
	
	class Attachments
	{
		Attachment_FL = "Mosin_PU_FL_DZ";
		Attachment_MFL = "Mosin_PU_MFL_DZ";
		Attachment_BELT = "Mosin_PU_Belt_DZ";
	};
	
	class ItemActions
	{
		class RemoveScope
		{
			text = $STR_DZ_ATT_PU_RMVE;
			script = "; ['Attachment_SCOPED',_id,'Mosin_DZ'] call player_removeAttachment";
		};
	};
};

class Mosin_PU_FL_DZ : Mosin_PU_DZ
{
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_scoped_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891S_FL.paa";
	displayName = $STR_DZ_WPN_MOSIN_PU_FL_NAME;
	descriptionShort = $STR_DZ_WPN_MOSIN_DESC;
	
	MOSIN_FLASHLIGHT
	
	class Attachments
	{
		Attachment_BELT = "Mosin_PU_Belt_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveScope
		{
			text = $STR_DZ_ATT_PU_RMVE;
			script = "; ['Attachment_SCOPED',_id,'Mosin_FL_DZ'] call player_removeAttachment";
		};
		
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'Mosin_PU_DZ'] call player_removeAttachment";
		};
	};
};

class Mosin_PU_MFL_DZ : Mosin_PU_DZ
{
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_scoped_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891S_FL.paa";
	displayName = $STR_DZ_WPN_MOSIN_PU_MFL_NAME;
	descriptionShort = $STR_DZ_WPN_MOSIN_DESC;
	
	MOSIN_MFLASHLIGHT
	
	class Attachments
	{
		Attachment_BELT = "Mosin_PU_Belt_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveScope
		{
			text = $STR_DZ_ATT_PU_RMVE;
			script = "; ['Attachment_SCOPED',_id,'Mosin_MFL_DZ'] call player_removeAttachment";
		};
		
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'Mosin_PU_DZ'] call player_removeAttachment";
		};
	};
};

class Mosin_PU_Belt_DZ : Mosin_PU_DZ
{
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_scoped_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891SB.paa";
	displayName = $STR_DZ_WPN_MOSIN_PU_BELT_NAME;
	descriptionShort = $STR_DZ_WPN_MOSIN_DESC;
	
	MOSIN_BELT
	
	class Attachments
	{
		Attachment_FL = "Mosin_PU_Belt_FL_DZ";
		Attachment_MFL = "Mosin_PU_Belt_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveScope
		{
			text = $STR_DZ_ATT_PU_RMVE;
			script = "; ['Attachment_SCOPED',_id,'Mosin_Belt_DZ'] call player_removeAttachment";
		};
		
		class RemoveBelt
		{
			text = $STR_DZ_ATT_BELT_RMVE;
			script = "; ['Attachment_BELT',_id,'Mosin_PU_DZ'] call player_removeAttachment";
		};
	};
};

class Mosin_PU_Belt_FL_DZ :  Mosin_PU_FL_DZ
{
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_scoped_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891SB_FL.paa";
	displayName = $STR_DZ_WPN_MOSIN_PU_BELT_FL_NAME;
	descriptionShort = $STR_DZ_WPN_MOSIN_DESC;
	
	MOSIN_BELT
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveScope
		{
			text = $STR_DZ_ATT_PU_RMVE;
			script = "; ['Attachment_SCOPED',_id,'Mosin_Belt_FL_DZ'] call player_removeAttachment";
		};
		
		class RemoveBelt
		{
			text = $STR_DZ_ATT_BELT_RMVE;
			script = "; ['Attachment_BELT',_id,'Mosin_PU_FL_DZ'] call player_removeAttachment";
		};
		
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'Mosin_PU_Belt_DZ'] call player_removeAttachment";
		};
	};
};

class Mosin_PU_Belt_MFL_DZ :  Mosin_PU_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_scoped_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891SB_FL.paa";
	displayName = $STR_DZ_WPN_MOSIN_PU_BELT_MFL_NAME;
	descriptionShort = $STR_DZ_WPN_MOSIN_DESC;
	
	MOSIN_BELT
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveScope
		{
			text = $STR_DZ_ATT_PU_RMVE;
			script = "; ['Attachment_SCOPED',_id,'Mosin_Belt_MFL_DZ'] call player_removeAttachment";
		};
		
		class RemoveBelt
		{
			text = $STR_DZ_ATT_BELT_RMVE;
			script = "; ['Attachment_BELT',_id,'Mosin_PU_MFL_DZ'] call player_removeAttachment";
		};
		
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'Mosin_PU_Belt_DZ'] call player_removeAttachment";
		};
	};
};

#undef MOSIN_FLASHLIGHT
#undef MOSIN_MFLASHLIGHT
#undef MOSIN_BELT
