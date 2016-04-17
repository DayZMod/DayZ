class DZ_PlayerBase_M : Civilian
{
	side = TWest;
	
	weapons[] = {};
	magazines[] = {};
	respawnWeapons[] = {};
	respawnMagazines[] = {};
	
	weaponSlots = WeaponSlotPrimary + WeaponSlotSecondary + WeaponSlotHandGun + 2 * WeaponSlotBinocular + 12 * WeaponSlotInventory + 12 * WeaponSlotItem + 8 * WeaponSlotHandGunItem;
	
	canHideBodies = true;
	backpack = "";
	canCarryBackPack = 1;
	enableGPS = 1;
	
	class HitPoints : HitPoints
	{
		class HitHead;
		class HitBody;
		class HitHands;
		class HitLegs;
	};
};

class DZ_PlayerBase_F : DZ_PlayerBase_M
{
	identityTypes[] = {"Language_W_EN_EP1", "Woman"};
	
	#include "SoundWomanExt.h"
};

class DZ_PlayerGhost : DZ_PlayerBase_M
{
	scope = public;
	displayName = $STR_CHAR_1;
	model = "\dayz\objects\proxy_man";
};

#include "Survivor.h"
#include "Bandit.h"
#include "Hero.h"
#include "Camo.h"
#include "Soldier.h"
#include "Ghillie.h"