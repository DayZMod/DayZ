//New script to attach attachments to weapons.

private["_item","_onLadder","_hasmeditem","_config","_text","_id"];

_attachment = _this;
_pWeap = primaryWeapon player;

//Other initail info
call gear_ui_init;
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;

//Get config info
_config = configFile >> "CfgMagazines" >> _attachment;
_wConfig = configFile >> "CfgWeapons" >> _pWeap;

_selectedAttachment = getText(_config >> "ItemActions" >> "Use" >> "type");
_weaponAttachments = getArray(_wConfig >> "Attachments" >> "attachments");

_item = "";

{
 if (_selectedAttachment == _x) then {
	_item = getText(_wConfig >> "Attachments" >> _x);
 };
} foreach _weaponAttachments;
 
diag_log format["%1 - %2 = %3",_selectedAttachment,_weaponAttachments, _item];

//if (_item == "") exitWith { cutText [localize "str_missingAttachment", "PLAIN DOWN"]};
if (_onLadder) exitWith { cutText [localize "str_player_21", "PLAIN DOWN"] };

if (_item == "") then { 
		player removeMagazine _attachment;
		player removeWeapon _pWeap;
		player addWeapon _item; 

	if (vehicle player != player) then {
		_display = findDisplay 106;
		_display closeDisplay 0;
	};
} else {
	closedialog 0;
	sleep 0.2;
	_text = configFile >> "CfgMagazines" >> _attachment >> "displayName";
	cutText [format[ localize "str_missingweapon", _text] , "PLAIN DOWN"]
};	
