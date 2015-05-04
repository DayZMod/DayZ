class Bizon_DZ : bizon
{
	model = "z\addons\dayz_communityweapons\bizon\bizon.p3d";
	
	magazines[] =
	{
		64Rnd_9x19_Bizon,
		64Rnd_9x19_SD_Bizon
	};
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {50,100,150};
	discreteDistanceInitIndex = 1;
};

class Bizon_SD_DZ : bizon_silenced
{
	model = "z\addons\dayz_communityweapons\bizon\bizon_sd.p3d";
	
	magazines[] =
	{
		64Rnd_9x19_SD_Bizon,
		64Rnd_9x19_Bizon
	};
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {50,100,150};
	discreteDistanceInitIndex = 1;
};