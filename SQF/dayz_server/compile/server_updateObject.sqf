/*
[_object,_type] spawn server_updateObject;
*/
#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

if (!isNil "sm_done") then {
	private ["_object","_type","_objectID","_objectUID","_lastUpdate","_needUpdate","_object_position","_object_inventory","_object_damage","_isNotOk"];
	_object = 	_this select 0;
	_type = 	_this select 1;
	_forced = false;
	_recorddmg = false;

	if (count _this > 2) then {
		_forced = _this select 2;
	};

	_parachuteWest = typeOf _object == "ParachuteWest";
	_isNotOk = false;

	_objectID = "0";
	_objectUID = "0";

	if (!((isNil "_object") OR {(isNull _object)})) then {
		_objectID = _object getVariable ["ObjectID","0"];
		_objectUID = _object getVariable ["ObjectUID","0"];
	};

	if ((typeName _objectID == "SCALAR") || (typeName _objectUID == "SCALAR")) then { 
		
		#ifdef OBJECT_DEBUG
			diag_log(format["Non-string Object: ID %1 UID %2", _objectID, _objectUID]);
		#endif
		
		//force fail
		_objectID = nil;
		_objectUID = nil;
	};


	if (!_parachuteWest) then {
		//diag_log format["Object: %1, ObjectID: %2, ObjectUID: %3",_object,_objectID,_objectUID];


		if (!(_objectID in dayz_serverIDMonitor) AND isNil {_objectUID}) then { 
			//force fail
			_objectID = nil;
			_objectUID = nil;		
		};

		if ((isNil {_objectID}) AND (isNil {_objectUID})) then
		{
			_object_position = getPosATL _object;
			#ifdef OBJECT_DEBUG
				diag_log(format["Object %1 with invalid ID at pos [%2,%3,%4]",
				typeOf _object,
				_object_position select 0,
				_object_position select 1, 
				_object_position select 2]);
			#endif
				_isNotOk = true;
		};

	};

	if (_isNotOk) exitWith { 
			//deleteVehicle _object;
		}; //uncomment to remove

	_lastUpdate = _object getVariable ["lastUpdate",diag_tickTime];
	_needUpdate = _object in needUpdate_objects;

	// TODO ----------------------
	_object_position = {
		private["_position","_worldspace","_fuel","_key"];
		_position = getPosATL _object;
		_worldspace = [
			round(direction _object),
			_position
		];
		_fuel = 0;
		if (_object isKindOf "AllVehicles") then {
			_fuel = fuel _object;
		};
		
		_key = format["CHILD:305:%1:%2:%3:",_objectID,_worldspace,_fuel];
		_key call server_hiveWrite;	

		#ifdef OBJECT_DEBUG
		diag_log ("HIVE: WRITE: "+ str(_key));
		#endif
	};

	_object_inventory = {
		private["_inventory","_previous","_key"];
		if (_object isKindOf "TrapItems") then {
			_inventory = [["armed",_object getVariable ["armed", false]]];
		} else {
			_inventory = [
				getWeaponCargo _object,
				getMagazineCargo _object,
				getBackpackCargo _object
			];
		};
		
		_previous = str(_object getVariable["lastInventory",[]]);
		if (str(_inventory) != _previous) then {
			_object setVariable["lastInventory",_inventory];
			if (_objectID == "0") then {
				_key = format["CHILD:309:%1:%2:",_objectUID,_inventory];
			} else {
				_key = format["CHILD:303:%1:%2:",_objectID,_inventory];
			};
			
			#ifdef OBJECT_DEBUG
				diag_log ("HIVE: WRITE: "+ str(_key));
			#endif
			
			_key call server_hiveWrite;
		};
	};

	_object_damage = {
		//Allow dmg process
		private["_hitpoints","_array","_hit","_selection","_key","_damage", "_allFixed"];
		_hitpoints = _object call vehicle_getHitpoints;
		_damage = damage _object;
		_array = [];
		_allFixed = true;
		{
				_hit = [_object,_x] call object_getHit;
				_selection = getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "HitPoints" >> _x >> "name");
				if (_hit > 0) then {
						_allFixed = false;
						_array set [count _array,[_selection,_hit]];
						//diag_log format ["Section Part: %1, Dmg: %2",_selection,_hit]; 
				} else {
						_array set [count _array,[_selection,0]]; 
				};
				//"_selection" ???  anyway seems not needed
				//_object setHit ["_selection", _hit];
		
		} forEach _hitpoints;
		
		if (_allFixed) then {
				_object setDamage 0;
		};

		if (_forced) then {        
			if (_object in needUpdate_objects) then {
					needUpdate_objects = needUpdate_objects - [_object];
			};
			_recorddmg = true;	       
		} else {                
			if (!(_object in needUpdate_objects)) then {
				//diag_log format["DEBUG: Monitoring: %1",_object];
				needUpdate_objects set [count needUpdate_objects, _object];
				_recorddmg = true;
			};
		};
		
		if (_recorddmg) then {
				if (_objectID == "0") then {
						_key = format["CHILD:306:%1:%2:%3:",_objectUID,_array,_damage];
				} else {
						_key = format["CHILD:306:%1:%2:%3:",_objectID,_array,_damage];
				};
				diag_log ("HIVE: WRITE: "+ str(_key));
				_key call server_hiveWrite;   
		};
	};

	_object_killed = {
		private["_key"];
		_object setDamage 1;
		
		if (_objectID == "0") then {
			//Need to update hive to make a new call too allow UID to be updated for a killed event
			//_key = format["CHILD:306:%1:%2:%3:",_objectUID,[],1];
			_key = format["CHILD:310:%1:",_objectUID];
		} else {
			_key = format["CHILD:306:%1:%2:%3:",_objectID,[],1];
		};
		
		diag_log ("HIVE: WRITE: "+ str(_key));
		_key call server_hiveWrite;   
		
		if ((typeOf _object) in DayZ_removableObjects) then {	
			[_objectID,_objectUID] call server_deleteObj;
		};
	};

	_object_maintenance = {
		private["_ownerArray","_key"];

		_ownerArray = _object getVariable ["ownerArray",[]];

		if (_objectID == "0") then {
			_key = format["CHILD:309:%1:%2:",_objectUID,_ownerArray];
			//Wont work just now.
			_key = format["CHILD:306:%1:%2:%3:",_objectUID,[],0];
		} else {
			_key = format["CHILD:303:%1:%2:",_objectID,_ownerArray];
			_key = format["CHILD:306:%1:%2:%3:",_objectID,[],0];
		};
		
	//	#ifdef OBJECT_DEBUG
			diag_log ("HIVE: WRITE: Maintenance, "+ str(_key));
	//	#endif
		
		_key call server_hiveWrite;
	};


	_object setVariable ["lastUpdate",diag_ticktime,true];
	switch (_type) do {
		case "all": {
			call _object_position;
			call _object_inventory;
			call _object_damage;
		};
		case "position": {
			call _object_position;
		};
		case "gear": {
			call _object_inventory;
		};
		case "maintenance": {
			call _object_maintenance;
		};
		case "damage"; case "repair" : {
			call _object_damage;
		};
		case "killed": {
			call _object_killed;
		};
	};
};