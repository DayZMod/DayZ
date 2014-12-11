class MeleeFlashlight : Pistol {
	scope = public;
	canDrop = false;
	model = "\dayz_equip\models\flashlight.p3d";
	modelOptics = "-";
	picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
	magazines[] = {};
	displayName = $STR_EQUIP_NAME_5;
	begin1[] = {};
	begin2[] = {};
	soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
	reloadMagazineSound[] = {};
	recoil = "recoil_single_pistol_2outof3";
	recoilProne = "recoil_single_pistol_prone_2outof3";
	distanceZoomMin = 50;
	distanceZoomMax = 50;

	class Library {
		libTextDesc = "A flashlight (or torch in British English) is a hand-held portable electric-powered light source. Usually the light source is a small incandescent light bulb or light-emitting diode (LED).";
	};
	descriptionShort = $STR_EQUIP_DESC_5;
	autoFire = false;

	class FlashLight {
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1};
		position = "flash dir";
		direction = "flash";
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};

	class ItemActions {
		class Toolbelt {
			text = $STR_ACTIONS_2TB;
			script = "spawn player_addToolbelt;";
			use[] = {"MeleeFlashlight"};
			output[] = {"ItemFlashlight"};
		};
	};
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 30;
	midRangeProbab = 0.3;
	maxRange = 50;
	maxRangeProbab = 0.04;
};
	
class ItemFlashlight : ItemCore {
	class ItemActions {
		class Toolbelt {
			text = $STR_ACTIONS_RFROMTB;
		};
	};
}; 

class MeleeFlashlightRed : MeleeFlashlight {
	model = "\dayz_equip\models\flashlight_mil.p3d";
	picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
	displayName = $STR_EQUIP_NAME_6;
	descriptionShort = $STR_EQUIP_DESC_6;
	
	class FlashLight {
		color[] = {0.9, 0.0, 0.0, 0.9};
		ambient[] = {0.1, 0.0, 0.0, 1};
		position = "flash dir";
		direction = "flash";
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.08;
	};
	
	class ItemActions {
		class Toolbelt {
			text = $STR_ACTIONS_2TB;
			script = "spawn player_addToolbelt;";
			use[] = {"MeleeFlashlightRed"};
			output[] = {"ItemFlashlightRed"};
		};
	};
};

class ItemFlashlightRed : ItemCore {
	class ItemActions {
		class Toolbelt {
			text = $STR_ACTIONS_RFROMTB;
		};
	};
};