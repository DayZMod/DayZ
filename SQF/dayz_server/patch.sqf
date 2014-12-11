/*
#define PATCHVERSION "1.8.3a"

dayz_loadScreenMsg = ">>> Patch "+PATCHVERSION+" applied <<<";
diag_log dayz_loadScreenMsg;
[] spawn { // change the dayzmod version displayed when the player hits the ESCape key
	waitUntil {!isNull findDisplay 49};
	((findDisplay 49) displayCtrl 120) ctrlSetText ("DayZMod "+PATCHVERSION);
};
[] spawn { // change the dayzmod version displayed when the player hits the 'P' key
	waitUntil {!isNull findDisplay 129};
	((findDisplay 129) displayCtrl 112) ctrlSetText ("DayZMod "+PATCHVERSION);
};
*/