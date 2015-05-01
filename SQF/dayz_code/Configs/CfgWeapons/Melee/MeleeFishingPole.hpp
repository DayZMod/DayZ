class MeleeFishingPole: MeleeWeapon
{
	scope=2;
	autoreload=1;
	magazineReloadTime=0;
	model="\z\addons\dayz_communityassets\models\fishing_rod_weaponized.p3d";
	picture="\z\addons\dayz_communityassets\pictures\equip_fishingpole_CA.paa";
	displayName=$STR_ITEM_NAME_FISHINGPOLE;
	descriptionShort=$STR_ITEM_DESC_FISHINGPOLE;
	magazines[]=
	{
		"Fishing_Swing"
	};
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\dayz_weapons\anim\melee_hatchet_holding.rtm"
	};
	class ItemActions
	{
	/*
		class Use
		{
			text=$STR_ACTION_CAST;
			script="spawn player_goFishing;";
		};
	*/	
		class Toolbelt
		{
			text=$STR_ACTIONS_2TB;
			script="spawn player_addToolbelt;";
			use[]=
			{
				"MeleeFishingPole"
			};
			output[]=
			{
				"ItemFishingPole"
			};
		};
	};
	class Library
	{
		libTextDesc="";
	};
};	