/*
player_removeAttachment
	
	-foxy

parameters:
	string		attachment item classname
	string		current weapon classname
	string		resulting weapon classname
*/

private
[
	"_attachment",
	"_weapon",
	"_newWeapon",
	"_onLadder",
	"_muzzle",
	"_newWeaponConfig"
];

//check if player is on a ladder and if so, exit
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith
{
	closeDialog 0;
	cutText [localize "str_player_21", "PLAIN DOWN"];
};

_attachment = _this select 0;
_weapon = _this select 1;
_newWeapon = _this select 2;

//check that player has enough room in inventory
if ((([player] call BIS_fnc_invSlotsEmpty) select 4) < 1) exitWith
{
	closeDialog 0;
	cutText [localize "str_player_24", "PLAIN DOWN"];
};

//check that player has the weapon
if (!(player hasWeapon _weapon)) exitWith
{
	closeDialog 0;
	cutText [localize "str_AttachmentMissingWeapon3", "PLAIN DOWN"];
};

//Check that newWeapon + attachment actually results in current weapon
_newWeaponConfig = configFile >> "CfgWeapons" >> _newWeapon;
if (!isClass(_newWeaponConfig >> "Attachments") || {getText(_newWeaponConfig >> "Attachments" >> _attachment) != _weapon}) exitWith
{
	closeDialog 0;
	cutText ["Cannot remove attachment.", "PLAIN DOWN"];
};

call gear_ui_init;
player playActionNow "Medic";

//replace weapon and add attachment to inventory
player removeWeapon _weapon;
player addWeapon _newWeapon;
player addMagazine _attachment;

/*//if player is in a vehicle close gear
//otherwise the display will not update
if (vehicle player != player) then
{
	_display = findDisplay 106;
	_display closeDisplay 0;
};*/

//close gear
(findDisplay 106) closeDisplay 0;

//if player doesn't have a muzzle selected set it to the first muzzle of the new weapon
if (currentWeapon player == "") then
{
	_muzzle = (getArray (configFile >> "CfgWeapons" >> _newWeapon >> "muzzles")) select 0;
	
	if (_muzzle == "this") then
	{
		player selectWeapon _newWeapon;
	}
	else
	{
		player selectWeapon _muzzle;
	}
};