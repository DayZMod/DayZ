class 200Rnd_556x45_M249: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};
};



/* STANAG <-> G36 */

class 20Rnd_556x45_Stanag; 
class 30Rnd_556x45_Stanag : 20Rnd_556x45_Stanag
{
	class ItemActions
	{
		COMBINE_MAG
		
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
		COMBINE_MAG
		
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
		COMBINE_MAG
		
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
		COMBINE_MAG
		
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