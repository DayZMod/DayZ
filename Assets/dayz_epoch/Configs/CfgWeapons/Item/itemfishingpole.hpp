class ItemFishingPole: ItemCore
{
	scope=2;
	displayName="Fishing Pole";
	model="\z\addons\dayz_communityassets\models\fishing_rod_loot_item.p3d";
	picture="\z\addons\dayz_communityassets\pictures\equip_fishingpole_CA.paa";
	descriptionShort="This carbon fiber rod may be old but she still works like a charm.";
	class ItemActions
	{
		class Toolbelt
		{
			text="Remove from Toolbelt";
			script="spawn player_addToolbelt;";
			use[]=
			{
				"ItemFishingPole"
			};
			output[]=
			{
				"MeleeFishingPole"
			};
		};
	};
};