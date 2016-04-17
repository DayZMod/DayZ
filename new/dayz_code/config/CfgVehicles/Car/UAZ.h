class UAZ_Unarmed_base;

class DZ_UAZ_RU : UAZ_Unarmed_base
{
	scope = public;
	
	crew = "";
	side = TCivilian;
	typicalCargo[] = {};
	
	maxSpeed = 90;
	
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\uaz_main_co.paa"};
};

class DZ_UAZ_CZ : DZ_UAZ_RU
{
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\uaz_main_002_co.paa"};
};

class DZ_UAZ_UN : DZ_UAZ_RU
{
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\uaz_main_un_co.paa"};
};

class DZ_UAZ_Tan : DZ_UAZ_RU
{
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\uaz_main_civil_co.paa"};
};