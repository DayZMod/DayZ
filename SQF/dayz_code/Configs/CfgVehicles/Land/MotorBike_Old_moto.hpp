class Old_moto_base : Motorcycle
{
	#include "sounds\MotorBike.hpp"
};

class Old_moto_TK_Civ_EP1 : Old_moto_base 
{
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
};