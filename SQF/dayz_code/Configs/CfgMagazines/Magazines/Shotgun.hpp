class 8Rnd_B_Beneli_Pellets: CA_Magazine
{
	model = "\z\addons\dayz_communityassets\models\redshotgunpellets.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_redshotgunpellets_ca.paa";
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 8Rnd_B_Beneli_74Slug: CA_Magazine
{	
	model = "\z\addons\dayz_communityassets\models\greenshotgunslugs.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_greenshotgunslugs_ca.paa";
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 2Rnd_shotgun_74Slug: 8Rnd_B_Beneli_74Slug
{
	displayName=$STR_MAG_NAME_8;
	count=2;
	descriptionShort=$STR_MAG_DESC_8;
	model = "\z\addons\dayz_communityassets\models\2shells_slugshot.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_slugshot_CA.paa";
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text=$STR_MAG_COMBINE_1;
			script="spawn player_reloadMag;";
			use[]=
			{
				"2Rnd_shotgun_74Slug",
				"2Rnd_shotgun_74Slug",
				"2Rnd_shotgun_74Slug",
				"2Rnd_shotgun_74Slug"
			};
			output[]=
			{
				"8Rnd_B_Beneli_74Slug"
			};
		};
	};
};

class 2Rnd_shotgun_74Pellets: 8Rnd_B_Beneli_Pellets
{
	displayName=$STR_MAG_NAME_9;
	count=2;
	descriptionShort=$STR_MAG_DESC_9;
	model = "\z\addons\dayz_communityassets\models\2shells_pellet.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_pellet_CA.paa";
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text=$STR_MAG_COMBINE_1;
			script="spawn player_reloadMag;";
			use[]=
			{
				"2Rnd_shotgun_74Pellets",
				"2Rnd_shotgun_74Pellets",
				"2Rnd_shotgun_74Pellets",
				"2Rnd_shotgun_74Pellets"
			};
			output[]=
			{
				"8Rnd_B_Beneli_Pellets"
			};
		};
	};
};