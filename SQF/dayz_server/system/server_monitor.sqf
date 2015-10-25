private ["_date","_year","_month","_day","_hour","_minute","_date1","_hiveResponse","_key","_objectCount","_dir","_point","_i","_action","_dam","_selection","_wantExplosiveParts","_entity","_worldspace","_damage","_booleans","_rawData","_ObjectID","_class","_CharacterID","_inventory","_hitpoints","_fuel","_id","_objectArray","_script","_result","_outcome"];
[]execVM "\z\addons\dayz_server\system\s_fps.sqf"; //server monitor FPS (writes each ~181s diag_fps+181s diag_fpsmin*)
#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

waitUntil{!isNil "BIS_MPF_InitDone"};
waitUntil{initialized}; //means all the functions are now defined
if (!isNil "sm_done") exitWith {}; // prevent server_monitor be called twice (bug during login of the first player)
sm_done = false;

dayz_serverIDMonitor = [];

dayz_versionNo = 		getText(configFile >> "CfgMods" >> "DayZ" >> "version");
dayz_hiveVersionNo = 	getNumber(configFile >> "CfgMods" >> "DayZ" >> "hiveVersion");


diag_log "HIVE: Starting";

//Set the Time
_key = "CHILD:307:";
_result = _key call server_hiveReadWrite;
_outcome = _result select 0;
if(_outcome == "PASS") then {
	_date = _result select 1;

	//date setup
	_year = _date select 0;
	_month = _date select 1;
	_day = _date select 2;
	_hour = _date select 3;
	_minute = _date select 4;

	if(dayz_ForcefullmoonNights) then {
		_date = [2012,8,2,_hour,_minute];
	};
	diag_log [ "TIME SYNC: Local Time set to:", _date, "Fullmoon:",dayz_ForcefullmoonNights, "Date given by HiveExt.dll:", _result select 1];
	setDate _date;
	dayzSetDate = _date;
	publicVariable "dayzSetDate";
};

//Stream in objects
/* STREAM OBJECTS */
//Send the key
_key = format["CHILD:302:%1:",dayZ_instance];
_result = _key call server_hiveReadWrite;

diag_log "HIVE: Request sent";

//Process result
_status = _result select 0;

_myArray = [];
if (_status == "ObjectStreamStart") then {
	_val = _result select 1;
	//Stream Objects
	diag_log ("HIVE: Commence Object Streaming...");
	for "_i" from 1 to _val do {
		_result = _key call server_hiveReadWrite;

		_status = _result select 0;
		_myArray set [count _myArray,_result];
		//diag_log ("HIVE: Loop ");
	};
	diag_log ("HIVE: Streamed " + str(_val) + " objects");
};

_countr = 0;		
{

	//Parse Array
	_countr = _countr + 1;
	
	_action = 		_x select 0; 
	_idKey = 		_x select 1;
	_type =			if ((typeName (_x select 2)) == "STRING") then { _x select 2 };
	_ownerID = 		_x select 3;
	_worldspace = 	if ((typeName (_x select 4)) == "ARRAY") then { _x select 4 } else { [] };
	_inventory =	if ((typeName (_x select 5)) == "ARRAY") then { _x select 5 } else { [] };
	_hitPoints =	if ((typeName (_x select 6)) == "ARRAY") then { _x select 6 } else { [] };
	_fuel =			if ((typeName (_x select 7)) == "SCALAR") then { _x select 7 } else { 0 };
	_damage = 		if ((typeName (_x select 8)) == "SCALAR") then { _x select 8 } else { 0.9 };
	
	//set object to be in maintenance mode
	_maintenanceMode = false;
	_maintenanceModeVars = [];
	
	_dir = floor(random(360));
	_pos = getMarkerpos "respawn_west";	
	_wsDone = false;
	
	if (count _worldspace >= 1 && {(typeName (_worldspace select 0)) == "SCALAR"}) then { 
		_dir = _worldspace select 0;
	};
	if (count _worldspace == 2 && {(typeName (_worldspace select 1)) == "ARRAY"}) then { 
		_i = _worldspace select 1;
		if (count _i == 3 &&
			{(typeName (_i select 0)) == "SCALAR"} && 
			{(typeName (_i select 1)) == "SCALAR"} &&
			{(typeName (_i select 2)) == "SCALAR"}) then {
			_pos = _i;
			_wsDone = true;					
		};
	};
	if (!_wsDone) then {
		//_pos = [,0,30,10,0,2000,0] call BIS_fnc_findSafePos;
		if (count _pos < 3) then { _pos = [_worldspace select 0,_worldspace select 1,0]; };
		diag_log ("MOVED OBJ: " + str(_idKey) + " of class " + _type + " to pos: " + str(_pos));
	};

	if (_damage < 1) then {
		//diag_log format["OBJ: %1 - %2,%3,%4,%5,%6,%7,%8", _idKey,_type,_ownerID,_worldspace,_inventory,_hitPoints,_fuel,_damage];
		
		DayZ_nonCollide = ["TentStorage","TentStorage","TentStorage0","TentStorage1","TentStorage2","TentStorage3","TentStorage4","StashSmall","StashSmall1","StashSmall2","StashSmall3","StashSmall4","StashMedium","StashMedium1","StashMedium2","StashMedium3", "StashMedium4", "DomeTentStorage", "DomeTentStorage0", "DomeTentStorage1", "DomeTentStorage2", "DomeTentStorag3", "DomeTentStorage4", "CamoNet_DZ"];
		DayZ_WoodenFence = ["WoodenFence_1","WoodenFence_2","WoodenFence_3","WoodenFence_4","WoodenFence_5","WoodenFence_6","WoodenFence_7"];
		DayZ_WoodenGates = ["WoodenGate_1","WoodenGate_2","WoodenGate_3","WoodenGate_4"];
		
		if (_type in DayZ_WoodenFence OR _type in DayZ_WoodenGates) then {
			//Use hitpoints for Maintenance system and other systems later.
			{
				if (_x == "Maintenance") then { 
					_maintenanceMode = true;
				};
			} foreach _hitPoints;
			
			//Enable model swap for a damaged model.
			if (_maintenanceMode) then {
				_maintenanceModeVars = [_type,_pos];
				_type = _type + ("_Damaged");
			};
			
			//TODO add remove object and readd old fence (hideobject would be nice to use here :-( )
			//Pending change to new fence models\Layout
		};
		
		//Create it
		_object = createVehicle [_type, _pos, [], 0, if (_type in DayZ_nonCollide) then {"NONE"} else {"CAN_COLLIDE"}];
		
		// prevent immediate hive write when vehicle parts are set up
		_object setVariable ["lastUpdate",diag_ticktime];
		_object setVariable ["ObjectID", _idKey, true];
		dayz_serverIDMonitor set [count dayz_serverIDMonitor,_idKey];
		_object setVariable ["CharacterID", _ownerID, true];
		
		_object setdir _dir;
		_object setDamage _damage;
		
		if (!_wsDone) then {
			[_object,"position",true] call server_updateObject;
		};
		
		if (_type == "Base_Fire_DZ") then { _object spawn base_fireMonitor; };
		
		//Dont add inventory for traps.
		if (!(_object isKindOf "TrapItems") And !(_object iskindof "DZ_buildables")) then {
			_cargo = _inventory;
			clearWeaponCargoGlobal  _object;
			clearMagazineCargoGlobal  _object;
			clearBackpackCargoGlobal  _object;	 
			_config = ["CfgWeapons", "CfgMagazines", "CfgVehicles" ];
			{
				_magItemTypes = _x select 0;
				_magItemQtys = _x select 1;
				_i = _forEachIndex;
				{    
					if ((isClass(configFile >> (_config select _i) >> _x)) &&
						{(getNumber(configFile >> (_config select _i) >> _x >> "stopThis") != 1)}) then {
						if (_forEachIndex < count _magItemQtys) then {
							switch (_i) do {
								case 0: { _object addWeaponCargoGlobal [_x,(_magItemQtys select _forEachIndex)]; }; 
								case 1: { _object addMagazineCargoGlobal [_x,(_magItemQtys select _forEachIndex)]; }; 
								case 2: { _object addBackpackCargoGlobal [_x,(_magItemQtys select _forEachIndex)]; }; 
							};
						};
					};
				} forEach _magItemTypes;
			} forEach _cargo;
		};
		
		if (_object isKindOf "AllVehicles") then {
			{
				_selection = _x select 0;
				_dam = _x select 1;
				if ((_selection in dayZ_explosiveParts and _dam > 0.8) && (!(_object isKindOf "Air"))) then {_dam = 0.8};

				[_object,_selection,_dam] call fnc_veh_setFixServer;
			} forEach _hitpoints;
			
			_object setvelocity [0,0,1];
			_object setFuel _fuel;
			_object call fnc_veh_ResetEH;
			
		} else { 
			if (_type in DayZ_nonCollide) then {
				_pos set [2,0];
				_object addMPEventHandler ["MPKilled",{_this call vehicle_handleServerKilled;}];
			};
			if (_pos select 2 == 0 or 0 == getNumber (configFile >> "CfgVehicles" >> _type >> "canbevertical")) then {
				_object setVectorUp surfaceNormal _pos;
			} else {
				_object setVectorUp [0,0,1];
			};
			_object setPosATL _pos;
			if (_object iskindof "DZ_buildables") then {
				_object addMPEventHandler ["MPKilled",{_this call vehicle_handleServerKilled;}];
			};
			if (_object isKindOf "TrapItems" or _object isKindOf "DZ_buildables") then {
				//Use inventory for owner/clan info & traps armed state
				{
					if (typeName _x != "ARRAY") then {
						// old method
						if (typeName _x == "STRING") then { _object setVariable ["ownerArray", [_x], true]; };
						if (typeName _x == "BOOLEAN") then { _object setVariable ["armed", _x, true]; };
					} else { // new method: array of variables to set
						switch (_x select 0) do {
							case "ownerArray" : { _object setVariable ["ownerArray", _x select 1, true]; };
							case "clanArray" : { _object setVariable ["clanArray", _x select 1, true]; };
							case "armed" : { _object setVariable ["armed", _x select 1, true]; };
							case "padlockCombination" : { _object setVariable ["dayz_padlockCombination",_x select 1,false]; };
							case "BuildLock" : { _object setVariable ["BuildLock",_x select 1,true]; };
						};
					};
				} forEach _inventory;
				
				if (_maintenanceMode) then { _object setVariable ["Maintenance", true, true]; _object setVariable ["MaintenanceVars", _maintenanceModeVars]; };
			};
		};
		
		//Monitor the object
		//_object enableSimulation false;
		dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];
	};
} forEach _myArray;

// # END OF STREAMING #

// Draw the pseudo random seeds
call server_plantSpawner;	

// launch the legacy task scheduler 
[] execFSM "\z\addons\dayz_server\system\server_cleanup.fsm";

// launch the new task scheduler
[] execVM "\z\addons\dayz_server\system\scheduler\sched_init.sqf";

createCenter civilian;
if (isDedicated) then {
	endLoadingScreen;
};
allowConnection = true;
sm_done = true;
publicVariable "sm_done";

// Trap loop
[] spawn {
	private ["_array","_array2","_array3","_script","_armed"];
	_array = str dayz_traps;
	_array2 = str dayz_traps_active;
	_array3 = str dayz_traps_trigger;

	while {1 == 1} do {
		if ((str dayz_traps != _array) || (str dayz_traps_active != _array2) || (str dayz_traps_trigger != _array3)) then {
			_array = str dayz_traps;
			_array2 = str dayz_traps_active;
			_array3 = str dayz_traps_trigger;

			//diag_log "DEBUG: traps";
			//diag_log format["dayz_traps (%2) -> %1", dayz_traps, count dayz_traps];
			//diag_log format["dayz_traps_active (%2) -> %1", dayz_traps_active, count dayz_traps_active];
			//diag_log format["dayz_traps_trigger (%2) -> %1", dayz_traps_trigger, count dayz_traps_trigger];
			//diag_log "DEBUG: end traps";
		};

		{
			if (isNull _x) then {
				dayz_traps = dayz_traps - [_x];
			};

			_script = call compile getText (configFile >> "CfgVehicles" >> typeOf _x >> "script");
			_armed = _x getVariable ["armed", false];

			if (_armed) then {
				if !(_x in dayz_traps_active) then {
					["arm", _x] call _script;
				};
			} else {
				if (_x in dayz_traps_active) then {
					["disarm", _x] call _script;
				};
			};

			sleep 0.01;
		} forEach dayz_traps;
	sleep 1;
	};
};

//Points of interest
[] execVM "\z\addons\dayz_server\compile\server_spawnInfectedCamps.sqf";
[] execVM "\z\addons\dayz_server\compile\server_spawnCarePackages.sqf";
[] execVM "\z\addons\dayz_server\compile\server_spawnCrashSites.sqf";


[] execVM "\z\addons\dayz_server\system\lit_fireplaces.sqf";


"PVDZ_sec_atp" addPublicVariableEventHandler { 
	_x = _this select 1;
	switch (1==1) do {
		case (typeName _x == "STRING") : { // just some logs from the client 
			diag_log _x;
		};
		case (count _x == 2) : { // wrong side
			diag_log Format [ "P1ayer %1 reports possible 'side' hack... Server may be comprised!", (_x select 1) call fa_plr2Str ];
		};
		default { // player hit
			_unit = _x select 0;
			_source = _x select 1;
			if (((!(isNil {_source})) AND {(!(isNull _source))}) AND {((_source isKindOf "CAManBase") AND {(owner _unit != owner _source)})}) then {
				diag_log format ["P1ayer %1 hit by %2 %3 from %4 meters",
					_unit call fa_plr2Str,  _source call fa_plr2Str, _x select 2, _x select 3];
				if (_unit getVariable["processedDeath", 0] == 0) then {
					_unit setVariable [ "attacker", name _source ];
					_unit setVariable [ "noatlf4", diag_ticktime ]; // server-side "not in combat" test, if player is not already dead
				};
			};
		};
	};
};
