private ["_attachment","_weapon","_replacement","_freeSlots","_freeSlotsCount","_onLadder","_weaponDisplayName","_attachDisplayName"];

_array = _this;
_attachment = _this select 0;
_weapon = _this select 1;
_replacement = _this select 2;
_state = animationState player;

_freeSlots = [player] call BIS_fnc_invSlotsEmpty;
_freeSlotsCount = _freeSlots select 4;
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;

_weaponDisplayName = getText (configFile >> "CfgWeapons" >> _weapon >> "displayName");
_attachDisplayName = getText (configFile >> "CfgMagazines" >> _attachment >> "displayName"); 

if (_freeSlotsCount < 1) exitWith {
	closeDialog 0;
	cutText ["You don't have enough room in your inventory", "PLAIN DOWN"];
};
if (_onLadder) exitWith {
	closeDialog 0;
	cutText ["You can't remove attachments when climbing a ladder.", "PLAIN DOWN"];
};

if (player hasWeapon _weapon) then {
	//cutText [format["Removing %1 from %2",_attachDisplayName,_weaponDisplayName],"PLAIN DOWN"];
	private ["_ammo","_currentMagazine"];
	
	
	//Remove Weapon
	player removeWeapon _weapon;
	//Add Magazine attachment
	player addMagazine _attachment;	
	//Add Replaced Weapon
	player addWeapon _replacement;
	
	if ( (primaryWeapon player) != "") then {
		_type = primaryWeapon player;
		_muzzles = getArray(configFile >> "cfgWeapons" >> _type >> "muzzles");
		if ((_muzzles select 0) != "this") then {
			player selectWeapon (_muzzles select 0);
		} else {
			player selectWeapon _type;
		};
	};
	player switchMove _state;
	
	//cutText [format["You have successfully removed %1 from your %2.",_attachDisplayName,_weaponDisplayName],"PLAIN DOWN"];
}; 