/*
_item call player_wearClothes;
TODO: female
*/
private["_item","_onLadder","_hasclothesitem","_config","_text","_isFemale","_myModel","_humanity","_isBandit","_isHero","_itemNew","_model"];

_item = _this;
call gear_ui_init;
r_action_count = 0; //reset for strange glitch
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [localize "str_player_21", "PLAIN DOWN"]};

_hasclothesitem = _this in magazines player;
_config = configFile >> "CfgMagazines";
_text = getText (_config >> _item >> "displayName");

if (!_hasclothesitem) exitWith {cutText [format [localize "str_player_31",_text,localize "str_player_31_wear"] , "PLAIN DOWN"]};

if (vehicle player != player) exitWith {cutText [localize "str_player_fail_wear1", "PLAIN DOWN"]};

_isFemale = ((typeOf player == "SurvivorW2_DZ")||(typeOf player == "BanditW1_DZ"));
if (_isFemale) exitWith {cutText [localize "str_player_fail_wear2", "PLAIN DOWN"]};

_myModel = (typeOf player);
_humanity = player getVariable ["humanity",0];
_isBandit = _humanity < -2000;
_isHero = _humanity > 5000;
_itemNew = "Skin_" + _myModel;

if ( !(isClass(_config >> _itemNew)) ) then {
	_itemNew = if (!_isFemale) then {"Skin_Survivor2_DZ"} else {"Skin_SurvivorW2_DZ"};
};

_skinToArray = toArray (_item);
_skinToArray set [0,"del"];
_skinToArray set [1,"del"];
_skinToArray set [2,"del"];
_skinToArray set [3,"del"];
_skinToArray set [4,"del"];
_finalArray = _skinToArray - ["del"];
_skinToModel = toString (_finalArray);

_model = _skinToModel;
	
if (_item == "Skin_Survivor2_DZ") then {
	if (_isBandit) then {
		_model = "Bandit1_DZ";
	};
	if (_isHero) then {
		_model = "Survivor3_DZ";
	};
};

if (_model != _myModel) then {
	player removeMagazine _item;
	player addMagazine _itemNew;
	[dayz_playerUID, dayz_characterID, _model] spawn player_humanityMorph;
};