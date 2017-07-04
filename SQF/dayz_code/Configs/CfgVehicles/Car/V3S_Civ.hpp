class V3S_Civ: V3S_Base 
{
	crew = "";
	faction = "CIV";
	rarityurban = 0.3;
	scope = public;
	side = 3;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Library 
	{
		libtextdesc = $STR_EP1_LIB_V3S;
	};
	class Reflectors
	{
		class Left
		{
			angle = 120;
		};
		class Right
		{
			angle = 120;
		};
	};
};