class SUV_Base_EP1 : Car
{
	class HitPoints
	{
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};
};

class DZ_SUV : SUV_Base_EP1
{
	scope = public;
	
	crew = "";
	side = TCivilian;
	typicalCargo[] = {};
	
	rarityurban = 0.8;
	
	class HitPoints : HitPoints
	{
		class HitGlass1 : HitGlass1 { armor = 0.1; };
		class HitGlass2 : HitGlass2 { armor = 0.1; };
		class HitGlass3 : HitGlass3 { armor = 0.1; };
		class HitGlass4 : HitGlass4 { armor = 0.1; };
	};
};