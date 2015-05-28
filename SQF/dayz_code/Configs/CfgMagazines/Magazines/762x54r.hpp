class 100Rnd_762x54_PK : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 10Rnd_762x54_SVD : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};
};

class Mosin_Nagant_Ammo: CA_Magazine
{
	scope = 2;
	displayName = "Mosin Nagant Ammo";
	model="\dayz_equip\models\mag5rnd.p3d";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\ammo.paa";
	count = 5;
	ammo = "Mosin_762";
	descriptionShort = "5 Individual 7.62mm Mosin Nagant Cartridges";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};