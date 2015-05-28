private ["_id","_hasMeds","_unit"];

_unit = _this select 0;
_medsUsed = _this select 1;

//Remove one table from the box.
[_medsUsed,"medical"] call dayz_reduceItems;

//remove infection
r_player_infected = false;
_unit setVariable["USEC_infected",false,true];

//remove option
call fnc_usec_medic_removeActions;
r_action = false;

//player removeAction s_player_antiobiotic;
//s_player_antiobiotic = -1;

if ((_unit == player) or (vehicle player != player)) then {
	//Self Healing
	_id = [player,player] execVM "\z\addons\dayz_code\medical\publicEH\medAntibiotics.sqf";
} else {
	PVDZ_send = [_unit,"Antibiotics",[_unit,player]];
	publicVariableServer "PVDZ_send";
	[player,20] call player_humanityChange;
};