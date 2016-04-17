class ItemDiy_Base : ItemCore
{
	model = "z\addons\dayz_buildings\models\diymanual_wood.p3d";
	picture = "\z\addons\dayz_buildings\equip\icon_diy_wood.paa";
};

class ItemDiy_Wood : ItemDiy_Base
{
	scope = public;
	
	displayName = $STR_BLD_name_ItemDIY_wood;
	descriptionShort = $STR_BLD_desc_ItemDIY_wood;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_BLD_build_ItemDIY_wood;
			script = "; [_id,'Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemLog", "ItemStone", "ItemStone"};
			ghost = "WoodenFence_ghost";
			create = "WoodenFence_1_foundation";
		};
	};
};

class ItemDiy_Gate : ItemDiy_Base
{
	scope = public;
	
	displayName = $STR_BLD_name_ItemDIY_woodGate;
	descriptionShort = $STR_BLD_desc_ItemDIY_woodGate;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_BLD_build_ItemDIY_woodGate;
			script = "; [_id,'Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemLog"};
			ghost = "WoodenGate_ghost";
			create = "WoodenGate_foundation";
		};
	};
};