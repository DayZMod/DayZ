// Devlopment only system - Comment out for stable (Search KeyWord - VERSION)
//#define _Devlopment_

class ItemDIY_wood: ItemCore {
	scope = 2;
	picture = "\z\addons\dayz_buildings\equip\icon_diy_wood.paa";
	model = "z\addons\dayz_buildings\models\diymanual_wood.p3d";
	icon = "Ca\misc\data\icons\i_danger_CA.paa";
	displayName = $STR_BLD_name_ItemDIY_wood;//"DIY Manual (Wood)"
	descriptionShort = $STR_BLD_desc_ItemDIY_wood;//"For wooden fences"

#ifdef _Devlopment_
	class ItemActions {
		class Build {
			text = $STR_BLD_build_ItemDIY_wood;//"Wooden fence"
			script = "; ['ItemDIY_wood','Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemLog", "ItemStone", "ItemStone"};
			ghost = "WoodenFence_ghost";
			create = "WoodenFence_1_foundation";
		};
	};
#endif
};

class ItemDIY_Gate: ItemCore {
	scope = 2;
	picture = "\z\addons\dayz_buildings\equip\icon_diy_wood.paa";
	model = "z\addons\dayz_buildings\models\diymanual_wood.p3d";
	icon = "Ca\misc\data\icons\i_danger_CA.paa";
	displayName = $STR_BLD_name_ItemDIY_woodGate;//"DIY Manual (Gate's)"
	descriptionShort = $STR_BLD_desc_ItemDIY_woodGate;//"For wooden Gates"

#ifdef _Devlopment_
	class ItemActions {
		class Build {
			text = $STR_BLD_build_ItemDIY_woodGate;//"Wooden Gate"
			script = "; ['ItemDIY_Gate','Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemLog"};
			ghost = "WoodenGate_ghost"; //Ghost model needs to be changed to WoodenGate4 so the player sees the finished fully upgrade model as the ghost
			create = "WoodenGate_foundation"; //Foundation model is using wooden fence foundation (needs to change)
		};

	};
#endif
};

//Left in place to stop problems with dbs
class ItemDIY_metal: ItemCore {
	scope = 2;
	picture = "\z\addons\dayz_buildings\equip\icon_diy_metal.paa";
	model = "z\addons\dayz_buildings\models\diymanual_metal.p3d";
	icon = "Ca\misc\data\icons\i_danger_CA.paa";
	displayName = $STR_BLD_name_ItemDIY_metal;//"DIY Manual (Metal)"
	descriptionShort = $STR_BLD_desc_ItemDIY_metal;//"For Metal fences"
	
#ifdef _Devlopment_
	class ItemActions {
		class Build {
			text = $STR_BLD_build_ItemDIY_metal;//"Metal fence"
			script = "; ['ItemDIY_metal','Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemRSJ", "ItemStone", "ItemStone" };
			ghost = "MetalFence_ghost";
			create = "MetalFence_1_foundation";
		};
	};
#endif
};