class 100Rnd_762x54_PK : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\pk.p3d";
	
	cartridgeName = "762x54";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 50Rnd_762x54_UK59 : 100Rnd_762x54_PK
{
	count = 50;
	
	model = "z\addons\dayz_communityweapons\magazines\uk59.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_uk59_ca.paa";
	displayName = $STR_DZ_MAG_75RND_762X54_UK59_NAME;
	descriptionShort = $STR_DZ_MAG_75RND_762X54_UK59_DESC;
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