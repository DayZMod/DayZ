/*
        Created exclusively for ArmA2:OA - DayZMod. Script by icomrade.
        permission is required to use, alter and/or distribute from project leader (R4Z0R49) AND the author.
*/
private ["_array","_action","_driver","_vehicle","_emptySeat","_emptyGun"];
_array = _this select 3;
_action = _array select 0;
_driver = _array select 1;
_vehicle = vehicle player;
_emptySeat = count (assignedCargo _vehicle);
_emptyGun = (_vehicle emptyPositions "Gunner") - 2; //the above does not work for assignedGunner because ArmA logic...

switch _action do {
	case "MoveToPilot": {
		if (((_vehicle emptyPositions "Driver") == 0) and (!alive _driver)) then {
			_driver action ["EJECT", _vehicle];
			sleep 0.5; //wait for ejection otherwise the player switching will get fucked
		};
		if ((_vehicle emptyPositions "Driver") > 0) then {
			player action [_action, _vehicle];
		};
	};
	case "MoveToCargo": {
		if ((_vehicle emptyPositions "Cargo") > 0) then {
			player action [_action, _vehicle, _emptySeat];
		};
	};
	case "MoveToTurret": {
		if ((_vehicle emptyPositions "Gunner") > 0) then {
			player action [_action, _vehicle, [abs(_emptyGun)]];
		};
	};
};