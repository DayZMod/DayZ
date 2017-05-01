private ["_item","_config","_onLadder","_consume","_bag","_droppedType"];

disableSerialization;
_item = _this;
_config = configFile >> "CfgWeapons" >> _item;
_droppedType = getText (_config >> "droppeditem");

//Make sure the player still has the tool this script was spawned with
if ((dayz_onBack != _item && carryClick) or (!(player hasWeapon _item) && !carryClick)) exitWith {
	format[localize "str_player_30",getText (_config >> "displayName")] call dayz_rollingMessages;
};

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith { localize "str_player_21" call dayz_rollingMessages; };
if (dayz_actionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };
dayz_actionInProgress = true;

call gear_ui_init;

_consume = ([] + getArray (_config >> "magazines")) select 0;

if (_item == dayz_onBack && carryClick) then {
	switch DayZ_onBack do {
		case "MeleeHatchet": {_item = "ItemHatchet"; dayz_onBack = "";};
		case "MeleeCrowbar": {_item = "ItemCrowbar"; dayz_onBack = "";};
		case "MeleeMachete": {_item = "ItemMachete"; dayz_onBack = "";};
	};
	carryClick = false;
	((findDisplay 106) displayCtrl 1209) ctrlSetText "";
} else {
	player removeMagazines _consume;
	player removeWeapon _item;
	_item = if (_droppedType == "") then {_this} else {_droppedType};
};

_bag = createVehicle [format["WeaponHolder_%1",_item],getPosATL player,[], 1, "CAN_COLLIDE"];
_bag modelToWorld getPosATL player;
_bag setDir (getDir player);
player reveal _bag;
dayz_actionInProgress = false;