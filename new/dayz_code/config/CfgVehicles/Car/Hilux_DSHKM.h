class Offroad_DSHKM_base : Car
{
	class Turrets : Turrets
	{
		class MainTurret;
	};
};

class DZ_Hilux_DSHKM : Offroad_DSHKM_base
{
	scope = public;
	
	crew = "";
	side = TCivilian;
	typicalCargo[] = {};
	
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			magazines[] =
			{
				50Rnd_127x107_DSHKM,
				50Rnd_127x107_DSHKM
			};
		};
	};
};