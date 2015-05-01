// (c) facoptere@gmail.com, licensed to DayZMod for the community
//
// check that plants libs are properly loaded
// thanks to Tansien the great
// run only once per character life
_loc = getMarkerPos "center";
{
	_plant = _x createVehicleLocal _loc;
	sleep 0.1;
	if (sizeOf _x == 0) exitWith { 
		PVDZ_sec_atp = "Plants texture hack for type " + _x;
		publicVariableServer "PVDZ_sec_atp";
		endMission "LOSER";
	};
	deleteVehicle _plant;
} forEach ["grass", "prunus", "picea", "fallentree", "phragmites", "acer", "amygdalusn", "Brush", "fiberplant", "amygdalusc", "boulder"];
diag_log format [ "%1: Plants libs tests done!", __FILE__];

