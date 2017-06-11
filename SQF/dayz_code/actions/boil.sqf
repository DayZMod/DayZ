private ["_bottletext","_tin1text","_tin2text","_tintext","_hastinitem","_qty","_dis","_sfx","_finished"];

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

_bottletext = getText (configFile >> "CfgMagazines" >> "ItemWaterBottle" >> "displayName");
_tin1text = getText (configFile >> "CfgMagazines" >> "TrashTinCan" >> "displayName");
_tin2text = getText (configFile >> "CfgMagazines" >> "ItemSodaEmpty" >> "displayName");
_tintext = format["%1 / %2",_tin1text,_tin2text];
_qty = {_x in ["ItemWaterBottleInfected","ItemWaterBottle","ItemWaterBottleSafe"]} count magazines player;
a_player_boil = true;
player removeAction s_player_boil;
//s_player_boil = -1;

_hastinitem = {_x in magazines player} count boil_tin_cans > 0;
if (!_hastinitem) exitWith {format[localize "str_player_31",_tintext,localize "str_player_31_fill"] call dayz_rollingMessages; a_player_boil = false; dayz_actionInProgress = false;};

if (_qty > 0) then {
	_dis=10;
	_sfx = "cook";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;
	
	_finished = ["Medic",1] call fn_loopAction;
	
	// Double check player did not drop item
	_qty = {_x in ["ItemWaterBottleInfected","ItemWaterBottle","ItemWaterBottleSafe"]} count magazines player;
	
	if (_qty == 0 or !_finished) exitWith {};

	for "_x" from 1 to _qty do {
		switch (true) do {
			case ("ItemWaterBottleInfected" in magazines player): { player removeMagazine "ItemWaterBottleInfected"; };
			case ("ItemWaterBottleSafe" in magazines player): { player removeMagazine "ItemWaterBottleSafe"; };
			case ("ItemWaterBottle" in magazines player): { player removeMagazine "ItemWaterBottle"; };
		};
		
		if ([0.1] call fn_chance) then {
			player addMagazine "ItemWaterBottleDmg";
			localize "str_waterbottle_broke" call dayz_rollingMessages;
		} else {
			player addMagazine "ItemWaterBottleBoiled";
		};
	};
    format [localize "str_player_boiledwater",_qty] call dayz_rollingMessages;
} else {
	format[localize "str_player_31",_bottletext,localize "str_player_31_fill"] call dayz_rollingMessages;
};

a_player_boil = false;
dayz_actionInProgress = false;