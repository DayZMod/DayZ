/* AK47 <-> SA58 */

class 30Rnd_762x39_AK47 : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\ak47.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak47_ca.paa";
	displayName = $STR_DZ_MAG_30RND_762X39_AK47;
	
	class ItemActions
	{
		COMBINE_MAG
		
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
		COMBINE_MAG
		
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