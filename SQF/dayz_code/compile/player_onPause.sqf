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

//force gear save
if (diag_tickTime - dayz_lastSave > 10) then {
	call player_forceSave;
};

while {(!isNull _display) && !r_player_dead} do {
	_timeout = 30;
	_timeout = player getVariable["combattimeout", 0];
	_inCombat = (_timeout >= diag_tickTime);
	_playerCheck = ({isPlayer _x} count (player nearEntities ["AllVehicles",5]) > 1);
	_zedCheck = (count (player nearEntities ["zZombie_Base",10]) > 0);

	switch true do {
		case (_playerCheck) : {
			_btnAbort ctrlEnable false;
			_btnAbort ctrlSetText format["%1 (in 30)", _btnAbortText];
			[localize "str_abort_playerclose",1] call dayz_rollingMessages;
		};
		case (_zedCheck) : {
			_btnAbort ctrlEnable false;
			_btnAbort ctrlSetText format["%1 (in 10)", _btnAbortText];
			[localize "str_abort_zedsclose",1] call dayz_rollingMessages;
		};
		case (_inCombat) : {
			_btnAbort ctrlEnable false;
			_btnAbort ctrlSetText format["%1 (in %2)", _btnAbortText, ceil (_timeout - diag_tickTime)];
			[localize "str_abort_playerincombat",1] call dayz_rollingMessages;
		};
		default {
			_btnAbort ctrlEnable true;
			_btnAbort ctrlSetText _btnAbortText;
		};
	};
	uiSleep 1;
};

if (r_player_dead) then {_btnAbort ctrlEnable true;};