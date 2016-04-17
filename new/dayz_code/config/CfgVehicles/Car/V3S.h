class V3S_Base_EP1;

class DZ_V3S_Mil : V3S_Base_EP1
{
	scope = public;
	
	crew = "";
	side = TCivilian;
	typicalCargo[] = {};
	
	model = "\ca\wheeled_E\V3S\V3S_transport.p3d";
	hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
	hiddenSelectionsTextures[] =
	{
		"\ca\wheeled_E\V3S\data\v3s_kabpar_egue_co.paa",
		"\ca\wheeled_E\V3S\data\v3s_intkor_egue_co.paa",
		"\ca\wheeled_E\V3S\data\v3s_koloint02_egue_co.paa",
		"\ca\wheeled_E\V3S\data\v3s_reammo_egue_co.paa"
	};
};

class DZ_V3S_Civ : DZ_V3S_Mil
{
	hiddenSelectionsTextures[] =
	{
		"\ca\wheeled_E\V3S\data\v3s_kabpar_eciv_co.paa",
		"\ca\wheeled_E\V3S\data\v3s_intkor_eciv_co.paa",
		"\ca\wheeled_E\V3S\data\v3s_koloint02_eciv_co.paa",
		"\ca\wheeled_E\V3S\data\v3s_reammo_egue_co.paa"
	};
};

class DZ_V3S_Open_Mil : DZ_V3S_Mil
{
	model = "\ca\wheeled_E\V3S\V3S_open.p3d";
	hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
	hiddenSelectionsTextures[] =
	{
		"\ca\wheeled_E\V3S\data\v3s_kabpar_egue_co.paa",
		"\ca\wheeled_E\V3S\data\v3s_intkor_egue_co.paa",
		"\ca\wheeled_E\V3S\data\v3s_koloint02_egue_co.paa"
	};
};

class DZ_V3S_Open_Civ : DZ_V3S_Open_Mil
{
	hiddenSelectionsTextures[] =
	{
		"\ca\wheeled_E\V3S\data\v3s_kabpar_eciv_co.paa",
		"\ca\wheeled_E\V3S\data\v3s_intkor_eciv_co.paa",
		"\ca\wheeled_E\V3S\data\v3s_koloint02_eciv_co.paa"
	};
};