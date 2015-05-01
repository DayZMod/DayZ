/************************************************************
Chance calc by deadactionman

Parameters: chance (0-1)
Returns: true/false

E.G.
_return = [0.5] call fn_chance;  // will return TRUE 50% of the time
_return = [0.25] call fn_chance; // will return TRUE 25% of the time
*************************************************************/
private ["_result"];

if (floor((_this select 0) * 100) > floor(random 100)) then {_result = true;} else {_result = false;};

_result
