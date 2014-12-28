private ["_hasTransfusionKit","_bloodBagArray","_BBAvailable","_withBloodTest","_withWholeBlood","_unit","_blood","_lowBlood","_injured","_inPain","_lastused","_bloodType","_rh","_bloodTestdone","_bloodAmount","_duration","_humanityAwarded","_wi","_bloodBagArrayNeeded","_bloodBagArrayNeededSz","_r","_BBGood","_BBWhole","_BBFound","_BBSelected","_animState","_isMedic","_timer","_started", "_sentRequest","_startNow","_minStartTime","_i","_isClose"];

// 24 Dec 2014 (Veltro): Addapted code to work for blood bags and whole blood bags. Removed the use of uninitialized variable '_bbselect'. Rearranged arrays to optimize blood bag selection. No longer treat someone that has an unknown blood type as type O-. Small optimization to humanity points that are awarded (mainly less points in case of treating a healthy person). Improved program flow for better readability.
// 28 Dec 2014 (Veltro): Added changes from development branch. Added _withWholeBlood config parameter to turn off whole blood bag. See notes below.

// Moved up: pre-conditions, faster processing
//Does the player have a transfusionKit
_hasTransfusionKit = "transfusionKit" in magazines player;
//End if the player does not have a transfusion kit
if (!_hasTransfusionKit) exitWith { cutText [localize "str_actions_medical_transfusion_failed_transfusionkit", "PLAIN DOWN"]; };
// Array was rearranged to create a higher chance of success when blood type is unknown
_bloodBagArray = ["ItemBloodbag","bloodBagONEG","bloodBagOPOS","bloodBagANEG","bloodBagAPOS","bloodBagBNEG","bloodBagBPOS","bloodBagABNEG","bloodBagABPOS","wholeBloodBagONEG","wholeBloodBagOPOS","wholeBloodBagANEG","wholeBloodBagAPOS","wholeBloodBagBNEG","wholeBloodBagBPOS","wholeBloodBagABNEG","wholeBloodBagABPOS"];
// General check if the player has a blood bag in his inventory
_BBAvailable = false;
{ if (_x in magazines player) exitWith { _BBAvailable = true; }; } count _bloodBagArray;
if (!_BBAvailable) exitWith {};
//Get receving unit
_unit = (_this select 3) select 0;
//Get receving units blood value
_blood = _unit getVariable ["USEC_BloodQty", 0];
if (_blood >= r_player_bloodTotal ) exitWith {};

//config
_withBloodTest = true;   // Pick blood bag according to blood type from the result of the blood test. Set this variable to false in case blood testing has changed (in other words: when "blood_testdone" is no longer available)
_withWholeBlood = false;   // As it stands now, only allow whole blood bag exact match (as in previous versions). Set this variable to true to allow whole blood bag to match according to blood bag matching system.
                           // Please note that the menu options available to the player should reflect these changes, v1.8.3. does not show a menu option to be able to give another player a whole blood bag.

//init
// _lowBlood = _unit getVariable ["USEC_lowBlood", false];
// _injured = _unit getVariable ["USEC_injured", false];
// _inPain = _unit getVariable ["USEC_inPain", false];
// _lastused = _unit getVariable ["LastTransfusion", time];
//Get receving units bloodtype
_bloodType = _unit getVariable ["blood_type", ""];
_rh = _unit getVariable ["rh_factor", false];
//Get the receving units RH type
_bloodTestdone = false;
if ( _withBloodTest ) then {
	_bloodTestdone = _unit getVariable ["blood_testdone", false];
};
_bloodAmount = 12000;   // Will be changed to 4000 in case a whole blood bag is used
//Unconscious timeout for receving unit
_duration = if (_blood <= 4000) then { 3 } else { 2 };
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
			if ( _withWholeBlood ) then {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagAPOS","bloodBagOPOS","bloodBagANEG","bloodBagONEG","wholeBloodBagAPOS","wholeBloodBagOPOS","wholeBloodBagANEG","wholeBloodBagONEG"];
			} else {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagAPOS","bloodBagOPOS","bloodBagANEG","bloodBagONEG","wholeBloodBagAPOS"];
			};
			_wi = 5;   // pointer to first whole blood bag
		} else {
			if ( _withWholeBlood ) then {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagANEG","bloodBagONEG","wholeBloodBagANEG","wholeBloodBagONEG"];
			} else {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagANEG","bloodBagONEG","wholeBloodBagANEG"];
			};
			_wi = 3;
		};
	};
	case "B" : {
		if (_rh) then {
			if ( _withWholeBlood ) then {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagBPOS","bloodBagOPOS","bloodBagBNEG","bloodBagONEG","wholeBloodBagBPOS","wholeBloodBagOPOS","wholeBloodBagBNEG","wholeBloodBagONEG"];
			} else {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagBPOS","bloodBagOPOS","bloodBagBNEG","bloodBagONEG","wholeBloodBagBPOS"];
			};
            _wi = 5;
		} else {
			if ( _withWholeBlood ) then {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagBNEG","bloodBagONEG","wholeBloodBagBNEG","wholeBloodBagONEG"];
			} else {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagBNEG","bloodBagONEG","wholeBloodBagBNEG"];
			};
			_wi = 3;
		};
	};
	case "AB" : {
		if (_rh) then {
			if ( _withWholeBlood ) then {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagABPOS","bloodBagAPOS","bloodBagBPOS","bloodBagOPOS","bloodBagABNEG","bloodBagANEG","bloodBagBNEG","bloodBagONEG","wholeBloodBagABPOS","wholeBloodBagAPOS","wholeBloodBagBPOS","wholeBloodBagOPOS","wholeBloodBagABNEG","wholeBloodBagANEG","wholeBloodBagBNEG","wholeBloodBagONEG"];
			} else {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagABPOS","bloodBagAPOS","bloodBagBPOS","bloodBagOPOS","bloodBagABNEG","bloodBagANEG","bloodBagBNEG","bloodBagONEG","wholeBloodBagABPOS"];
			};
			_wi = 9;
		} else {
			if ( _withWholeBlood ) then {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagABNEG","bloodBagANEG","bloodBagBNEG","bloodBagONEG","wholeBloodBagABNEG","wholeBloodBagANEG","wholeBloodBagBNEG","wholeBloodBagONEG"];
			} else {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagABNEG","bloodBagANEG","bloodBagBNEG","bloodBagONEG","wholeBloodBagABNEG"];
			};
			_wi = 5;
		};
	};
	case "O" : {
		if (_rh) then {
			if ( _withWholeBlood ) then {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagOPOS","bloodBagONEG","wholeBloodBagOPOS","wholeBloodBagONEG"];
			} else {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagOPOS","bloodBagONEG","wholeBloodBagOPOS"];
			};
			_wi = 3;
		} else {
			if ( _withWholeBlood ) then {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagONEG","wholeBloodBagONEG"];
			} else {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagONEG","wholeBloodBagONEG"];
			};
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
_sentRequest = false;
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
		//see Note 1
		//[player,_unit,"loc",rTITLETEXT,format["Transfusion of %1 in progress, remain still...",_BBSelected],"PLAIN DOWN"] call RE;
		
		sleep 0.5;
	};

	if (_started) then {
		if ((_bloodAmount == 12000) or (_bloodAmount == 4000)) then {
			//_sentRequest var stops the pvs running more then once as it's no longer needs too 1.8.4
			if (!_sentRequest) then { 
				PVDZ_send = [_unit,"Transfuse",[_unit,player,_bloodAmount]];
				publicVariableServer "PVDZ_send";
				_sentRequest = true;
			};
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
				if ( _humanityAwarded < 300 ) then {
					_humanityAwarded = _humanityAwarded + 25 ;   // 25 points for 500 blood, ..., 200 points for 4000 blood, 300 points for 6000 blood. Maximum 300 blood. This should be better this way to keep calculus simple and prevent people getting points for giving blood transfusions to healthy players (and less humanity for only very small amounts of blood)
				};
			} else {
				if (_i >= 12) then {
					_bloodAmount = 0;
					PVDZ_sendUnconscious = [_unit,_duration];
					publicVariableServer "PVDZ_sendUnconscious";
					diag_log ("Transfusion: "+str(PVDZ_sendUnconscious));
				};
			};
			if (_i >= 24) then {
				_bloodAmount = 0;
			};
			cutText [localize "str_actions_medical_transfusion_start", "PLAIN DOWN"];
			//see Note 1
			//[player,_unit,"loc",rTITLETEXT,format["Transfusion of %1 in progress, remain still...",_BBSelected],"PLAIN DOWN"] call RE;
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
		//see Note 1
		//[player,_unit,"loc",rTITLETEXT,localize "str_actions_medical_transfusion_successful","PLAIN DOWN"] call RE;
		if (_BBGood and (_humanityAwarded > 0)) then { [player,_humanityAwarded] call player_humanityChange; };
		r_doLoop = false;
	};

	_isClose = ((player distance _unit) < ((sizeOf typeOf _unit) / 2));

	if (r_interrupt or !_isClose) then {
		diag_log format ["TRANSFUSION: transfusion was interrupted (r_interrupt: %1 | distance: %2 (%3) | _i = %4)", r_interrupt, player distance _unit, _isClose, _i];
		cutText [localize "str_actions_medical_transfusion_interrupted", "PLAIN DOWN"];
		//see Note 1
		//[player,_unit,"loc",rTITLETEXT,localize "str_actions_medical_transfusion_interrupted","PLAIN DOWN"] call RE;
		r_doLoop = false;
	};
};

r_doLoop = false;

if (r_interrupt) then {
	r_interrupt = false;
	player switchMove "";
	player playActionNow "stop";
};

/*
	Note 1 - 1.8 system sending way too much info upto 12 times to the server on top of each call RE also being sent upto 12 times. System removed

*/
