class UralCivil_DZ: UralCivil
{
	scope=public;
	side=TCivilian;
	faction=CIV;
	displayName= $STR_DN_URAL_CIV;
	vehicleClass = "Car";
	
	transportMaxWeapons = 25;
	transportMaxMagazines = 150;
	transportmaxbackpacks = 8;

	crew = "";
	typicalCargo[]={};
	model=\ca\wheeled\ural;
	picture="\Ca\wheeled\data\ico\ural_civil1_CA.paa";
	rarityUrban=0.3;
	accuracy=0.22;
	hiddenSelectionsTextures[] =
	{
		"\ca\wheeled\data\ural_kabina_civ1_co.paa",
		"\ca\wheeled\data\ural_plachta_civ1_co.paa"
	};
};