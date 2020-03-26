class ItemDIY_wood: ItemCore {
	scope = 2;
	picture = "\z\addons\dayz_buildings\equip\icon_diy_wood.paa";
	model = "z\addons\dayz_buildings\models\diymanual_wood.p3d";
	icon = "Ca\misc\data\icons\i_danger_CA.paa";
	displayName = $STR_BLD_name_ItemDIY_wood;//"DIY Manual (Wood)"
	descriptionShort = $STR_BLD_desc_ItemDIY_wood;//"For wooden fences"

	class ItemActions {
		class Build {
			text = $STR_BLD_build_ItemDIY_wood;//"Wooden fence"
			script = "; ['ItemDIY_wood','Build'] spawn player_build;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemLog", "ItemStone", "ItemStone"};
			ghost = "WoodenFence_ghost";
			create = "WoodenFence_1_foundation";
		};
	};
};

class ItemDIY_Gate: ItemCore {
	scope = 2;
	picture = "\z\addons\dayz_buildings\equip\icon_diy_gate.paa";
	model = "z\addons\dayz_buildings\models\diymanual_gates.p3d";
	icon = "Ca\misc\data\icons\i_danger_CA.paa";
	displayName = $STR_BLD_name_ItemDIY_woodGate;//"DIY Manual (Gate's)"
	descriptionShort = $STR_BLD_desc_ItemDIY_woodGate;//"For wooden Gates"

	class ItemActions {
		class Build {
			text = $STR_BLD_build_ItemDIY_woodGate;//"Wooden Gate"
			script = "; ['ItemDIY_Gate','Build'] spawn player_build;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemLog"};
			ghost = "WoodenGate_ghost"; //Ghost model needs to be changed to WoodenGate4 so the player sees the finished fully upgrade model as the ghost
			create = "WoodenGate_foundation"; //Foundation model is using wooden fence foundation (needs to change)
		};
	};
};

class ItemDIY_roof: ItemCore {
	scope = 2;
	picture = "\z\addons\dayz_buildings\equip\icon_diy_roof.paa";
	model = "z\addons\dayz_buildings\models\diymanual_roofs.p3d";
	icon = "Ca\misc\data\icons\i_danger_CA.paa";
	displayName = $STR_BLD_name_ItemDIY_woodRoof;//"DIY Manual (roofs)"
	descriptionShort = $STR_BLD_desc_ItemDIY_woodRoof;//"For wooden roofs"

	class ItemActions {
		class Build {
			text = $STR_BLD_build_ItemDIY_woodRoof;//"Wooden roof"
			script = "; ['ItemDIY_roof','Build'] spawn player_build;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemLog", "ItemLog", "ItemLog", "ItemLog", "ItemStone", "ItemStone", "ItemStone", "ItemStone"};
			ghost = "roof_ghost";
			create = "Roof_stage_1"; 
		};
	};
};

class ItemDIY_tower: ItemCore {
	scope = 2;
	picture = "\z\addons\dayz_buildings\equip\icon_diy_tower.paa";
	model = "z\addons\dayz_buildings\models\diymanual_towers.p3d";
	icon = "Ca\misc\data\icons\i_danger_CA.paa";
	displayName = $STR_BLD_name_ItemDIY_woodTower;//"DIY Manual (towers)"
	descriptionShort = $STR_BLD_desc_ItemDIY_woodTower;//"For wooden towers"

	class ItemActions {
		class Build {
			text = $STR_BLD_build_ItemDIY_woodTower;//"Wooden tower"
			script = "; ['ItemDIY_tower','Build'] spawn player_build;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemLog", "ItemLog", "ItemLog", "ItemLog", "ItemStone", "ItemStone", "ItemStone", "ItemStone"};
			ghost = "GuardTower_ghost";
			create = "GuardTower_stage_1"; 
		};
	};
};

//Left in place to stop problems with dbs
class ItemDIY_metal: ItemCore {
	scope = 2;
	picture = "\z\addons\dayz_buildings\equip\icon_diy_metal.paa";
	model = "z\addons\dayz_buildings\models\diymanual_metal.p3d";
	icon = "Ca\misc\data\icons\i_danger_CA.paa";
	displayName = $STR_BLD_name_ItemDIY_metal;//"DIY Manual (Metal)"
	descriptionShort = $STR_BLD_desc_ItemDIY_metal;//"For Metal fences"

	class ItemActions {
		class Build {
			text = $STR_BLD_build_ItemDIY_metal;//"Metal fence"
			script = "; ['ItemDIY_metal','Build'] spawn player_build;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemRSJ", "ItemConcreteBlock", "ItemConcreteBlock"};
			ghost = "MetalFence_ghost";
			create = "MetalFence_1_foundation";
		};
	};
};
