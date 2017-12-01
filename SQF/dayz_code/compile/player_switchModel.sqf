private ["_isArray","_class","_position","_dir","_currentAnim","_currentCamera","_playerUID","_weapons","_magazines","_primweapon","_secweapon","_newBackpackType","_backpackWpn","_backpackMag","_currentWpn","_muzzles","_display","_oldUnit","_newUnit","_oldBackpack","_backpackmag","_rndx","_rndy","_playerObjName","_wpnType","_ismelee","_oldGroup"];
_isArray = typeName _this == "ARRAY";
_class = if (_isArray) then {_this select 0} else {_this};

disableSerialization;

//Old location system causes issues with players getting damaged during movement.
//_position = getPosATL player;
//New system testing needed.
_position = player modeltoWorld [0,0,0];
_dir = getDir player;

//get current player stats
_currentAnim = animationState player;
_currentCamera = cameraView;
_playerUID = getPlayerUID player;

//BackUp Weapons and Mags
_weapons = weapons player;
_magazines = call player_countMagazines; //magazines player;
if ((_playerUID == dayz_playerUID) && (count _magazines == 0) && (count (magazines player) > 0)) exitWith {localize "str_actions_switchmodel_fail" call dayz_rollingMessages;};

_primweapon = primaryWeapon player;
_secweapon = secondaryWeapon player;

if (!(_primweapon in _weapons) && _primweapon != "") then {
	_weapons set [count _weapons, _primweapon];
};

if (!(_secweapon in _weapons) && _secweapon != "") then {
	_weapons set [count _weapons, _secweapon];
};

//BackUp Backpack
dayz_myBackpack = unitBackpack player;
_newBackpackType = typeOf dayz_myBackpack;
if (_newBackpackType != "") then {
	_backpackWpn = getWeaponCargo unitBackpack player;
	_backpackMag = getMagazineCargo unitBackpack player;
};

_currentWpn = currentWeapon player;
_muzzles = getArray(configFile >> "cfgWeapons" >> _currentWpn >> "muzzles");
if (count _muzzles > 1) then {_currentWpn = currentMuzzle player;};

//Secure Player for Transformation
//player setPosATL dayz_spawnPos;

//Prevent client crash
_display = findDisplay 106;
_display closeDisplay 0;

//BackUp Player Object
_oldUnit = player;
_oldGroup = group player;

/***********************************/
//DONT USE player AFTER THIS POINT
/***********************************/

//Create New Character
//[player] joinSilent grpNull;
_group = createGroup west;
_newUnit = _group createUnit [_class,respawn_west_original,[],0,"NONE"];
if (_isArray) then {
	_newUnit allowDamage false;
	mydamage_eh1 = _newUnit AddEventHandler ["HandleDamage", {False}];
	_newUnit setVariable ["characterID",(_this select 1),true];
	_newUnit setVariable ["humanity",(_this select 2),true];
};
_newUnit setDir _dir;
{_newUnit removeMagazine _x;} count magazines _newUnit;
removeAllWeapons _newUnit;

//Equip New Character
{
	if (typeName _x == "ARRAY") then {_newUnit addMagazine [_x select 0,_x select 1] } else { _newUnit addMagazine _x };
} count _magazines;

{_newUnit addWeapon _x;} count _weapons;

//Check and Compare it
if (str(_weapons) != str(weapons _newUnit)) then {
	//Get Differecnce
	{_weapons = _weapons - [_x];} count (weapons _newUnit);

	//Add the Missing
	{_newUnit addWeapon _x;} count _weapons;
};

if (_primweapon != (primaryWeapon _newUnit)) then {
	_newUnit addWeapon _primweapon;
};

if (_secweapon != (secondaryWeapon _newUnit) && _secweapon != "") then {
	_newUnit addWeapon _secweapon;
};

//Add and Fill BackPack
if (!isNil "_newBackpackType" && {_newBackpackType != ""}) then {
	_newUnit addBackpack _newBackpackType;
	//_oldBackpack = dayz_myBackpack;
	dayz_myBackpack = unitBackpack _newUnit;
	
	[_backpackWpn,_backpackmag,[],dayz_myBackpack] call fn_addCargo;
};

//Debug Message
/*
diag_log "Swichtable Unit Created. Equipment:";
diag_log format["Weapons: %1",weapons _newUnit];
diag_log format["Magazines: %1",magazines _newUnit];
diag_log format["Backpack weapons: %1",getWeaponCargo unitBackpack _newUnit];
diag_log format["Backpack magazines: %1",getMagazineCargo unitBackpack _newUnit];
*/

//Make New Unit Playable (1 of these 3 commands causes crashes with gear dialog open)
//_oldUnit setPosATL [_position select 0 + cos(_dir) * 2, _position select 1 + sin(_dir) * 2, _position select 2];
addSwitchableUnit _newUnit;
setPlayable _newUnit;
selectPlayer _newUnit;

//Switch the units
_rndx = floor(random 100);
_rndy = floor(random 100);
_oldUnit setPosATL [(respawn_west_original select 0) + _rndx, (respawn_west_original select 1) + _rndy, 0];
//Move new unit to correct location
_newUnit setPosATL _position;
if (surfaceIsWater respawn_west_original) then {_newUnit call fn_exitSwim;};

//Clear and delete old Unit
removeAllWeapons _oldUnit;
{_oldUnit removeMagazine _x;} count magazines _oldUnit;

player switchCamera _currentCamera;
if (_currentWpn != "") then {_newUnit selectWeapon _currentWpn;};
[objNull, player, rSwitchMove, _currentAnim] call RE;
//dayz_originalPlayer attachTo [_newUnit];
player disableConversation true;
player setVariable ["BIS_noCoreConversations",true];

//	_playerUID=getPlayerUID player;
//	_playerObjName = format["player%1",_playerUID];
//	call compile format["%1 = player;",_playerObjName];
//	publicVariable _playerObjName;

call dayz_meleeMagazineCheck;
{player reveal _x} count (nearestObjects [_position,["AllVehicles","WeaponHolder","Land_A_tent","BuiltItems"],75]);

diag_log format["WARNING --- SWITCH UNIT: old[%1,%2] - new[%3,%4]",_oldUnit,_oldGroup,player,group player];

if !(isNull _oldUnit) then {deleteVehicle _oldUnit; diag_log format["SwitchModel - Removing Player %1",_oldUnit]; };
if (count (units _oldGroup) == 0) then {deleteGroup _oldGroup; diag_log format["SwitchModel - Removing group %1",_oldGroup];};
