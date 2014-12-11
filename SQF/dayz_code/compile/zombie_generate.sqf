private ["_position","_unitTypes","_radius","_method","_agent","_maxlocalspawned"];

_position = _this select 0;
_doLoiter = _this select 1; // wonder around
_unitTypes = _this select 2; // class of wanted models

_wildspawns = false;

if (count _this > 3) then {
	_wildspawns = _this select 3;
};

_maxlocalspawned = round(dayz_spawnZombies);
//Lets check if we need to divide the amount of zeds
if (r_player_divideinvehicle > 0) then {
	_maxlocalspawned = round(dayz_spawnZombies / r_player_divideinvehicle);
};

_maxControlledZombies = round(dayz_maxLocalZombies);

_cantSee = {
	private ["_isok"];

	_isok = true;
	_zPos = +(_this select 0);
	if (count _zPos < 3) exitWith {
		diag_log format["%1::_cantSee illegal pos %2", __FILE__, _zPos];
		false
	};
	_zPos = ATLtoASL _zPos;
	_fov = _this select 1; // players half field of view
	_safeDistance = _this select 2; // minimum distance. closer is wrong
	_farDistance = _this select 3; // distance further we won't check
	_zPos set [2, (_zPos select 2) + 1.7];
	{
		_xasl = getPosASL _x;
		if (_xasl distance _zPos < _farDistance) then {
			if (_xasl distance _zPos < _safeDistance) then {
				_isok = false;
			} else {
				_eye = eyePos _x; // ASL
				_ed = eyeDirection _x;
				_ed = (_ed select 0) atan2 (_ed select 1);
				_deg = [_xasl, _zPos] call BIS_fnc_dirTo;
				_deg = (_deg - _ed + 720) % 360;
				if (_deg > 180) then { _deg = _deg - 360; };
				if ((abs(_deg) < _fov) AND {( // in right angle sector?
						(!(terrainIntersectASL [_zPos, _eye]) // no terrain between?
						AND {(!(lineIntersects [_zPos, _eye]))}) // and no object between?
					)}) then {
					_isok = false;
				};
			};
		};
		if (!_isok) exitWith {false};
	sleep 0.001;
	} forEach playableUnits;

	_isok
};

if ((_maxlocalspawned < _maxControlledZombies) and (dayz_CurrentNearByZombies < dayz_maxNearByZombies) and (dayz_currentGlobalZombies < dayz_maxGlobalZeds)) then {
	
	if (_wildspawns) then {
	
		_position = [_position,150,200] call dayz_RandomLocation;
		//Check if point is in water
		if (surfaceIsWater _position) exitwith { Diag_log ("Location is in Water Abort"); };
		
		//if ([_position, 15, 10, 70] call _cantSee) then {
			_tooClose = {isPlayer _x} count (_position nearEntities ["CAManBase",30]) > 0;
			if (_tooClose) exitwith {
				diag_log ("Zombie_Generate: was too close to player.");
			};
			//Add zeds if unitTypes equals 0
			_unitTypes = []+ getArray (configFile >> "CfgBuildingLoot" >> "Default" >> "zombieClass");

			// lets create an agent
			_type = _unitTypes call BIS_fnc_selectRandom;
			_radius = 5;
			_method = "NONE";
			if (_doLoiter) then {
				_method = "CAN_COLLIDE";
			};
			if (_wildspawns) then {
				_radius = 0;
			};

			_agent = createAgent [_type, _position, [], _radius, _method]; 
			sleep 0.001;

			//add to global counter 
			dayz_spawnZombies = dayz_spawnZombies + 1;
			dayz_CurrentNearByZombies = dayz_CurrentNearByZombies + 1;

			//Add some loot
			_loot = "";
			_array = [];
			_rnd = random 1;
			if (_rnd > 0.3) then {
				_lootType = configFile >> "CfgVehicles" >> _type >> "zombieLoot";
				if (isText _lootType) then {
					_array = [];
					{
						_array set [count _array, _x select 0];
						sleep 0.001;
					} foreach getArray (configFile >> "cfgLoot" >> getText(_lootType));
					if (count _array > 0) then {
						_index = dayz_CLBase find getText(_lootType);
						_weights = dayz_CLChances select _index;
						_loot = _array select (_weights select (floor(random (count _weights))));
						if(!isNil "_array") then {
							_loot_count =	getNumber(configFile >> "CfgMagazines" >> _loot >> "count");
							if(_loot_count>1) then {
								_agent addMagazine [_loot, ceil(random _loot_count)];
							} else {
								_agent addMagazine _loot;
							};
						};
					};
				};
			};

			_agent setVariable["agentObject",_agent];

			if (!isNull _agent) then {
				_agent setDir random 360;
				sleep 0.001;

				_position = getPosATL _agent;

				_favStance = (
					switch ceil(random(3^0.5)^2) do {
						//case 3: {"DOWN"}; // prone
						case 2: {"middle"}; // Kneel "middle"
						default {"Up"}; // stand-up
					}
				);
				_agent setUnitPos _favStance;

				_agent setVariable ["stance", _favStance];
				_agent setVariable ["BaseLocation", _position];
				_agent setVariable ["doLoiter", true]; // true: Z will be wandering, false: stay still
				_agent setVariable ["myDest", _position];
				_agent setVariable ["newDest", _position];
				[_agent, _position] call zombie_loiter;
			};
			
			//Disable simulation 
			PVDZ_Server_Simulation = [_agent, false];
			publicVariableServer "PVDZ_Server_Simulation";
			
			//Start behavior
			_id = [_position,_agent] execFSM "\z\AddOns\dayz_code\system\zombie_agent.fsm";
		//};
	} else {
	
		if ([_position, dayz_cantseefov, 10, dayz_cantseeDist] call _cantSee) then {
			//Check if anyone close
			_tooClose = {isPlayer _x} count (_position nearEntities ["CAManBase",30]) > 0;
			if (_tooClose) exitwith {
				diag_log ("Zombie_Generate: was too close to player.");
			};

			//Add zeds if unitTypes equals 0
			if (count _unitTypes == 0) then {
				_unitTypes = []+ getArray (configFile >> "CfgBuildingLoot" >> "Default" >> "zombieClass");
			};

			// lets create an agent
			_type = _unitTypes call BIS_fnc_selectRandom;
			_radius = 0;
			_method = "NONE";
			if (_doLoiter) then {
				_radius = 40;
				_method = "CAN_COLLIDE";
			};
			
			//Check if point is in water
			if (surfaceIsWater _position) exitwith { Diag_log ("Location is in Water Abort"); };

			_agent = createAgent [_type, _position, [], _radius, _method]; 
			sleep 0.001;
			
			if (_doLoiter) then {
				_agent setPosATL _position;
			};

			//add to global counter 
			dayz_spawnZombies = dayz_spawnZombies + 1;
			dayz_CurrentNearByZombies = dayz_CurrentNearByZombies + 1;

			//Add some loot
			_loot = "";
			_array = [];
			_rnd = random 1;
			if (_rnd > 0.3) then {
				_lootType = configFile >> "CfgVehicles" >> _type >> "zombieLoot";
				if (isText _lootType) then {
					_array = [];
					{
						_array set [count _array, _x select 0];
						sleep 0.001;
					} foreach getArray (configFile >> "cfgLoot" >> getText(_lootType));
					if (count _array > 0) then {
						_index = dayz_CLBase find getText(_lootType);
						_weights = dayz_CLChances select _index;
						_loot = _array select (_weights select (floor(random (count _weights))));
						if(!isNil "_array") then {
							_loot_count =	getNumber(configFile >> "CfgMagazines" >> _loot >> "count");
							if(_loot_count>1) then {
								_agent addMagazine [_loot, ceil(random _loot_count)];
							} else {
								_agent addMagazine _loot;
							};
						};
					};
				};
			};

			//_agent setVariable["agentObject",_agent];

			if (!isNull _agent) then {
				// sometime Z can be seen flying in very high speed while tp. Its altitude is set underground to hide that.
				_agent setDir random 360;
				//_agent setPosATL _position;
				sleep 0.001;

				_position = getPosATL _agent;

				_favStance = (
					switch ceil(random(3^0.5)^2) do {
						//case 3: {"DOWN"}; // prone
						case 2: {"middle"}; // Kneel
						default {"Up"}; // stand-up
					}
				);
				_agent setUnitPos _favStance;

				_agent setVariable ["stance", _favStance];
				_agent setVariable ["BaseLocation", _position];
				_agent setVariable ["doLoiter", _doLoiter]; // true: Z will be wandering, false: stay still
				_agent setVariable ["myDest", _position];
				_agent setVariable ["newDest", _position];
				[_agent, _position] call zombie_loiter;
			};
			//add to monitor
			//dayz_zedMonitor set [count dayz_zedMonitor, _agent];
			
			//Disable simulation 
			PVDZ_Server_Simulation = [_agent, false];
			publicVariableServer "PVDZ_Server_Simulation";
			
			//Start behavior
			_id = [_position,_agent] execFSM "\z\AddOns\dayz_code\system\zombie_agent.fsm";
		};
	};	
};