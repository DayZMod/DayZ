private ["_brokein","_isOk","_hasSledgeHammer","_gps","_vars","_hasToolbox","_hasCrowbar","_limit","_proceed","_counter",
"_dis","_sfx","_roll","_animState","_started","_finished","_isMedic","_isGate"];

_target = _this select 3;
_pos = getPos _target;
_isWoodenGate = (typeOf cursorTarget) in ["WoodenGate_2","WoodenGate_3","WoodenGate_4"];
_isMetalGate = (typeOf cursorTarget) in ["MetalGate_2","MetalGate_3","MetalGate_4"];
_limit = 2 + round(random 3);

_hasSledgeHammer = "ItemSledgeHammer" in items player;
_hasCrowbar = "ItemCrowbar" in items player;

if (!_hasSledgeHammer) exitWith {
	//titleText [localize "STR_BLD_BREAKIN_NEED_SLEDGE", "PLAIN DOWN"];
	localize "STR_BLD_BREAKIN_NEED_SLEDGE" call dayz_rollingMessages;
	sleep 1;
};

if (!_hasCrowbar) exitWith {
	//titleText [localize "STR_BLD_BREAKIN_NEED_CROWBAR", "PLAIN DOWN"];
	localize "STR_BLD_BREAKIN_NEED_CROWBAR" call dayz_rollingMessages;
	sleep 1;
};

_isOk = true;
_proceed = false;
_counter = 0;
_brokein = false;

while {_isOk} do {
//Check if we have the tools to start
	_hasSledgeHammer = "ItemSledgeHammer" in items player;
	_hasCrowbar = "ItemCrowbar" in items player;

	if (!_hasSledgeHammer) exitWith {
		_proceed = nil;
		//titleText [localize "STR_BLD_BREAKIN_NEED_SLEDGE", "PLAIN DOWN"];
		localize "STR_BLD_BREAKIN_NEED_SLEDGE" call dayz_rollingMessages;
		sleep 1;
	};

	if (!_hasCrowbar) exitWith {
		_proceed = nil;
		//titleText [localize "STR_BLD_BREAKIN_NEED_CROWBAR", "PLAIN DOWN"];
		localize "STR_BLD_BREAKIN_NEED_CROWBAR" call dayz_rollingMessages;
		sleep 1;
	};
	
//Run animation
	player playActionNow "Medic";
	
//Run SFX	
	_dis=20;
	_sfx = "repair";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;  
	[player,_dis,true,(getPosATL player)] spawn player_alertZombies;
	
//Setup Vars
	r_interrupt = false;
	_animState = animationState player;
	r_doLoop = true;
	_started = false;
	_finished = false;
	
//run animation loop
	while {r_doLoop} do {
		_animState = animationState player;
		_isMedic = ["medic",_animState] call fnc_inString;
		if (_isMedic) then {
			_started = true;
		};
		if (_started and !_isMedic) then {
			r_doLoop = false;
			_finished = true;
		};
		if (r_interrupt) then {
			r_doLoop = false;
			_finished = false;
		};
		sleep 0.1;
	};
	r_doLoop = false;
	
//Interrupt and end
	if(!_finished) exitWith {
		_isOk = false;
		_proceed = false;
	};
	
//Everything happened as it should
	if(_finished) then {
	//Add to Counter
		_counter = _counter + 1;
		
		if (_isMetalGate) then {
			//start chance to gain access.
			if ([0.02] call fn_chance) then {
				_isOk = false;
				_proceed = true;
				_brokein = true;
				_target setVariable ["isOpen", "1", true];
			};
		};
		
		if (_isWoodenGate) then {
			if ([0.04] call fn_chance) then {
				_isOk = false;
				_proceed = true;
				_brokein = true;
				_target setVariable ["isOpen", "1", true];
			};
		};
	};
	
	//Chances to damage tools
	if ([0.30] call fn_chance) then {
		player removeWeapon "ItemSledgeHammer";
		player addWeapon "ItemSledgeHammerBroken";
		//titleText [localize "STR_BLD_BREAKIN_BROKEN_SLEDGE", "PLAIN DOWN"];

		localize "STR_BLD_BREAKIN_BROKEN_SLEDGE" call dayz_rollingMessages;
	};

	if ([0.20] call fn_chance) then {
		player removeWeapon "ItemCrowbar";
		player addWeapon "ItemCrowbarBent";
		//titleText [localize "STR_BLD_BREAKIN_BENT_CROWBAR", "PLAIN DOWN"];
		
		localize "STR_BLD_BREAKIN_BENT_CROWBAR" call dayz_rollingMessages;
	};
	
	if(_counter == _limit) exitWith {
		//stop loop
		_isOk = false;
		//Set Done var
		_proceed = true;
	};
	
	//titleText [format[localize "STR_BLD_BREAKIN", _counter,_limit], "PLAIN DOWN"];
	
	format[localize "STR_BLD_BREAKIN", _counter,_limit] call dayz_rollingMessages;
	sleep 0.03;
};
//Tool issues
if (isnil "_proceed") exitwith {};

//Interrupted for some reason
if (!_proceed) then {
	r_interrupt = false;
	if (vehicle player == player) then {
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
	};
	//titleText [localize "STR_BLD_BREAKIN_CANCELLED", "PLAIN DOWN"];

	localize "STR_BLD_BREAKIN_CANCELLED" call dayz_rollingMessages;
};

// Working-Factor for chopping wood.
["Working",0,[100,15,10,0]] call dayz_NutritionSystem;

//Completed but no success.
if (_proceed and !_brokein) then {
	//titleText [localize "STR_BLD_BREAKIN_COMPLETE_FAIL", "PLAIN DOWN"];

	localize "STR_BLD_BREAKIN_COMPLETE_FAIL" call dayz_rollingMessages;
};

//Completed and successful
if (_proceed and _brokein) then {
	//titleText [localize "STR_BLD_BREAKIN_COMPLETE", "PLAIN DOWN", 0.3];

	localize "STR_BLD_BREAKIN_COMPLETE" call dayz_rollingMessages;
	
	//Open Gate.
	_target animate ["DoorR", 1];
	_target animate ["DoorL", 1];
};