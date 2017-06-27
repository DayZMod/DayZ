class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class HandGrenade;

class CfgWeapons
{
	class Default
	{
		canlock = LockNo;
	};
	
	class ItemCore;
	class PistolCore;
	class Pistol: PistolCore
	{
		#include "Shells_Pistol.hpp"
	};
	class RifleCore;
	class Rifle: RifleCore
	{
		#include "Shells_Small.hpp"
	};
	class GrenadeLauncher;
	
	
	
	/* Dummy weapons */
	#include "Throw.hpp"
	#include "Loot.hpp"
	
	
	
	//each include is preceded by its required external references.
	
	
	/* ASSAULT RIFLES */
	
	class AK_BASE : Rifle
	{
		class GP25Muzzle;
		#include "Shells_Small.hpp"
	};
	class AK_74 : AK_BASE
	{
		class Single;
		class Burst;
		class FullAuto;	
	};
	class RPK_74 : AK_74
	{
		class Single;
		class manual;
		class FullAuto;
	};
	#include "Rifles\RPK74.hpp"
	
	class AKS_BASE : AK_BASE
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	class AKS_74_UN_kobra : AKS_BASE
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	#include "Rifles\AK74.hpp"
	
	class AKS_74_U : AKS_BASE {};	
	#include "Rifles\AKS74U.hpp"
	
	class AK_47_M : AK_BASE
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	#include "Rifles\AKM.hpp"
	#include "Rifles\RPK.hpp"
	
	class L85A2_base_BAF;
	class BAF_L85A2_RIS_Holo : L85A2_base_BAF
	{
		class Single;
		class FullAuto;
	};
	#include "Rifles\L85.hpp"
	
	class G36C : Rifle
	{
		class Single;
		class Burst;
		class FullAuto;
		#include "Shells_Small.hpp"
	};
	class G36_C_SD_eotech : G36C
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	#include "Rifles\G36.hpp"
	#include "Rifles\G36C.hpp"
	
	class M16_base : Rifle
	{
		class Single;
		class Burst;
		class M203Muzzle;
	};
	class M16A2 : M16_base {};
	class M16A2GL : M16A2 {};
	#include "Rifles\M16A2.hpp"
	#include "Rifles\M16A4.hpp"
	
	class M4A1 : M16_base
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	class M4A1_Aim;
	class M4A1_AIM_SD_camo : M4A1_Aim
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	#include "Rifles\M4A1.hpp"
	
	class Sa58P_EP1 : Rifle
	{
		class Single;
		class Burst;
		class FullAuto;
		#include "Shells_Small.hpp"
	};	
	class Sa58V_EP1 : Sa58P_EP1 {};
	#include "Rifles\SA58.hpp"
	
	
	/* RIFLES */
	
	class FN_FAL : M16A2
	{
		class Single;
		#include "Shells_Big.hpp"
	};
	class FN_FAL_ANPVS4 : FN_FAL
	{
		class Single;
	};
	#include "Rifles\FNFAL.hpp"
	
	class M14_EP1 : Rifle
	{
		class Single;
		#include "Shells_Big.hpp"
	};
	#include "Rifles\M14.hpp"
	
	class LeeEnfield : Rifle
	{
		#include "Shells_Big.hpp"
	};
	#include "Rifles\LeeEnfield.hpp"
	
	#include "Rifles\Mosin.hpp"
	
	
	/* SNIPER RIFLES */
	
	class DMR : Rifle
	{
		class Single;
		#include "Shells_Big.hpp"
	};
	#include "Rifles\DMR.hpp"
	
	class M24 : Rifle
	{
		class OpticsModes
		{
			class StepScope;
		};
		#include "Shells_Big.hpp"
	};
	#include "Rifles\M24.hpp"
	
	class huntingrifle : M24 {};
	#include "Rifles\CZ550.hpp"
	
	class M40A3;
	#include "Rifles\M40A3.hpp"
	
	class SVD : Rifle
	{
		class OpticsModes
		{
			class Scope;
			class Ironsights;
		};
		#include "Shells_Big.hpp"
	};
	#include "Rifles\SVD.hpp"
	
	
	/* MACHINE GUNS */
	
	class M249 : Rifle
	{
		class Manual;
	};
	#include "Rifles\M249.hpp"
	
	class BAF_L110A1_Aim : Rifle
	{
		class Manual;
		#include "Shells_Small.hpp"
	};
	#include "Rifles\L110A1.hpp"
	
	class M240 : Rifle
	{
		class Manual;
		#include "Shells_Big.hpp"
	};
	#include "Rifles\M240.hpp"
	
	class Mk_48 : M240
	{
		class Manual;
	};
	#include "Rifles\Mk48.hpp"
	
	class PK : Rifle
	{
		class Manual;
		#include "Shells_Big.hpp"
	};
	#include "Rifles\PKM.hpp"
	#include "Rifles\UK59.hpp"
	
	
	/* MOUNTED MACHINE GUNS */
	
	class MGun;
	class DSHKM: MGun
	{
		#include "Shells_Big.hpp"
		#include "Rifles\DSHKM.hpp"
	};
	class M240_veh: MGun
	{
		#include "Shells_Big.hpp"
		#include "Rifles\M240_veh.hpp"
	};
	class PKT: MGun
	{
		#include "Shells_Big.hpp"
		#include "Rifles\PKT.hpp"
	};
	
	
	/* SUBMACHINE GUNS */
	
	class MP5SD : Rifle
	{
		class Single;
		class Burst;
		class FullAuto;
		#include "Shells_Pistol.hpp"
	};	
	class MP5A5 : MP5SD
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	#include "Rifles\MP5.hpp"
	
	class Bizon : Rifle
	{
		class Single;
		class FullAuto;
		#include "Shells_Pistol.hpp"
	};
	class bizon_silenced : Bizon
	{
		class Single;
		class FullAuto;
	};
	#include "Rifles\Bizon.hpp"
	
	
	/* SHOTGUNS */
	
	class M1014 : Rifle
	{
		class Single;
	};
	#include "Rifles\M1014.hpp"
	
	#include "Rifles\MR43.hpp"
	#include "Rifles\Winchester1866.hpp"
	#include "Rifles\Remington870.hpp"
	
	#include "Rifles\Crossbow.hpp"
	
	
	/* PISTOLS */
	
	class M9;
	class M9SD;
	#include "Pistols\M9.hpp"
	
	class glock17_EP1;
	#include "Pistols\G17.hpp"
	
	class Colt1911;
	#include "Pistols\M1911.hpp"
	
	class Makarov;
	class MakarovSD;
	#include "Pistols\Makarov.hpp"
	
	class UZI_EP1 : Pistol
	{
		class Single;
		class FullAuto;
	};
	#include "Pistols\PDW.hpp"
	
	class revolver_EP1;
	#include "Pistols\Revolver.hpp"
	
	
	
	
	
	/* MELEE */
	
	class MeleeWeapon : Rifle
	{
		melee = true;
		
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		fireLightDuration = 0;
		fireLightIntensity = 0;
		
		autoReload = true;
		magazineReloadTime = 0;
		
		soundBullet[] = {"emptySound", 1};
		drySound[] = {"", 1, 1};
		reloadMagazineSound[] = {"", 1, 1};
		
		cursor = "Vehicle_Grenade_W";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		
		handAnim[] = {"OFP2_ManSkeleton","\dayz_weapons\anim\melee_hatchet_holding.rtm"};
		
		modes[] = {Single};
		
		class Single : Mode_FullAuto
		{
			displayName = $STR_ACTION_HACK;
			dispersion = 0.1;
			reloadTime = 1;
			recoil = "DZ_Swing";
			recoilProne = "DZ_Swing";
			
			sound[] = {"", 0, 1};
			swing0[] = {"dayz_weapons\sounds\swing_0", 1.77828, 1, 30};
			swing1[] = {"dayz_weapons\sounds\swing_1", 1.77828, 1, 30};
			soundBegin[] = {"swing0", 0.5, "swing1", 0.5};
		};
	};
	
	#include "Melee\Hatchet.hpp"
	#include "Melee\Crowbar.hpp"
	#include "Melee\Machete.hpp"
	#include "Melee\BaseballBat.hpp"
	#include "Melee\FishingPole.hpp"
	
	
	
	
	
	/* TOOLS */
	
	#include "Tools\Binocular.hpp"
	
	#include "Tools\Map.hpp"
	#include "Tools\Compass.hpp"
	#include "Tools\GPS.hpp"
	#include "Tools\Watch.hpp"
	
	#include "Tools\Knife.hpp"
	#include "Tools\Matchbox.hpp"
	
	#include "Tools\Toolbox.hpp"
	#include "Tools\Etool.hpp"
	
	#include "Tools\FishingPole.hpp"
	#include "Tools\Shovel.hpp"
	#include "Tools\Pickaxe.hpp"
	#include "Tools\Sledgehammer.hpp"
	
	#include "Tools\Crowbar.hpp"
	#include "Tools\Hatchet.hpp"
	#include "Tools\Machete.hpp"
	
	#include "Tools\Flashlight.hpp"
	#include "Tools\FlashlightRed.hpp"
	
	
	
	
	
	/* OTHER */
	
	/*class ItemFlashlightEmpty : ItemCore
	{
		scope = public;
		displayName = $STR_EQUIP_NAME_5;
		model = "\dayz_equip\models\flashlight.p3d";
		picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_5;
	};
	
	class ItemSodaEmpty : HandGrenade
	{
		scope = public;
		displayName = $STR_EQUIP_NAME_35;
		model = "\dayz_equip\models\soda_coke_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_35;
		ammo = "SodaCan";
		class ItemActions
		{
			class Drink
			{
				text = $STR_ACTIONS_DRINK2;
				script = ";[_id] spawn player_fillWater;";
			};
		};
	};
	
	class TrashTinCan : HandGrenade
	{
		scope = public;
		displayName = $STR_EQUIP_NAME_33;
		model = "\dayz_equip\models\trash_tincan.p3d";
		picture = "\dayz_equip\textures\equip_tincan_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_33;
		ammo = "TinCan";
		class ItemActions
		{
			class Drink
			{
				text = $STR_ACTIONS_DRINK2;
				script = ";[_id] spawn player_fillWater;";
			};
		};
	};*/
};