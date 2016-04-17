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