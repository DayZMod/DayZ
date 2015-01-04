class ItemHatchet : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_HATCHET;
	model = "\dayz_equip\models\hatchet.p3d";
	picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
	descriptionShort = $STR_EQUIP_DESC_HATCHET;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_CHOPWOOD;
			script = "spawn player_chopWood;";
		};
		class ToBack {
			text=$STR_ACTIONS_2BACK;
			script="spawn player_addtoBack;";
			use[]={"ItemHatchet"};
			output[]={"MeleeHatchet"};
		};
		class Toolbelt {
			text = "Remove from Toolbelt";
			script = "spawn player_addToolbelt;";
			use[] = {"ItemHatchet"};
			output[] = {"MeleeHatchet"};
		};
	};
};
class ItemHatchetBroken : ItemCore {
	scope = public;
	picture="\dayz_equip\textures\equip_hatchet_CA.paa";
	displayName = $STR_name_ItemHatchetBroken; //"Broken Hatchet";
	descriptionShort = $STR_desc_ItemHatchetBroken; //"Too much force has broken this Hatchet. Hopefully you find something to repair it.";
	fixedTool = "ItemHatchet";
	class ItemActions {
		class Toolbelt {
			text = "Fix Hatchet.";
			script="spawn player_fixHatchet;";
		};
	};
};