class Pickup_PK_base : Car
{
	class Turrets : Turrets;
	{
		class MainTurret;
	};
};

class DZ_Datsun_PK : Pickup_PK_base
{
	scope = public;
	
	crew = "";
	side = TCivilian;
	typicalCargo[] = {};
	
	hiddenselectionstextures[] = {"\ca\wheeled\datsun_armed\data\datsun_trup3_CO.paa"};
	
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			magazines[] =
			{
				100Rnd_762x54_PK,
				100Rnd_762x54_PK
			};
		};
	};
};