class 8Rnd_B_Beneli_Pellets: CA_Magazine
{
	model = "\z\addons\dayz_communityassets\models\redshotgunpellets.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_redshotgunpellets_ca.paa";
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 8Rnd_B_Beneli_74Slug: CA_Magazine
{	
	model = "\z\addons\dayz_communityassets\models\greenshotgunslugs.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_greenshotgunslugs_ca.paa";
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
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
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
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
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

//Re-combine options
class 8Rnd_9x18_Makarov : CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class 8Rnd_9x18_MakarovSD : 8Rnd_9x18_Makarov
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_makarovsd_ca.paa";
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class 15Rnd_9x19_M9 : CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
		class ReloadMag
		{
				text=$STR_MAG_CONV_M9_G17;
				script="spawn player_reloadMag;";
				use[]=
				{
					"15Rnd_9x19_M9"
				};
				output[]=
				{
					"17Rnd_9x19_glock17"
				};
			};
		};
};
class 7Rnd_45ACP_1911: CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 6Rnd_45ACP: CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 17Rnd_9x19_glock17 : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\g17.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_glock17_ca.paa";
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
		
		class ReloadMag
		{
				text=$STR_MAG_CONV_G17_M9;
				script="spawn player_reloadMag;";
				use[]=
				{
					"17Rnd_9x19_glock17"
				};
				output[]=
				{
					"15Rnd_9x19_M9"
			};
		};
	};
};	
class 30Rnd_9x19_UZI : CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_9x19_UZI_SD : CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_9x19_MP5 : CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_9x19_MP5SD : CA_Magazine
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_mp5sd_ca.paa";
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 64Rnd_9x19_Bizon : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\bizon.p3d";
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 64Rnd_9x19_SD_Bizon : CA_Magazine
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_bizonsd_ca.paa";
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_545x39_AK : CA_Magazine
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak74_ca.paa";
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 20Rnd_762x51_FNFAL : CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 5Rnd_762x51_M24 : CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 10Rnd_762x54_SVD : CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 5Rnd_127x99_as50: CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 10Rnd_127x99_m107 : CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 20Rnd_762x51_DMR : CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 5x_22_LR_17_HMR: CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};	
class 10x_303: CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 15Rnd_W1866_Slug: CA_Magazine
{
	model = "\z\addons\dayz_communityassets\models\winammo.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_winammo_ca.paa";
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 8Rnd_B_Saiga12_Pellets: CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 8Rnd_B_Saiga12_74Slug: CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 200Rnd_556x45_M249: CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 100Rnd_762x51_M240: CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 200Rnd_762x51_M240: CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 75Rnd_545x39_RPK: CA_Magazine
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

/* NEW G17 SD Mag */
class 17Rnd_9x19_glock17SD : 17Rnd_9x19_glock17
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_glock17sd_ca.paa";
	
	displayName = $STR_DZ_MAG_17RND_9X19_GLOCK17SD;
	
	ammo = B_9x19_SD;
	initSpeed = 315;
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_G17_M9;
			script="spawn player_reloadMag;";
			use[] =
			{
				"17Rnd_9x19_glock17SD"
			};
			output[] =
			{
				"15Rnd_9x19_M9SD"
			};
		};
	};
};

class 15Rnd_9x19_M9SD : 15Rnd_9x19_M9
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_m9sd_ca.paa";
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_M9_G17;
			script="spawn player_reloadMag;";
			use[] =
			{
				"15Rnd_9x19_M9SD"
			};
			output[] =
			{
				"17Rnd_9x19_glock17SD"
			};
		};
	};
};

class 20Rnd_556x45_Stanag; 
class 30Rnd_556x45_Stanag : 20Rnd_556x45_Stanag
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_STANAG_G36;
			script="spawn player_reloadMag;";
			use[] =
			{
				"30Rnd_556x45_Stanag"
			};
			output[] =
			{
				"30Rnd_556x45_G36"
			};
		};
	};
};

class 30Rnd_556x45_G36 : 30Rnd_556x45_Stanag
{
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_G36_STANAG;
			script="spawn player_reloadMag;";
			use[] =
			{
				"30Rnd_556x45_G36"
			};
			output[] =
			{
				"30Rnd_556x45_Stanag"
			};
		};
	};
};

class 30Rnd_556x45_StanagSD : 30Rnd_556x45_Stanag
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_30stanagsd_ca.paa";
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_STANAG_G36;
			script="spawn player_reloadMag;";
			use[] =
			{
				"30Rnd_556x45_StanagSD"
			};
			output[] =
			{
				"30Rnd_556x45_G36SD"
			};
		};
	};
};

class 30Rnd_556x45_G36SD : 30Rnd_556x45_G36
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_g36sd_ca.paa";
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_G36_STANAG;
			script="spawn player_reloadMag;";
			use[] =
			{
				"30Rnd_556x45_G36SD"
			};
			output[] =
			{
				"30Rnd_556x45_StanagSD"
			};
		};
	};
};

class 30Rnd_545x39_AKSD : 30Rnd_545x39_AK
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak74sd_ca.paa";
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

//mosin nagant
class Mosin_Nagant_Ammo: CA_Magazine
{
	scope = 2;
	displayName = "Mosin Nagant Ammo";
	model="\dayz_equip\models\mag5rnd.p3d";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\ammo.paa";
	count = 5;
	ammo = "Mosin_762";
	descriptionShort = "5 Individual 7.62mm Mosin Nagant Bullets";
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

//ak47, sa58
class 30Rnd_762x39_AK47 : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\ak47.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak47_ca.paa";
	displayName = $STR_DZ_MAG_30RND_762X39_AK47;
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_AK47_SA58;
			script="spawn player_reloadMag;";
			use[] =
			{
				"30Rnd_762x39_AK47"
			};
			output[] =
			{
				"30Rnd_762x39_SA58"
			};
		};
	};
};

class 30Rnd_762x39_SA58 : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\vz58.p3d";
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_SA58_AK47;
			script="spawn player_reloadMag;";
			use[] =
			{
				"30Rnd_762x39_SA58"
			};
			output[] =
			{
				"30Rnd_762x39_AK47"
			};
		};
	};
};