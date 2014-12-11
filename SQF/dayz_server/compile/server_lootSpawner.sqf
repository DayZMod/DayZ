private ["_gref","_location","_number","_radius","_delay","_nearby","_position","_nearbycount","_start","_seeded","_type","_config","_canSpawn","_checkLoot","_alreadyspawned","_rndelay","_lootdelay","_stop"];

_location = _this select 0;
_radius = _this select 1;
_gref = _this select 2;

//diag_log(str(_gref));

//diag_log format ["Starting LootSpawner @%1 Radius: %2",_location,_radius];

//_nearby = nearestObjects [_position,["building"],6000];
_nearby = _location nearObjects ["building",_radius];

_nearbycount = count _nearby;
_start = diag_tickTime;
_seeded = 0;
//diag_log format ["Server Loot Spawn Active. Total Buildings: %1",_nearbycount];
{
	_type = typeOf _x;
	_config = configFile >> "CfgBuildingLoot" >> _type;
	_canSpawn = isClass (_config);
	_checkLoot = ((count (getArray (_config >> "lootPos"))) > 0);

	
	//Loot
	if (_canSpawn) then {
		//Make sure we dont spawn too many
		//Baisc loot checks
		if (_checkLoot) then {
			[_x,_gref] call server_buildingLoot;
			_seeded = _seeded + 1;
		};
	};
	//diag_log (str(_x));
	//sleep 0.03;
} forEach _nearby;
_stop = diag_tickTime;

diag_log format ["Server Loot Spawn Finished. TimeTaken: %1. Amount Seeded %2/%3",_stop - _start,_seeded,_nearbycount];