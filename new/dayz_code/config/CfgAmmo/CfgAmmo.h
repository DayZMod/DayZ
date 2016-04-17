class CfgAmmo
{
	class Default;
	class BulletBase;
	class GrenadeHand;
	class GrenadeCore;
	
	#include "Melee.h"
	#include "Arrow.h"
	#include "Throwable.h"
	
	class B_9x18_Ball : BulletBase
	{
		hit = 6;
	};
	
	class B_45ACP_Ball : BulletBase
	{
		hit = 9;
	};
	
	class B_3030Winchester_Ball : BulletBase
	{
		hit = 8;
		typicalSpeed = 730;
		airfriction = -0.0013;
		caliber = 0.6;
		
		cartridge = FxCartridge_762;
	};
};