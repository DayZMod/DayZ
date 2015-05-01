private ["_unit","_blood","_lowBlood","_injured","_inPain","_lastused","_hasTransfusionKit","_animState","_started","_finished","_timer","_i","_isMedic","_isClose","_duration","_rhVal","_bloodBagArrayNeeded","_BBneeded","_bbselect","_bloodBagNeeded","_badBag","_wholeBag","_bagFound","_bagToRemove","_forceClose","_bloodType","_rh","_bloodBagArray","_bbarray_length","_bloodBagWholeNeeded","_haswholebag","_r"];
// bleed.sqf
_unit = (_this select 3) select 0;
_blood = _unit getVariable ["USEC_BloodQty", 0];
_lowBlood = _unit getVariable ["USEC_lowBlood", false];
_injured = _unit getVariable ["USEC_injured", false];
_inPain = _unit getVariable ["USEC_inPain", false];
_lastused = _unit getVariable ["LastTransfusion", time];
_hasTransfusionKit = "transfusionKit" in magazines player;
call gear_ui_init;
closeDialog 0;

_bloodType = _unit getVariable ["blood_type", false];
_rh = _unit getVariable ["rh_factor", false];

_badBag = false;
_wholeBag = false;
_bagFound = false;
_BBneeded = false;
_forceClose = false;
if (!_hasTransfusionKit) exitWith { systemChat (localize "str_info_missingtransfusionkit");	 };

if (_blood <= 4000) then {
	_duration = 3;
	} else {
	_duration = 2;
};

_bloodBagArray = ["bloodBagANEG","bloodBagAPOS","bloodBagBNEG","bloodBagBPOS","bloodBagABNEG","bloodBagABPOS","bloodBagONEG","bloodBagOPOS","wholeBloodBagANEG","wholeBloodBagAPOS","wholeBloodBagBNEG","wholeBloodBagBPOS","wholeBloodBagABNEG","wholeBloodBagABPOS","wholeBloodBagONEG","wholeBloodBagOPOS"];

if (_rh) then {_rhVal = "POS";} else {_rhVal = "NEG";};

switch (_bloodType) do {
	case "A" : {
		if (_rh) then {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagAPOS","bloodBagANEG","bloodBagONEG","bloodBagOPOS"];
		} else {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagANEG","bloodBagONEG"];
		};
	};

	case "B" : {
		if (_rh) then {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagBPOS","bloodBagBNEG","bloodBagONEG","bloodBagOPOS"];
		} else {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagBNEG","bloodBagONEG"];
		};
	};

	case "AB" : {
		if (_rh) then {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagABPOS","bloodBagABNEG","bloodBagANEG","bloodBagAPOS","bloodBagBNEG","bloodBagBPOS","bloodBagONEG","bloodBagOPOS"];
		} else {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagABNEG","bloodBagANEG","bloodBagBNEG","bloodBagONEG"];
		};
	};

	case "O" : {
		if (_rh) then {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagOPOS","bloodBagONEG"];
		} else {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagONEG"];
		};
	};
};

_bbarray_length = (count _bloodBagArrayNeeded) - 1;
for "_q" from 0 to _bbarray_length do {
	_bbselect = _bloodBagArrayNeeded select _q;
	_bloodBagNeeded = _bbselect in magazines player;
		if (_bloodBagNeeded) exitWith {_BBneeded = true;};
};

//No subs for whole blood :(
_bloodBagWholeNeeded = "wholeBloodBag" + _bloodType + _rhVal;
_haswholebag = _bloodBagWholeNeeded in magazines player;

if (!_BBneeded and !_haswholebag) then {
	_badBag = true;
};

//use packed/separated bags first
if (_BBneeded) then {
	_wholeBag = false;
} else {
	if (_haswholebag) then {
		_wholeBag = true;
	};
};

call fnc_usec_medic_removeActions;
r_action = false;

if (vehicle player == player) then {
	//not in a vehicle
	player playActionNow "Medic";
};

r_interrupt = false;
_animState = animationState player;
r_doLoop = true;
_started = false;
_finished = false;
_timer = diag_tickTime;
_i = 0;
_r = 0;

while {r_doLoop and (_i < 12)} do {
	_animState = animationState player;
	_isMedic = ["medic",_animState] call fnc_inString;

	if (_isMedic and !_started) then {
		closeDialog 0;
		diag_log format ["TRANSFUSION: starting blood transfusion (%1 > %2)", name player, name _unit];
		if (_badBag) then {
			for "_r" from 0 to 15 do {
				_bagToRemove = _bloodBagArray select _r;
				if (_bagToRemove in magazines player) exitWith {   //TODO: add separate action menu options so the removed bag isn't random
					_bagFound = true;
					if (_r >= 8) then {
						_wholeBag = true;
					};
				};
			};
		} else {
			if (_wholeBag) then {_bagToRemove = _bloodBagWholeNeeded; } else { _bagToRemove = _bbselect; };
			if (_bagToRemove in magazines player) then {
				_bagFound = true;
			};
		};
		if (!_bagFound) then {_forceClose = true;} else { player removeMagazine _bagToRemove; player removeMagazine "transfusionKit";};
		cutText [localize "str_actions_medical_transfusion_start", "PLAIN DOWN"];
		[player,_unit,"loc",rTITLETEXT,localize "str_actions_medical_transfusion_start","PLAIN DOWN"] call RE;
		_started = true;
	};

	if (_started) then {
		if ((diag_tickTime - _timer) >= 1) then {
			_timer = diag_tickTime;
			//PVCDZ_hlt_Transfuse = [_unit,player,1000];
			//publicVariable "PVCDZ_hlt_Transfuse";
			if (!_wholeBag) then {
				_i = _i + 1;
			} else {
				_i = _i + 3;	//Whole blood only gives 4k
			};
			if (!_badBag) then {
				if (!_forceClose) then {
					if (!_wholeBag) then {
						_randomamount = round(random 60);
						r_player_blood = r_player_blood + 100 + _randomamount;
					} else {
						_randomamount = round(random 200);
						r_player_blood = r_player_blood + 800 + _randomamount;
					};
					
					//PVDZ_send = [_unit,"Transfuse",[_unit,player,1000]];
					//publicVariableServer "PVDZ_send";
				};
			} else {
				if (!_forceClose and (_i >= 12)) then {
					[_unit, _duration] call fnc_usec_damageUnconscious;
				};
			};
		};

		if (!_isMedic) then {
			player playActionNow "Medic";
		};
	};

	_blood = _unit getVariable ["USEC_BloodQty", 0];

	if (((_blood >= r_player_bloodTotal) and !_badBag and _bagFound) or (_i == 12)) then {
		diag_log format ["TRANSFUSION: completed blood transfusion successfully (_i = %1)", _i];
		cutText [localize "str_actions_medical_transfusion_successful", "PLAIN DOWN"];
		[player,_unit,"loc",rTITLETEXT,localize "str_actions_medical_transfusion_successful","PLAIN DOWN"] call RE;
		[player,25] call player_humanityChange;
		r_doLoop = false;
	};

	_isClose = ((player distance _unit) < ((sizeOf typeOf _unit) / 2));

	if (r_interrupt or !_isClose or _forceClose) then {
		diag_log format ["TRANSFUSION: transfusion was interrupted (r_interrupt: %1 | distance: %2 (%3) | _i = %4)", r_interrupt, player distance _unit, _isClose, _i];
		cutText [localize "str_actions_medical_transfusion_interrupted", "PLAIN DOWN"];
		[player,_unit,"loc",rTITLETEXT,localize "str_actions_medical_transfusion_interrupted","PLAIN DOWN"] call RE;
		r_doLoop = false;
	};

	sleep 0.1;
};

r_doLoop = false;

if (r_interrupt) then {
	r_interrupt = false;
	player switchMove "";
	player playActionNow "stop";
};
