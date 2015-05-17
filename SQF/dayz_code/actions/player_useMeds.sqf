private["_item","_onLadder","_hasmeditem","_config","_text","_id"];

_item = _this;
call gear_ui_init;
closeDialog 0;
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [localize "str_player_21", "PLAIN DOWN"]};

_hasmeditem = _item in magazines player;

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

if (!_hasmeditem) exitWith {cutText [format [localize "str_player_31",_text,localize "str_player_31_use"] , "PLAIN DOWN"]};

switch (_item) do {
	case "ItemBandage": {
		_id = [0,0,0,[player,"ItemBandage"]] execVM "\z\addons\dayz_code\medical\bandage.sqf";
	};
	case "ItemMorphine": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\morphine.sqf";
	};
	case "ItemPainkiller": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\painkiller.sqf";
	};
	//Antibiotic's system
	case "ItemAntibiotic": {
		_id = [player,"ItemAntibiotic"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";
	};
	case "ItemAntibiotic1": {
		_id = [player,"ItemAntibiotic1"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";
	};
	case "ItemAntibiotic2": {
		_id = [player,"ItemAntibiotic2"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";
	};
	case "ItemAntibiotic3": {
		_id = [player,"ItemAntibiotic3"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";
	};
	case "ItemAntibiotic4": {
		_id = [player,"ItemAntibiotic4"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";
	};
	case "ItemAntibiotic5": {
		_id = [player,"ItemAntibiotic5"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";
	};
	case "ItemAntibiotic6": {
		_id = [player,"ItemAntibiotic6"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";
	};
	case "ItemAntibacterialWipe": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\wipes.sqf";
	};
	case "ItemHeatPack": {
		player removeMagazine "ItemHeatPack";
		dayz_temperatur = (dayz_temperatur + 5) min dayz_temperaturmax;
		cutText [localize "str_player_27", "PLAIN DOWN"];
	};
	case "bloodTester": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\blood_test.sqf";
	};
	case "transfusionKit": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\fillBloodBag.sqf";
	};
	case "ItemSepsisBandage": {
		_id = [0,0,0,[player,"ItemSepsisBandage"]] execVM "\z\addons\dayz_code\medical\bandage.sqf";
	};
	case "wholeBloodBagANEG": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";
	};
	case "wholeBloodBagAPOS": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";
	};
	case "wholeBloodBagBNEG": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";
	};
	case "wholeBloodBagBPOS": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";
	};
	case "wholeBloodBagABNEG": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";
	};
	case "wholeBloodBagABPOS": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";
	};
	case "wholeBloodBagONEG": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";
	};
	case "wholeBloodBagOPOS": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";
	};
	case "equip_woodensplint": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\brokeBones.sqf";
	};
};
if (vehicle player != player) then {
	_display = findDisplay 106;
	_display closeDisplay 0;
};