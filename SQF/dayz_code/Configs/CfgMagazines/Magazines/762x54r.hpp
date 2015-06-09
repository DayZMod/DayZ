class 100Rnd_762x54_PK : CA_Magazine
{
	cartridgeName = "762x54";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 10Rnd_762x54_SVD : CA_Magazine
{
	cartridgeName = "762x54";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 5Rnd_762x54_Mosin : 10Rnd_762x54_SVD
{
	count = 5;
	model = "\dayz_equip\models\mag5rnd.p3d";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\ammo.paa";
	displayName = "5Rnd. Mosin Nagant"; //TODO move to stringtable
	descriptionShort = "5 Individual 7.62mm Mosin Nagant Cartridges";
	
	cartridgeName = "762x54";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class Mosin_Nagant_Ammo: CA_Magazine
{
	scope = protected;
	
	displayName = "Dirty cartridges";
	model="\dayz_equip\models\mag5rnd.p3d";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\ammo.paa";
	count = 1;
	descriptionShort = "5 dirty cartridges";
	
	class ItemActions
	{
		text = "Clean";
		script = "; player removeMagazine _id; player addMagazine '5Rnd_762x54_Mosin';";
	};
};