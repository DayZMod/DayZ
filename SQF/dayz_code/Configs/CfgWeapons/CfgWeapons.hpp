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
	class Rifle;
	class Pistol;
	class GrenadeLauncher;
	
	
	
	/* Dummy weapons */
	#include "Throw.hpp"
	#include "Loot.hpp"
	
	
	
	//each include is preceded by its required external references.
	
	/* ASSAULT RIFLES */
	
	class AK_74;
	class AKS_BASE : AK_BASE
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	class AKS_74_UN_kobra : AKS_BASE
	{
		class Single : Single
		{
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single1",1.77828,1,75};
			soundBegin[] = {"begin1",1};
		};
		class Burst : Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single1",1.77828,1,75};
			soundBegin[] = {"begin1",1};
		};
		class FullAuto : FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single1",1.77828,1,75};
			soundBegin[] = {"begin1",1};
		};
	};
	#include "Rifles\AK74.hpp"
	
	class AKS_74_U;
	#include "Rifles\AKS74U.hpp"
	
	class RPK_74;
	#include "Rifles\RPK74.hpp"
	
	class AK_BASE;
	class AK_47_M : AK_BASE
	{
		class Single : Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\ak_single1",1.77828,1,1300};
			soundBegin[] = {"begin1",1};
		};
		class Burst : Mode_Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\ak_single1",1.77828,1,1300};
			soundBegin[] = {"begin1",1};
		};
		class FullAuto : Mode_FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\ak_single1",1.77828,1,1300};
			soundBegin[] = {"begin1",1};
		};
	};
	#include "Rifles\AKM.hpp"
	#include "Rifles\RPK.hpp"
	
	class L85A2_base_BAF : Rifle
	{
		class Single : Mode_SemiAuto
		{
			begin1[] = {"Ca\sounds_baf\weapons\l85a2_single3a",1.77828,1,1100};
			begin2[] = {"Ca\sounds_baf\weapons\l85a2_single3b",1.77828,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class BAF_L85A2_RIS_Holo;
	#include "Rifles\L85.hpp"
	
	class G36C : Rifle
	{
		class Single : Mode_SemiAuto   
		{
			begin1[] = {"ca\sounds\weapons\rifles\g36_single2",2.51189,1,1100};
			begin2[] = {"ca\sounds\weapons\rifles\g36_single1",2.51189,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class Burst : Mode_Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\g36_single2",2.51189,1,1100};
			begin2[] = {"ca\sounds\weapons\rifles\g36_single1",2.51189,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class FullAuto : Mode_FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\g36_single2",2.51189,1,1100};
			begin2[] = {"ca\sounds\weapons\rifles\g36_single1",2.51189,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class G36_C_SD_eotech : G36C
	{
		class Single : Single
		{
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1,1,100};
			soundBegin[] = {"begin1",1};
		};
		class Burst : Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1,1,100};
			soundBegin[] = {"begin1",1};
		};
		class FullAuto : FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1,1,100};
			soundBegin[] = {"begin1",1};
		};
	};
	#include "Rifles\G36.hpp"
	#include "Rifles\G36C.hpp"
	
	class M16_base : Rifle
	{
		class Single : Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\m16_single1",1.77828,1,1100};
			begin2[] = {"ca\sounds\weapons\rifles\m16_single2",1.77828,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class Burst : Mode_Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\m16_single1",1.77828,1,1100};
			begin2[] = {"ca\sounds\weapons\rifles\m16_single2",1.77828,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};	
	class M16A2;
	class M16A2GL;
	#include "Rifles\M16A2.hpp"
	#include "Rifles\M16A4.hpp"
	
	class M4A1 : M16_base
	{
		class Single : Single
		{
			begin1[] = {"ca\sounds\weapons\rifles\M4A_single1",1.77828,1,1100};
			begin2[] = {"ca\sounds\weapons\rifles\M4A_single2",1.77828,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class FullAuto : FullAuto 
		{
			begin1[] = {"ca\sounds\weapons\rifles\M4A_single1",1.77828,1,1100};
			begin2[] = {"ca\sounds\weapons\rifles\M4A_single2",1.77828,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class M4A1_AIM_SD_camo : M4A1_Aim
	{
		class Single : Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1,1,100};
			soundBegin[] = {"begin1",1};
		};
		class FullAuto : Mode_FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1,1,100};
			soundBegin[] = {"begin1",1};
		};
	};
	#include "Rifles\M4A1.hpp"

	class Sa58V_EP1;
	#include "Rifles\SA58.hpp"
	
	
	/* RIFLES */
	
	class FN_FAL : M16A2
	{
		class Single : Single 
		{
			begin1[] = {"Ca\Sounds_E\Weapons_E\FNFAL\FNFAL_single_2",1.77828,1,1600};
			soundBegin[] = {"begin1",1};
		};
	};
	class FN_FAL_ANPVS4;
	#include "Rifles\FNFAL.hpp"

	class M14_EP1 : Rifle
	{
		class Single : Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\sniper_single_05",1.77828,1,1600};
			soundBegin[] = {"begin1",1};
		};
	};
	#include "Rifles\M14.hpp"
	
	class LeeEnfield : Rifle
	{
		begin1[] = {"Ca\Sounds_E\Weapons_E\Enfield\Enfield_4",1.77828,1,1600};
		soundBegin[] = {"begin1",1};
	};
	#include "Rifles\LeeEnfield.hpp"
	
	#include "Rifles\Mosin.hpp"
	
	
	/* SNIPER RIFLES */
	
	class DMR : Rifle
	{
		class Single : Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\sniper_single_05",1.77828,1,1600};
			soundBegin[] = {"begin1",1};
		};
	};
	#include "Rifles\DMR.hpp"
	
	class M24 : Rifle
	{
		begin1[] = {"ca\sounds\weapons\rifles\sniper_single_05",1.77828,1,1600};
		soundBegin[] = {"begin1",1};
		class OpticsModes
		{
			class StepScope;
		};
	};
	#include "Rifles\M24.hpp"
	
	class huntingrifle : M24 {};
	#include "Rifles\CZ550.hpp"
	
	class M40A3;
	#include "Rifles\M40A3.hpp"
	
	class SVD : Rifle
	{
		begin1[] = {"ca\sounds\weapons\rifles\sniper_single_05",1.77828,1,1600};
		soundBegin[] = {"begin1",1};
	};
	#include "Rifles\SVD.hpp"
	
	
	/* MACHINE GUNS */
	
	class M249 : Rifle
	{
		class manual : Mode_FullAuto
		{
			begin1[] = {"ca\sounds\Weapons\machineguns\M249_single1",1.77828,1,1100};
			begin2[] = {"ca\sounds\Weapons\machineguns\M249_single2",1.77828,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	#include "Rifles\M249.hpp"
	
	class BAF_L110A1_Aim;
	{
		class manual : Mode_FullAuto
		{
			begin1[] = {"Ca\sounds_baf\weapons\l110_single1a_vetsi_raze",1.77828,1,1100};
			begin2[] = {"Ca\sounds_baf\weapons\l110_single1a_vetsi_raze",1.77828,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	#include "Rifles\L110A1.hpp"
	
	class M240;
	{
		class manual : Mode_FullAuto
		{
			begin1[] = {"ca\sounds\Weapons\machineguns\M240_single1",1.77828,1,1600};
			begin2[] = {"ca\sounds\Weapons\machineguns\M240_single2",1.77828,1,1600};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	#include "Rifles\M240.hpp"
	
	class Mk_48;
	#include "Rifles\Mk48.hpp"
	
	class PK : Rifle
	{
		class manual : Mode_FullAuto
		{
			begin1[] = {"ca\sounds\weapons\machineguns\PKM_single2",1.41254,1,1600};
			begin2[] = {"ca\sounds\weapons\machineguns\PKM_single3",1.41254,1,1600};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	#include "Rifles\PKM.hpp"
	
	#include "Rifles\UK59.hpp"
	
	
	/* SUBMACHINE GUNS */
	
	class MP5SD : Rifle
	{
		class Single : Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\MP5_SD_single2",1.77828,1,50};
			soundBegin[] = {"begin1",1};
		};
		class Burst : Mode_Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\MP5_SD_single2",1.77828,1,50};
			soundBegin[] = {"begin1",1};
		};
		class FullAuto : Mode_FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\MP5_SD_single2",1.77828,1,50};
			soundBegin[] = {"begin1",1};
		};
	};
	class MP5A5 : MP5SD
	{
		class Single : Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\MP5_single1",1.77828,1,700};
			soundBegin[] = {"begin1",1};
		};
		class Burst : Mode_Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\MP5_single1",1.77828,1,700};
			soundBegin[] = {"begin1",1};
		};
		class FullAuto : Mode_FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\MP5_single1",1.77828,1,700};
			soundBegin[] = {"begin1",1};
		};
	};
	#include "Rifles\MP5.hpp"
	
	class bizon : Rifle
	{
		class Single : Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\Bizon_single1",1.77828,1,800};
			begin2[] = {"ca\sounds\weapons\rifles\Bizon_single2",1.77828,1,800};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class Burst : Mode_Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\Bizon_single1",1.77828,1,800};
			begin2[] = {"ca\sounds\weapons\rifles\Bizon_single2",1.77828,1,800};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class FullAuto : Mode_FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\Bizon_single1",1.77828,1,800};
			begin2[] = {"ca\sounds\weapons\rifles\Bizon_single2",1.77828,1,800};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class bizon_silenced;
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
	class M9SD : M9
	{
		begin1[] = {"ca\sounds\weapons\pistols\m9SD_single1",0.316228,1,50};
		soundBegin[] = {"begin1",1};
	};
	#include "Pistols\M9.hpp"
	
	class glock17_EP1 : Pistol
	{
		begin1[] = {"Ca\Sounds_E\Weapons_E\Glock17\glock17_1",1,1,700};
		begin2[] = {"Ca\Sounds_E\Weapons_E\Glock17\glock17_2",1,1,700};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
	};
	#include "Pistols\G17.hpp"
	
	class Colt1911 : M9
	{
		begin1[] = {"ca\sounds\weapons\pistols\m9_single1",0.794328,1,800};
		begin2[] = {"ca\sounds\weapons\pistols\m9_single2",0.794328,1,800};
		begin3[] = {"ca\sounds\weapons\pistols\m9_single3",0.794328,1,800};
		soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
	};
	#include "Pistols\M1911.hpp"
	
	class Makarov;
	class MakarovSD : Makarov
	{
		begin1[] = {"ca\sounds\weapons\pistols\makarovSD_single1",0.316228,1,50};
		soundBegin[] = {"begin1",1};
	};
	#include "Pistols\Makarov.hpp"
	
	class UZI_EP1 : Pistol
	{
		class Single : Mode_SemiAuto
		{
			begin1[] = {"Ca\Sounds_E\Weapons_E\UZI\UZI_single_1",1,1,700};
			soundBegin[] = {"begin1",1};
		};
		class FullAuto : Mode_FullAuto
		{
			begin1[] = {"Ca\Sounds_E\Weapons_E\UZI\UZI_single_1",1,1,700};
			soundBegin[] = {"begin1",1};
		};
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