/*
	Spawns objects global. 
	
	Params:
	[[
		["ObjectType1", [position], dir],
		["ObjectType2", [position], dir],
		["ObjectType3", [position], dir]
	],true] call local_spawnObjects;
*/

private ["_blockDamage","_fires","_object","_objects","_type","_globalVar"];

_objects = _this select 0;
_blockDamage = _this select 1;

_fires = [
	"Base_Fire_DZ",
	"flamable_DZ",
	"Land_Camp_Fire_DZ",
	"Land_Campfire",
	"Land_Campfire_burning",
	"Land_Fire",
	"Land_Fire_burning",
	"Land_Fire_DZ",
	"Land_Fire_barrel",
	"Land_Fire_barrel_burning",
	"Misc_TyreHeap"
];

{
	_type = _x select 0;
	_object = _type createVehicle [0,0,0];
	_object setDir (_x select 2);
	_object setPos (_x select 1);
	if (_blockDamage) then {
		_object addEventHandler ["HandleDamage",{0}];
		if !(_type in _fires) then {_object enableSimulation false;};
	};
} forEach _objects;