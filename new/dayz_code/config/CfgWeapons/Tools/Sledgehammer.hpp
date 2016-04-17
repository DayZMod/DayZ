class ItemSledgeHammer : ItemCore
{
	scope = public;
	
	model = "z\addons\dayz_communityweapons\models\sledge_hammer\sledgehammer.p3d";
	picture = "\z\addons\dayz_communityweapons\models\sledge_hammer\sledgehammer.paa";
	displayName = $STR_EQUIP_NAME_SledgeHammer;
	descriptionShort = $STR_EQUIP_DESC_SledgeHammer;
};

class ItemSledgeHammerBroken : ItemCore
{
	scope = public;
	
	model = "z\addons\dayz_communityweapons\models\sledge_hammer\sledgehammer.p3d";
	picture = "\z\addons\dayz_communityweapons\models\sledge_hammer\sledgehammer.paa";
	displayName = $STR_name_ItemSledgeHammerBroken;
	descriptionShort = $STR_desc_ItemSledgeHammerBroken;
	
	fixedTool = "ItemSledgeHammer";
	
	class ItemActions
	{
		class Toolbelt
		{
			text = $STR_ACTIONS_FIX_SLEDGE_HAMMER;
			script = "spawn player_fixHatchet;";
		};
	};
};