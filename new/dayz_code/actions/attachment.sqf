#include "\dayz\dayz_code\util\debug.hpp"
#include "\dayz\dayz_code\util\player.hpp"
#include "\dayz\dayz_code\util\string.hpp"

#define WEAPON_PRIMARY 1
#define WEAPON_HANDGUN 0

/* Determines whether the givens attachment can be attached to the player's current weapon.

Parameters:
	string	attachment
	scalar	weapon (1: primary, 0: handgun)
*/
dz_fn_attachment_canAttach =
{
	private ["_weapon", "_config"];
	
	//Find the weapon
	_weapon = switch (_this select 1) do
	{
		case WEAPON_PRIMARY: { primaryWeapon player };
		case WEAPON_HANDGUN: { Player_GetSidearm() };
	};
	
	_config = configFile >> "CfgWeapons" >> _weapon >> "Attachments";
	if (!isClass _config || { !isText (_config >> _this select 0) }) exitWith { false };
	
	true
};

/* Player attaches an attachment to a weapon

Parameters:
	string	attachment
	scalar	weapon (1: primary, 0: handgun)
*/
dz_fn_attachment_attach =
{
	private ["_attachment", "_weapon", "_config"];
	
	_attachment = _this select 0;
	
	//Check player has the attachment
	if !(_attachment in magazines player) exitWith
		{ Debug_LogWarning("Attachment: Attachment not found.") };
	
	//Find the weapon
	_weapon = switch (_this select 1) do
	{
		case WEAPON_PRIMARY: { primaryWeapon player };
		case WEAPON_HANDGUN: { Player_GetSidearm() };
	};
	
	if isNil "_weapon" exitWith {};
	
	//Check player has the weapon
	if !(player hasWeapon _weapon) exitWith
		{ Debug_LogWarning("Attachment: Weapon not found.") };
	
	_config = configFile >> "CfgWeapons" >> _weapon >> "Attachments";
	
	//Check that attachment can be added to weapon
	if (!isClass _config || { _config = _config >> _attachment; !isText _config }) exitWith
		{ Debug_LogWarning(String_Format2("Attachment: Cannot attach %1 to %2.", _attachment, _weapon)) };
	
	if Player_IsInVehicle() then
	{
		[_weapon, getText _config] call dz_fn_attachment_replace;
		player removeMagazine _attachment;
	}
	else
	{
		["attach", [_attachment, _weapon, getText _config]] call dz_fn_action;
	};
};

/* Player removes an attachment from a weapon

Parameters:
	string	attachment
	string	old weapon
	string	new weapon
*/
dz_fn_attachment_detach =
{
	private ["_attachment", "_oldWeapon", "_newWeapon", "_config"];
	_attachment = _this select 0;
	_oldWeapon = _this select 1;
	_newWeapon = _this select 2;
	
	//Check player has the weapon
	if !(player hasWeapon _oldWeapon) exitWith
		{ Debug_LogWarning("Attachment: Weapon not found.") };
	
	//Check that newWeapon + attachment = oldWeapon
	_config = configFile >> "CfgWeapons" >> _newWeapon >> "Attachments";
	if (!isClass _config || { getText (_config >> _attachment) != _oldWeapon } ) exitWith
		{ Debug_LogWarning(String_Format2("Attachment: Cannot detach %1 from %2.", _attachment, _oldWeapon)) };
	
	if Player_IsInVehicle() then
	{
		//Check that player has enough room in inventory
		if (([player] call BIS_fnc_invSlotsEmpty select 4) < 1) exitWith
			{ localize "str_player_24" call dz_fn_rollmsg };
		
		[_oldWeapon, _newWeapon] call dz_fn_attachment_replace;
		player addMagazine _attachment;
	}
	else
	{
		["detach", _this] call dz_fn_action;
	};
};

dz_fn_attachment_replace =
{
	private ["_old", "_new", "_use", "_muzzle"];
	_old = _this select 0;
	_new = _this select 1;
	
	_use = currentWeapon player == _old;
	
	//replace weapon and add attachment to inventory
	player removeWeapon _old;
	player addWeapon _new;
	
	//Select new weapon if the old was in use
	if _use then
	{
		_muzzle = getArray (configFile >> "CfgWeapons" >> _new >> "muzzles") select 0;
		player selectWeapon ( if (_muzzle == "this") then { _new } else { _muzzle } );
	};
};

_finish =
{
	_attachment = _this select 0;
	_oldWeapon = _this select 1;
	_newWeapon = _this select 2;
	
	//Check player has the attachment
	if !(_attachment in magazines player) exitWith
		{ Debug_LogWarning("Attachment: Attachment not found.") };
	
	//Check player has the weapon
	if !(player hasWeapon _oldWeapon) exitWith
		{ Debug_LogWarning("Attachment: Weapon not found.") };
	
	[_oldWeapon, _newWeapon] call dz_fn_attachment_replace;
	player removeMagazine _attachment;
};

["attach", _finish] call dz_fn_action_register;

_finish =
{
	_attachment = _this select 0;
	_oldWeapon = _this select 1;
	_newWeapon = _this select 2;
	
	//check that player has the weapon
	if !(player hasWeapon _oldWeapon) exitWith
		{ Debug_LogWarning("Attachment: Weapon not found.") };
	
	[_oldWeapon, _newWeapon] call dz_fn_attachment_replace;
	if (Player_AddMagazine(_attachment) == Player_AddItem_GROUND) then
		{ /*TODO: localize*/  "Not enough room. Attachment dropped." call dz_fn_rollmsg };
};

["detach", _finish] call dz_fn_action_register;