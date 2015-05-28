class Mosin_Nagant_broken: Rifle
{
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M24.rtm"}; // Hand positions	
	type = "1";
	scope = 2;
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_animated";
	displayName = "Mosin Nagant (BROKEN)";
	descriptionShort="This weapon is broken<br />Attachments:<br />Ammo:";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891.paa";
	drySound[] = {""};
};

class Mosin_Nagant_Base: Rifle
{
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M24.rtm"}; // Hand positions	
	type = "1"; // Prevents it from using backpack slot
	scope = 1;	//
	value = 0;
	magazineReloadTime = 7.5;
	showaimcursorinternal = 0;
	cursoraim = "\ca\Weapons\Data\clear_empty";
	cursoraimon = "\ca\Weapons\Data\clear_empty";
	ballisticsComputer = 0;
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_animated";
	displayName = "Mosin Nagant (CUSTOM)";
	descriptionShort="<br />Attachments: <br />Ammo: Mosin Nagant Ammo";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891.paa";
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.01,1,10};
	modelOptics = "-";
	reloadMagazineSound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\reload.ogg, 0.010000, 1};
	magazines[] = {"Mosin_Nagant_Ammo"};
	modes[] = {"Single"};
	dexterity = 1.57;
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex = 2;
	opticsZoomInit = 0.3;
	opticsZoomMin = 0.3;
	opticsZoomMax = 0.2;
	distanceZoomMin = 300;
	distanceZoomMax = 100;
	canLock = 0;

	class Single : Mode_SemiAuto 
	{
		sound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\Mosin.ogg,1.778279,1,1000};
		recoil = "Mosin_NagantRecoil";
		recoilProne = "Mosin_NagantRecoilProne";
		dispersion = 0.0009100;
		reloadTime = 1.4;
		minRange=0.5;
		minRangeProbab=0.800000;
		midRange=100;
		midRangeProbab=0.60000;
		maxRange=200;
		maxRangeProbab=0.080000;
	};
};

class Mosin_Nagant: Mosin_Nagant_Base
{
	scope = 2;	
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_animated";
	displayName = "Mosin Nagant (CUSTOM)";
	descriptionShort="<br />Attachments: <br />Ammo: Mosin Nagant Ammo";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891.paa";
	
	class Attachments
	{
		attachments[] =
		{
			"Attachment_FL",
			"Attachment_SCOPED",
			"Attachment_BELT"
		};
		
		Attachment_FL = "Mosin_Nagant_FL";
		Attachment_SCOPED = "Mosin_Nagant_Scoped";
		Attachment_BELT = "Mosin_Nagant_Belt";
	};
};
	
// -------------------------------- Mosin 1891 Variants --------------------------------------//
class Mosin_Nagant_FL : Mosin_Nagant_Base
{
	scope = 2;
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_FL_animated";
	displayName = "Mosin Nagant (CUSTOM)";
	descriptionShort="<br />Attachments: Flashlight<br />Ammo: Mosin Nagant Ammo";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891_FL.paa";
	dexterity = 1.6;
	class FlashLight {
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1.0};
		position = "fl_start";
		direction = "fl_dir";
		angle = 40;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};
	
	class Attachments
	{
		attachments[] = {"Attachment_SCOPED","Attachment_BELT"};
		Attachment_SCOPED = "Mosin_Nagant_Scoped_FL";
		Attachment_BELT = "Mosin_Nagant_Belt_FL";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = "Remove Flashlight";
			script = "; ['Attachment_FL',_id,'Mosin_Nagant'] call player_removeAttachment";
		};
	};
};

class Mosin_Nagant_Scoped : Mosin_Nagant_Base
{
	scope = 2;
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_scoped_animated";
	displayName = "Mosin Nagant (CUSTOM)";
	descriptionShort="<br />Attachments: Hunting Scope<br />Ammo: Mosin Nagant Ammo";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891S.paa";
	dexterity = 1.6;
	opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
	opticsZoomInit = 0.083;
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;
	distanceZoomMin = 110;
	distanceZoomMax = 110;
	
	class Attachments
	{
		attachments[] = {"Attachment_FL","Attachment_BELT"};
		Attachment_FL = "Mosin_Nagant_Scoped_FL";
		Attachment_BELT = "Mosin_Nagant_Belt_Scoped";
	};
	
	class ItemActions
	{
		class RemoveScope
		{
			text = "Remove Scope";
			script = "; ['Attachment_SCOPED',_id,'Mosin_Nagant'] call player_removeAttachment";
		};
	};
};
	
class Mosin_Nagant_Scoped_FL : Mosin_Nagant_Base
{
	scope = 2;
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_scoped_FL_animated";
	displayName = "Mosin Nagant (CUSTOM)";
	descriptionShort="<br />Attachments: Hunting Scope and Flashlight<br />Ammo: Mosin Nagant Ammo";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891S_FL.paa";
	dexterity = 1.6;
	opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
	opticsZoomInit = 0.083;
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;
	distanceZoomMin = 110;
	distanceZoomMax = 110;
	class FlashLight {
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1.0};
		position = "fl_start";
		direction = "fl_dir";
		angle = 40;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};
	
	class Attachments
	{
		attachments[] = {"Attachment_BELT"};
		Attachment_BELT = "Mosin_Nagant_Belt_Scoped_FL";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = "Remove Flashlight";
			script = "; ['Attachment_FL',_id,'Mosin_Nagant_Scoped'] call player_removeAttachment";
		};
		
		class RemoveScope
		{
			text = "Remove Scope";
			script = "; ['Attachment_SCOPED',_id,'Mosin_Nagant_FL'] call player_removeAttachment";
		};
	};
};
class Mosin_Nagant_Belt : Mosin_Nagant_Base
{
	scope = 2;	
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_animated";
	displayName = "Mosin Nagant (CUSTOM)";
	descriptionShort="<br />Attachments: Ammo Belt<br />Ammo: Mosin Nagant Ammo";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891B.paa";
	dexterity = 1.6;
	magazineReloadTime = 4.7;
	reloadMagazineSound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\reload-s.ogg, 0.010000, 1};
	
	class Attachments
	{
		attachments[] = {"Attachment_FL","Attachment_SCOPED"};
		Attachment_FL = "Mosin_Nagant_Belt_FL";
		Attachment_SCOPED = "Mosin_Nagant_Belt_Scoped";
	};
	
	class ItemActions
	{
		class RemoveBelt
		{
			text = "Remove Belt";
			script = "; ['Attachment_BELT',_id,'Mosin_Nagant'] call player_removeAttachment";
		};
	};
};

class Mosin_Nagant_Belt_FL : Mosin_Nagant_Base
{
	scope = 2;	
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_FL_animated";
	displayName = "Mosin Nagant (CUSTOM)";
	descriptionShort="<br />Attachments: Ammo Belt and Flashlight<br />Ammo: Mosin Nagant Ammo";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891B_FL.paa";
	dexterity = 1.6;
	magazineReloadTime = 4.7;
	reloadMagazineSound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\reload-s.ogg, 0.010000, 1};
	
	class FlashLight {
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1.0};
		position = "fl_start";
		direction = "fl_dir";
		angle = 40;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};
	
	class Attachments
	{
		attachments[] = {"Attachment_SCOPED"};
		Attachment_SCOPED = "Mosin_Nagant_Belt_Scoped_FL";
	};
	
	class ItemActions
	{
		class RemoveBelt
		{
			text = "Remove Belt";
			script = "; ['Attachment_BELT',_id,'Mosin_Nagant_FL'] call player_removeAttachment";
		};
		
		class RemoveFlashlight
		{
			text = "Remove Flashlight";
			script = "; ['Attachment_FL',_id,'Mosin_Nagant_Belt'] call player_removeAttachment";
		};
	};
};

class Mosin_Nagant_Belt_Scoped : Mosin_Nagant_Base
{
	scope = 2;	
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_scoped_animated";
	displayName = "Mosin Nagant (CUSTOM)";
	descriptionShort="<br />Attachments: Hunting Scope and Ammo Belt<br />Ammo: Mosin Nagant Ammo";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891SB.paa";
	dexterity = 1.6;
	magazineReloadTime = 4.7;
	reloadMagazineSound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\reload-s.ogg, 0.010000, 1};
	
	class Attachments
	{
		attachments[] = {"Attachment_FL"};
		Attachment_FL = "Mosin_Nagant_Belt_Scoped_FL";
	};
	
	class ItemActions
	{
		class RemoveBelt
		{
			text = "Remove Belt";
			script = "; ['Attachment_BELT',_id,'Mosin_Nagant_Scoped'] call player_removeAttachment";
		};
		
		class RemoveScope
		{
			text = "Remove Scope";
			script = "; ['Attachment_SCOPED',_id,'Mosin_Nagant_Belt'] call player_removeAttachment";
		};
	};
};

class Mosin_Nagant_Belt_Scoped_FL : Mosin_Nagant_Base
{
	scope = 2;	
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_scoped_FL_animated";
	displayName = "Mosin Nagant (CUSTOM)";
	descriptionShort="<br />Attachments: Hunting Scope, Ammo Belt and Flashlight<br />Ammo: Mosin Nagant Ammo";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891SB_FL.paa";
	dexterity = 1.6;
	magazineReloadTime = 4.7;
	reloadMagazineSound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\reload-s.ogg, 0.010000, 1};
	
	class FlashLight {
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1.0};
		position = "fl_start";
		direction = "fl_dir";
		angle = 40;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};
	
	class ItemActions
	{
		class RemoveBelt
		{
			text = "Remove Belt";
			script = "; ['Attachment_BELT',_id,'Mosin_Nagant_Scoped_FL'] call player_removeAttachment";
		};
		
		class RemoveFlashlight
		{
			text = "Remove Flashlight";
			script = "; ['Attachment_FL',_id,'Mosin_Nagant_Belt_Scoped'] call player_removeAttachment";
		};
		
		class RemoveScope
		{
			text = "Remove Scope";
			script = "; ['Attachment_SCOPED',_id,'Mosin_Nagant_Belt_FL'] call player_removeAttachment";
		};
	};
};
/*	
// -------------------------------------------- Carbin Variants ------------------------------------------------------- //
	class Mosin_Nagant_Carbine_broken: Rifle
	{
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M24.rtm"}; // Hand positions	
		type = "1";
		scope = 2;
		model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_animated";
		displayName = "Mosin Carbine (BROKEN)";
		descriptionShort="This weapon is broken, find a weapon repair kit to fix it<br />Attachments:<br />Ammo:";
		picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891.paa";
		drySound[] = {""};
		class ItemActions
		{
			class CraftFixWeapon
			{
				text = "Fix Weapon";
				script = "spawn player_weaponatt_fixweapon;";
				woutput = "Mosin_Nagant";
				input[] = {{"ItemWeaponRepairKit",1}};
				ioutput[] = {};
			};
		};
	};
	
	class Mosin_Nagant_Carbine : Mosin_Nagant
	{
		model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_m44_animated";
		magazines[] = {"Mosin_Nagant_Ammo"};
		displayName = "Mosin Carbine (CUSTOM)";
		descriptionShort="<br />Attachments: <br />Ammo: Mosin Nagant Ammo";
		picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\carbine.paa";
		dexterity = 2;
		
		class Single: Mode_SemiAuto 
		{
			sound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\Carbine.ogg,1.778279,1,1000};
			recoil = "Mosin_NagantRecoil";
			recoilProne = "Mosin_Nagant_CarbineRecoilProne";
			dispersion = 0.0010000;
			reloadTime = 1.4;
			minRange=0.5;
			minRangeProbab=0.800000;
			midRange=100;
			midRangeProbab=0.60000;
			maxRange=200;
			maxRangeProbab=0.080000;
		};
		
		class ItemActions
		{
			class CraftHuntingScope
			{
				text = "Add Hunting Scope";
				script = "spawn player_weaponatt_huntingscope;";
				tool[] = {};
				input[] = {{"mosin_scope_DZAM",1}};
				woutput = "Mosin_Nagant_Carbine_Scoped";
				ioutput[] = {};
			};
			class CraftAmmoBelt
			{
				text = "Add Ammo Belt";
				script = "spawn player_weaponatt_ammobelt;";
				tool[] = {};
				input[] = {{"mosin_belt_DZAM",1}};
				woutput = "Mosin_Nagant_Carbine_Belt";
				ioutput[] = {};
			};
			class CraftFlashlight
			{
				text = "Add Flashlight";
				script = "spawn player_weaponatt_flashlight;";
				tool[] = {};
				input[] = {{"GUNFLASHLIGHT_DZAM",1}};
				woutput = "Mosin_Nagant_Carbine_FL";
				ioutput[] = {};
			};
			class CraftMozbow
			{
				text = "Turn into Mozbow Stock";
				script = "spawn player_weaponatt_mozbow;";
				tool[] = {};
				input[] = {};
				woutput = "Crossbow_Stock";
				ioutput[] = {};
			};
		};
	};
	
	class Mosin_Nagant_Carbine_FL :  Mosin_Nagant_Carbine
	{
		model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_m44_FL_animated";
		magazines[] = {"Mosin_Nagant_Ammo"};
		displayName = "Mosin Carbine (CUSTOM)";
		descriptionShort="<br />Attachments: Flashlight<br />Ammo: Mosin Nagant Ammo";
		picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\carbine_FL.paa";
		dexterity = 2;
		class FlashLight {
            color[] = {0.9, 0.9, 0.7, 0.9};
            ambient[] = {0.1, 0.1, 0.1, 1.0};
            position = "fl_start";
            direction = "fl_dir";
            angle = 40;
            scale[] = {1, 1, 0.5};
            brightness = 0.1;
        };		
		class ItemActions
		{
			class CraftHuntingScope
			{
				text = "Add Hunting Scope";
				script = "spawn player_weaponatt_huntingscope;";
				tool[] = {};
				input[] = {{"mosin_scope_DZAM",1}};
				woutput = "Mosin_Nagant_Carbine_Scoped_FL";
				ioutput[] = {};
			};
			class CraftAmmoBelt
			{
				text = "Add Ammo Belt";
				script = "spawn player_weaponatt_ammobelt;";
				tool[] = {};
				input[] = {{"mosin_belt_DZAM",1}};
				woutput = "Mosin_Nagant_Carbine_Belt_FL";
				ioutput[] = {};
			};
			class CraftFlashlight
			{
				text = "Remove Flashlight";
				script = "spawn player_weaponatt_flashlight;";
				tool[] = {};
				input[] = {};
				woutput = "Mosin_Nagant_Carbine";
				ioutput[] = {{"GUNFLASHLIGHT_DZAM",1}};
			};
		};
	};
	
	class Mosin_Nagant_Carbine_Belt : Mosin_Nagant_Carbine
	{
		model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_m44_belt_animated";
		displayName = "Mosin Carbine (CUSTOM)";
		descriptionShort="<br />Attachments: Ammo Belt<br />Ammo: Mosin Nagant Ammo";
		picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\carbineB.paa";
		dexterity = 2;
		magazineReloadTime = 4.7;
		reloadMagazineSound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\reload-s.ogg, 0.010000, 1};
		class ItemActions
		{
			class CraftHuntingScope
			{
				text = "Add Hunting Scope";
				script = "spawn player_weaponatt_huntingscope;";
				tool[] = {};
				input[] = {{"mosin_scope_DZAM",1}};
				woutput = "Mosin_Nagant_Carbine_Belt_Scoped";
				ioutput[] = {};
			};
			class CraftAmmoBelt
			{
				text = "Remove Ammo Belt";
				script = "spawn player_weaponatt_ammobelt;";
				tool[] = {};
				input[] = {};
				woutput = "Mosin_Nagant_Carbine";
				ioutput[] = {{"mosin_belt_DZAM",1}};
			};
			class CraftFlashlight
			{
				text = "Add Flashlight";
				script = "spawn player_weaponatt_flashlight;";
				tool[] = {};
				input[] = {{"GUNFLASHLIGHT_DZAM",1}};
				woutput = "Mosin_Nagant_Carbine_Belt_FL";
				ioutput[] = {};
			};
		};
	};
	
	class Mosin_Nagant_Carbine_Belt_FL : Mosin_Nagant_Carbine
	{
		model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_m44_belt_FL_animated";
		displayName = "Mosin Carbine (CUSTOM)";
		descriptionShort="<br />Attachments: Ammo Belt and Flashlight<br />Ammo: Mosin Nagant Ammo";
		picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\carbineB_FL.paa";
		dexterity = 2;
		magazineReloadTime = 4.7;
		reloadMagazineSound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\reload-s.ogg, 0.010000, 1};
		class FlashLight {
            color[] = {0.9, 0.9, 0.7, 0.9};
            ambient[] = {0.1, 0.1, 0.1, 1.0};
            position = "fl_start";
            direction = "fl_dir";
            angle = 40;
            scale[] = {1, 1, 0.5};
            brightness = 0.1;
        };		
		class ItemActions
		{
			class CraftHuntingScope
			{
				text = "Add Hunting Scope";
				script = "spawn player_weaponatt_huntingscope;";
				tool[] = {};
				input[] = {{"mosin_scope_DZAM",1}};
				woutput = "Mosin_Nagant_Carbine_Belt_Scoped_FL";
				ioutput[] = {};
			};
			class CraftAmmoBelt
			{
				text = "Remove Ammo Belt";
				script = "spawn player_weaponatt_ammobelt;";
				tool[] = {};
				input[] = {};
				woutput = "Mosin_Nagant_Carbine_FL";
				ioutput[] = {{"mosin_belt_DZAM",1}};
			};
			class CraftFlashlight
			{
				text = "Remove Flashlight";
				script = "spawn player_weaponatt_flashlight;";
				tool[] = {};
				input[] = {};
				woutput = "Mosin_Nagant_Carbine_Belt";
				ioutput[] = {{"GUNFLASHLIGHT_DZAM",1}};
			};
		};
	};
	
	
	class Mosin_Nagant_Carbine_Scoped : Mosin_Nagant_Carbine
	{
		model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_m44_scoped_animated";
		displayName = "Mosin Carbine (CUSTOM)";
		descriptionShort="<br />Attachments: Hunting Scope<br />Ammo: Mosin Nagant Ammo";
		picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\carbineS.paa";
		dexterity = 1.6;
		//modelOptics = "\ca\weapons\2Dscope_Hunter_12";
		opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
		opticsZoomInit = 0.083;
		opticsZoomMin = 0.071945;
		opticsZoomMax = 0.071945;
		distanceZoomMin = 110;
		distanceZoomMax = 110;
	
		//opticsZoomInit = 0.015;
		//opticsZoomMin = 0.015;
		//opticsZoomMax = 0.015;
		//distanceZoomMin = 300;
		//distanceZoomMax = 100;
		
		canLock = 0;
		class ItemActions
		{
			class CraftHuntingScope
			{
				text = "Remove Hunting Scope";
				script = "spawn player_weaponatt_huntingscope;";
				tool[] = {};
				input[] = {};
				woutput = "Mosin_Nagant_Carbine";
				ioutput[] = {{"mosin_scope_DZAM",1}};
			};
			class CraftAmmoBelt
			{
				text = "Add Ammo Belt";
				script = "spawn player_weaponatt_ammobelt;";
				tool[] = {};
				input[] = {{"mosin_belt_DZAM",1}};
				woutput = "Mosin_Nagant_Carbine_Belt_Scoped";
				ioutput[] = {};
			};
			class CraftFlashlight
			{
				text = "Add Flashlight";
				script = "spawn player_weaponatt_flashlight;";
				tool[] = {};
				input[] = {{"GUNFLASHLIGHT_DZAM",1}};
				woutput = "Mosin_Nagant_Carbine_Scoped_FL";
				ioutput[] = {};
			};
		};	
	};
	
	class Mosin_Nagant_Carbine_Scoped_FL : Mosin_Nagant_Carbine
	{
		model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_m44_scoped_FL_animated";
		displayName = "Mosin Carbine (CUSTOM)";
		descriptionShort="<br />Attachments: Hunting Scope and Flashlight<br />Ammo: Mosin Nagant Ammo";
		picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\carbineS_FL.paa";
		dexterity = 1.6;
		//modelOptics = "\ca\weapons\2Dscope_Hunter_12";
		opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
		opticsZoomInit = 0.083;
		opticsZoomMin = 0.071945;
		opticsZoomMax = 0.071945;
		distanceZoomMin = 110;
		distanceZoomMax = 110;
		canLock = 0;
		class FlashLight {
            color[] = {0.9, 0.9, 0.7, 0.9};
            ambient[] = {0.1, 0.1, 0.1, 1.0};
            position = "fl_start";
            direction = "fl_dir";
            angle = 40;
            scale[] = {1, 1, 0.5};
            brightness = 0.1;
        };		
		class ItemActions
		{
			class CraftHuntingScope
			{
				text = "Remove Hunting Scope";
				script = "spawn player_weaponatt_huntingscope;";
				tool[] = {};
				input[] = {};
				woutput = "Mosin_Nagant_Carbine_FL";
				ioutput[] = {{"mosin_scope_DZAM",1}};
			};
			class CraftAmmoBelt
			{
				text = "Add Ammo Belt";
				script = "spawn player_weaponatt_ammobelt;";
				tool[] = {};
				input[] = {{"mosin_belt_DZAM",1}};
				woutput = "Mosin_Nagant_Carbine_Belt_Scoped_FL";
				ioutput[] = {};
			};
			class CraftFlashlight
			{
				text = "Remove Flashlight";
				script = "spawn player_weaponatt_flashlight;";
				tool[] = {};
				input[] = {};
				woutput = "Mosin_Nagant_Carbine_Scoped";
				ioutput[] = {{"GUNFLASHLIGHT_DZAM",1}};
			};
		};
	};
	
	class Mosin_Nagant_Carbine_Belt_Scoped : Mosin_Nagant_Carbine_Scoped
	{
		model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_m44_belt_scoped_animated";
		displayName = "Mosin Carbine (CUSTOM)";
		descriptionShort="<br />Attachments: Hunting Scope and Ammo Belt<br />Ammo: Mosin Nagant Ammo";
		picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\carbineSB.paa";
		dexterity = 2;
		magazineReloadTime = 4.7;
		reloadMagazineSound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\reload-s.ogg, 0.010000, 1};
		class ItemActions
		{
			class CraftHuntingScope
			{
				text = "Remove Hunting Scope";
				script = "spawn player_weaponatt_huntingscope;";
				tool[] = {};
				input[] = {};
				woutput = "Mosin_Nagant_Carbine_Belt";
				ioutput[] = {{"mosin_scope_DZAM",1}};
			};
			class CraftAmmoBelt
			{
				text = "Remove Ammo Belt";
				script = "spawn player_weaponatt_ammobelt;";
				tool[] = {};
				input[] = {};
				woutput = "Mosin_Nagant_Carbine_Scoped";
				ioutput[] = {{"mosin_belt_DZAM",1}};
			};
			class CraftFlashlight
			{
				text = "Add Flashlight";
				script = "spawn player_weaponatt_flashlight;";
				tool[] = {};
				input[] = {{"GUNFLASHLIGHT_DZAM",1}};
				woutput = "Mosin_Nagant_Carbine_Belt_Scoped_FL";
				ioutput[] = {};
			};
		};
	};
	
	class Mosin_Nagant_Carbine_Belt_Scoped_FL : Mosin_Nagant_Carbine_Scoped
	{
		model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_m44_belt_scoped_FL_animated";
		displayName = "Mosin Carbine (CUSTOM)";
		descriptionShort="<br />Attachments: Hunting Scope, Ammo Belt and Flashlight<br />Ammo: Mosin Nagant Ammo";
		picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\carbineSB_FL.paa";
		dexterity = 2;
		magazineReloadTime = 4.7;
		reloadMagazineSound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\reload-s.ogg, 0.010000, 1};
		class FlashLight {
            color[] = {0.9, 0.9, 0.7, 0.9};
            ambient[] = {0.1, 0.1, 0.1, 1.0};
            position = "fl_start";
            direction = "fl_dir";
            angle = 40;
            scale[] = {1, 1, 0.5};
            brightness = 0.1;
        };		
		class ItemActions
		{
			class CraftHuntingScope
			{
				text = "Remove Hunting Scope";
				script = "spawn player_weaponatt_huntingscope;";
				tool[] = {};
				input[] = {};
				woutput = "Mosin_Nagant_Carbine_Belt_FL";
				ioutput[] = {{"mosin_scope_DZAM",1}};
			};
			class CraftAmmoBelt
			{
				text = "Remove Ammo Belt";
				script = "spawn player_weaponatt_ammobelt;";
				tool[] = {};
				input[] = {};
				woutput = "Mosin_Nagant_Carbine_Scoped_FL";
				ioutput[] = {{"mosin_belt_DZAM",1}};
			};
			class CraftFlashlight
			{
				text = "Remove Flashlight";
				script = "spawn player_weaponatt_flashlight;";
				tool[] = {};
				input[] = {};
				woutput = "Mosin_Nagant_Carbine_Belt_Scoped";
				ioutput[] = {{"GUNFLASHLIGHT_DZAM",1}};
			};
		};
	};
*/