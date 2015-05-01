private ["_display","_timeout","_inCombat","_playerCheck","_zedCheck"];
disableSerialization;
waitUntil {
	_display = findDisplay 49;
	!isNull _display;
};
_btnRespawn = _display displayCtrl 1010;
_btnAbort = _display displayCtrl 104;
_btnRespawn ctrlEnable false;
_btnAbort ctrlEnable false;
_btnAbortText = ctrlText _btnAbort;

if (r_fracture_legs) then {_btnRespawn ctrlEnable true;};

dayz_lastCheckSave = time;
//force gear save
if (time - dayz_lastCheckSave > 10) then {
	call player_forceSave;
};

while {(!isNull _display) and !r_player_dead} do {
	_timeout = 30;
	_timeout = player getVariable["combattimeout", 0];
	_inCombat = if (_timeout >= diag_tickTime) then { true } else { false };
	_playerCheck = if ({isPlayer _x} count (player nearEntities ["AllVehicles", 5]) > 1) then { true } else { false };
	_zedCheck = if (count (player nearEntities ["zZombie_Base", 10]) > 0) then { true } else { false };

	Switch true do {
		case (_playerCheck) : {
			_btnAbort ctrlEnable false;
			_btnAbort ctrlSetText format["%1 (in 30)", _btnAbortText];
			cutText [localize "str_abort_playerclose", "PLAIN DOWN"];
		};
		case (_zedCheck) : {
			_btnAbort ctrlEnable false;
			_btnAbort ctrlSetText format["%1 (in 10)", _btnAbortText];
			cutText [localize "str_abort_zedsclose", "PLAIN DOWN"];
		};
		case (_inCombat and !_zedCheck and !_playerCheck) : {
			_btnAbort ctrlEnable false;
			_btnAbort ctrlSetText format["%1 (in %2)", _btnAbortText, ceil (_timeout - diag_tickTime)];
		};
		default {
		_btnAbort ctrlEnable true;
		_btnAbort ctrlSetText _btnAbortText;
		};
	};
	sleep 1;
};

if (r_player_dead) exitWith {_btnAbort ctrlEnable true;};

