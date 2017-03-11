private ["_obj","_objectID","_objectUID"];

_obj = _this select 0;
_objectID = _obj getVariable ["ObjectID","0"];
_objectUID = _obj getVariable ["ObjectUID","0"];

if (isServer) then {
	[_objectID,_objectUID] call server_deleteObj;
} else {
	if (count _this == 1) then {
		//remove with animation
		[nil,nil,nil,_obj] execVM "\z\addons\dayz_code\actions\remove.sqf";
	} else {
		//remove with no animation, single use trap triggered
		PVDZ_obj_Destroy = [_objectID,_objectUID];
		publicVariableServer "PVDZ_obj_Destroy";
		deleteVehicle _obj;
	};
};