private ["_type"];
_list = getposATL player nearEntities [["CAAnimalBase"],dayz_animalDistance];

if ((count _list < dayz_maxAnimals) and (dayz_currentGlobalAnimals < dayz_maxGlobalAnimals)) then {
	//Find where animal likes
	_amount = (dayz_maxAnimals - (count _list)) min (dayz_maxGlobalAnimals - dayz_currentGlobalAnimals);
	for "_i" from 0 to _amount do {
		_animalssupported = ["hen","hen","hen","Cow","Sheep","WildBoar","WildBoar","WildBoar","Goat","Rabbit","Rabbit"];
		_type = (_animalssupported select floor(random(count _animalssupported)));
		if (_type == "Cow") then {
			_animalssupported = ["Cow01","Cow02","Cow03","Cow04"];
			_type = (_animalssupported select floor(random(count _animalssupported)));
		};
		_root = configFile >> "CfgVehicles" >> _type;
		_favouritezones = getText ( _root >> "favouritezones");
		//_randrefpoint = [position player, 10, dayz_animalDistance, 1, 0, 50, 0] call BIS_fnc_findSafePos;
		_randrefpoint = getposATL player;
		_PosList = selectbestplaces [_randrefpoint,dayz_animalDistance,_favouritezones,10,5];
		_PosSelect = _PosList select (floor random (count _PosList));
		_Pos = _PosSelect select 0;
		_list = _Pos nearEntities [["CAAnimalBase","Man"],50];


		if (player distance _Pos < dayz_animalDistance and NOT surfaceIsWater _Pos and (count _list <= 1)) then {
			_agent = createAgent [_type, _Pos, [], 0, "FORM"];
			
			//Disable simulation 
			PVDZ_Server_Simulation = [_agent, false];
			publicVariableServer "PVDZ_Server_Simulation";
			
			_agent setpos _Pos;
			_id = [_pos,_agent] execFSM "\z\addons\dayz_code\system\animal_agent.fsm";
		};
		sleep 1;
	};
};