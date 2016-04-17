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
	hit = 0.1;  					
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