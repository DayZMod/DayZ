class CfgAmmo
{
	class Default;
	class GrenadeHand;
	class GrenadeCore;
	
	
	/* MELEE */
	
	class Melee : Default
	{
		//Simulation
		simulation = "shotSpread";
		dispersion = 0.174;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.04;
		airFriction = 0;
		
		//AI visibility and audibility
		visibleFire = 0.1;
		visibleFireTime = 0;
		audibleFire = 1;
		
		cost = 0.01;
		tracerColor[] = {0, 0, 0, 0};
		tracerColorR[] = {0, 0, 0, 0};
		typicalSpeed = 50;
		explosionEffects = "ImpactBlood";
		craterEffects = "ImpactEffectsBlood";
		model = "\ca\Weapons\shell";
		caliber = 0.22;
		#include "Bullethits\Melee.hpp"
	};
	class Hatchet_Swing_Ammo : Melee
	{
		hit = 3;
	};
	class Crowbar_Swing_Ammo : Melee
	{
		hit = 2;
	};
	class Machete_Swing_Ammo : Melee
	{
		hit = 3;
	};
	class Fishing_Swing_Ammo : Melee
	{
		hit = 1;
	};
	class Bat_Swing_Ammo : Melee
	{
		hit = 2;
	};
	class BatBarbed_Swing_Ammo : Melee
	{
		hit = 3;
	};
	class BatNailed_Swing_Ammo : Melee
	{
		hit = 3;
	};
	
	
	/* BULLET */
	class BulletCore;
	class BulletBase : BulletCore
	{
		#include "Bullethits\BulletBase.hpp"
		#include "Sonic_Cracks\BulletBase.hpp"
	};
	class B_9x18_Ball : BulletBase
	{
		airfriction = -0.002751;
		audiblefire = 15;
		caliber = 0.33;
		cartridge = "FxCartridge_9mm";
		cost = 5;
		hit = 6;
		typicalspeed = 350;
		visiblefire = 15;
		#include "Bullethits\B_9x18_Ball.hpp"
		#include "Sonic_Cracks\B_9x18_Ball.hpp"
	};
	class B_9x18_SD : B_9x18_Ball
	{
		airfriction = -0.001893;
		audiblefire = 0.035;
		cost = 5;
		hit = 6;
		typicalspeed = 310;
		visiblefire = 0.035;
		visiblefiretime = 2;
	};
	class B_9x19_Ball : B_9x18_Ball
	{
		#include "Sonic_Cracks\B_9x19_Ball.hpp"
	};
	class B_45ACP_Ball : BulletBase
	{
		airfriction = -0.0013522;
		audiblefire = 16;
		caliber = 0.33; //33
		cartridge = "FxCartridge_9mm";
		cost = 5;
		hit = 9;
		indirecthit = 0;
		indirecthitrange = 0;
		typicalspeed = 260;
		visiblefire = 16;
		#include "Sonic_Cracks\B_45ACP_Ball.hpp"
	};
	class B_545x39_Ball : BulletBase
	{
		#include "Sonic_Cracks\B_545x39_Ball.hpp"
	};
	class B_545x39_SD : BulletBase
	{
		#include "Bullethits\B_545x39_SD.hpp"
	};
	class B_556x45_SD : BulletBase
	{
		#include "Bullethits\B_556x45_SD.hpp"
		#include "Sonic_Cracks\B_556x45_Ball.hpp"
	};
	class B_556x45_Ball : BulletBase
	{
		#include "Bullethits\B_556x45_Ball.hpp"
	};
	class B_762x39_Ball : BulletBase
	{
		#include "Bullethits\B_762x39_Ball.hpp"
		#include "Sonic_Cracks\B_762x39_Ball.hpp"
	};
	class B_762x51_Ball : BulletBase
	{
		#include "Bullethits\B_762x51_Ball.hpp"
		#include "Sonic_Cracks\B_762x51_Ball.hpp"
	};
	class B_762x51_noTracer : B_762x51_Ball
	{
		#include "Sonic_Cracks\B_762x51_noTracer.hpp"
	};
	class B_762x54_Ball : BulletBase
	{
		#include "Bullethits\B_762x54_Ball.hpp"
		#include "Sonic_Cracks\B_762x54_Ball.hpp"
	};
	class B_762x54_noTracer : B_762x54_Ball
	{
		#include "Sonic_Cracks\B_762x54_noTracer.hpp"
	};
	class B_12Gauge_74Slug : BulletBase
	{
		#include "Sonic_Cracks\B_12Gauge_74Slug.hpp"
	};
	class B_127x107_Ball: BulletBase
	{
		#include "Bullethits\B_127x107_Ball.hpp"
		#include "Sonic_Cracks\B_127x107_Ball.hpp"
	};
	//.44 Henry			Winchester 1866
	class B_1866_Slug : BulletBase
	{
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 200;
		visibleFire = 25;
		audibleFire = 25;
		airFriction = -0.005;
		caliber = 0.5;
	};
	//mosin nagant
	/*class Mosin_762 : BulletBase
	{
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
	};*/
	
	
	/* THROWN */
	
	class Grenade : Default
	{
		#include "Sonic_Cracks\Grenade.hpp"
	};
	class GrenadeHand : Grenade {};
	class ThrownObjects : GrenadeHand
	{
		hit = 0.5;
		indirectHit = 0.2;
		indirectHitRange = 1;
		cost = 1;
		whistleDist = 0;
		fuseDistance = 0;
		initTime = 0;
		explosive = true;
	};
	
	class SodaCan : ThrownObjects
	{
		model = "\dayz_equip\models\soda_coke_e.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		soundHit[] = {"dayz_weapons\sounds\can_hit_0", 0.5, 1, 40};
	};
	
	class TinCan : ThrownObjects
	{
		model = "\dayz_equip\models\trash_tincan.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		soundHit[] = {"dayz_weapons\sounds\can_hit_1", 0.5, 1, 30};
	};
	
	class JackDaniels : ThrownObjects
	{
		model = "\dayz_equip\models\bottle_jd.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "GlassSmash";
		soundHit[] = {"dayz_weapons\sounds\bottle_break_0", 0.5, 1, 60};
	};
	
	class LitObject : GrenadeHand
	{
		displayName = $STR_MAG_ACTION_4;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = false;
		fuseDistance = 0;
		initTime = 0;
	};
	
	class RoadFlare : LitObject
	{
		displayName = $STR_MAG_ACTION_4;
		model = "\dayz_weapons\models\flare_red";
		simulation = "shotSmoke";
		simulationStep = 1;
		soundFly[] = {"dayz_weapons\sounds\roadflare", 0.316228, 1, 60};
		cost = 100;
		explosive = false;
		deflecting = 60;
		explosionTime = 0;
		timeToLive = 300;
		soundHit[] = {"", 0, 1};
		whistleDist = 0;
		smokeColor[] = {1, 1, 1, 1};
		effectsSmoke = "FlareSparks";
	};
	
	class ChemLight : LitObject
	{
		displayName = $STR_MAG_ACTION_5;
		simulation = "shotShell";
		simulationStep = 5;
		soundFly[] = {"", 0, 0};
		cost = 100;
		deflecting = 0;
		soundHit[] = {"", 0, 1};
		whistleDist = 0;
		smokeColor[] = {0, 0, 0, 0};
		effectsSmoke = "";
		explosionTime = 3600;
		timeToLive = 3600;
	};
	
	class ChemGreen : ChemLight
	{
		model = "\dayz_weapons\models\chem_green";
		lightColor[] = {0, 0.5, 0};
	};
	
	class ChemRed : ChemLight
	{
		model = "\dayz_weapons\models\chem_red";
		lightColor[] = {0.5, 0, 0};
	};
	
	class ChemBlue : ChemLight
	{
		model = "\dayz_weapons\models\chem_blue";
		lightColor[] = {0, 0, 0.5};
	};
	
	
	

	// used for grenade traps
	class GrenadeHandTimedWest;
	class GrenadeHandTimedWest_DZ : GrenadeHandTimedWest
	{
		//explosiontime = 1;
		fusedistance = 0;
	};
	
	
	/* BOLT / ARROW */
	
	class Bolt : BulletBase
	{
		model = "\dayz_weapons\models\bolt";
		soundFly[] = {"", 1, 1};
		hit = 6;
		cartridge = "";
		cost = 5;
		typicalSpeed = 100;
		airFriction = -0.002751;
		caliber = 0.33;
		visibleFire = 1;
		audibleFire = 1;
	};
	class WoodenArrow : Bolt
	{
		model = "\dayz_weapons\models\bolt";
		hit = 8;
	};
	class tranquiliser_bolt : BulletBase
	{
		hit = 1;  					
		indirectHit = 0;				
 		indirectHitRange = 0;			 			
		maxRange = 100;
		deflecting = 5;
		tracerColor[] = {0, 0, 0, 0};
		tracerColorR[] = {0, 0, 0, 0};
		model = "z\addons\community_crossbow\models\bolt.p3d";
		typicalSpeed=75; //100
		maxSpeed = 75;
		airFriction=-0.007;//0.007
		caliber=0.33000001;
		visibleFire=0;
		audibleFire=0;
	};
	class explosive_bolt : GrenadeCore   
	{
		hit=6;
		indirectHit=10;
		indirectHitRange=2.5;
		soundHit[] = {"Ca\sounds\Weapons\explosions\AZP85_explosion1", db25, 1, 1500};
		muzzleEffect = "BIS_Effects_Rifle";

		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";

		simulation = "shotShell";
		visibleFire = 50;			// how much is visible when this weapon is fired
		audibleFire = 50;
		visibleFireTime = 5;			// how long is it visible
		explosive = 0.5;			// Munition explosive.
		cost = 25;
		deflecting = 5;
		airFriction=-0.02;//0.007
		typicalSpeed=35; //100
		maxSpeed = 35;

		maxRange = 50; //100
		maxRangeProbab = 0.2;
		model="\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale=10;
		tracerStartTime=0.075000003;
		tracerEndTime=5;
	};	
};