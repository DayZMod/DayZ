class SkodaBase : Car
{
	#include "sounds\Civil.hpp"
};

class SkodaBlue : SkodaBase 
{ 
	typicalcargo[] = {};
};

class SkodaGreen : SkodaBase 
{
	typicalcargo[] = {}; 
};

class datsun1_civil_1_open : SkodaBase
{
	#include "sounds\Civil.hpp"
};

class car_hatchback : SkodaBase 
{
	crew = "";
	displayname = $STR_VEH_NAME_OLD_HATCHBACK;
	faction = "CIV";
	maxspeed = 125;
	scope = public;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	#include "sounds\Civil.hpp"
};

class car_sedan : SkodaBase 
{
	crew = "";
	displayname = $STR_VEH_NAME_SEDAN;
	faction = "CIV";
	maxspeed = 125;
	scope = public;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	#include "sounds\Civil.hpp"
};