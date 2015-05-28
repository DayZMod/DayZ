/*
	Changes player model to given class
	
	Syntax:
		"classname" spawn player_switchModel
	
	-foxy
*/

#define RANDOM_POSITION [(_tempPos select 0) + random 100, (_tempPos select 1) + random 100, 0]

private
[
	"_tempPos",
	"_currentAnim",
	"_currentCamera",
	"_dir",
	"_position",
	"_weapons",
	"_magazines",
	"_backpack",
	"_currentWeapon",
	"_oldUnit",
	"_newUnit"
];

disableSerialization;

if (!isClass (configFile >> "CfgVehicles" >> _this)) exitWith
{
	diag_log "Invalid classname given to player_switchModel";
};

//temporary position for units (debug zone)
_tempPos = getMarkerPos "respawn_west";

//retrieve animation, camera, direction and position
_currentAnim = animationState player;
_currentCamera = cameraView;
_dir = getDir player;
_position = getPosATL player;

//retrieve player inventory
_weapons = weapons player;
_magazines = call player_countMagazines;
_backpack = unitBackpack player;

//retrieve selected weapon/muzzle
_currentWeapon = currentWeapon player;
if (count (getArray(configFile >> "cfgWeapons" >> _currentWeapon >> "muzzles")) > 1) then
{
	_currentWeapon = currentMuzzle player;
};

//Close gear
(findDisplay 106) closeDisplay 0;

_oldUnit = player;
_newUnit = (group player) createUnit [_this, RANDOM_POSITION, [], 0, "NONE"];

//clear new unit
removeAllWeapons _newUnit;

//Add all magazines to new unit
{
	if (typeName _x == "ARRAY") then
	{
		_newUnit addMagazine [_x select 0,_x select 1];
	}
	else
	{
		_newUnit addMagazine _x;
	};
}
forEach _magazines;

//Add all weapons to new unit
{
	_newUnit addWeapon _x;
}
forEach _weapons;

//Set new unit's direction, weapon and animation
_newUnit setDir _dir;
_newUnit selectWeapon _currentWeapon;
_newUnit switchMove _currentAnim;
_newUnit disableConversation true;

//move old unit to debug zone
_oldUnit setPosATL RANDOM_POSITION;

//Switch to new unit
addSwitchableUnit _newUnit;
setPlayable _newUnit;
selectPlayer _newUnit;

if (!isNull _backpack) then
{
	//Move backpack to new unit
	_oldUnit switchMove "ainvpknlmstpsnonwnondnon_3";
	_oldUnit action ["dropbag", _newUnit, (typeOf _backpack)];
	
	//Wait for backpack to move
	waitUntil { isNull (unitBackpack _oldUnit) };
};

deleteVehicle _oldUnit;

//Move new unit to original position
_newUnit setPosATL _position;

//Set new unit's camera to the original
player switchCamera _currentCamera;

[objNull, player, rSwitchMove,_currentAnim] call RE;

call dayz_meleeMagazineCheck;

//reveal all near objects.
{player reveal _x} forEach (nearestObjects [getPosATL player, ["AllVehicles","WeaponHolder","Land_A_tent","BuiltItems"], 75]);
//All is arbitrary and will need to be changed to ["AllVehicles","WeaponHolder","Land_A_tent"] ++ others (stashes etc.)