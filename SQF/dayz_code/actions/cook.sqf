private ["_rawmeat","_cookedmeat","_meat","_meatcooked","_text","_qty","_dis","_sfx"];

//diag_log ("Cook Enabled");
player removeAction s_player_cook;
s_player_cook = -1;

_rawmeat = Dayz_meatraw;
_cookedmeat = Dayz_meatcooked;
a_player_cooking = true;

{
	_meat = _x;
	_meatcooked = _cookedmeat select (_rawmeat find _meat);
	if (_meat in magazines player) then {
		_text = getText (configFile >> "CfgMagazines" >> _meatcooked >> "displayName");
		_qty = {_x == _meat} count magazines player;
		player playActionNow "Medic";

		_dis=6;
		_sfx = "cook";
		[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
		[player,_dis,true,(getPosATL player)] call player_alertZombies;

		sleep _qty;
		for "_x" from 1 to _qty do {
			player removeMagazine _meat;
			player addMagazine _meatcooked;
			if !(_meat in magazines player) exitWith {cutText [format [localize "str_player_31",_text,localize "str_player_31_cook"] , "PLAIN DOWN"]};
		};
		cutText [format [localize "str_success_cooked",_qty,_text], "PLAIN DOWN"];
	};
} forEach _rawmeat;

a_player_cooking = false;