class CfgPatches {
	class dayz_communityweapons {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWeapons", "dayz_weapons", "dayz_equip"};
	};
};

class Mode_SemiAuto {};
class Mode_Burst: Mode_SemiAuto {};
class Mode_FullAuto: Mode_SemiAuto {};	
class Single;
class Burst;
class FullAuto;

class cfgWeapons {
	class Rifle;
	
	#include "configs\mosin.hpp"
	//#include "configs\m4a1.hpp"
};

class CfgRecoils
{
	Mosin_NagantRecoil[]= {0,0,0,0.0500,0.04500,0.1,0.1000,0,0};
	Mosin_Nagant_CarbineRecoil[]={0,0,0,0.0500,0.12,0.3,0.1000,0,0};
	Mosin_NagantRecoilProne[]= {0,0,0,0.0500,0.04500,0.1,0.1000,0,0};
	Mosin_Nagant_CarbineRecoilProne[]={0,0,0,0.0500,0.12,0.3,0.1000,0,0};
};

class CfgAmmo {
	class BulletBase; // External class reference
	class Mosin_762 : BulletBase {
		hit = 9;
		typicalSpeed = 850;
		airFriction = -0.00055;
		supersonicCrackNear[] = {"",1,1};
		supersonicCrackFar[] = {"",1,1};
		visibleFire=40;
		audibleFire=40;
		visibleFireTime = 0.5;
		tracerColor[] = {255,255,0,0};
		tracerColorR[] = {255,255,0,0};
		cartridge = "FxCartridge_762";
	};
};

class CfgMagazines {
	class CA_Magazine;
	//MOSIN
	class Mosin_Nagant_Ammo: CA_Magazine {
		scope = 2;
		displayName = "Mosin Nagant Ammo";
		model="\dayz_equip\models\mag5rnd.p3d";
		picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\ammo.paa";
		count = 5;
		ammo = "Mosin_762";
		descriptionShort = "5 Individual 7.62mm Mosin Nagant Bullets";

	};	
};