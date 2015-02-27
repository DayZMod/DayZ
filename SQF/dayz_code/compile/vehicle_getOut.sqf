//[vehicle, position, unit]
//Quick fix for now.
private ["_vehicle","_position","_unit","_buildables"];

_vehicle = _this select 0;
_position = _this select 1;
_unit = _this select 2;

_buildables = count ((getposATL _vehicle) nearObjects ["DZ_buildables", 2]);

if (_buildables > 0) then {

	switch _position do {
		case ("driver"): { _unit action ["getInDriver", _vehicle]; };
		case ("cargo"): { _unit action ["getInCargo", _vehicle]; };
		case ("commander"): { _unit action ["getInCommmander", _vehicle]; };
		case ("gunner"): { _unit action ["getInGunner", _vehicle]; };
		case ("pilot"): { _unit action ["getInPilot", _vehicle]; };
		case ("turret"): { _unit action ["getInTurret", _vehicle]; };
	};

	//Log to server RPT (could give false pos) - should help admins see who is trying to abuse this.
	PVDZ_sec_atp = [(typeof _vehicle), _position, _unit];
    publicVariableServer "PVDZ_sec_atp";

    cutText ["Unable to exit vehicle too close to buildables objects", "PLAIN DOWN"];

};

diag_log format["%1 - %2 - %3",_vehicle,_position,_unit];