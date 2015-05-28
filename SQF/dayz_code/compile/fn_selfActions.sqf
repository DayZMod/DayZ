scriptName "Functions\misc\fn_selfActions.sqf";
/***********************************************************
	ADD ACTIONS FOR SELF
	- Function
	- [] call fnc_usec_selfActions;
************************************************************/
_vehicle = vehicle player;
_inVehicle = (_vehicle != player);
_cursorTarget = cursorTarget;
_primaryWeapon = primaryWeapon player;
_currentWeapon = currentWeapon player;
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
//_canDrink = count nearestObjects [getPosATL player, ["Land_pumpa","Land_water_tank"], 2] > 0;

_nearLight = nearestObject [player,"LitObject"];
_canPickLight = false;

if (!isNull _nearLight) then {
	if (_nearLight distance player < 4) then {
		_canPickLight = isNull (_nearLight getVariable ["owner",objNull]);
	};
};

_canDo = (!r_drag_sqf and !r_player_unconscious and !_onLadder);

//Grab Flare
if (_canPickLight and !dayz_hasLight) then {
	if (s_player_grabflare < 0) then {
		_text = getText (configFile >> "CfgAmmo" >> (typeOf _nearLight) >> "displayName");
		s_player_grabflare = player addAction [format[localize "str_actions_medical_15",_text], "\z\addons\dayz_code\actions\flare_pickup.sqf",_nearLight, 1, false, true, "", ""];
		s_player_removeflare = player addAction [format[localize "str_actions_medical_17",_text], "\z\addons\dayz_code\actions\flare_remove.sqf",_nearLight, 1, false, true, "", ""];
	};
} else {
	player removeAction s_player_grabflare;
	player removeAction s_player_removeflare;
	s_player_grabflare = -1;
	s_player_removeflare = -1;
};

if (dayz_onBack != "" && !dayz_onBackActive && !_inVehicle && !_onLadder && !r_player_unconscious) then {
	if (s_player_equip_carry < 0) then {
		_text = getText (configFile >> "CfgWeapons" >> dayz_onBack >> "displayName");
		s_player_equip_carry = player addAction [format[localize "STR_ACTIONS_WEAPON", _text], "\z\addons\dayz_code\actions\player_switchWeapon.sqf", "action", 0.5, false, true];
	};
} else {
	player removeAction s_player_equip_carry;
	s_player_equip_carry = -1;
};

//fishing
if ((_currentWeapon in Dayz_fishingItems) && !dayz_fishingInprogress && !_inVehicle && !dayz_isSwimming) then {
	if (s_player_fishing < 0) then {
		s_player_fishing = player addAction [localize "STR_ACTION_CAST", "\z\addons\dayz_code\actions\player_goFishing.sqf",player, 0.5, false, true];
	};
} else {
	player removeAction s_player_fishing;
	s_player_fishing = -1;
};
if ((_primaryWeapon in Dayz_fishingItems) && !dayz_fishingInprogress && (_inVehicle and (driver _vehicle != player))) then {
	if (s_player_fishing_veh < 0) then {
		s_player_fishing_veh = _vehicle addAction [localize "STR_ACTION_CAST", "\z\addons\dayz_code\actions\player_goFishing.sqf",_vehicle, 0.5, false, true];
	};
} else {
	_vehicle removeAction s_player_fishing_veh;
	s_player_fishing_veh = -1;
};

_canDoThis=false;
if (_canDo and !_inVehicle and !dayz_isSwimming) then {
	{
        _waterHoles = if (typeOf _x == "waterHoleProxy") then {nearestObjects [_x, [], 1];} else {[_x];};
		{
            _w2m = _x worldToModel (getPosATL player);
            _bb = (boundingbox _x) select 1;
            _dir = [player, _x] call BIS_fnc_relativeDirTo; if (_dir > 180) then {_dir = _dir - 360};
            if (((abs _dir < 45) and {(_x distance player < 2.22)})  // wells, kasna, pumpa
            	or {((("" == typeOf _x) and ((_w2m select 2) < 0.05)) and {((abs(_w2m select 0) < (_bb select 0)) and (abs(_w2m select 1) < (_bb select 1)))})}) exitWith { // ponds
				_canDoThis = true;
			};
		} count _waterHoles;
		if (_canDoThis) exitWith {
			if (s_player_Drinkfromhands < 0) then {
				s_player_Drinkfromhands = player addAction [localize "str_player_31_drink", "\z\addons\dayz_code\actions\player_drinkWater.sqf",player, 0.5, false, true];
			};
		};
	} foreach nearestObjects [player, ["waterHoleProxy", "Land_pumpa"], 50];
};
if (!_canDoThis and s_player_Drinkfromhands >= 0) then {
	player removeAction s_player_Drinkfromhands;
	s_player_Drinkfromhands = -1;
};

if (!isNull _cursorTarget and !_inVehicle and (player distance _cursorTarget < 4) and _canDo) then { 
//Has some kind of target
	_isVehicle = _cursorTarget isKindOf "AllVehicles";
	_isBicycle = _cursorTarget isKindOf "Bicycle";
	_isMan = _cursorTarget isKindOf "Man";
	_isAnimal = _cursorTarget isKindOf "Animal";
	_isZombie = _cursorTarget isKindOf "zZombie_base";
	_isDestructable = _cursorTarget isKindOf "BuiltItems";
	//_isTent = _cursorTarget isKindOf "TentStorage";
	//_isStash = _cursorTarget isKindOf "StashSmall";
	//_isMediumStash = _cursorTarget isKindOf "StashMedium";
	_isHarvested = _cursorTarget getVariable["meatHarvested",false];
	_isGenerator = _cursorTarget isKindOf "Generator_DZ";
	_ownerID = _cursorTarget getVariable ["characterID","0"];
	_isVehicletype = typeOf _cursorTarget in ["ATV_US_EP1","ATV_CZ_EP1"];
	_isFuel = false;
	_hasFuel20 = "ItemJerrycan" in magazines player;
	_hasFuel5 = "ItemFuelcan" in magazines player;
	_hasEmptyFuelCan = (("ItemJerrycanEmpty" in magazines player) || ("ItemFuelcanEmpty" in magazines player));
	_hasToolbox = "ItemToolbox" in items player;
	_hasbottleitem = (("ItemWaterbottle" in magazines player) || ("ItemWaterBottleInfected" in magazines player) || ("ItemWaterBottleSafe" in magazines player));
	_isAlive = alive _cursorTarget;
	_canmove = canmove _cursorTarget;
	_text = getText (configFile >> "CfgVehicles" >> typeOf _cursorTarget >> "displayName");
	_isPlant = typeOf _cursorTarget in Dayz_plants;
	_istypeTent = (_cursorTarget isKindOf "TentStorage_base") or (_cursorTarget isKindOf "IC_Tent");
	_upgradeItems = ["TentStorage","TentStorage0","TentStorage1","TentStorage2","TentStorage3","StashSmall","StashSmall1","StashSmall2","StashSmall3","StashSmall4","StashMedium","StashMedium1","StashMedium2","StashMedium3","DomeTentStorage","DomeTentStorage0","DomeTentStorage1","DomeTentStorage2","DomeTentStorage3","DomeTentStorage4"];

	_isCampSite = _cursorTarget isKindOf "IC_Fireplace1";

	//fuel tanks
	if (_hasEmptyFuelCan) then {
		//_isFuel = typeOf _cursorTarget in ["Land_Ind_TankSmall","Land_fuel_tank_big","Land_fuel_tank_stairs","Land_wagon_tanker","Land_fuelstation","Land_fuelstation_army"];
		_isFuel = (_cursorTarget isKindOf "Land_Ind_TankSmall") or (_cursorTarget isKindOf "Land_fuel_tank_big") or (_cursorTarget isKindOf "Land_fuel_tank_stairs") or (_cursorTarget isKindOf "Land_wagon_tanker");
	};

	//remove gathered plant if empty 
	if(_isPlant) then {
		_cursorTarget call player_gather;
	};

	//flip vehicle
	if ((_isVehicletype) and !_canmove and _isAlive and (player distance _cursorTarget >= 2) and (count (crew _cursorTarget))== 0 and ((vectorUp _cursorTarget) select 2) < 0.5) then {
		if (s_player_flipveh < 0) then {
			s_player_flipveh = player addAction [format[localize "str_actions_flipveh",_text], "\z\addons\dayz_code\actions\player_flipvehicle.sqf",_cursorTarget, 1, true, true, "", ""];
		};
	} else {
		player removeAction s_player_flipveh;
		s_player_flipveh = -1;
	};
	
	//Allow player to fill Fuel can
	if(_hasEmptyFuelCan and _isFuel and !_isZombie and !_isAnimal and !_isMan and !a_player_jerryfilling) then {
		if (s_player_fillfuel < 0) then {
			s_player_fillfuel = player addAction [localize "str_actions_self_10", "\z\addons\dayz_code\actions\jerry_fill.sqf",[], 1, false, true, "", ""];
		};
	} else {
		player removeAction s_player_fillfuel;
		s_player_fillfuel = -1;
	};
	
	if (damage _cursorTarget < 1) then {
		//Allow player to fill vehicle 20L
		if(_hasFuel20 and !_isZombie and !_isAnimal and !_isMan and (_isVehicle or _isGenerator) and (fuel _cursorTarget < 1) and !a_player_jerryfilling) then {
			if (s_player_fillfuel20 < 0) then {
				s_player_fillfuel20 = player addAction [format[localize "str_actions_medical_10",_text,"20"], "\z\addons\dayz_code\actions\refuel.sqf",["ItemJerrycan"], 0, true, true, "", "'ItemJerrycan' in magazines player"];
			};
		} else {
			player removeAction s_player_fillfuel20;
			s_player_fillfuel20 = -1;
		};

		//Allow player to fill vehicle 5L
		if(_hasFuel5 and !_isZombie and !_isAnimal and !_isMan and (_isVehicle or _isGenerator) and (fuel _cursorTarget < 1) and !a_player_jerryfilling) then {
			if (s_player_fillfuel5 < 0) then {
				s_player_fillfuel5 = player addAction [format[localize "str_actions_medical_10",_text,"5"], "\z\addons\dayz_code\actions\refuel.sqf",["ItemFuelcan"], 0, true, true, "", "'ItemFuelcan' in magazines player"];
			};
		} else {
			player removeAction s_player_fillfuel5;
			s_player_fillfuel5 = -1;
		};
		/*
		//power on Gen
		if (_isGenerator AND (fuel _cursorTarget > 0)) then {
			player action["EngineOn", _cursorTarget];
		};
		*/
		//
		//Allow player to spihon vehicles
		if (_hasEmptyFuelCan and !_isZombie and !_isAnimal and !_isMan and _isVehicle and !_isBicycle and !a_player_jerryfilling and (fuel _cursorTarget > 0)) then {
			if (s_player_siphonfuel < 0) then {
				s_player_siphonfuel = player addAction [format[localize "str_siphon_start"], "\z\addons\dayz_code\actions\siphonFuel.sqf",_cursorTarget, 0, true, true, "", ""];
			};
		} else {
			player removeAction s_player_siphonfuel;
			s_player_siphonfuel = -1;
		};
	} else {
		player removeAction s_player_fillfuel20;
		s_player_fillfuel20 = -1;
		player removeAction s_player_fillfuel5;
		s_player_fillfuel5 = -1;	
		player removeAction s_player_siphonfuel;
		s_player_siphonfuel = -1;
	};
	
	//Harvested
	if (!alive _cursorTarget and _isAnimal and !_isHarvested) then {
		//_hasknife = {_x in ["ItemKnife","ItemKnife5","ItemKnife4","ItemKnife3","ItemKnife2","ItemKnifeBlunt"]} count items player > 0;
		//make sure the player has a knife
		//if (_hasknife) then {
		if (s_player_butcher < 0) then {
			s_player_butcher = player addAction [localize "str_actions_self_04", "\z\addons\dayz_code\actions\gather_meat.sqf",_cursorTarget, 3, true, true, "", ""];
		};
		//} else {
		//	player removeAction s_player_butcher;
		//	s_player_butcher = -1;
		//};
	} else {
		player removeAction s_player_butcher;
		s_player_butcher = -1;
	};
	
	//Fireplace Actions check
	if ((_cursorTarget call isInflamed) or (inflamed _cursorTarget)) then {
		_hasRawMeat = {_x in Dayz_meatraw} count magazines player > 0;
		_hastinitem = {_x in boil_tin_cans} count magazines player > 0;
		
	//Cook Meat	
		if (_hasRawMeat and !a_player_cooking) then {
			if (s_player_cook < 0) then {
				s_player_cook = player addAction [localize "str_actions_self_05", "\z\addons\dayz_code\actions\cook.sqf",_cursorTarget, 3, true, true, "", ""];
			};
		}; 
	//Boil Water
		if (_hastinitem and _hasbottleitem and !a_player_boil) then {
			if (s_player_boil < 0) then {
				s_player_boil = player addAction [localize "str_actions_boilwater", "\z\addons\dayz_code\actions\boil.sqf",_cursorTarget, 3, true, true, "", ""];
			};
		};
	} else {
		if (a_player_cooking) then {
			player removeAction s_player_cook;
			s_player_cook = -1;
		};
		if (a_player_boil) then {
			player removeAction s_player_boil;
			s_player_boil = -1;
		};
	};
	
	if(_cursorTarget == dayz_hasFire) then {
		if ((s_player_fireout < 0) and !(_cursorTarget call isInflamed) and (player distance _cursorTarget < 3)) then {
			s_player_fireout = player addAction [localize "str_actions_self_06", "\z\addons\dayz_code\actions\fire_pack.sqf",_cursorTarget, 0, false, true, "",""];
		};
	} else {
		player removeAction s_player_fireout;
		s_player_fireout = -1;
	};

	//remove Own objects
	if (_ownerID == dayz_characterID) then {
		if(_isDestructable and _hasToolbox) then {
			if (s_player_deleteBuild < 0) then {
				s_player_deleteBuild = player addAction [format[localize "str_actions_delete",_text], "\z\addons\dayz_code\actions\remove.sqf",_cursorTarget, 1, true, true, "", ""];
			};
		} else {
			player removeAction s_player_deleteBuild;
			s_player_deleteBuild = -1;
		};
		
		//upgrade items
		if (typeOf _cursorTarget in _upgradeItems) then {
			if (s_player_upgradestroage < 0) then {
				if (isText (configFile >> "CfgVehicles" >> (typeof _cursorTarget) >> "Upgrade" >> "create")) then {
					_displayName = getText (configFile >> "CfgVehicles" >> (typeOf _cursorTarget) >> "displayName");
					s_player_upgradestroage = player addAction [format[localize "str_upgrade",_displayName], "\z\addons\dayz_code\actions\object_upgradeStorage.sqf",_cursorTarget, 0, false, true, "",""];
				};
			};
		} else {
			player removeAction s_player_upgradestroage;
			s_player_upgradestroage = -1
		};
		if (_istypeTent) then {
			if (_ownerID == dayz_characterID) then {
				//Packing my tent
				if (s_player_packtent < 0) then {
					s_player_packtent = player addAction [localize "str_actions_self_07", "\z\addons\dayz_code\actions\tent_pack.sqf",_cursorTarget, 0, false, true, "",""];
				};
				//sleep
				if (s_player_sleep < 0) then {
					s_player_sleep = player addAction [localize "str_actions_self_sleep", "\z\addons\dayz_code\actions\player_sleep.sqf",_cursorTarget, 0, false, true, "",""];
				};
			};
		} else {
			player removeAction s_player_packtent;
			s_player_packtent = -1;
			player removeAction s_player_sleep;
			s_player_sleep = -1;
		};
	} else {
		player removeAction s_player_deleteBuild;
		s_player_deleteBuild = -1;
		player removeAction s_player_upgradestroage;
		s_player_upgradestroage = -1;
		player removeAction s_player_packtent;
		s_player_packtent = -1;
		player removeAction s_player_sleep;
		s_player_sleep = -1;
	};
	//other tents
	if (_istypeTent) then {
		//destory tents
		//Located in variables Dayz_Ignators = ["ItemMatchbox","Item5Matchbox","Item4Matchbox","Item3Matchbox","Item2Matchbox","Item1Matchbox"];
		_hasIgnators = {_x in Dayz_Ignators} count items player > 0;
		if ((_hasFuel20 or _hasFuel5) AND (_hasIgnators)) then {
			if (s_player_destorytent < 0) then {
				s_player_destorytent = player addAction [localize "str_actions_self_destorytent", "\z\addons\dayz_code\actions\player_destroyTent.sqf",_cursorTarget, 0, false, true, "",""];
			};
		} else {
			player removeAction s_player_destorytent;
			s_player_destorytent = -1;
		};
		
		if (typeOf _cursorTarget in ["IC_DomeTent","IC_Tent"]) then {
			if (s_player_packtentinfected < 0) then {
				s_player_packtentinfected = player addAction [localize "str_actions_self_07", "\z\addons\dayz_code\actions\tent_pack.sqf",_cursorTarget, 0, false, true, "",""];
			};
		} else {
			player removeAction s_player_packtentinfected;
			s_player_packtentinfected = -1;
		};
	};
					
	//Study Body
	if (_isMan and !_isAlive and !_isZombie and !_isAnimal) then {
		if (s_player_studybody < 0) then {
			s_player_studybody = player addAction [localize "str_action_studybody", "\z\addons\dayz_code\actions\study_body.sqf",_cursorTarget, 0, false, true, "",""];
		};
	} else {
		player removeAction s_player_studybody;
		s_player_studybody = -1;
	};
/*	
	//Carbomb
	_hasCarBomb = "ItemCarBomb" in magazines player;
	if (((cursorTarget isKindOf "Car") || (cursorTarget isKindOf "Air") || (cursorTarget isKindOf "Motorcycle")) and _hasCarBomb) then {
		if (s_player_attach_bomb < 0) then {
			s_player_attach_bomb = player addAction [localize "str_bombAttach", "\z\addons\dayz_code\actions\player_attach_bomb.sqf",cursorTarget, 3, true, true, "", ""];
		};
	} else {
			player removeAction s_player_attach_bomb;
			s_player_attach_bomb = -1;
	};
*/	
	//Repairing Vehicles
	if ((dayz_myCursorTarget != _cursorTarget) and _isVehicle and !_isMan and _hasToolbox and (damage _cursorTarget < 1)) then {		
		if (s_player_repair_crtl < 0) then {
			dayz_myCursorTarget = _cursorTarget;
			_menu = dayz_myCursorTarget addAction [localize "str_actions_rapairveh", "\z\addons\dayz_code\actions\repair_vehicle.sqf",_cursorTarget, 0, true, false, "",""];
			_menu1 = dayz_myCursorTarget addAction [localize "str_actions_salvageveh", "\z\addons\dayz_code\actions\salvage_vehicle.sqf",_cursorTarget, 0, true, false, "",""];
			s_player_repairActions set [count s_player_repairActions,_menu];
			s_player_repairActions set [count s_player_repairActions,_menu1];
			s_player_repair_crtl = 1;
		} else {
			{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;
			s_player_repairActions = [];
			s_player_repair_crtl = -1;
		};
	};
	
	// House locking and unlocking
	_isHouse = (typeOf cursorTarget) in ["SurvivorWorkshopAStage5", "SurvivorWorkshopBStage5", "SurvivorWorkshopCStage5"];
	_isGate = (typeOf cursorTarget) in ["WoodenGate_1","WoodenGate_2","WoodenGate_3","WoodenGate_4"];

	//Only the owners can lock the gates
	_isLockableGate = (typeOf cursorTarget) in ["WoodenGate_2","WoodenGate_3","WoodenGate_4"];
	_isUnlocked = cursorTarget getVariable ["isOpen","0"] == "1";

	//Allow the gates to be opened when not locked by anyone
	_isOpen = ((cursorTarget animationPhase "DoorL") == 1) || ((cursorTarget animationPhase "DoorR") == 1);
	_isClosed = ((cursorTarget animationPhase "DoorL") == 0) || ((cursorTarget animationPhase "DoorR") == 0);
	
	//[["ownerArray",["PID"]]]
	_ownerArray = _cursorTarget getVariable ["ownerArray",["0"]];
	_ownerPID = (_ownerArray select 0);
	
	// open Gate
	if (_isGate and _isClosed and _isUnlocked and _canDo) then {
		if (s_player_openGate < 0) then {
			s_player_openGate = player addAction ["Open Gate", "\z\addons\dayz_code\actions\player_operate.sqf",[cursorTarget,"Open"], 1, true, true, "", ""];
		}
	} else {
		player removeAction s_player_openGate;
		s_player_openGate = -1;
	};
	// Close Gate
	if (_isGate and _isOpen and _isUnlocked and _canDo) then {
		if (s_player_CloseGate < 0) then {
			s_player_CloseGate = player addAction ["Close Gate", "\z\addons\dayz_code\actions\player_operate.sqf",[cursorTarget,"Close"], 1, true, true, "", ""];
		}
	} else {
		player removeAction s_player_CloseGate;
		s_player_CloseGate = -1;
	};
	// Set
	if ((_isHouse or _isLockableGate) and (_ownerPID == (getPlayerUID player)) and !_isUnlocked and _isClosed and _canDo) then {
		if (s_player_setCode < 0) then {
			s_player_setCode = player addAction ["Set Lock Code", "\z\addons\dayz_code\actions\player_operate.sqf",[cursorTarget,"Set"], 1, true, true, "", ""];
		}
	} else {
		player removeAction s_player_setCode;
		s_player_setCode = -1;
	};
	// Unlock Gate/House
	if ((_isHouse or _isLockableGate) and !_isUnlocked and _isClosed and _canDo) then {
		if (s_player_unlockhouse < 0) then {
			s_player_unlockhouse = player addAction ["Unlock Gate", "\z\addons\dayz_code\actions\player_operate.sqf",[cursorTarget,"Unlock"], 1, true, true, "", ""];
		}
	} else {
		player removeAction s_player_unlockhouse;
		s_player_unlockhouse = -1;
	};
	// Lock Gate/House
	if ((_isHouse or _isLockableGate) and _isUnlocked and _isClosed and _canDo) then {
		if (s_player_lockhouse < 0) then {
			s_player_lockhouse = player addAction ["Lock Gate", "\z\addons\dayz_code\actions\player_operate.sqf",[cursorTarget,"Lock"], 1, true, true, "", ""];
		};
	} else {
		player removeAction s_player_lockhouse;
		s_player_lockhouse = -1;
	};
	//Break In
	if ((_isHouse or _isLockableGate) and (_ownerPID != (getPlayerUID player)) and !_isUnlocked and _canDo) then {
		if (s_player_breakinhouse < 0) then {
			s_player_breakinhouse = player addAction ["Break In", "\z\addons\dayz_code\actions\player_breakin.sqf",cursorTarget, 1, true, true, "", ""];
		}
	} else {
		player removeAction s_player_breakinhouse;
		s_player_breakinhouse = -1;
	};
	
	
} else {
	//Engineering
	{dayz_myCursorTarget removeAction _x} count s_player_repairActions;s_player_repairActions = [];
	player removeAction s_player_repair_crtl;
	s_player_repair_crtl = -1;
	dayz_myCursorTarget = objNull;
	//Others
	//player removeAction s_player_forceSave;
	//s_player_forceSave = -1;
	player removeAction s_player_flipveh;
	s_player_flipveh = -1;
	player removeAction s_player_sleep;
	s_player_sleep = -1;
	player removeAction s_player_deleteBuild;
	s_player_deleteBuild = -1;
	player removeAction s_player_butcher;
	s_player_butcher = -1;
	player removeAction s_player_cook;
	s_player_cook = -1;
	player removeAction s_player_boil;
	s_player_boil = -1;
	player removeAction s_player_fireout;
	s_player_fireout = -1;
	player removeAction s_player_packtent;
	s_player_packtent = -1;
	player removeAction s_player_packtentinfected;
	s_player_packtentinfected = -1;
	player removeAction s_player_fillfuel;
	s_player_fillfuel = -1;
	player removeAction s_player_studybody;
	s_player_studybody = -1;
	//fuel
	player removeAction s_player_fillfuel20;
	s_player_fillfuel20 = -1;
	player removeAction s_player_fillfuel5;
	s_player_fillfuel5 = -1;
	//Allow player to siphon vehicle fuel
	player removeAction s_player_siphonfuel;
	s_player_siphonfuel = -1;
	//Allow player to gather
	player removeAction s_player_gather;
	s_player_gather = -1;
	player removeAction s_player_destorytent;
	s_player_destorytent = -1;
   // player removeAction s_player_attach_bomb;
  //  s_player_attach_bomb = -1;
	//debug
	//player removeAction s_player_debugCheck;
	//s_player_debugCheck = -1;
	player removeAction s_player_upgradestroage;
	s_player_upgradestroage = -1;
	//Unlock,Lock
	player removeAction s_player_setCode;
	s_player_setCode = -1;
	player removeAction s_player_lockhouse;
	s_player_lockhouse = -1;
	player removeAction s_player_unlockhouse;
	s_player_unlockhouse = -1;
	player removeAction s_player_openGate;
	s_player_openGate = -1;
	player removeAction s_player_CloseGate;
	s_player_CloseGate = -1;
	player removeAction s_player_breakinhouse;
	s_player_breakinhouse = -1;
};

//Monitor
player setVariable ["selfActions", diag_ticktime, false];
