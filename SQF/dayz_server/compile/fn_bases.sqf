/*
       Created exclusively for ArmA2:OA - DayZMod.
       Please request permission to use/alter/distribute from project leader (R4Z0R49).
*/
private ["_b","_amount","_radius","_lootMinRadius","_lootMaxRadius","_objectMinRadius","_objectMaxRadius","_randomObjects","_guaranteedObjects","_randomLoot","_guaranteedLoot","_nextPos","_basePos","_tmpobject","_qty","_baseClass","_centerPos","_placeSearchRadius","_placeMinDistance","_addLoot","_addWrecks","_placeSearchExpr","_small","_medium","_large","_placePrecision","_campList","_time"];

_qty = _this select 0;
_centerPos = getMarkerPos (_this select 1);
_placeSearchRadius = _this select 2;
_placeMinDistance = _this select 3;

// add some loot around the camp
_addLoot = {
private ["_clutter","_index","_lootMaxRadius2","_itemType","_position","_item","_nearby","_basePos","_baseClass","_lootMinRadius","_lootMaxRadius","_randomLoot","_guaranteedLoot","_lootTable","_itemTypes","_weights","_cntWeights","_i","_timeExit"];

	_basePos = _this select 0;
	_baseClass = _this select 1;
	_lootMinRadius = _this select 2;
	_lootMaxRadius = _this select 3;
	_randomLoot = _this select 4;
	_guaranteedLoot = _this select 5;
	_lootMaxRadius2 = _lootMaxRadius + 5;
	
	_nearByTents = nearestObjects [_basePos, ["IC_Tent"],_lootMaxRadius];
	_countnearbytents = count(_nearByTents);
	
	_i = 0;
	{ 
	_i = 0;
		while {(_i < ((round(random _randomLoot)) + _guaranteedLoot))} do { //timeout
			//create loot
			//diag_log (_rndloot);
			_itemTypes = [] + getArray (configFile >> "CfgBuildingLoot" >> "InfectedCamps" >> "lootType");
			_CBLBase = dayz_CBLBase find "InfectedCamps";
			_weights =	dayz_CBLChances select _CBLBase;
			_cntWeights = count _weights;
			_index1 = floor(random _cntWeights);
			_index2 = _weights select _index1;
			_itemType = _itemTypes select _index2;
			
			/*
			_position = [_basePos,_lootMinRadius,_lootMaxRadius,1,0,2000,0,_basePos] call BIS_fnc_findSafePos;
			_position = [_position select 0,_position select 1,0];
			
			_item = [_itemType select 0, _itemType select 1, _position, _lootMaxRadius] call spawn_loot;
			*/
			
			if (_countnearbytents > 0) then {
				_item = _x;
				_iItem = _itemType select 0;
				_iClass = _itemType select 1;
				
				switch (_iClass) do {
					default {
						_item addMagazineCargoGlobal [_iItem,round(random(1) + 1)];
					};
					case "weapon": {
						_item addWeaponCargoGlobal [_iItem,1];
						_mags = [] + getArray (configFile >> "cfgWeapons" >> _iItem >> "magazines");
						if ((count _mags) > 0) then {
							if (!((_iItem) in MeleeWeapons)) then {
								_magQty = round(random 10);
								if (_magQty > 3) then {
									_item addMagazineCargoGlobal [(_mags select 0), (round(random 3) + 1)];
								};
							};
						};
					};
					case "magazine": {
						_item addMagazineCargoGlobal [_iItem,round(random(1) + 1)];
					};
					case "tool": {
						_item addWeaponCargoGlobal [_iItem,round(random(1) + 1)];
					};
					case "backpack": {
						_item addBackpackCargo [_iItem,round(random(1) + 1)];
					}
				};
			};		
			_i = _i + 1;
		};
	} foreach _nearByTents;
	
	diag_log(format["Infected Camps: Loot spawned at '%1' with total loot '%2'", _baseClass,_i]);
};

// add some dead bodies and veh wrecks all around
_addWrecks = {
	private ["_randomObjects","_guaranteedObjects","_position","_basePos","_objectMinRadius","_objectMaxRadius","_Bodys","_randomvehicle","_chance","_DeadBody","_wreck","_z"];
	_basePos = _this select 0;
	_objectMinRadius = _this select 1;
	_objectMaxRadius = _this select 2;
	_randomObjects = _this select 3;
	_guaranteedObjects = _this select 4;
	_z = 0;

    while {_z < ((round(random _randomObjects)) + _guaranteedObjects)} do {
		//_position = [_basePos,_objectMinRadius,_objectMaxRadius,0,0,2000,0,_basePos] call BIS_fnc_findSafePos;
		//_position = [_position select 0,_position select 1,0];
		_position = [_basePos,_objectMinRadius,_objectMaxRadius,5] call fn_selectRandomLocation;
		_Bodys = ["Body1","Body2"] call BIS_fnc_selectRandom;
		_randomvehicle = ["LADAWreck","BMP2Wreck","UralWreck","HMMWVWreck","T72Wreck"] select round(random 4);
		_chance = random 1;
		if (_chance < 0.9) then {
			_DeadBody = createVehicle [_Bodys, _position, [], 0, "CAN_COLLIDE"];
		} else {
			_wreck = createVehicle [_randomvehicle, _position, [], 0, "CAN_COLLIDE"];
		};
		_z = _z + 1;
	};
	diag_log(format["Infected Camps: Wrecks spawned at '%1' with total Bodys '%2'", _baseClass,_z]);
};


_placeSearchExpr = "(5 * forest) + (4 * trees) + (3 * meadow) - (20 * houses) - (30 * sea)";
_small = ["Camp1_Small","Camp2_Small","Camp3_Small"];
_medium = []; // "Camp2_Medium","Camp3_Medium","Camp4_Medium","Camp5_Medium"];
_large = [];
_baseArray = ["Camp1_Small","Camp2_Small","Camp3_Small"]; //use this for selection

_placePrecision = 30;
_amount = 0;
_radius = 0;
_lootMinRadius = 0; 
_lootMaxRadius = 0; 
_objectMinRadius = 0; 
_objectMaxRadius = 0; 
_randomObjects = 0; 
_guaranteedObjects = 0; 
_randomLoot = 0; 
_guaranteedLoot = 0;
_baseClass = "";
_campList = [];
_basePos = [];
_markerPos = getMarkerPos "respawn_west";
_b = _qty * 20;

_time = diag_ticktime;
_tmpobject = "Land_HouseV2_05" createVehicleLocal _markerPos;
while {(_b > 0) && (_qty > 0) && (round(diag_ticktime - _time) < 35)} do {

	_baseClass = _baseArray select round(random ((count _baseArray) - 1));	
	if (_baseClass in _small) then { _amount = 10; _radius = 100; _lootMinRadius = 8; _lootMaxRadius = 13; _objectMinRadius = 10; _objectMaxRadius = 20; _randomObjects = 8; _guaranteedObjects = 4; _randomLoot = 10; _guaranteedLoot = 10; };
	if (_baseClass in _medium) then { _amount = 25; _radius = 150; _lootMinRadius = 13; _lootMaxRadius = 20; _objectMinRadius = 10; _objectMaxRadius = 20; _randomObjects = 10; _guaranteedObjects = 6; _randomLoot = 15; _guaranteedLoot = 10; };
	if (_baseClass in _large) then { _amount = 40; _radius = 200; _lootMinRadius = 20; _lootMaxRadius = 30; _objectMinRadius = 10; _objectMaxRadius = 20; _randomObjects = 12; _guaranteedObjects = 8; _randomLoot = 20; _guaranteedLoot = 10; };
	
	{
		if (_x select 1 > 3) then {
			_basePos = _x select 0;
			if (count _basePos >= 2) then {
				_basePos set [2, 0];
				_nextPos = _basePos findEmptyPosition [0, _placePrecision, "Land_HouseV2_05"];
				if (count _nextPos >= 2) then {
					_nextPos set [2, 0];
					_basePos = _nextPos isFlatEmpty [0, 0, _lootMaxRadius * 0.03, _lootMaxRadius, 0, false, objNull];
					if (count _basePos >= 2) then {
						_basePos set [2, 0];
						if ((0 == count (nearestObjects [_basePos, [], _lootMaxRadius])) AND {(0 == { ((_x select 0) distance _basePos) < _placeMinDistance } count _campList)}) then {
							_campList set [count _campList, [_basePos,_amount,_radius]];
							diag_log(format["%1 found a nice spot at %2 (%3)", __FILE__, _basePos call fa_coor2str,_x select 1]);
							[_basePos, random 360, _baseClass] call spawnComposition;
							[_basePos, _baseClass, _lootMinRadius, _lootMaxRadius, _randomLoot, _guaranteedLoot] call _addLoot;
							[_basePos, _lootMinRadius, _lootMaxRadius, _randomObjects, _guaranteedObjects] call _addWrecks;
							_qty = _qty - 1;
						};
					};
				};
			};
			//sleep 0.01;
		};
	_b = _b - 1;
	} forEach selectBestPlaces [_centerPos, _placeSearchRadius, _placeSearchExpr, _placePrecision, _qty];
	//sleep 1;
};
deleteVehicle _tmpobject;

diag_log(format["%1: found %2 camps spots in %3 sec.", __FILE__, count _campList, round(diag_ticktime - _time)]);

_campList
