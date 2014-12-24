private ["_hasTransfusionKit","_bloodBagArray","_BBAvailable","_withBloodTest","_unit","_blood","_lowBlood","_injured","_inPain","_lastused","_bloodType","_rh","_bloodTestdone","_bloodAmount","_duration","_humanityAwarded","_wi","_bloodBagArrayNeeded","_bloodBagArrayNeededSz","_r","_BBGood","_BBWhole","_BBFound","_BBSelected","_animState","_isMedic","_timer","_started","_startNow","_minStartTime","_i"];

// 24 Dec 2014 (Veltro): Addapted code to work for blood bags and whole blood bags. Removed the use of uninitialized variable '_bbselect'. Rearranged arrays to optimize blood bag selection. No longer treat someone that has an unknown blood type as type O-. Small optimization to humanity points that are awarded (mainly less points in case of treating a healthy person). Improved program flow for better readability. 

// Moved up: pre-conditions, faster processing
_hasTransfusionKit = "transfusionKit" in magazines player;
if (!_hasTransfusionKit) exitWith {};
// Array was rearranged to create a higher chance of success when blood type is unknown
_bloodBagArray = ["ItemBloodbag","bloodBagONEG","bloodBagOPOS","bloodBagANEG","bloodBagAPOS","bloodBagBNEG","bloodBagBPOS","bloodBagABNEG","bloodBagABPOS","wholeBloodBagONEG","wholeBloodBagOPOS","wholeBloodBagANEG","wholeBloodBagAPOS","wholeBloodBagBNEG","wholeBloodBagBPOS","wholeBloodBagABNEG","wholeBloodBagABPOS"];
// General check if the player has a blood bag in his inventory
_BBAvailable = false;
{ if (_x in magazines player) exitWith { _BBAvailable = true; }; } count _bloodBagArray;
if (!_BBAvailable) exitWith {};

//config
_withBloodTest = true;   // Pick blood bag according to blood type from the result of the blood test. Set this variable to false in case blood testing has changed (in other words: when "blood_testdone" is no longer available)
//init
_unit = (_this select 3) select 0;
_blood = _unit getVariable ["USEC_BloodQty", 0];
// _lowBlood = _unit getVariable ["USEC_lowBlood", false];
// _injured = _unit getVariable ["USEC_injured", false];
// _inPain = _unit getVariable ["USEC_inPain", false];
// _lastused = _unit getVariable ["LastTransfusion", time];
_bloodType = _unit getVariable ["blood_type", ""];
_rh = _unit getVariable ["rh_factor", false];
_bloodTestdone = false;
if ( _withBloodTest ) then {
	_bloodTestdone = _unit getVariable ["blood_testdone", false];
};
_bloodAmount = 12000;   // Will be changed to 4000 in case a whole blood bag is used
_duration = if (_blood <= 4000) then { 3 } else { 2 };   // determines duration of unconsciousness
_humanityAwarded = 0 ;   // Added to create a small threshold, see notes later

// Earlier code checked if blood test was done and if that was not the case the person was treated 'as if' the person had O-. This is not desired so it was removed.
_wi = -1;
_bloodBagArrayNeeded = [];
switch (_bloodType) do {
	case "A" : {
		if (_rh) then {
			// Arrays are rearranged to make sure to deplete the least desirable blood bags from inventory first in case blood bag is known
			// Whole blood bags were added to these arrays
			// Do not change the order!
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagAPOS","bloodBagOPOS","bloodBagANEG","bloodBagONEG","wholeBloodBagAPOS","wholeBloodBagOPOS","wholeBloodBagANEG","wholeBloodBagONEG"];
			_wi = 5;   // pointer to first whole blood bag
		} else {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagANEG","bloodBagONEG","wholeBloodBagANEG","wholeBloodBagONEG"];
			_wi = 3;
		};
	};
	case "B" : {
		if (_rh) then {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagBPOS","bloodBagOPOS","bloodBagBNEG","bloodBagONEG","wholeBloodBagBPOS","wholeBloodBagOPOS","wholeBloodBagBNEG","wholeBloodBagONEG"];
            _wi = 5;
		} else {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagBNEG","bloodBagONEG","wholeBloodBagBNEG","wholeBloodBagONEG"];
			_wi = 3;
		};
	};
	case "AB" : {
		if (_rh) then {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagABPOS","bloodBagAPOS","bloodBagBPOS","bloodBagOPOS","bloodBagABNEG","bloodBagANEG","bloodBagBNEG","bloodBagONEG","wholeBloodBagABPOS","wholeBloodBagAPOS","wholeBloodBagBPOS","wholeBloodBagOPOS","wholeBloodBagABNEG","wholeBloodBagANEG","wholeBloodBagBNEG","wholeBloodBagONEG"];
			_wi = 9;
		} else {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagABNEG","bloodBagANEG","bloodBagBNEG","bloodBagONEG","wholeBloodBagABNEG","wholeBloodBagANEG","wholeBloodBagBNEG","wholeBloodBagONEG"];
			_wi = 5;
		};
	};
	case "O" : {
		if (_rh) then {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagOPOS","bloodBagONEG","wholeBloodBagOPOS","wholeBloodBagONEG"];
			_wi = 3;
		} else {
			_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagONEG","wholeBloodBagONEG"];
			_wi = 2;
		};
	};
};
_bloodBagArrayNeededSz = count _bloodBagArrayNeeded;

// Select a blood bag from the inventory of the medic
_r = 0;
_BBGood = false;
_BBWhole = false;
_BBFound = false;
_BBSelected = "";
if ( _withBloodTest and _bloodTestdone ) then {
	for "_r" from 0 to ( _bloodBagArrayNeededSz - 1 ) do {
		_BBSelected = _bloodBagArrayNeeded select _r;
		if (_BBSelected in magazines player) exitWith {   // Leave this as it is. It takes the least important blood bag first, don't forget that a player can influence the choice by putting just the wanted blood bag in the main inventory
			_BBFound = true;
			if (_r >= _wi) then {
				_BBWhole = true;
			};
		};
	};
};
if ( !_BBFound ) {
	for "_r" from 0 to 16 do {
		_BBSelected = _bloodBagArray select _r;
		if (_BBSelected in magazines player) exitWith {   // Leave this as it is. It takes the blood bag with the highest chance of success first, don't forget that a player can influence the choice by putting just the wanted blood bag in the main inventory
			_BBFound = true;
			if (_r >= 9) then {
				_BBWhole = true;
			};
		};
	};
};
// If there was no blood bag in the inventory of the player then there is no point to continue (double check, see pre-conditions)
if (!_BBFound) exitWith {};
// See if the blood bag matches the blood type
if ( _BBSelected in _bloodBagArrayNeeded ) then {
	_BBGood = true;
};
if (_BBWhole) then {
	_bloodAmount =  4000;
};

// Blood bag and transfusion kit are there, good or bad (whole) blood bag doesn't matter, start medic animation

call fnc_usec_medic_removeActions;
r_action = false;

if (vehicle player == player) then {
	//not in a vehicle
	player playActionNow "Medic";
};

_animState = "";
_isMedic = false;
r_doLoop = true;
r_interrupt = false;
_timer = diag_tickTime - 1;   // Added - 1 to make sure that if statement is executed immediately
_started = false;
_startNow = false;
_minStartTime = diag_tickTime + 4;   // Earlier code waited on an animation state, this has been removed from the main program flow by means of a time out
_i = 0;

while {r_doLoop} do {
	sleep 0.1;
	_animState = animationState player;
	_isMedic = ["medic",_animState] call fnc_inString;

    if ((!_startNow) and ((diag_tickTime > _minStartTime) or (_isMedic))) then {
		_startNow = true;
	};
	
	if (!_started and _startNow) then {
		_started = true;

		closeDialog 0;
		diag_log format ["TRANSFUSION: starting blood transfusion (%1 > %2)", name player, name _unit];

		player removeMagazine "transfusionKit";
		player removeMagazine _BBSelected;

		cutText [localize "str_actions_medical_transfusion_start", "PLAIN DOWN"];
		[player,_unit,"loc",rTITLETEXT,format["Transfusion of %1 in progress, remain still...",_bagToRemove],"PLAIN DOWN"] call RE;
		
		sleep 0.5;
	};

	if (_started) then {
		if ((_bloodAmount == 12000) or (_bloodAmount == 4000)) then {
		
			// TO DO: This part of code can't be correct. This part of code might get executed 4 or 12 times in certain cases.
		
			PVDZ_send = [_unit,"Transfuse",[_unit,player,_bloodAmount]];
			publicVariableServer "PVDZ_send";
		};
		if ((diag_tickTime - _timer) >= 1) then {
			_timer = diag_tickTime;
			if (_BBWhole) then {
				_i = _i + 3;   // Whole blood, finish sooner
			} else {
				_i = _i + 1;   // Full blood bag
			};
			if (_BBGood) then {
				_bloodAmount = _bloodAmount - 500;
				if ( _humanityAwarded < 250 ) then {
					_humanityAwarded = _humanityAwarded + 50 ;   // 50 points for 500 blood, ..., 200 points for 4000 blood, 250 points for 4500. Maximum 250. This should be better this way to keep calculus simple and prevent people getting points for giving blood transfusions to healthy players (and less humanity for only very small amounts of blood)
				};
			} else {
				if (_i >= 12) then {
					PVDZ_sendUnconscious = [_unit,_duration];
					publicVariableServer "PVDZ_sendUnconscious";
					diag_log ("Transfusion: "+str(PVDZ_sendUnconscious));
				};
			};
			if (_i >= 12) then {
				_bloodAmount = 0;
			};
			cutText [localize "str_actions_medical_transfusion_start", "PLAIN DOWN"];
			[player,_unit,"loc",rTITLETEXT,format["Transfusion of %1 in progress, remain still...",_bagToRemove],"PLAIN DOWN"] call RE;
		};
		if (!_isMedic) then {
			if (vehicle player == player) then {
				//not in a vehicle
				player playActionNow "Medic";
			};
		};
	};
	
	_blood = _unit getVariable ["USEC_BloodQty", 0];
	
	if (_blood >= r_player_bloodTotal or _bloodAmount == 0) then {
	
		// TO DO: In case player fainted, then the blood bag was not successful of course, so maybe a different message...
	
		diag_log format ["TRANSFUSION: completed blood transfusion successfully (_i = %1)", _i];
		cutText [localize "str_actions_medical_transfusion_successful", "PLAIN DOWN"];
		if (_BBGood) then { [player,_humanityAwarded] call player_humanityChange; };
		r_doLoop = false;
	};

	_isClose = ((player distance _unit) < ((sizeOf typeOf _unit) / 2));

	if (r_interrupt or !_isClose) then {
		diag_log format ["TRANSFUSION: transfusion was interrupted (r_interrupt: %1 | distance: %2 (%3) | _i = %4)", r_interrupt, player distance _unit, _isClose, _i];
		cutText [localize "str_actions_medical_transfusion_interrupted", "PLAIN DOWN"];
		[player,_unit,"loc",rTITLETEXT,localize "str_actions_medical_transfusion_interrupted","PLAIN DOWN"] call RE;
		r_doLoop = false;
	};
};

r_doLoop = false;

if (r_interrupt) then {
	r_interrupt = false;
	player switchMove "";
	player playActionNow "stop";
};
