private ["_onLadder","_itemoriginal","_hasfooditem","_rawfood","_player_eat_Nutrient","_cookedfood","_invehicle","_hasoutput","_config","_text","_regen","_dis","_sfx","_itemtodrop","_nearByPile","_item","_display","_pos"];

disableserialization;
call gear_ui_init;
closeDialog 0;

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [localize "str_player_21", "PLAIN DOWN"]};

_itemoriginal = _this;
_hasfooditem = _itemoriginal in magazines player;
_rawfood = _itemoriginal in Dayz_meatraw;
_cookedfood = _itemoriginal in Dayz_meatcooked;
_hasoutput = _itemoriginal in food_with_output;
_invehicle = false;

_config = configFile >> "CfgMagazines" >> _itemoriginal;
_text = getText (_config >> "displayName");
_regen = 0;

//Unable to eat anything more.
if ((r_player_foodstack >= 10)) exitwith { 	systemChat [format["Unable to Eat anything else.",_text], "PLAIN DOWN"]; };

//if (_cookedfood or _rawfood) then {
	_regen = getNumber (_config >> "bloodRegen");
//};

_player_eat_Nutrition = getArray (_config >> "Nutrition"); //[]

if (!_hasfooditem) exitWith {cutText [format [localize "str_player_31",_text,localize "str_player_31_consume"] , "PLAIN DOWN"]};

if (vehicle player != player) then {
	_display = findDisplay 106;
	_display closeDisplay 0;
	_invehicle = true;
} else {
	player playActionNow "PutDown";
};

player removeMagazine _itemoriginal;
sleep 1;

_dis=3;
_sfx = getText (_config >> "sfx");

//set _sfx to eat if nothing is defined
if (_sfx == "") then {_sfx = "eat"};

if (r_player_foodstack >= 10) then {
	_regen = 0;
};

if ((r_player_bloodregen > 5) and (r_player_foodstack > 1) and (r_player_foodstack < 10) and (_regen > 0)) then {
	_regen = _regen / r_player_foodstack;
};

["FoodDrink",_regen,_player_eat_Nutrition] call dayz_NutritionSystem;

//disminishing returns. while regen is active
r_player_foodstack = r_player_foodstack + 1;

[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
[player,_dis,true,(getPosATL player)] call player_alertZombies;

if (_hasoutput and !_invehicle) then{
    // Selecting output
    _itemtodrop = food_output select (food_with_output find _itemoriginal);

    sleep 3;
    _nearByPile = nearestObjects [getPosATL player, ["WeaponHolder","WeaponHolderBase"], 2];
    _item = if (count _nearByPile > 0) then {_nearByPile select 0};
    if (count _nearByPile == 0) then {
    	_pos = player modeltoWorld [0,1,0];
		_pos set [2, 0];
    	//diag_log format [ "%1 itempos:%2 _nearByPile:%3", __FILE__, _pos, _nearByPile];
        _item = createVehicle ["WeaponHolder", _pos, [], 0.0, "CAN_COLLIDE"];
        _item setPosATL _pos;
	};
    _item addMagazineCargoGlobal [_itemtodrop,1];
	
	if (achievement_LitterCount > -1) then {
		achievement_LitterCount = achievement_LitterCount + 1;
	};
};

if (_rawfood) then {
	if ([0.1] call fn_chance) then {
		r_player_infected = true;
		player setVariable["USEC_infected",true,true];
	};
};

if (r_player_blood > r_player_bloodTotal) then {
    r_player_blood = r_player_bloodTotal;
};

player setVariable ["messing",[dayz_hunger,dayz_thirst,dayz_nutrition],true];

//Ensure Control is visible
_display = uiNamespace getVariable 'DAYZ_GUI_display';
(_display displayCtrl 1301) ctrlShow true;

if (r_player_blood / r_player_bloodTotal >= 0.2) then {
    (_display displayCtrl 1300) ctrlShow true;
};

if ((r_player_foodstack >= 0) and (r_player_foodstack < 7)) then {
	cutText [format [localize "str_player_consumed_food",_text], "PLAIN DOWN"];
};
if ((r_player_foodstack >= 7) and (r_player_foodstack < 10)) then {
	cutText [format [localize "str_player_consumed_food_1",_text], "PLAIN DOWN"];
};
if ((r_player_foodstack >= 10)) then {
	cutText [format [localize "str_player_consumed_food_2",_text], "PLAIN DOWN"];
};