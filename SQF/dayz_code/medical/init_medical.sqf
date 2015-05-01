// moved to dayz_code/system/scheduler/sched_medical.sqf

while {1==1} do {
	//Low Blood Effects
	if (!r_player_unconscious) then {
		if (((r_player_blood/r_player_bloodTotal) < 0.35)) then {
			r_player_lowblood = true;
			playSound "heartbeat_1";
			addCamShake [2, 0.5, 25];
			if (r_player_lowblood) then {
				0 fadeSound ((r_player_blood/r_player_bloodTotal) + 0.5);
				"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [4]; "dynamicBlur" ppEffectCommit 0.2;
			};
			sleep 0.5;
			if (r_player_lowblood) then {
				"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [1]; "dynamicBlur" ppEffectCommit 0.5;
			};
			sleep 0.5;
			_lowBlood =	player getVariable ["USEC_lowBlood", false];
			if ((r_player_blood < r_player_bloodTotal) and !_lowBlood) then {
				player setVariable["USEC_lowBlood",true,true];
			};
		};
	};
	
};