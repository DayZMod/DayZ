class ItemAntibioticBase : ItemMedicalBase
{
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\med_antibiotic_gear.p3d";
	picture = "\dayz_equip\textures\equip_antibiotics_ca.paa";
	displayName = $STR_EQUIP_NAME_17;
};

class ItemAntibiotic : ItemAntibioticBase
{
	scope = public;
	descriptionShort = $STR_EQUIP_DESC_17;
	
	class Medical
	{
		instant = true;
		infection = 1;
	};
	
	class ItemActions : ItemActions
	{
		class Use : Use
		{
			text = $STR_TAKE_ANTIBIOTIC;
		};
	};
};

class ItemAntibioticEmpty : ItemAntibioticBase
{
	scope = public;
	descriptionShort = "EmptyBox of Azithromycin.";
	
	class ItemActions {};
};