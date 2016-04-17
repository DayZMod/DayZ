#include "\dayz\dayz_server\util\request.hpp"

#define SERVER

#include "\dayz\dayz_code\actions\build.sqf"

/*
Parameters:
	string		class
	array
		vector3d	position (ASL)
		scalar		azimuth
*/
_handler =
{
	private ["_class", "_pos", "_dir", "_vehicle"];
	
	_class = _this select 0;
	
	//TODO: check that the class is actually buildable
	
	_vehicle = _class createVehicleLocal [0, 0, 0];
	[_vehicle, _this select 1] call dz_fn_build_setPos;
	
	if (_vehicle call dz_fn_build_checkGradient) exitWith
	{
		deleteVehicle _vehicle;
		MESSAGE_FAIL_SLOPE
	};
	
	if (_vehicle call dz_fn_build_checkCollision) exitWith
	{
		deleteVehicle _vehicle;
		MESSAGE_FAIL_BLOCKED
	};
	
	deleteVehicle _vehicle;
	
	_vehicle = _class createVehicle [0, 0, 0];
	[_vehicle, _this select 1] call dz_fn_build_setPos;
	
	-1
};

Request_RegisterHandler("build", _handler, false);