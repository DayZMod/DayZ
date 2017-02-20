private ["_qty_quivers","_control","_qty_quiverarrows","_empty","_emptymagslotcount"];

disableSerialization;
call gear_ui_init;

_qty_quivers = {_x == "12Rnd_Quiver_Wood"} count magazines player;
_control = uiNamespace getVariable 'uiControl';
_qty_quiverarrows = gearSlotAmmoCount _control;

//Remove melee magazines (BIS_fnc_invAdd fix) (add new melee ammo to array if needed)
{player removeMagazines _x} forEach ["Hatchet_Swing","Crowbar_Swing","Machete_Swing","Fishing_Swing"];

_empty = [player] call BIS_fnc_invSlotsEmpty;
_emptymagslotcount = _empty select 4; //empty magazines slots

if (_qty_quivers > 1) exitWith { localize "str_quiver_reachlimit" call dayz_rollingMessages;};
if (_qty_quiverarrows == 2) then { //remove 12Rnd_Quiver_Wood - add 2 arrows
	if (_emptymagslotcount > 0) then {
		player removeMagazine "12Rnd_Quiver_Wood";
		player addMagazine "1Rnd_Arrow_Wood";
		player addMagazine "1Rnd_Arrow_Wood";
	} else {
		localize "str_player_24" call dayz_rollingMessages; //Error
	};
} else {
	if (_emptymagslotcount > 0) then {
		player removeMagazine "12Rnd_Quiver_Wood";
		player addMagazine "1Rnd_Arrow_Wood";
		player addMagazine ["12Rnd_Quiver_Wood",_qty_quiverarrows-1];
	} else {
		localize "str_player_24" call dayz_rollingMessages; //Error
	};
};
