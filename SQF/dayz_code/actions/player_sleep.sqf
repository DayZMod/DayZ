private ["_playArray","_lastRest","_blood"];
//_timesincedrink = time - dayz_lastDrink;
//_bloodinc =100; Removed for now(untested) due to it not needed yet

//http://community.bistudio.com/wiki/ArmA2:_Moves

_sleepArray = ["aidlppnemstpsnonwnondnon_sleepc_laydown","aidlppnemstpsnonwnondnon_sleepc_lookaround","aidlppnemstpsnonwnondnon_sleepc_scratch","aidlppnemstpsnonwnondnon_sleepc_sleep","aidlppnemstpsnonwnondnon_sleepc_sleep0"];

//not in a vehicle
//_playArray = _sleepArray call BIS_fnc_selectRandom;
player playmove "AidlPpneMstpSnonWnonDnon_SleepC_sleep";
	
r_interrupt = false;
_animState = animationState player;
r_doLoop = true;
_started = false;
_finished = false;
_timer = diag_tickTime;
_i = 0;
_r = 0;
_blood = 0;
_lastRest = player getVariable ["lastRest", 0];

while {r_doLoop} do {
	_isAsleep = (animationState player) in _sleepArray;

	if (_isAsleep and !_started) then {
	
		_started = true;
	};

	if (_started) then {
		if (!r_player_unconscious) then {
		
			if (r_player_infected) then {
				//Random Chance to cure infection
				if (diag_ticktime - _lastRest > 60) then { 
					player setVariable ["lastRest", diag_ticktime];
					//add infection chance for cure
					if (floor(random 100) < 1) then {
						r_player_infected = false;
						player setVariable["USEC_infected",false,false];
						
						PVDZ_serverStoreVar = [player,"USEC_infected",false];
						publicVariableServer "PVDZ_serverStoreVar";
					};
				};
			};
			
			//make sure player isnt infected or inpain.
			if (!r_player_injured AND !r_player_infected AND !(r_player_Sepsis select 0)) then {
				//Give 100 + random amount of blood every 8 secs if player isnt injured.
				if ((diag_tickTime - _timer) >= 16) then {
					if (r_player_blood < 12000) then {
						_randomamount = round(random 53);
						_blood = 53 + _randomamount;
					};
					
					if ((r_player_blood - 12000) < _blood) then {
						r_player_bloodregen = r_player_bloodregen + _blood;
					} else {
						r_player_blood = 12000;
					};
					
					_timer = diag_tickTime;
					
					cutText [format [localize "str_sleepStats",_blood,r_player_infected], "PLAIN DOWN"];
				};
				
			};
			
			if (!_isAsleep) then {
				//_playArray = _sleepArray call BIS_fnc_selectRandom;
				player switchMove "AidlPpneMstpSnonWnonDnon_SleepC_sleep";
			};
		};

		if (r_interrupt ) then {
			r_doLoop = false;
		};
		sleep 0.1;
	};
};

r_doLoop = false;

if (r_interrupt) then {
	systemChat(localize ("str_endSleepStandUp"));
	r_interrupt = false;
	player playmoveNow "";
	player playActionNow "stop";
};

PVDZ_plr_Save = [player,nil,true,dayz_playerAchievements];
publicVariableServer "PVDZ_plr_Save";