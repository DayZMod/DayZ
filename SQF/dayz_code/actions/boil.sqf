private ["_bottletext","_tin1text","_tin2text","_tintext","_hasbottleitem","_hastinitem","_qty","_dis","_sfx","_bottleInfected"];

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

_bottletext = getText (configFile >> "CfgMagazines" >> "ItemWaterBottle" >> "displayName");
_tin1text = getText (configFile >> "CfgMagazines" >> "TrashTinCan" >> "displayName");
_tin2text = getText (configFile >> "CfgMagazines" >> "ItemSodaEmpty" >> "displayName");
_tintext = format["%1 / %2",_tin1text,_tin2text];
_hasbottleitem = (("ItemWaterBottle" in magazines player) || {"ItemWaterBottleInfected" in magazines player} || {"ItemWaterBottleSafe" in magazines player});
_hastinitem = false;
a_player_boil = true;
player removeAction s_player_boil;
//s_player_boil = -1;

_bottleInfected = ("ItemWaterBottleInfected" in magazines player);

{
    if (_x in magazines player) exitWith {_hastinitem = true;};
} count boil_tin_cans;

if (!_hasbottleitem) exitWith {format[localize "str_player_31",_bottletext,localize "str_player_31_fill"] call dayz_rollingMessages; a_player_boil = false; dayz_actionInProgress = false;};
if (!_hastinitem) exitWith {format[localize "str_player_31",_tintext,localize "str_player_31_fill"] call dayz_rollingMessages; a_player_boil = false; dayz_actionInProgress = false;};

if (_hasbottleitem and _hastinitem) then {
	_qty = 0;
	_qty = _qty  + ({_x == "ItemWaterBottleInfected"} count magazines player);
	_qty = _qty + ({_x == "ItemWaterBottle"} count magazines player);
	_qty = _qty + ({_x == "ItemWaterBottleSafe"} count magazines player);
	
	player playActionNow "Medic";
	uiSleep 1;
	_dis=10;
	_sfx = "cook";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;
	uiSleep 5;
	
	for "_x" from 1 to _qty do {
		if ("ItemWaterBottleInfected" in magazines player) then {
			player removeMagazine "ItemWaterBottleInfected";
		} else {
			if ("ItemWaterBottleSafe" in magazines player) then {
				player removeMagazine "ItemWaterBottleSafe";
			} else {
				player removeMagazine "ItemWaterBottle";
			};
		};
		
		if ([0.1] call fn_chance) then {
			player addMagazine "ItemWaterBottleDmg";
			//systemChat (localize ("str_waterbottle_broke"));
			localize "str_waterbottle_broke" call dayz_rollingMessages;
		} else {
			player addMagazine "ItemWaterBottleBoiled";
		};
	};
    format [localize "str_player_boiledwater",_qty] call dayz_rollingMessages;
} else {
	localize "str_player_02" call dayz_rollingMessages;
};

a_player_boil = false;
dayz_actionInProgress = false;