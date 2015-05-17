private ["_item","_use","_repair"];

//['ItemKnifeBlunt','ItemWaterbottle','ItemKnife']
_item = _this select 0; //Item to be sharpened
_use = _this select 1; //Item to be used during sharpen (magazine)
_repair = _this select 2; //Item to be given back.

call gear_ui_init;
closeDialog 1;

// item is missing or tools are missing
if (!(_use IN magazines player)) exitWith {
	_displayName = getText (configFile >> "CfgWeapons" >> _use >> "displayName");
	cutText [format["Missing %1",_displayName], "PLAIN DOWN"];
};

// item is missing or tools are missing
if (!(_item IN items player)) exitWith {
	_displayName = getText (configFile >> "CfgMagzines" >> _item >> "displayName");
	cutText [format["Missing Item",_displayName], "PLAIN DOWN"];
};

if (player hasWeapon _item) then {
	_displayName = getText (configFile >> "CfgMagzines" >> _item >> "displayName");
	
	player removeMagazine _use;
	Player removeWeapon _item;
	
	Player addWeapon _repair;
	
	cutText [format ["%1 has been Sharpened",_displayName], "PLAIN DOWN"];
};