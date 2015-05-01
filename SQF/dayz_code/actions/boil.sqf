private ["_bottletext","_tin1text","_tin2text","_tintext","_hasbottleitem","_hastinitem","_qty","_dis","_sfx"];

_bottletext = getText (configFile >> "CfgMagazines" >> "ItemWaterbottle" >> "displayName");
_tin1text = getText (configFile >> "CfgMagazines" >> "TrashTinCan" >> "displayName");
_tin2text = getText (configFile >> "CfgMagazines" >> "ItemSodaEmpty" >> "displayName");
_tintext = format["%1 / %2",_tin1text,_tin2text];
_bottleInfected = false;

_hasbottleitem = (("ItemWaterbottle" in magazines player) || ("ItemWaterBottleInfected" in magazines player) || ("ItemWaterBottleSafe" in magazines player));
_hastinitem = false;
a_player_boil = true;

player removeAction s_player_boil;
//s_player_boil = -1;

if ("ItemWaterBottleInfected" in magazines player) then {
	_bottleInfected = true;
};

{
    if (_x in magazines player) then {
        _hastinitem = true;
    };

} forEach boil_tin_cans;


if (!_hasbottleitem) exitWith {cutText [format [localize "str_player_31",_bottletext,localize "str_player_31_fill"] , "PLAIN DOWN"]; a_player_boil = false;};
if (!_hastinitem) exitWith {cutText [format [localize "str_player_31",_tintext,localize "str_player_31_fill"] , "PLAIN DOWN"]; a_player_boil = false;};

if (_hasbottleitem and _hastinitem) then {
	_qty = 0;
	_qty = _qty  + ({_x == "ItemWaterBottleInfected"} count magazines player);
	_qty = _qty + ({_x == "ItemWaterbottle"} count magazines player);
	_qty = _qty + ({_x == "ItemWaterBottleSafe"} count magazines player);
	
	player playActionNow "Medic";
	sleep 1;
	_dis=10;
	_sfx = "cook";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;
	sleep 5;
	
	for "_x" from 1 to _qty do {
		if ("ItemWaterBottleInfected" in magazines player) then {
			player removeMagazine "ItemWaterBottleInfected";
		} else {
			if ("ItemWaterBottleSafe" in magazines player) then {
				player removeMagazine "ItemWaterBottleSafe";
			} else {
				player removeMagazine "ItemWaterbottle";
			};
		};
		
		if ([0.1] call fn_chance) then {
			player addMagazine "ItemWaterbottleDmg";
			systemChat (localize ("str_waterbottle_broke"));
		} else {
			player addMagazine "ItemWaterbottleBoiled";
		};	

	};
    cutText [format [localize "str_player_boiledwater",_qty], "PLAIN DOWN"];
} else {
    cutText [localize "str_player_02", "PLAIN DOWN"];
};

a_player_boil = false;