private["_position","_veh","_num","_config","_itemType","_itemChance","_weights","_index","_iArray"];

waitUntil{!isNil "BIS_fnc_selectRandom"};
_qty = _this select 0;
_randVehicle = _this select 1;
_randloottable = _this select 2;

_index = 0;
if (isDedicated) then {
	while {_index < _qty} do {
		_position = [getMarkerPos "center",0,5000,20] call fn_selectRandomLocation;

		_randomvehicle = _randVehicle call BIS_fnc_selectRandom;
		_vehicleloottype = _randloottable call BIS_fnc_selectRandom;

		_veh = createVehicle [_randomvehicle,_position, [], 0, "CAN_COLLIDE"];
		dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_veh];
		_veh setVariable ["ObjectID",1,true];

		if (_randomvehicle == "Misc_cargo_cont_net1") then { _num = round(random 3) + 3; };
		if (_randomvehicle == "Misc_cargo_cont_net2") then { _num = round(random 6) + 4; };
		if (_randomvehicle == "Misc_cargo_cont_net3") then { _num = round(random 12) + 5; };

		diag_log("DEBUG: Spawning a " + str (_randomvehicle) + " at " + str(_position) + " with loot type " + str(_vehicleloottype) + " With total loot drops = " + str(_num));

		//waituntil {!isnil "fnc_buildWeightedArray"};

		for "_pkg" from _num to 1 step -1 do {
			_itemTypes = [] + getArray (configFile >> "CfgBuildingLoot" >> _vehicleloottype >> "lootType");
			_CBLBase = dayz_CBLBase find _vehicleloottype;
			_weights = dayz_CBLChances select _CBLBase;
			_cntWeights = count _weights;
			_index1 = floor(random _cntWeights);
			_index2 = _weights select _index1;
			_itemType = _itemTypes select _index2;

			_lootpos = [];
			for [{_y = 0}, {_y < 10 && ((count _lootpos) == 0)}, {_y = _y + 1}] do {
				_lootpos = [_position,10,20,2] call fn_selectRandomLocation; //fn_selectRandomLocation
			};

			if ((count _lootpos) >= 2) then {
				_lootpos set [2,0];
				_item = [_itemType select 0, _itemType select 1, _lootpos, 1] call spawn_loot;
				_item setVariable ["permaLoot",true];
				
				switch true do {
					case (dayz_spawncarepkgs_clutterCutter == 1): { // shift loot upward to 5cm
						_lootpos set [2,0.05];
						_item setPosATL _lootpos;
					};
					case (dayz_spawncarepkgs_clutterCutter == 2): { // cutterclutter
						_clutter = createVehicle ["ClutterCutter_small_2_EP1", _lootpos, [], 0, "CAN_COLLIDE"];
						_clutter setPos _lootpos;
					};
					case (dayz_spawncarepkgs_clutterCutter == 3): { // shift loot upward to 5cm
						createVehicle ["Sign_sphere100cm_EP1", [_lootpos select 0, _lootpos select 1, 0.30], [], 0, "CAN_COLLIDE"];
					};
				 };
				 
				sleep 0.001;
			};
			//diag_log(format["CarePkgs: Loot spawn at '%1 - %3' with loot table '%2'", _randomvehicle, str(_itemType),_lootpos]);
		}; // loot loop
		_index = _index + 1;
	};
};