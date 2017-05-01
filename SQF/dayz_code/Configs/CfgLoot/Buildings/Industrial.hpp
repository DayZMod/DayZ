class Industrial : Default
{
	zombieChance = 0.4;
	maxRoaming = 2;
	zombieClass[] =
	{
		"z_worker1",
		"z_worker2",
		"z_worker3",
		"z_new_worker2",
		"z_new_worker3",
		"z_new_worker4"
	};
	lootChance = 0.3;
	lootGroup = Industrial;
};

class Land_Ind_Workshop01_01 : Industrial
{
	zedPos[] =
	{
		{-0.661621,-0.498047,-1.29883},
		{1.24536,0.464844,-1.29498},
		{0.59668,-2.43066,-1.29449}
	};
	lootPos[] =
	{
		{0.59668,-2.43066,-1.29449},
		{1.24536,0.464844,-1.29498},
		{-0.661621,-0.498047,-1.29883}
	};
};

class Land_Ind_Garage01 : Industrial
{
	zedPos[] =
	{
		{2.47778,-1.12793,-1.23743},
		{-0.580322,-1.49609,-1.23523},
		{1.32104,1.63184,-1.23218},
		{-0.834229,2.75684,-1.22571}
	};
	lootPos[] =
	{
		{-0.580322,-1.49609,-1.23523},
		{-0.834229,2.75684,-1.22571},
		{2.47778,-1.12793,-1.23743},
		{1.32104,1.63184,-1.23218}
	};
};

class Land_Ind_Workshop01_02 : Industrial
{
	zedPos[] =
	{
		{1.15479,-0.554688,-1.42944},
		{-1.18579,-0.178711,-1.42859},
		{-0.661377,1.10352,-1.42688}
	};
	lootPos[] =
	{
		{1.15479,-0.554688,-1.42944},
		{-1.18579,-0.178711,-1.42859},
		{-0.661377,1.10352,-1.42688}
	};
};

class Land_Ind_Workshop01_04 : Industrial
{
	zedPos[] =
	{
		{-1.37415,4.18896,-1.53123},
		{-1.06677,2.69531,-1.53062},
		{0.695435,4.24561,-1.52934},
		{-1.05566,-4.08398,-1.51927},
		{0.79248,-4.60742,-1.49341},
		{-1.84424,-6.1709,-1.44427},
		{1.43774,-6.59424,-1.41742}
	};
	lootPos[] =
	{
		{-1.37415,4.18896,-1.53123},
		{0.695435,4.24561,-1.52934},
		{-1.06677,2.69531,-1.53062},
		{0.79248,-4.60742,-1.49341},
		{-1.84424,-6.1709,-1.44427},
		{-1.05566,-4.08398,-1.51927},
		{1.43774,-6.59424,-1.41742}
	};
};

class Land_Ind_Workshop01_L : Industrial
{
	zedPos[] =
	{
		{2.54688,-2.17773,-1.31482},
		{0.903809,-2.58984,-1.31418},
		{3.81299,-4.27051,-1.31345},
		{1.72021,-3.75586,-1.31332},
		{-0.813477,3.56348,-1.30765},
		{-2.38379,2.36133,-1.30405},
		{-3.21143,4.7793,-1.30246}
	};
	lootPos[] =
	{
		{-3.21143,4.7793,-1.30246},
		{-0.813477,3.56348,-1.30765},
		{-2.38379,2.36133,-1.30405},
		{3.81299,-4.27051,-1.31345},
		{0.903809,-2.58984,-1.31418},
		{2.54688,-2.17773,-1.31482},
		{1.72021,-3.75586,-1.31332}
	};
};

class Land_Hangar_2 : Industrial
{
	zedPos[] =
	{
		{1.79614,7.12695,-2.56329},
		{11.9399,7.90918,-2.56323},
		{5.98828,-2.6123,-2.56323},
		{-8.96973,-4.34961,-2.56323},
		{-0.560791,-7.5957,-2.56317},
		{10.1245,-6.48926,-2.56311},
		{-11.8945,10.541,-2.56311}
	};
	lootPos[] =
	{
		{10.1245,-6.48926,-2.56311},
		{11.9399,7.90918,-2.56323},
		{1.79614,7.12695,-2.56329},
		{-11.8945,10.541,-2.56311},
		{-8.96973,-4.34961,-2.56323},
		{-0.560791,-7.5957,-2.56317},
		{5.98828,-2.6123,-2.56323}
	};
};

class Land_A_FuelStation_Build : Industrial
{
	lootChance = 0.5;
	zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
	zedPos[] =
	{
		{-1.23218,1.26758,-1.57458},
		{1.67871,-0.918945,-1.57458},
		{1.82349,0.769531,-1.57458},
		{-1.31885,-0.655273,-1.57446}
	};
	lootPos[] =
	{
		{-1.31885,-0.655273,-1.57446},
		{1.82349,0.769531,-1.57458},
		{1.67871,-0.918945,-1.57458},
		{-1.23218,1.26758,-1.57458}
	};
};

class Land_Shed_Ind02 : Industrial
{
	zedPos[] =
	{
		{4.44653,9.67578,-4.66602},
		{-2.28149,-5.67188,-4.65601},
		{4.41162,2.65137,-1.27954},
		{-3.44482,12.2129,-1.27704},
		{-0.437988,11.6953,-1.2764}
	};
	lootPos[] = {{-2.28,-5.67,-4.66},{4.45,9.68,-4.67},{4.41,2.65,-1.28},{-0.44,11.7,-1.28},{-3.44,12.21,-1.28},{-2.77,5.85,-4.63},{3.42,1.62,-4.63},{4.69,-9.2,-1.28},{-3.93,-2.17,-1.29},{-3.94,-8.55,-1.29},{-5.57,9.01,-4.13},{-5.53,-8.73,-4.09}};
};

class Land_Misc_PowerStation : Industrial
{
	zedPos[] =
	{
		{4.22803,-1.19922,-1.28812},
		{4.09863,4.89746,-1.25742}
	};
	lootPos[] =
	{
		{4.09863,4.89746,-1.25742},
		{4.22803,-1.19922,-1.28812}
	};
};

class Land_Shed_W01 : Industrial
{
	zedPos[] =
	{
		{-1.52832,-0.249023,-1.41138}
	};
	lootPos[] =
	{
		{-1.52832,-0.249023,-1.41138}
	};
};

class Land_Tovarna2 : Industrial
{
	zedPos[] =
	{
		{-12.0674,2.57031,-5.62714},
		{-6.39404,-8.25293,-5.62549},
		{0.234375,1.72266,-5.59778},
		{-10.854,-6.9209,-5.56561},
		{-6.77686,-1.73828,-5.56012},
		{-2.03516,6.61426,-5.55927},
		{-4.89844,6.62988,-5.55927},
		{-11.627,7.19629,-5.5592},
		{6.22021,-3.94824,-4.61829},
		{-3.74561,2.9043,-3.9967},
		{-7.14746,8.45313,-2.31165},
		{-12.7241,4.10254,-2.3114},
		{-12.8682,1.44434,-2.31134},
		{-4.55859,5.21777,-2.30164},
		{-4.00293,8.9707,-2.30151},
		{-12.4126,8.12402,-2.27142},
		{-12.1294,-0.157227,0.354309},
		{-8.81348,-0.453125,0.381226},
		{-4.67676,7.32715,1.57178},
		{-11.4702,2.91211,1.59656},
		{-11.0664,8.12988,1.60657},
		{-2.68555,3.43945,3.37433},
		{-13.1958,-8.95898,3.38428}
	};
	lootPos[] =
	{
		{-11.63,7.2,-5.56},
		{-12.07,2.57,-5.63},
		{-4.9,6.63,-5.56},
		{-3.75,2.91,-4},
		{-12.87,1.44,-2.31},
		{-12.41,8.12,-2.27},
		{-12.72,4.1,-2.31},
		{-4,8.97,-2.3},
		{-7.15,8.45,-2.31},
		{-4.56,5.22,-2.3},
		{-11.47,2.91,1.6},
		{-11.07,8.13,1.61},
		{-4.68,7.33,1.57},
		{-2.69,3.44,3.37},
		{-13.2,-8.96,3.38},
		{-8.81,-0.45,0.38},
		{-12.13,-0.16,0.35},
		{-2.04,6.61,-5.56},
		{0.23,1.72,-5.6},
		{6.22,-3.95,-4.62},
		{-6.39,-8.25,-5.63},
		{-10.85,-6.92,-5.57},
		{-6.78,-1.74,-5.56},
		{8.44,0.52,-4.62},
		{2.1,6.56,-5.58},
		{-8.62,6.18,-5.56},
		{-9.26,7.01,-2.23},
		{-6.39,-0.48,6.45},
		{-4.37,-3.18,6.58},
		{-9.32,-1.18,6.56},
		{-10.16,7.67,6.56},
		{-2.09,-7.35,6.57},
		{0.91,1.59,6.56},
		{-1.2,6.85,6.58}
	};
};

class Land_Ind_Vysypka : Industrial
{
	zedPos[] =
	{
		{-6.26709,26.7344,-4.9772},
		{1.64697,23.4033,-4.97098},
		{7.146,3.9248,-4.96973},
		{4.63623,-12.1621,-4.9697},
		{0.487793,4.9541,-4.9686},
		{-6.30127,2.92969,-4.96838},
		{1.08203,-0.407227,-4.96802},
		{-5.07617,-16.4658,-4.96759},
		{-0.0336914,-10.8203,-4.96686}
	};
	lootPos[] =
	{
		{0.487793,4.9541,-4.9686},
		{1.08203,-0.407227,-4.96802},
		{-0.0336914,-10.8203,-4.96686},
		{-5.07617,-16.4658,-4.96759},
		{-6.30127,2.92969,-4.96838},
		{-6.26709,26.7344,-4.9772},
		{1.64697,23.4033,-4.97098},
		{7.146,3.9248,-4.96973},
		{4.63623,-12.1621,-4.9697}
	};
};

class Land_A_BuildingWIP : Industrial
{
	zedPos[] =
	{
		{-12.6382,0.492188,-6.53247},
		{15.4502,-0.316406,-6.52979},
		{-15.563,-5.17871,-6.50513},
		{-16.0015,-9.80957,-6.50415},
		{-14.5049,-8.13086,-6.49951},
		{14.771,7.2959,-6.47754},
		{-4.62646,4.52344,-6.45264},
		{0.944824,-2.30176,-6.43042},
		{7.28076,3.20898,-6.4104},
		{9.75732,10.1123,-6.4082},
		{20.4893,2.31836,-4.52576},
		{2.22461,-9.21582,-2.53406},
		{-16.3184,-8.35645,-2.53357},
		{-8.92041,-7.18848,-2.53308},
		{17.3125,-3.09961,-2.53271},
		{10.7061,-6.51563,-2.53259},
		{-17.8853,6.63281,-2.53186},
		{-23.1982,8.44629,-2.53186},
		{-17.1982,9.58594,-2.53174},
		{-21.3066,-6.79297,-2.53174},
		{-21.6021,-1.79297,-2.53174},
		{-4.99121,9.80957,-2.53174},
		{14.0864,7.43945,-2.52686},
		{-13.8184,3.99023,1.47827},
		{10.5786,-6.84863,1.4812},
		{-20.6992,-16.9766,1.48291},
		{-15.9497,-6.17578,1.48804},
		{-3.19141,-2.49414,1.49414},
		{-15.415,-13.3896,5.4668}
	};
	lootChance = 0.5;
	lootPos[] = {{0.16,11.99,-6.49},{-7.62,-9.06,-6.47},{-4.94,-6.01,-6.46},{-11.87,-9.73,-6.49},{-8.89,9.19,-6.48},{-4.24,10.81,-6.51},{-21.71,4.84,-6.41},{-23.5,11.51,-6.46},{-23.95,-1.07,-6.45},{-21.7,-9.83,-6.52},{-14.56,-13.11,-6.5},{-17.56,-15.55,-6.52},{-14.35,-16.07,-4.52},{-0.67,-14.4,-2.54},{15.23,-15.17,-2.54},{5.96,-12.56,-2.54},{-23.95,3.74,-2.53},{-22.82,8.38,1.48},{-11.27,10.63,1.5},{8.1,7.48,1.49},{17.76,2.55,1.43},{-7.71,-13.39,-6.87},{0.02,-13.18,-6.87},{8.24,-13.4,-6.87},{7.84,-7.36,-6.51},{0.9,4.92,-6.38},{-5.73,-1.68,-6.41},{-15.84,0.39,-6.48},{-11.72,15.21,-6.47},{-15.68,9.71,-6.44}};
};

class Land_Misc_Cargo1Ao : Industrial
{
	zedPos[] =
	{
		{0.00976563,0.19043,-1.09224},
		{0.012207,2.19263,-1.09224},
		{0.48877,-1.61377,-1.09224}
	};
	lootPos[] =
	{
		{0.48877,-1.61377,-1.09224},
		{0.012207,2.19263,-1.09224},
		{0.00976563,0.19043,-1.09224}
	};
};

class Land_Misc_Cargo1Bo : Industrial
{
	zedPos[] =
	{
		{0.223389,-0.580078,-1.09222},
		{-0.322021,1.68555,-1.09222},
		{0.548584,-1.96289,-1.09222}
	};
	lootPos[] =
	{
		{-0.322021,1.68555,-1.09222},
		{0.548584,-1.96289,-1.09222},
		{0.223389,-0.580078,-1.09222}
	};
};

class Land_telek1 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-0.114014,0.609375,13.9082},
		{-1.54883,-0.761719,13.9082}
	};
	lootChance = 0.5;
	lootPos[] =
	{
		{-0.114014,0.609375,13.9082},
		{-1.54883,-0.761719,13.9082}
	};
};

class Land_Rail_House_01 : Industrial
{
	zedPos[] =
	{
		{0.487793,3.38867,-1.28265},
		{-1.82178,3.10938,-1.28265},
		{2.81152,3.61426,-1.28265}
	};
	lootPos[] =
	{
		{2.81152,3.61426,-1.28265},
		{-1.82178,3.10938,-1.28265},
		{0.487793,3.38867,-1.28265}
	};
};

class Land_Barn_Metal : Industrial
{
	zedPos[] =
	{
		{1.78223,7.49902,-5.44214},
		{-3.16846,14.9141,-5.44214},
		{-4.52295,-18.5713,-5.44214},
		{7.79883,20.1406,-5.44214},
		{-8.45898,-8.43848,-5.44214},
		{8.87207,-23.2041,-5.44214},
		{-2.00244,-3.19043,5.40768},
		{10.2598,22.709,5.57785},
		{-9.37109,-22.1816,5.57785}
	};
	lootPos[] =
	{
		{-2.00244,-3.19043,5.40768},
		{-9.37109,-22.1816,5.57785},
		{10.2598,22.709,5.57785},
		{7.79883,20.1406,-5.44214},
		{8.87207,-23.2041,-5.44214},
		{-4.52295,-18.5713,-5.44214},
		{-8.45898,-8.43848,-5.44214},
		{1.78223,7.49902,-5.44214},
		{-3.16846,14.9141,-5.44214}
	};
};

class Land_Ind_Expedice_1 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{5.66846,-18.3174,-5.75726},
		{0.120605,13.0664,-5.6839},
		{1.67725,2.15137,-5.6839},
		{-0.315918,13.1416,-3.48672},
		{-11.7915,-13.8818,-3.48672},
		{-6.87695,-18.2285,-3.48672},
		{-0.5625,13.8926,9.71017}
	};
	lootPos[] =
	{
		{-6.87695,-18.2285,-3.48672},
		{-0.315918,13.1416,-3.48672},
		{-0.5625,13.8926,9.71017},
		{5.66846,-18.3174,-5.75726},
		{1.67725,2.15137,-5.6839},
		{-11.7915,-13.8818,-3.48672},
		{0.120605,13.0664,-5.6839}
	};
};

class Land_A_CraneCon : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-7.78271,-1.56445,10.621}
	};
	lootPos[] =
	{
		{-7.78271,-1.56445,10.621}
	};
};

class Land_Ind_Mlyn_03 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-3.09521,-2.06934,-4.17218},
		{-5.604,4.47461,-4.17218},
		{2.34961,-5.01953,9.02472}
	};
	lootPos[] =
	{
		{-5.604,4.47461,-4.17218},
		{-3.09521,-2.06934,-4.17218},
		{2.34961,-5.01953,9.02472}
	};
	lootChance = 0.2;
};

class Rubbish5 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-0.369629,0.078125,-0.274689}
	};
	lootChance = 0.1;
	lootPos[] =
	{
		{-0.369629,0.078125,-0.274689}
	};
};

class Land_komin : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{0.126953,2.88086,12.4362}
	};
	lootChance = 0.5;
	lootPos[] =
	{
		{0.126953,2.88086,12.4362}
	};
};

class Land_Ind_Pec_01 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-1.73682,-10.9668,-22.3766},
		{3.95752,-12.5781,-17.425},
		{-0.951172,-0.967773,-3.83344},
		{-0.181641,15.7451,0.253754},
		{-0.237793,-13.3857,6.21796},
		{-6.78613,-7.21973,14.7371}
	};
	lootChance = 0.2;
	lootPos[] =
	{
		{-1.73682,-10.9668,-22.3766},
		{3.95752,-12.5781,-17.425},
		{-0.951172,-0.967773,-3.83344},
		{-0.181641,15.7451,0.253754},
		{-0.237793,-13.3857,6.21796},
		{-6.78613,-7.21973,14.7371}
	};
};

class Land_Ind_SiloVelke_01 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{2.62646,7.77051,-5.45245},
		{-10.4751,0.642578,11.8912},
		{-5.62451,3.42188,11.8912},
		{-1.60742,8.15918,21.9993}
	};
	lootChance = 0.2;
	lootPos[] =
	{
		{2.62646,7.77051,-5.45245},
		{-5.62451,3.42188,11.8912},
		{-10.4751,0.642578,11.8912},
		{-1.60742,8.15918,21.9993}
	};
};

class Land_Misc_Garb_Heap_EP1 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-0.625488,-0.126953,-0.255127}
	};
	lootChance = 0.1;
	lootPos[] =
	{
		{-0.625488,-0.126953,-0.255127}
	};
};

class Land_Shed_M02 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-0.0136719,-1.44629,-1.54199}
	};
	lootChance = 0.2;
	lootPos[] =
	{
		{-0.0136719,-1.44629,-1.54199}
	};
};

class Fort_Barricade : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{0.241211,-1.00488,-0.244537}
	};
	lootChance = 0.1;
	lootPos[] =
	{
		{0.241211,-1.00488,-0.244537}
	};
};

class Land_Misc_Rubble_EP1 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{0.622559,0.367188,-0.0337219}
	};
	lootChance = 0.1;
	lootPos[] =
	{
		{0.622559,0.367188,-0.0337219}
	};
};

class Land_A_Crane_02b : Industrial
{
	maxRoaming = 0;
	lootChance = 0.4;
	lootPos[] =
	{
		{-3.4707,-0.149414,-6.06299},
		{-10.9609,-0.0419922,-5.6626},
		{-9.85547,-0.046875,0.922455}
	};
};

class datsun01Wreck : Industrial
{
	maxRoaming = 0;
	lootChance = 0.2;
	lootPos[] =
	{
		{0.0239258,1.51465,-0.141052}
	};
};

class UralWreck : Industrial
{
	maxRoaming = 0;
	lootChance = 0.2;
	lootPos[] =
	{
		{-0.27,1.32,-1.19}
	};
};

class Land_Misc_GContainer_Big : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{2.28223,0.792969,0.0986633}
	};
	lootChance = 0.2;
	lootPos[] =
	{
		{2.28223,0.792969,0.0986633}
	};
};

class Land_trafostanica_velka : Industrial
{
	maxRoaming = 1;
	zedPos[] =
	{
		{-0.688965,5.47168,-2.61597},
		{0.803223,6.91602,-2.61597},
		{1.89258,-1.68164,-2.61597},
		{-2.82227,-6.4502,-2.61597}
	};
	lootChance = 0.4;
	lootPos[] =
	{
		{-0.688965,5.47168,-2.61597},
		{0.803223,6.91602,-2.61597},
		{1.89258,-1.68164,-2.61597},
		{-2.82227,-6.4502,-2.61597}
	};
};

class Misc_TyreHeap : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{0.46,-0.2,0.24}
	};
	lootChance = 0.1;
	lootPos[] =
	{
		{0.46,-0.2,0.24}
	};
};

class Land_sara_hasic_zbroj : Industrial
{
	zedPos[] =
	{
		{0.14,1.76,-2.65},
		{-0.94,-0.97,-2.65},
		{1.86,-0.47,-2.65},
		{2.69,-2.12,-2.65},
		{-3.02,-1.3,-2.65},
		{4.97,-1.94,-2.65},
		{5.67,1.09,-2.65}
	};
	lootChance = 0.4;
	lootPos[] =
	{
		{5.67,1.09,-2.65},
		{4.97,-1.94,-2.65},
		{2.69,-2.12,-2.65},
		{1.86,-0.47,-2.65},
		{0.14,1.76,-2.65},
		{-3.02,-1.3,-2.65},
		{-0.94,-0.97,-2.65}
	};
};

class Land_Ind_Quarry : Industrial
{
	zedPos[] =
	{
		{0.74,-10.68,-7.48},
		{-2.97,-15.79,-7.48},
		{6.12,6.62,-7.48},
		{6.38,9.22,-7.48},
		{-7.11,3.25,-7.48}
	};
	lootPos[] = {{-4.53,-6.8,5.25},{-4.36,16.23,5.26},{0.74,-10.68,-7.48},{-2.97,-15.79,-7.48},{-7.11,3.25,-7.48},{6.12,6.62,-7.48},{6.38,9.22,-7.48},{-7.12,13.38,-7.48},{-4.55,6.12,5.29}};
};
// ALT-MAP Support
class Land_MBG_Warehouse : Industrial // cement garage with roll up doors
{
	zombieChance =1;
	zedPos[] = { {18.6279,-11.8701,-6.14345},{18.7441,-3.52979,-6.14345},{19.6816,10.3794,-6.14345} };
	lootPos[] = { 
		{18.6279,-11.8701,-6.14345},
		{18.7441,-3.52979,-6.14345},
		{19.6816,10.3794,-6.14345}, 	
		{19.3037,-4.68115,-2.84345},
		{20.1992,9.28613,-2.84345},
		{-14.5117,-11.2427,5.15655},
		{19.957,-11.1582,5.15655},
		{4.71289,1.58838,5.15655}
	};
};
class Land_aif_tovarna1 : Industrial // concrete, blue sliding doors, generators upstairs
{
	zombieChance =1;
	zedPos[] = { {0.583008,-5.31641,-6.33001},{-9.15723,0.269531,-6.33001} };
	lootPos[] = { {-10.3301,-8.71875,-0.352261}, {2.54883,3.63672,-0.352261},{-5.18652,-8.57422,2.39782},{2.47559,0.566406,2.39782},{-0.111328,0.832031,5.31266},{-8.40918,-5.96484,5.31261}	};
};
class Land_MBG_Radiotelescope : Industrial // radio telescope
{
	zedPos[] = { {1.30273,-5.41602,-8.95671},{-5.34375,2.29785,-9.72141},{-0.125,6.33398,-9.952} };
};
class Land_House_C_10_EP1 : Industrial // concrete, doorway, 2 garages
{
	zombieChance =1;
	zedPos[] = { {-2.13477,2.8623,-4.17834},{-1.79102,-6.39355,-4.19764} };
	lootPos[] = { {-1.4043,7.41895,-4.16707}, {-2.47852,-2.16504,-4.19077},{2.69043,-6.97852,-4.18234},{-1.06641,-8.16797,-4.19676},{-1.79102,-6.39355,-4.19764}};
};
class Land_MBG_Garage_Single_B : Industrial // concrete 2 garages
{
	zombieChance =1;
	zedPos[] = { {-0.0576172,2.22266,-1.03965},{0.0341797,2.55176,-1.039660.0341797,2.55176,-1.03966} };
	lootPos[] = { {-0.0576172,2.22266,-1.03965}, {0.0341797,2.55176,-1.03966}};
};
class Land_seb_bouda_plech : Industrial // shed
{
	zedPos[] = {{0.587891,-0.694336,-1.25855},{-1.32471,2.75488,-1.72853}};
	lootPos[] = {{0.518555,-1.09863,-1.24038},{0.78418,0.317871,-1.30457},{-1.39551,-1.56641,-1.72854},{1.45264,1.75,-1.72855}};
};
class Land_hut_old01 : Industrial // medium sized corrugated barn
{
	zedPos[] = {{-5.85156,-6.29785,-3.01431},{0.0522461,7.68945,-3.01434}};
	lootPos[] = {{0.114258,3.97949,-3.01434},{-1.58154,-5.11133,-3.01434},{-6.06348,5.97266,-3.01433}};
};
class land_bunka : Industrial // small free standing office
{
	zedPos[] = {{0.902344,2.01514,-1.51244},{-0.229492,2.83521,-1.51244}};
	lootPos[] = {{0.902344,2.01514,-1.51244},{-0.229492,2.83521,-1.51244}};
};
class land_molovabud2 : Industrial // brick and concrete
{
	zedPos[] = {{0.902344,2.01514,-1.51244},{-0.229492,2.83521,-1.51244}};
	lootPos[] = {{-1.29492,4.75195,-2.46292},{2.67529,3.74512,-2.46296},{2.27832,-6.29395,-2.46296},{-1.73779,-6.27246,-2.46292},{0.274902,-5.6543,-2.46294},
		{-0.87793,4.93457,-2.46293},{-7.5376,4.89258,1.41187}};
};
class land_molovabud1 : Industrial // brick and concrete
{
	zedPos[] = {{-7.86621,0.259766,1.41187},{-2.56592,0.334961,1.41187}};
	lootPos[] = {{-7.86621,0.259766,1.41187},{-2.56592,0.334961,1.41187}};
};
class land_seb_rozvodna : Industrial // brick wooden stairs
{
	lootPos[] = {{-0.582031,3.20508,0.582415}};
};
class land_provoz2 : Industrial // brick with metal roof
{
	zedPos[] = {{-3.44727,-2.83105,-2.30756},{3.27734,1.92676,-2.30756}};
	lootPos[] = {{3,0.40332,-2.51849},{-4.00488,0.662598,-2.51849},{3.23877,-2.76855,-2.30756},{-3.35352,1.86328,-2.30756}};
};
class land_sklad2 : Industrial // brick garage with metal roof
{
	zedPos[] = {{2.60986,-1.60938,-2.38225},{3.19336,2.91602,-2.38225},{-2.04541,-0.470703,-2.38225}};
	lootPos[] = {{2.60986,-1.60938,-2.38225},{3.19336,2.91602,-2.38225},{-2.04541,-0.470703,-2.38225}};
};
class land_hala1 : Industrial // brick factory with tanks inside
{
	zedPos[] = {{2.23096,-5.30859,-3.98352},{1.9248,-3.57227,4.05042},{3.47656,1.4502,4.04957}};
	lootPos[] = {{2.23096,-5.30859,-3.98352},{1.9248,-3.57227,4.05042},{3.47656,1.4502,4.04957}};
};
class land_seb_main_fac : Industrial // large concrete factory
{
	zedPos[] = {{2.23096,-5.30859,-3.98352},{1.9248,-3.57227,4.05042},{3.47656,1.4502,4.04957}};
	lootPos[] = {{4.19727,-1.7002,-5.81592},{13.6123,-3.59717,-5.75059},{18.8447,-0.019043,-5.83285},{4.12305,15.0049,8.63872},{2.93262,5.25195,8.63872},
		{19.748,12.3213,8.63872},{20.1475,5.85547,8.63872},{-6.57617,4.96094,4.16873},{-4.16797,9.9248,4.16873}};
};
class land_garaze : Industrial // one story garage 1 broken wood door
{
	zedPos[] = {{5.57129,-4.15234,-2.09256},{4.67871,0.528564,-2.09256},{5.05273,4.5957,-2.09255}};
	lootPos[] = {{5.57129,-4.15234,-2.09256},{4.67871,0.528564,-2.09256},{5.05273,4.5957,-2.09255}};
};
class Land_vys_budova_p1 : Industrial // one story garage 1 broken wood door
{
	zedPos[] = {{5.57129,-4.15234,-2.09256},{4.67871,0.528564,-2.09256},{5.05273,4.5957,-2.09255}};
	lootPos[] = {{-4.2168,-3.61816,-2.96085},{-4.59521,3.25635,-2.96088},{3.84375,2.55566,-2.96088},{1.14941,8.65527,5.59122},{-5.85205,2.18896,5.59122},
		{-3.25635,-9.58398,5.59122},{-2.90771,-0.239746,5.59869},{-1.104,-0.294434,2.12335},{-1.09863,0.403809,-0.407806},{4.30469,-1.36182,-2.96088}};
};
class Land_Ind_Oil_Tower_EP1 : Industrial //oil derrick
{
	lootPos[] = {{2.51416,-6.37646,-12.9744},{2.79297,0.470947,-8.00402},{2.19385,-5.54688,-8.01227},{4.2146,-3.7749,16.7859}};
};
class Land_tovarna1 : Industrial // white multistory industrial blue doors
{
	zedPos[] = {{-1.27808,-0.66748,-5.75442}};
	lootPos[] = {{-1.27808,-0.66748,-5.75442},{-11.2869,-7.73242,-0.320107},{3.62134,2.69971,-0.320107},{-4.94751,-7.87256,2.17997},{2.49707,0.435547,2.17997},
		{-2.96704,1.13965,4.82979},{-9.83594,-4.396,4.8297}};
};
class Land_Fort_Watchtower : Industrial // 
{
	zedPos[] = {{0.271973,0.984497,-2.21036}};
	lootPos[] = {{0.126953,-0.00146484,-2.21036}};
};
class Land_ibr_FuelStation_Build : Industrial // gas station
{
	zedPos[] = {{2.19458,-0.13916,-1.33611}};
	lootPos[] = {{-0.919922,-0.575684,-1.33602}};
};
class Land_House_C_12_EP1 : Industrial // makeshift repair shop w/car ramps
{
	zedPos[] = {{-0.805176,-1.12061,-3.51101}};
	lootPos[] = {{-0.805176,-1.12061,-3.51101},{5.1228,-1.2085,-3.51101},{-0.202881,-7.99072,-3.51101},{2.56348,-1.16968,0.141033},{-1.41382,-7.68042,3.45577}};
};
class Land_garaz_bez_tanku : Industrial // barrier garage thing walk up sides
{
	lootPos[] = {{2.31543,0.586914,3.41651},{-5.07959,3.18555,3.41651}};
};
class Land_leseni2x: Industrial
{
	lootPos[] = {{1.15625,-0.206055,2.55466}};
	zedPos[] = {{1.15625,-0.206055,2.55466}};
};
class Land_smd_garaz_open: Industrial // garage with 3 green doors
{
	lootPos[] = {{-5.10742,-0.351563,-1.22162},{-1.11328,-0.112305,-1.22162},{3.65039,-0.338867,-1.22162}};
};
// ALT-MAP Support
class Land_Ind_Oil_Pump_EP1: Industrial // tak oil pump
{
	lootPos[] = {{-1.85352,-3.17261,-2.08472},{1.3916,-2.21655,2.54156}};
};
class land_provoz1: Industrial // nm brick garage
{
	zedPos[] = {{-0.134766,2.26465,-2.30756},{3.37305,1.97266,-2.30756},{-4.29297,-1.39258,-2.30756},{4.35107,-1.93945,-2.30756}};
	lootPos[] = {{1.60449,1.63086,-2.30756},{-2.98193,2.74121,-2.30756},{-1.59277,-2.30273,-2.30756},{1.97852,-2.03613,-2.30756}};
};
class land_b_small1: Industrial // nm cinder blocks
{
	zedPos[] = {{-1.56445,0.760498,-1.50033}};
	lootPos[] = {{-1.47754,-3.43457,-1.50033},{-1.0791,0.142334,-1.50033}};
};
class land_seb_nasypka: Industrial // nm cement + metal
{
	zedPos[] = {{7.96338,0.114258,-6.50023}};
	lootPos[] = {{-0.00878906,8.66797,-6.59387},{-0.1875,4.55859,-6.59387},{10.5996,4.24609,-6.52272},{10.7554,1.3623,-6.52408},{9.08057,-6.9873,-0.134289},{2.66699,-7.53906,-0.134289}};
};
class land_kontejner_des: Industrial // nm dumpster
{
	lootPos[] = {{-2.17334,-0.0615234,-0.729944}};
};
class land_f_b2: Industrial { // nm
	lootPos[] = {{-7.11816, 2.13281, -4.99346}, {-2.95898, 2.8457, -5.00836}, {0.927246, -1.60645, -4.24147}, {6.79736, -2.41211, -5.00836}, {4.63672, 3.35547, -5.00836}};
};
class land_bud2: Industrial { // nm
	lootPos[] = {{-1.46094, 1.78418, -1.79692}, {2.05908, 0.480469, -1.79291}, {-0.447266, -2.32617, -1.78519}, {-3.6936, -1.18359, -1.79216}};
};
class land_seb_mine_main_opt: Industrial { // nm
	lootPos[] = {{6.5918, -0.612793, -4.79192}, {-5.88281, 4.51221, -4.71998}, {0.225098, 4.50293, -4.72003}, {-5.97461, -0.39502, -4.747}, {0.21875, 1.4585, -0.995667}, {0.443359, 3.97266, -0.990997}, {-3.64307, 4.96094, -0.989159}, {4.25928, 2.02979, 5.09215}, {0.400879, -0.485352, 7.8684}, {-0.702148, -4.14941, 7.8684}, {-5.52832, -2.8252, 7.8684}, {-4.75391, 1.5752, 7.8684}, {-2.1416, 1.20703, 11.2794}, {1.23779, 1.45752, 14.6913}, {-5.53662, -2.33301, 14.6913}, {0.824219, -3.91943, 14.6913}, {2.94971, -0.760254, 14.6913}};
};
class land_seb_mine_near: Industrial { // nm
	lootPos[] = {{8.26221, -6.49414, -8.8979}, {4.95752, -5.74219, -8.8979}, {6.75049, 9.6665, -11.9873}};
};

