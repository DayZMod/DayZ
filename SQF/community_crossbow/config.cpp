class CfgPatches {
	class community_crossbow {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWeapons", "dayz_equip", "dayz_weapons"};
	};
};

class cfgWeapons {
	class Rifle;	// External class reference
	
	class Crossbow_Stock : Rifle
	{
		scope = 2;
		model = "z\addons\community_crossbow\models\crossbow_stock.p3d";
		displayName = "Crossbow (Stock)";
		picture = "\z\addons\community_crossbow\icons\crossbow_stock.paa";
		descriptionShort="You require a Crossbow String kit to craft this weapon";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Bizon.rtm"};
		drySound[] = {""};
	};
	class Crossbow_Base_DZ : Rifle
	{
		scope = 1;
		model = "z\addons\community_crossbow\models\crossbow.p3d";
		displayName=$STR_WPN_NAME_4;
		descriptionShort=$STR_WPN_DESC_4;
		picture = "\z\addons\community_crossbow\icons\crossbow_icon.paa";
		drySound[]=
		{
			"Ca\sounds\Weapons\rifles\dry",
			0.00031622799,
			1,
			10
		};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Bizon.rtm"};

		distanceZoomMin = 20;
		distanceZoomMax = 20;
		begin1[] =	{"z\addons\community_crossbow\sound\crossbow.ogg", 0.177828, 1, 15};
		soundBegin[] ={"begin1",1};
		fireLightDuration=0;
		fireLightIntensity=0;
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\FAL_reload", 0.316228, 1, 20};
		magazines[] ={"Quiver","WoodenArrow","Crossbow_EX_Bolt","Tranquiliser_Bolt"};
		bullet1[]=
		{
			"dayz_weapons\sounds\crossbow_bolt",
			0.177828,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			1
		};		
		reloadTime = 2;
		//Test Variables
		minRange=0;
		minRangeProbab=0.5;
		midRange=120;
		midRangeProbab=0.2;
		maxRange=200;
	};
	class Crossbow_DZ : Crossbow_Base_DZ
	{
		scope = 2;
		model = "z\addons\community_crossbow\models\crossbow.p3d";
		displayName=$STR_WPN_NAME_4;
		descriptionShort=$STR_WPN_DESC_4;
		picture = "\z\addons\community_crossbow\icons\crossbow_icon.paa";
		class Attachments
		{
			attachments[] = {"Attachment_CCO","Attachment_FL","Attachment_SCOPED"};
			Attachment_CCO = "Crossbow_CCO";
			Attachment_FL = "Crossbow_FL";
			Attachment_SCOPED = "Crossbow_Scoped";
		};
	};
	class Crossbow_CCO : Crossbow_Base_DZ
	{
		scope = 2;
		model = "z\addons\community_crossbow\models\crossbow_cco.p3d";
		displayName = "Crossbow (CCO)";
		picture = "\z\addons\community_crossbow\icons\crossbow_cco.paa";
		class Attachments
		{
			attachments[] = {"Attachment_FL"};
			Attachment_FL = "Crossbow_CCO_FL";
		};
		
		class ItemActions {
			class removeCCO {
				text = "Remove CCO";
				script = "; ['Attachment_CCO','Crossbow_CCO','Crossbow_DZ'] spawn player_removeAttachment;";
			};
		};
	};

	class Crossbow_FL : Crossbow_Base_DZ
	{
		scope = 2;
		model = "z\addons\community_crossbow\models\crossbow_fl.p3d";
		displayName = "Crossbow (FL)";
		picture = "\z\addons\community_crossbow\icons\crossbow_fl.paa";
		
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
			attachments[] = {"Attachment_CCO","Attachment_SCOPED"};
			Attachment_CCO = "Crossbow_CCO_FL";
			Attachment_SCOPED = " Crossbow_Scoped_FL";
		};
		class ItemActions {
			class removeFL {
				text = "Remove FL";
				script = "; ['Attachment_FL','Crossbow_FL','Crossbow_DZ'] spawn player_removeAttachment;";
			};
		};
	};

	class Crossbow_CCO_FL : Crossbow_Base_DZ
	{
		scope = 2;
		model = "z\addons\community_crossbow\models\crossbow_cco_fl.p3d";
		displayName = "Crossbow (CCO FL)";
		picture = "\z\addons\community_crossbow\icons\crossbow_cco_fl.paa";
		class ItemActions {
			class removeFL {
				text = "Remove FL";
				script = "; ['Attachment_FL','Crossbow_CCO_FL','Crossbow_CCO'] spawn player_removeAttachment;";
			};
			class removeCCO {
				text = "Remove CCO";
				script = "; ['Attachment_CCO','Crossbow_CCO_FL','Crossbow_FL'] spawn player_removeAttachment;";
			};
		};
	};
	class Crossbow_Scoped : Crossbow_Base_DZ
	{
		scope = 2;
		model = "z\addons\community_crossbow\models\crossbow_scoped.p3d";
		displayName = "Crossbow (Scoped)";
		picture = "\z\addons\community_crossbow\icons\crossbow_scoped.paa";
		dexterity = 1.6;
		opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
		opticsZoomInit = 0.083;
		opticsZoomMin = 0.071945;
		opticsZoomMax = 0.071945;
		distanceZoomMin = 110;
		distanceZoomMax = 110;
		class Attachments
		{
			attachments[] = {"Attachment_FL"};
			Attachment_FL = "Crossbow_Scoped_FL";
		};
		class ItemActions {
			class removeSCOPED {
				text = "Remove Scope";
				script = "; ['Attachment_FL','Crossbow_Scoped','Crossbow_DZ'] spawn player_removeAttachment;";
			};
		};
	};

	class Crossbow_Scoped_FL : Crossbow_Base_DZ
	{
		scope = 2;
		model = "z\addons\community_crossbow\models\crossbow_scoped_fl.p3d";
		displayName = "Crossbow (Scoped FL)";
		picture = "\z\addons\community_crossbow\icons\crossbow_scoped_fl.paa";		
		dexterity = 1.6;
		opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
		opticsZoomInit = 0.083;
		opticsZoomMin = 0.071945;
		opticsZoomMax = 0.071945;
		distanceZoomMin = 110;
		distanceZoomMax = 110;
		class ItemActions {
			class removeSCOPED {
				text = "Remove Scope";
				script = "; ['Attachment_SCOPED','Crossbow_Scoped_FL','Crossbow_FL'] spawn player_removeAttachment;";
			};
			class removeFL {
				text = "Remove FL";
				script = "; ['Attachment_FL','Crossbow_Scoped_FL','Crossbow_Scoped'] spawn player_removeAttachment;";
			};
		};
	};
};

class cfgMagazines {
	class CA_Magazine;
  	class Tranquiliser_Bolt : CA_Magazine
	{
		scope = 2;
		displayName = "Crossbow Bolts (Tranq)";
		count = 1;
		ammo = "tranquiliser_bolt";
		picture = "\z\addons\community_crossbow\textures\bolt_tranq.paa";
		model = "z\addons\community_crossbow\models\ammo.p3d";
		descriptionShort = "Crossbow Tranquiliser Bolts, used for knocking out another player.<br/>Compatible with: Crossbow";
	};

  	class Crossbow_EX_Bolt : CA_Magazine
	{
		scope = 2;
		displayName = "Crossbow Bolts (Explosive)";
		count = 1;
		tracersEvery = 1;
		timeToLive=3;
		ammo = "explosive_bolt";
		picture = "\z\addons\community_crossbow\textures\bolt_expl.paa";
		model = "z\addons\community_crossbow\models\ammo.p3d";
		descriptionShort = "Explosive Crossbow Bolts, used for disabling vehicles.<br/>Compatible with: Crossbow";
	};

};
class cfgAmmo {
	class BulletBase;
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
	class GrenadeCore;
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
class CfgVehicles {

};
