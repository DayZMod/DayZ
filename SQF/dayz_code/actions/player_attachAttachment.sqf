/*
player_attachAttachment
	
	-foxy

parameters:
	string		attachment item classname
	integer		type of weapon: 1 if primary, 0 if secondary
*/

#define WeaponSlotHandGun 2

private
[
	"_attachment",
	"_weaponType",
	"_weapon",
	"_attachmentConfig",
	"_weaponConfig",
	"_addableAttachments",
	"_newWeapon",
	"_weaponInUse",
	"_muzzle"
];

//check if player is on a ladder and if so, exit
if ((getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1) exitWith
{
	closeDialog 0;
	cutText [localize "str_player_21", "PLAIN DOWN"];
};

//name of attachment item
_attachment = _this select 0;
_weapon = "";

//get the player's weapon
if ((_this select 1) == 1) then
{
	_weapon = primaryWeapon player;
}
else
{
	{
		_weaponType = getNumber (configFile >> "CfgWeapons" >> _x >> "type");
		
		//note: assumes no handgun would have multiple binary flags set.
		if (_weaponType == WeaponSlotHandGun) exitWith
		{
			_weapon = _x;
		};
	} foreach weapons player;
};

//check if player has a weapon
if (_weapon == "") exitWith
{
	closedialog 0;
	
	if ((_this select 1) == 1) then
	{
		cutText [localize "str_AttachmentmissingWeapon", "PLAIN DOWN"];
	}
	else
	{
		cutText [localize "str_AttachmentmissingWeapon2", "PLAIN DOWN"];
	};
};

//retrieve attachment and weapon configs
_attachmentConfig = configFile >> "CfgMagazines" >> _attachment;
_weaponConfig = configFile >> "CfgWeapons" >> _weapon;

//check if weapon has Attachments class
if (!isClass(_weaponConfig >> "Attachments")) exitWith
{
	closeDialog 0;
	
	if ((_this select 1) == 1) then
	{
		cutText [localize "str_AttachmentWeaponConfig", "PLAIN DOWN"];
	}
	else
	{
		cutText [localize "str_AttachmentWeaponConfig2", "PLAIN DOWN"];
	};
};

//list of attachments that can be added to current weapon
_addableAttachments = getArray(_weaponConfig >> "Attachments" >> "attachments");

//Find new weapon class from weapon config Attachments class
_newWeapon = "";
{
	if (_attachment == _x) exitWith
	{
		_newWeapon = getText(_weaponConfig >> "Attachments" >> _x);
	};
} foreach _addableAttachments;

//Attachment cannot be attached to this weapon
if (_newWeapon == "") exitWith
{
	closedialog 0;
	
	if ((_this select 1) == 1) then
	{
		cutText [localize "str_AttachmentWeaponConfig", "PLAIN DOWN"];
	}
	else
	{
		cutText [localize "str_AttachmentWeaponConfig2", "PLAIN DOWN"];
	};
};

_weaponInUse = (currentWeapon player == _weapon);

call gear_ui_init;
player playActionNow "Medic";

//remove attachment from inventory and replace weapon
player removeMagazine _attachment;
player removeWeapon _weapon;
player addWeapon _newWeapon;

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