class UK59_Base : PKM_DZ
{
	descriptionShort = $STR_DZ_WPN_UK59_DESC;
	
	magazines[] = {50Rnd_762x54_UK59};
	
	class FullAuto : FullAuto
	{
		reloadTime = 0.10;
		begin1[] = {"\z\addons\dayz_communityweapons\uk59\data\uk_single_1", db8, 1, 1600};
		soundBegin[] = {begin1,1};
	};
};

class UK59_DZ : UK59_Base
{
	model = "z\addons\dayz_communityweapons\uk59\uk59.p3d";
	picture = "\z\addons\dayz_communityweapons\uk59\data\w_uk59_ca.paa";
	displayName = $STR_DZ_WPN_UK59_NAME;
	
	discreteDistance[] = {100,200,300,400,500,600,700,800};
};