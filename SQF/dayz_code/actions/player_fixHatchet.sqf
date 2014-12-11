private ["_hatchet","_tape","_fixedHatchet"];

_hatchet = _this;
_tape = "equip_duct_tape";
_wood = "ItemLog";
_fixedHatchet = "ItemHatchet";
call gear_ui_init;
closeDialog 0;

// Check if the player has the tape
if ((_tape in magazines player) && (_wood in magazines player)) then {
	//Fix the bottle
	player playActionNow "Medic";
	[player,"bandage",0,false] call dayz_zombieSpeak;
	sleep 6;
	player removeWeapon _hatchet;
	player removeMagazine _tape;
	player removeMagazine _wood;
	player addWeapon _fixedHatchet;
	cutText [localize "str_fixHatchetSuccess", "PLAIN DOWN"];
} else {		//If the player doesn't have the mats.
	if (!(_tape in magazines player)) then {
		if (!(_wood in magazines player)) then {
			cutText [localize "str_fixHatchetFail", "PLAIN DOWN"];
		} else {
			cutText [localize "str_fixHatchetMissingTape", "PLAIN DOWN"];
		};
	} else {
		cutText [localize "str_fixHatchetMissingWood", "PLAIN DOWN"];
	};
};