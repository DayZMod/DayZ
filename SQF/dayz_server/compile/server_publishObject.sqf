#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

private ["_type ","_objectUID ","_characterID ","_object","_worldspace","_key", "_ownerArray", "_inventory"];

_characterID =		_this select 0;
_object = 		_this select 1;
_worldspace = 	_this select 2;
_inventory = 		_this select 3;
_type = typeOf _object;

if ([_object, "Server"] call check_publishobject) then {
	//diag_log ("PUBLISH: Attempt " + str(_object));

	_objectUID = _worldspace call dayz_objectUID2;
	_object setVariable [ "ObjectUID", _objectUID, true ];
	// we can't use getVariable because only the object creation is known from the server (position,direction,variables are not sync'ed yet)
	//_characterID = _object getVariable [ "characterID", 0 ];
	//_ownerArray = _object getVariable [ "ownerArray", [] ];
	_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:", dayZ_instance, _type, 0, _characterID, _worldspace, _inventory, [], 0,_objectUID ];

	_key call server_hiveWrite;

	if (_object isKindOf "CamoNet_DZ" || _object isKindOf "DZ_storage_base") then {
		_object addMPEventHandler ["MPKilled",{_this call vehicle_handleServerKilled;}];
	};
	if (_object iskindof "DZ_buildables") then {
		_object addMPEventHandler ["MPKilled",{_this call vehicle_handleServerKilled;}];
	};

	dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

	#ifdef OBJECT_DEBUG
	diag_log ["PUBLISH: Created ",_type,"ObjectUID", _objectUID,"characterID", _characterID, " with variables/inventory:", _inventory ];
	#endif
}
else {
	#ifdef OBJECT_DEBUG
	diag_log ("PUBLISH: *NOT* created " + (_type ) + " (not allowed)");
	#endif
};
