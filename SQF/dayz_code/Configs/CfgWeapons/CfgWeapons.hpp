class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class HandGrenade;

class DZ_SingleMelee;

class CfgWeapons
{
	class Default
	{
		canlock = 0;
	};
	
	class ItemCore;
	class Rifle;
	class Pistol;
	class GrenadeLauncher;
	
	/* NEW WEAPONS */
	//each include is preceded by its required external references.
	
	/* RIFLES */
	
	class AK_74;
	class AKS_74_UN_kobra;
	#include "Rifles\AK74.hpp"
	
	class AKS_74_U;
	#include "Rifles\AKS74U.hpp"
	
	class AK_47_M;
	#include "Rifles\AKM.hpp"
	
	class DMR : Rifle
	{
		class Single;
	};
	#include "Rifles\DMR.hpp"
	
	class FN_FAL;
	class FN_FAL_ANPVS4;
	#include "Rifles\FNFAL.hpp"
	
	class G36C : Rifle
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	class G36_C_SD_eotech : G36C
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	#include "Rifles\G36.hpp"
	#include "Rifles\G36C.hpp"
	
	class M4A1;
	class M4A1_AIM_SD_camo;
	#include "Rifles\M4A1.hpp"
	
	class M14_EP1;
	#include "Rifles\M14.hpp"
	
	class M24;
	#include "Rifles\M24.hpp"
	
	class M40A3;
	#include "Rifles\M40A3.hpp"
	
	class M249;
	#include "Rifles\M249.hpp"
	
	class M240;
	#include "Rifles\M240.hpp"
	
	class M1014 : Rifle
	{
		class Single;
	};
	#include "Rifles\M1014.hpp"
	
	class Mk_48;
	#include "Rifles\Mk48.hpp"
	
	class RPK_74;
	#include "Rifles\RPK74.hpp"
	
	class SVD;
	#include "Rifles\SVD.hpp"
	
	#include "Rifles\Mosin.hpp"
	
	class MP5A5;
	class MP5SD;
	#include "Rifles\MP5.hpp"
	
	class M16A2;
	class M16A2GL;
	#include "Rifles\M16A2.hpp"
	#include "Rifles\M16A4.hpp"
	
	class Sa58V_EP1;
	class Sa58V_CCO_EP1;
	class Sa58V_RCO_EP1;
	#include "Rifles\SA58.hpp"
	
	class BAF_L85A2_RIS_Holo;
	#include "Rifles\L85.hpp"
	
	class bizon;
	class bizon_silenced;
	#include "Rifles\Bizon.hpp"
	
	class huntingrifle;
	#include "Rifles\CZ550.hpp"
	
	class LeeEnfield;
	#include "Rifles\LeeEnfield.hpp"
	
	
	
	
	
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
	
	class UZI_EP1;
	#include "Pistols\PDW.hpp"
	
	class revolver_EP1;
	#include "Pistols\Revolver.hpp"
	
	
	
	
	
	/* MELEE */
	
	class MeleeWeapon : Rifle
	{
		canDrop = true;
		class Single : DZ_SingleMelee
		{
			displayName = $STR_ACTION_HACK;
		}; 
	};
	
	#include "Melee\MeleeMachete.hpp"
	#include "Melee\MeleeHatchet.hpp"
	#include "Melee\MeleeCrowbar.hpp"
	//#include "Melee\Crossbow.hpp"
	#include "Melee\MeleeBaseBallBat.hpp"
	#include "Melee\MeleeBaseBallBatBarbed.hpp"
	#include "Melee\MeleeBaseBallBatNails.hpp"
	#include "Melee\MeleeFishingPole.hpp"
	
	
	
	
	
	/* TOOLS */
	
	#include "Tools\GPS.hpp"
	#include "Tools\Binocular.hpp"
	
	
	
	
	
	/* OTHER */
	
	#include "Melee\Flare.hpp"
	#include "Melee\Flashlight.hpp"
	
	
	
	class ItemFlashlightEmpty : ItemCore
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
				text = "Drink";
				script = "spawn player_drinkWater;";
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
				text = "Drink";
				script = "spawn player_drinkWater;";
			};
		};
	};
};