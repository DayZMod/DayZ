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
	"_weaponInUse",
	"_newWeaponConfig",
	"_muzzle"
];

//check if player is on a ladder and if so, exit
if ((getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1) exitWith
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

_weaponInUse = (currentWeapon player == _weapon);

call gear_ui_init;
player playActionNow "Medic";

//replace weapon and add attachment to inventory
player removeWeapon _weapon;
player addWeapon _newWeapon;
player addMagazine _attachment;

//close gear
(findDisplay 106) closeDisplay 0;

//Select new weapon if the old was in use
if (_weaponInUse) then
{
	_muzzle = (getArray (configFile >> "CfgWeapons" >> _newWeapon >> "muzzles")) select 0;
	
	if (_muzzle == "this") then
	{
		player selectWeapon _newWeapon;
	}
	else
	{
		player selectWeapon _muzzle;
	};
};