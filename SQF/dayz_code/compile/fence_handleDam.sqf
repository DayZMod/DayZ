/***********************************************************
ASSIGN DAMAGE TO A UNIT.
Called by "HandleDamage" vehicle Event Handler

- Function fnc_obj_handleDam
- [unit, damage] call fnc_obj_handleDam;
- return : updated damage
************************************************************/
private["_obj","_total","_damage"];

_obj = _this select 0;
//_damage = _this select 1;
_total = (damage _obj);

_damage = switch (1==1) do {
    case ((typeof _obj) in ["WoodenFence_3","WoodenFence_4","WoodenFence_5"]): { 0.5 };
    case ((typeof _obj) in ["WoodenFence_6","WoodenFence_7"]): { 0.35 };
    default { 1 };
};

if (local _obj) then {
	if (_damage > 0) then {
		if (!isServer) then {
			PVDZ_veh_Save = [_obj,"objWallDamage",(_total + _damage)];
			publicVariableServer "PVDZ_veh_Save";
		} else {
			[_obj,"objWallDamage",(_total + _damage)] call server_updateObject;
		};
	};
} else {
	PVDZ_send = [_obj,"objWallDamage",_this];
	publicVariableServer "PVDZ_send";
};

diag_log format["INFO - %1(%3) - %2(%4)",_obj,_damage,(typeof _obj),_total];


// all "HandleDamage event" functions should return the effective damage that the engine will record for that part
0
