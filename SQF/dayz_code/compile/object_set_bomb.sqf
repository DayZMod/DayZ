private ["_vehicle", "_engineStatus", "_location", "_newLocation", "_veh"];
if(isDedicated) then{
	_vehicle = _this;
	_engineStatus = isEngineOn _vehicle;

	//update the db
	_vehicle setVariable["hasBomb", true, true];
	[_vehicle,"gear"] spawn server_updateObject;

	// check if _vehicle's engine is on and if it is blow up the vehicle and exit script
	// if not wait for the engine to turn on and blow up the vehicle
	if(_engineStatus) exitWith{
		_location = getPos _vehicle;
		// sets location of explosion to be above vehicle so that the vehicle does not sponge as much damage
		_newLocation = [(_location select 0), (_location select 1), (_location select 2) + 2];
		_vehicle setDamage 1;
		// heli explosion radius is ~20m
		{	// ejects all crew from vehicle and kills crew in case explosion does not function properly
			_x action ["EJECT", _vehicle];
			_x setDamage 1;
		} forEach crew _vehicle;
		{
			_x setDamage 1;
		} forEach nearestObjects [_vehicle, [], 20];
		"HelicopterExploBig" createVehicle (_newLocation);
	};

	_vehicle addEventHandler ["Engine", {
		_veh = _this select 0;
		_location = getPos _veh;
		// sets location of explosion to be above vehicle so that the vehicle does not sponge as much damage
		_newLocation = [(_location select 0), (_location select 1), (_location select 2) + 2];
		_veh setDamage 1;
		{	// ejects all crew from vehicle and kills crew in case explosion does not function properly
			_x action ["EJECT", _veh];
			_x setDamage 1;
		} forEach crew _veh;
		{
			_x setDamage 1;
		} forEach nearestObjects [_veh, [], 20];
		"HelicopterExploBig" createVehicle (_newLocation);
	}];
};