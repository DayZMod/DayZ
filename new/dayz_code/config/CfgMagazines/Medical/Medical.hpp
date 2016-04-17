class ItemMedicalBase : CA_Magazine
{
	type = WeaponSlotItem;
	count = 1;
	
	class ItemWear
	{
		chance = 1;
	};
	
	class ItemActions
	{
		class Use
		{
			action = "_this call dz_fn_useMedical";
		};
	};
};

class ItemMedicalHandgunBase : ItemMedicalBase
{
	type = WeaponSlotHandGunItem;
};

#include "BloodBags.hpp"
#include "Antibiotic.hpp"

class ItemAntibacterialWipe : ItemMedicalHandgunBase
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\antiseptic.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_antiseptic_ca.paa";
	displayName = $STR_ITEM_NAME_WIPES;
	descriptionShort = $STR_ITEM_DESC_WIPES;
	
	class Medical
	{
		clean = 1;
	};
	
	class ItemActions : ItemActions
	{
		class Use : Use
		{
			text = $STR_ACTIONS_MEDICAL_WIPE;
		};
	};
};

class ItemBandage : ItemMedicalHandgunBase
{
	scope = public;
	
	model = "\dayz_equip\models\fad.p3d";
	picture = "\dayz_equip\textures\equip_fad_ca.paa";
	displayName = $STR_EQUIP_NAME_7;
	descriptionShort = $STR_EQUIP_DESC_7;
	
	class Medical
	{
		bleed = 1;
	};
	
	class ItemActions : ItemActions
	{
		class Use : Use
		{
			text = $STR_BANDAGE_SELF;
		};
	};
};

class ItemSepsisBandage : ItemBandage
{
	// model = "\dayz_equip\models\fad.p3d";
	// picture = "\dayz_equip\textures\equip_fad_ca.paa";
	displayName = $STR_EQUIP_NAME_SEPSISBANDAGE;
	descriptionShort = $STR_EQUIP_DESC_SEPSISBANDAGE;
	
	class Medical
	{
		bleed = 1;
		clean = 1;
	};
};

class ItemPainkiller : ItemMedicalBase
{
	scope = public;
	
	model = "\dayz_equip\models\med_painkiller_gear.p3d";
	picture = "\dayz_equip\textures\equip_painkiller_ca.paa";
	displayName = $STR_EQUIP_NAME_18;
	descriptionShort = $STR_EQUIP_DESC_18;
	
	class Medical
	{
		pain = 1;
	};
	
	class ItemActions : ItemActions
	{
		class Use : Use
		{
			text = $STR_TAKE_PAINKILLER;
		};
	};
};

class ItemEpinephrine : ItemMedicalBase
{
	scope = public;
	
	model = "\dayz_equip\models\epi.p3d";
	picture = "\dayz_equip\textures\equip_epi_ca.paa";
	displayName = $STR_EQUIP_NAME_14;
	descriptionShort = $STR_EQUIP_DESC_14;
	
	class Medical
	{
		//TODO: epi config
	};
	
	class ItemActions {};
};

class ItemMorphine : ItemMedicalBase
{
	scope = public;
	
	model = "\dayz_equip\models\morphine.p3d";
	picture = "\dayz_equip\textures\equip_morphine_ca.paa";
	displayName = $STR_EQUIP_NAME_15;
	descriptionShort = $STR_EQUIP_DESC_15;
	
	class Medical
	{
		bone = 1;
	};
	
	class ItemActions : ItemActions
	{
		class Use : Use
		{
			text = $STR_TAKE_MORPHINE;
		};
	};
};

class ItemHeatPack : ItemMedicalBase
{
	scope = public;
	
	model = "\dayz_equip\models\Heat_pack.p3d";
	picture = "\dayz_equip\textures\equip_heat_pack_ca.paa";
	displayName = $STR_EQUIP_NAME_42;
	descriptionShort = $STR_EQUIP_DESC_42;
	
	class Medical
	{
		heat = 1;
	};
	
	class ItemActions : ItemActions
	{
		class Use : Use
		{
			text = $STR_ACTIONS_HEATPACK;
		};
	};
};