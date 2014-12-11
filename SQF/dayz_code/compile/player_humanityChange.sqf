private ["_object","_change","_wait","_humanity","_model","_isMen","_isMenH","_isMenB","_isWomen","_isWomenH","_isWomenB"];
_object = _this select 0;
_change = _this select 1;
_wait = if (count _this > 2) then { _this select 2 } else { 0 };

if (_object == player) then {
	_humanity = (player getVariable["humanity",0]) + _change;
	player setVariable["humanity",_humanity,true];
	if (_change < 0) then { //non-bandit player can be "punished" in next "_wait" seconds w/o loosing humanity
		if ((_humanity > -2000) and (_wait > 0)) then {
			player setVariable ["freeTarget",true,true];
			player setVariable ["FTcounter",((player getVariable ["FTcounter",0]) + _wait)];
			[_wait] spawn {
				private ["_endtime","_wait"];
				_wait = _this select 0;
				_endTime = diag_tickTime + _wait;
				waitUntil { sleep 1; diag_tickTime > _endTime };
				player setVariable ["FTcounter",((player getVariable ["FTcounter",0]) - _wait)];
				if ((player getVariable ["FTcounter",0]) <= 0) then {
					player setVariable ["FTcounter",0];
					player setVariable ["freeTarget",false,true];
				};
			};
		};
	};

	_model = typeOf player;

	//if model will not be changed by humanity
	if (_model in ["Sniper1_DZ","Soldier1_DZ","Camo1_DZ","Skin_Soldier1_DZ","RusSoldierHeadset_DZ","RusSoldierWinter_DZ","RusSoldierWoodwarrior_DZ","RusCommander_DZ","RusSoldierLight_DZ","HalfGhillie_DZ","RusSpecOps_DZ","RusOfficer_DZ","RusSoldierCasual_DZ","JoggingSuit_DZ","CivWorker_DZ","CivLeatherLeisure_DZ","CivLeatherLeisure2_DZ","CivDoctor_DZ","CivCasualDoctor_DZ","CivPress_DZ","CivCasualCheck_DZ","CivSuit_DZ","CivPressLeather_DZ","CivPilotSuit_DZ","CivPoliceUniform_DZ","CivPriest_DZ","CivLeisureBlue_DZ","CivLeisureGrey_DZ","CivLeisureBrown_DZ","CivRocker1_DZ","CivRocker2_DZ","CivTeacher_DZ","CivRusWoodland_DZ","CivRusWoodland2_DZ","CivCasualCheck2_DZ","CivWorkerOverall_DZ","CivLeisureVest_DZ","CivRedWorkerOverall_DZ","SoldierWoodwarriorCap_DZ","SoldierWoodwarrior_DZ","SoldierWoodwarriorHat_DZ","SoldierCasualShirt_DZ","WoodWarriorIndi_DZ","UNOfficer_DZ","CamoFaceCover_DZ","LeasureKevlar_DZ"]) exitWith{};

	

	_isMen =		_model == "Survivor2_DZ";
	_isMenH =		_model == "Survivor3_DZ";
	_isMenB =		_model == "Bandit1_DZ";
	_isWomen =		_model == "SurvivorW2_DZ";
	_isWomenH =		_model == "SurvivorW3_DZ"; //TODO
	_isWomenB =		_model == "BanditW1_DZ";
	


	// Bandit
	if (_humanity <= -2000) then {
		if (_isMen || _isMenH) then {
			[dayz_playerUID,dayz_characterID,"Bandit1_DZ"] spawn player_humanityMorph;
		};
		if (_isWomen || _isWomenH) then {
			[dayz_playerUID,dayz_characterID,"BanditW1_DZ"] spawn player_humanityMorph;
		};
	};
/*
	// Survivor p.I //proceed [what if hero become "bad"?]  
	if (_humanity > -2000 && _humanity <=0) then {
		if (_isMenH) then {
			[dayz_playerUID,dayz_characterID,"Survivor2_DZ"] spawn player_humanityMorph;
		};
		if (_isWomenH) then {
			[dayz_playerUID,dayz_characterID,"SurvivorW2_DZ"] spawn player_humanityMorph;
		};
	};
	// Survivor p.II //proceed [time to be "normal"]
	if (_humanity > 0 && _humanity <= 5000) then {
*/
	//Survivor
	if (_humanity > -2000 && _humanity <= 5000) then {
		if (_isMenH || _isMenB) then {
			[dayz_playerUID,dayz_characterID,"Survivor2_DZ"] spawn player_humanityMorph;
		};
		if (_isWomenH || _isWomenB) then {
			[dayz_playerUID,dayz_characterID,"SurvivorW2_DZ"] spawn player_humanityMorph;
		};
	};
	// Hero
	if (_humanity > 5000) then {
		if (_isMen || _isMenB) then {
			[dayz_playerUID,dayz_characterID,"Survivor3_DZ"] spawn player_humanityMorph;
		};
		/*
		if (_isWomen || _isWomenB) then {  //TODO
			[dayz_playerUID,dayz_characterID,"SurvivorW3_DZ"] spawn player_humanityMorph;
		};
		*/
		if (_isWomenB) then { 
			[dayz_playerUID,dayz_characterID,"SurvivorW2_DZ"] spawn player_humanityMorph;
		};
	};
};