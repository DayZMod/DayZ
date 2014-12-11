class ItemHatchet : ItemCore {
		displayName = $STR_EQUIP_NAME_HATCHET;
		descriptionShort = $STR_EQUIP_DESC_HATCHET;
	
		class ItemActions {
			class Toolbelt {
				text = $STR_ACTIONS_RFROMTB;
			};
			class ToBack
			{
				text=$STR_ACTIONS_2BACK;
				script="spawn player_addtoBack;";
				use[]=
				{
					"ItemHatchet"
				};
				output[]=
				{
					"MeleeHatchet"
				};
			};
		};
	};
	
class ItemHatchetBroken : ItemCore {
		scope = public;
		picture="\dayz_equip\textures\equip_hatchet_CA.paa";
		displayName = $STR_name_ItemHatchetBroken; //"Broken Hatchet";
		descriptionShort = $STR_desc_ItemHatchetBroken; //"Too much force has broken this Hatchet. Hopefully you find something to repair it.";
	
		class ItemActions {
			class Toolbelt {
				text = "Fix Hatchet.";
				script="spawn player_fixHatchet;";
			};
		};
	};