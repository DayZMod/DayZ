scriptName "Functions\misc\fn_damageActions.sqf";
/***********************************************************
	ADD ACTIONS FOR A CASUALTY
	- Function
	- [] call fnc_usec_damageActions;
************************************************************/
_menClose = cursorTarget;
_hasPatient = alive _menClose;
_vehicle = vehicle player;
_inVehicle = (_vehicle != player);
_isClose = ((player distance _menClose) < ((sizeOf typeOf _menClose) / 2));

if (_inVehicle) then {
	r_player_lastVehicle = _vehicle;
	_assignedRole = assignedVehicleRole player;
	_driver = driver (vehicle player);
	if (str (_assignedRole) != str (r_player_lastSeat)) then {
		call r_player_removeActions2;
	};
	if (!r_player_unconscious && !r_action2) then {
		r_player_lastSeat = _assignedRole;
		if (_vehicle isKindOf "helicopter") then {
			//allow switch to pilot
			if (((_assignedRole select 0) != "driver") and ((!alive _driver) or ((_vehicle emptyPositions "Driver") > 0))) then {
				_action = _vehicle addAction [localize "str_actions_helipilotseat", "\z\addons\dayz_code\actions\veh_seatActions.sqf",["MoveToPilot",_driver], 0, false, true];
				r_player_actions2 set [count r_player_actions2,_action];
				r_action2 = true;
			};
			//allow switch to cargo
			if (((_assignedRole select 0) != "cargo") and ((_vehicle emptyPositions "Cargo") > 0)) then {
				_action = _vehicle addAction [localize "str_actions_helibackseat", "\z\addons\dayz_code\actions\veh_seatActions.sqf",["MoveToCargo",_driver], 0, false, true];
				r_player_actions2 set [count r_player_actions2,_action];
				r_action2 = true;
			};
			//allow switch to gunner
			if (((_assignedRole select 0) != "Turret")  and ((_vehicle emptyPositions "Gunner") > 0)) then {
				_action = _vehicle addAction [localize "str_actions_heligunnerseat", "\z\addons\dayz_code\actions\veh_seatActions.sqf",["MoveToTurret",_driver], 0, false, true];
				r_player_actions2 set [count r_player_actions2,_action];
				r_action2 = true;
			};
		};
		if (count _assignedRole > 1) then {
			_turret = _assignedRole select 1;
			_weapons = _vehicle weaponsTurret _turret;
			{
				_weaponName = getText (configFile >> "cfgWeapons" >> _x >> "displayName");
				_action = _vehicle addAction [format[localize "str_actions_addammo",_weaponName], "\z\addons\dayz_code\actions\ammo.sqf",[_vehicle,_x,_turret], 0, false, true];
				r_player_actions2 set [count r_player_actions2,_action];
				r_action2 = true;
			} forEach _weapons;
		};
	};
	//Check if patients
	_crew = crew _vehicle;
	if (count _crew > 0) then {
		_unconscious_crew = [];
		{
			if (_x getVariable "NORRN_unconscious") then {
				_unconscious_crew set [(count _unconscious_crew), _x]
			};
		} forEach _crew;
		_patients = (count _unconscious_crew);
		if (_patients > 0) then {
			if (!r_action_unload) then {
				r_action_unload = true;
				_vehType = typeOf _vehicle;
				_action = _vehicle addAction [format[localize "str_actions_medical_14",_vehType], "\z\addons\dayz_code\medical\load\unLoad_act.sqf",[player,_vehicle], 0, false, true];
				r_player_actions set [count r_player_actions,_action];
			};
		} else {
			if (r_action_unload) then {
				call fnc_usec_medic_removeActions;
				r_action_unload = false;
			};
		};
	};
} else {
	call r_player_removeActions2;
	r_player_lastVehicle = objNull;
	r_player_lastSeat = [];
};
	if (!r_drag_sqf and !r_action and !_inVehicle and !r_player_unconscious and (player distance _menClose < 3)) then {
		_unit = cursorTarget;
		player reveal _unit;
		_vehClose = (getPosATL player) nearEntities [["Car","Tank","Helicopter","Plane","StaticWeapon","Ship"],5]; //nearestObjects [player, ["Car","Tank","Helicopter","Plane","StaticWeapon","Ship"], 5];
		_hasVehicle = ({alive _x} count _vehClose > 0);
		_unconscious = _unit getVariable ["NORRN_unconscious", false];
		_lowBlood = _unit getVariable ["USEC_lowBlood", false];
		_injured = _unit getVariable ["USEC_injured", false];
		_hasSepsis = _unit getVariable ["USEC_Sepsis", false];
		_inPain = _unit getVariable ["USEC_inPain", false];
		_legsBroke = _unit getVariable ["hit_legs", 0] >= 1;
		_armsBroke = _unit getVariable ["hit_hands", 0] >= 1;
		_infected = _unit getVariable ["USEC_infected", false];
		_hasBandage = "ItemBandage" in magazines player;
		_hasSepsisBandage = "ItemSepsisBandage" in magazines player;
		_hasEpi = "ItemEpinephrine" in magazines player;
		_hasMorphine = "ItemMorphine" in magazines player;
		_hasSplint = "equip_woodensplint" in magazines player;
		_hasBlood = "ItemBloodbag" in magazines player;
		_hasBloodANEG = "bloodBagANEG" in magazines player;
		_hasBloodAPOS = "bloodBagAPOS" in magazines player;
		_hasBloodBNEG = "bloodBagBNEG" in magazines player;
		_hasBloodBPOS = "bloodBagBPOS" in magazines player;
		_hasBloodABNEG = "bloodBagABNEG" in magazines player;
		_hasBloodABPOS = "bloodBagABPOS" in magazines player;
		_hasBloodONEG = "bloodBagONEG" in magazines player;
		_hasBloodOPOS = "bloodBagOPOS" in magazines player;
		_hasAntibiotics = "ItemAntibiotic" in magazines player;
		_hasPainkillers = "ItemPainkiller" in magazines player;
        _hasEmptyBag = "emptyBloodBag" in magazines player;
        _hasTranfusionKit = "transfusionKit" in magazines player;
		_hasTester = "bloodTester" in magazines player;
		_isAnimal = _menClose isKindOf "Animal";
		_isZombie = _menClose isKindOf "zZombie_base";

		if (_hasPatient) then {
			//Allow player to drag
			if(_unconscious) then {
				r_action = true;
				_action1 = _unit addAction [localize "STR_UI_GEAR", "\z\addons\dayz_code\actions\openGear.sqf",_unit, 0, true, true];
				_action2 = _unit addAction [localize "str_actions_medical_01", "\z\addons\dayz_code\medical\drag.sqf",_unit, 0, true, true];
				_action3 = _unit addAction [localize "str_actions_medical_02", "\z\addons\dayz_code\medical\pulse.sqf",_unit, 0, true, true];

				r_player_actions set [count r_player_actions, _action1];
				r_player_actions set [count r_player_actions, _action2];
				r_player_actions set [count r_player_actions, _action3];
			};
			//Load Vehicle
			if (_hasVehicle and _unconscious) then {
				_y = 0;
				r_action = true;
				_unit = _unit;
				_vehicle = (_vehClose select _y);
				while{((!alive _vehicle) and (_y < (count _vehClose)))} do {
					_y = _y + 1;
					_vehicle = (_vehClose select _y);
					_vehType = getText (configFile >> "CfgVehicles" >> typeOf _unit >> "displayName");
					sleep 0.001;
				};
				_action = _unit addAction [format[localize "str_actions_medical_03",_vehType], "\z\addons\dayz_code\medical\load\load_act.sqf",[player,_vehicle,_unit], 0, true, true];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to bandage
			if(_injured and _hasBandage) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_04", "\z\addons\dayz_code\medical\bandage.sqf",[_unit,"ItemBandage"], 0, true, true, "", "'ItemBandage' in magazines player"];
				r_player_actions set [count r_player_actions,_action];
			};
			//Sepsis
			if(_hasSepsis and _hasSepsisBandage) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_04", "\z\addons\dayz_code\medical\bandage.sqf",[_unit,"ItemSepsisBandage"], 0, true, true, "", "'ItemBandage' in magazines player"];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to give Epinephrine
			if(_unconscious and _hasEpi) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_05", "\z\addons\dayz_code\medical\epinephrine.sqf",[_unit], 0, true, true];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to give Morphine
			if((_legsBroke or _armsBroke) and _hasMorphine) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_06", "\z\addons\dayz_code\medical\brokeBones.sqf",[_unit,"ItemMorphine"], 0, true, true, "", "'ItemMorphine' in magazines player"];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to give equip_woodensplint
			if((_legsBroke or _armsBroke) and _hasSplint) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_06", "\z\addons\dayz_code\medical\brokeBones.sqf",[_unit,"equip_woodensplint"], 0, true, true, "", "'equip_woodensplint' in magazines player"];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to give Painkillers
			if(_inPain and _hasPainkillers) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_07", "\z\addons\dayz_code\medical\painkiller.sqf",[_unit], 0, true, true, "", "'ItemPainkiller' in magazines player"];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to transfuse blood
			if(_lowBlood and _hasTranfusionKit and (_hasBlood or _hasBloodANEG or _hasBloodAPOS or _hasBloodBNEG or _hasBloodBPOS or _hasBloodABNEG or _hasBloodABPOS or _hasBloodONEG or _hasBloodOPOS)) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_08", "\z\addons\dayz_code\medical\transfusion.sqf",[_unit], 0, true, true];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to give antibiotics
			if (_infected and _hasAntibiotics) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_give_antibiotics", "\z\addons\dayz_code\medical\antibiotics.sqf",[_unit], 0, true, true, "", "'ItemAntibiotic' in magazines player"];
				r_player_actions set [count r_player_actions, _action];
			};
			if (r_action) then {
				r_action_targets set [(count r_action_targets), _unit];
			};
			if (r_action_unload) then {
				r_action_unload = false;
				call fnc_usec_medic_removeActions;
			};
		} else {	};
	};

//Remove Actions
if ((!_isClose or !_hasPatient) and r_action) then {
	call fnc_usec_medic_removeActions;
	r_action = false;
};

//Monitor
player setVariable ["damageActions", diag_ticktime, false];