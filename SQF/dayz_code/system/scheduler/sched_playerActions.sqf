#include "scheduler.hpp"

sched_playerActions = {
	HIDE_FSM_VARS
	
	if (!dayz_actionInProgress) then {
		call fnc_usec_selfActions;
		call fnc_usec_damageActions;
	};
	
	objNull
};
