
private ["_guaranteedLoot","_randomizedLoot","_spawnOnStart","_frequency","_variance","_spawnChance","_spawnMarker","_spawnRadius","_spawnFire","_fadeFire","_timeAdjust","_timeToSpawn","_crashModel","_lootTable","_crashName","_debugarea","_crash","_width","_length","_position","_y","_crashAngle","_itemTypes","_index","_weights","_cntWeights","_itemType","_lootpos","_angle","_radius","_item","_clutter","_config","_newHeight"];

_guaranteedLoot = _this select 0;
_randomizedLoot = _this select 1;
_spawnOnStart = _this select 2;
_frequency = _this select 3;
_variance = _this select 4;
_spawnChance = _this select 5;
_spawnMarker = _this select 6;
_spawnRadius = _this select 7;
_spawnFire = _this select 8;
_fadeFire = _this select 9;

diag_log("CRASHSPAWNER: Starting spawn logic for Crash Spawner");

while {1 == 1} do {
	// Allows the variance to act as +/- from the spawn frequency timer
    _timeAdjust = ((round(random(_variance * 2))) - _variance);
	_timeToSpawn = time + _frequency + _timeAdjust;

	//Selecting random crash type
	_crashModel = ["UH1Wreck_DZ","Mi8Wreck_DZ"] call BIS_fnc_selectRandom;

	//selecting loottable
	if (_crashModel == "Mi8Wreck_DZ") then {
		_lootTable = "HeliCrashEAST";
	} else {
		_lootTable = "HeliCrashWEST";
	};

	_crashName = getText (configFile >> "CfgVehicles" >> _crashModel >> "displayName");

	//diag_log(format["CRASHSPAWNER: %1%2 chance to spawn '%3' with loot table '%4' at %5", round(_spawnChance * 100), '%', _crashName, _lootTable, _timeToSpawn]);

	// Apprehensive about using one giant long sleep here given server time variances over the life of the server daemon
	while {(_spawnOnStart <= 0) AND {(time < _timeToSpawn)}} do {
		sleep (_frequency / 4);
	};

	// Percentage roll
	if (random 1 <= _spawnChance) then {
		_debugarea = getMarkerPos "respawn_west";
		_crash = _crashModel createVehicleLocal _debugarea;
		sleep 0.01;
		_width = ((boundingBox _crash) select 0) select 0;
		_length = ((boundingBox _crash) select 0) select 1;

		_position = _debugarea;
		for "_y" from 1 to 10 do {
			_position = [getMarkerPos _spawnMarker,0,_spawnRadius,_length,0,_length*.2,0, [], [_debugarea,_debugarea]] call BIS_fnc_findSafePos;
			switch (true) do {
				case (count _position < 2) : {};
				case (_position distance _debugarea < 1) : { _position = []; };
				case (count nearestObjects [_position, [],  _length*2] > 0) : { _position = []; };
				default {	
					deleteVehicle _crash;
					_position set [2,0];
					_crash = _crashModel createVehicleLocal _position;
					sleep 0.001;
					_position = getPosATL _crash;
					_y = 11; //break;
				};
			};
		};

		deleteVehicle _crash; // delete local vehicle used for get width and length

		if (count _position >= 2) then {
			diag_log format["CRASHSPAWNER: Spawning '%1' with loot table '%2' at %3", _crashName, _lootTable, str(_position)];

			_position set [2,0];
			_crash = createVehicle ["ClutterCutter_small_2_EP1", _position, [], 0, "CAN_COLLIDE"]; // used to get modelToWorld
			_crashAngle = random 360;
			_crash setDir _crashAngle;
			_crash setPos _position;

            for "_x" from ((round(random _randomizedLoot)) + _guaranteedLoot) to 1 step -1  do {
				//create loot
				_itemTypes = [] + getArray (configFile >> "CfgBuildingLoot" >> _lootTable >> "lootType");
				_CBLBase = dayz_CBLBase find _lootTable;
				_weights = dayz_CBLChances select _CBLBase;
				_cntWeights = count _weights;
				_index1 = floor(random _cntWeights);
				_index2 = _weights select _index1;
				_itemType = _itemTypes select _index2;

				_lootpos = [];
				for [{_y = 0}, {_y < 10 && ((count _lootpos) == 0)}, {_y = _y + 1}] do {
					_angle = random 360;
					_radius = 0.9 + random 0.6;
					_lootpos = _crash modelToWorld [_radius*_width*sin(_angle), _radius*_length*cos(_angle), 0];
					_lootpos = _lootpos findEmptyPosition [0,_length/3, "WeaponHolder"];
				};

				if ((count _lootpos) >= 2) then {
					_lootpos set [2,0];
					_item = [_itemType select 0, _itemType select 1, _lootpos, 1] call spawn_loot;
					_item setVariable ["permaLoot",true];
					
					switch true do {
						case (dayz_spawnCrashSite_clutterCutter == 1): { // shift loot upward to 5cm
							_lootpos set [2,0.05];
							_item setPosATL _lootpos;
						};
						case (dayz_spawnCrashSite_clutterCutter == 2): { // cutterclutter
							_clutter = createVehicle ["ClutterCutter_small_2_EP1", _lootpos, [], 0, "CAN_COLLIDE"];
							_clutter setPos _lootpos;
						};
						case (dayz_spawnCrashSite_clutterCutter == 3): { // shift loot upward to 5cm
							createVehicle ["Sign_sphere100cm_EP1", [_lootpos select 0, _lootpos select 1, 0.30], [], 0, "CAN_COLLIDE"];
						};
					 };
					 
					//diag_log(format["CRASHSPAWNER: Loot spawn at '%1 - %3' with loot table '%2'", _crashName, str(_itemType),_lootpos]);
					sleep 0.001;
				};
			}; // loot loop
			
			_crash = createVehicle [_crashModel,_position, [], 0, "CAN_COLLIDE"];
			_crash setDir _crashAngle;

			// Using "custom" wrecks (using the destruction model of a vehicle vs. a prepared wreck model) will result
			// in the model spawning halfway in the ground.  To combat this, an OPTIONAL configuration can be tied to
			// the CfgVehicles class you've created for the custom wreck to define how high above the ground it should
			// spawn.  This is optional.
			_config = configFile >> "CfgVehicles" >> _crashModel >> "heightAdjustment";
			_newHeight = 0;
			if ( isNumber(_config)) then {
				_newHeight = getNumber(_config);
			};

			// Must setPos after a setDir otherwise the wreck won't level itself with the terrain
			_crash setPos [(_position select 0), (_position select 1), _newHeight];

			// I don't think this is needed (you can't get "in" a crash), but it was in the original DayZ Crash logic
			dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_crash];
			_crash setVariable ["ObjectID",1,true];

			if (_spawnFire) then {
				PVDZ_obj_Fire = [_crash,2,time,false,_fadeFire];
				publicVariable "PVDZ_obj_Fire";
				_crash setvariable ["fadeFire",_fadeFire,true];
			};
			_spawnOnStart = _spawnOnStart -1;
		};
	};
	sleep 0.01;
};
