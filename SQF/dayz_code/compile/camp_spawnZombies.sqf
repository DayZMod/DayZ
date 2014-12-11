private ["_doLoiter","_counter","_position","_agent"];

_campPos = _this select 0;
_amount = _this select 1;
_doLoiter = true;

_campPos = [_campPos select 0,_campPos select 1,0];

_counter = 0;

_campZeds = {local (_x getVariable ["agentObjectCamps",objNull])} count agents;

diag_log format["CampPos: %1, Amount: %2, TotalAgents: %3",_campPos,_amount,_campZeds];

//if (_campZeds >= _amount) exitwith { };

while {_counter < _amount} do {

	if (random 1 < 0.1) then {
	_doLoiter = false;
	};

	//_rndx = floor(random 15);
	//_rndy = floor(random 150);
	//_position = [(_campPos select 0) + _rndx, (_campPos select 1) + _rndy, 0];
	_position =_campPos;

	//sleep 0.001;
	_nearByPlayer = ({isPlayer _x} count (_position nearEntities [["AllVehicles","CAManBase"],15])) > 0;
	
	if (!_nearByPlayer) then {
		_loot = "";
		_array = [];
		_agent = objNull;
		_unitTypes = DayZ_ViralZeds;

		_type = _unitTypes call BIS_fnc_selectRandom;

		_radius = 100;
		_method = "CAN_COLLIDE";
		_agent = createAgent [_type, _position, [], _radius, _method];
		
		//sleep 0.001;
		_agent setDir random 360;
		_agent setvelocity [0,0,1]; // avoid stuck zombies legs
		_agent setPosATL [_position select 0, _position select 1, 1+(_position select 2)]; // avoid stuck zombies legs
		_agent setVariable ["doLoiter",_doLoiter];

		//diag_log format["Camps Spawns: %3, unitTypes: %1, position: %2 ",_unitTypes, _position, _amount];

		_agent setVariable["agentObjectCamps",_agent,true];

		dayz_spawnZombies = dayz_spawnZombies + 1;

		_position = getPosATL _agent;

		_favStance = (
			switch ceil(random(3^0.5)^2) do {
				case 3: {"DOWN"}; // prone
				case 2: {"Middle"}; // Kneel
				default {"UP"} // stand-up
			}
		);
		_agent setUnitPos _favStance;
		
		//Check if point is in water
		if (surfaceIsWater _position) exitwith { Diag_log ("Location is in Water Abort"); };

		if (isNull _agent) exitWith {
			dayz_spawnZombies = dayz_spawnZombies - 1;
			_counter = _counter - 1;
		};

		_myDest = getPosATL _agent;
		_newDest = getPosATL _agent;
		_agent setVariable ["stance", _favStance];
		_agent setVariable ["BaseLocation", _position];
		_agent setVariable ["doLoiter", true]; // true: Z will be wandering, false: stay still
		_agent setVariable ["myDest", _position];
		_agent setVariable ["newDest", _position];
		[_agent, _position] call zombie_loiter;

		//Add some loot
		_loot = "";
		_array = [];
		_rnd = random 1;
		if (_rnd < 0.2) then {
			_lootType = configFile >> "CfgVehicles" >> _type >> "zombieLoot";
			if (isText _lootType) then {
				_array = [];
				{
					_array set [count _array, _x select 0]
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

		//add to counter
		_counter = _counter + 1;
		
		//Disable simulation 
		PVDZ_Server_Simulation = [_agent, false];
		publicVariableServer "PVDZ_Server_Simulation";
		
		//Start behavior
		_id = [_position,_agent] execFSM "\z\AddOns\dayz_code\system\zombie_agent.fsm";
	};
};