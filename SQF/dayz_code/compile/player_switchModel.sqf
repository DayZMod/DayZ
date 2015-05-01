//private ["_class","_position","_dir","_group","_oldUnit","_newUnit","_currentWpn","_muzzles","_currentAnim","_playerUID","_weapons","_magazines","_primweapon","_secweapon","_newBackpackType","_backpackWpn","_backpackMag","_backpackWpnTypes","_backpackWpnQtys","_countr","_backpackmagTypes","_backpackmagQtys","_display","_createSafePos","_wpnType","_ismelee","_rndx","_rndy"];
private ["_class","_position","_dir","_currentAnim","_currentCamera","_playerUID","_weapons","_magazines","_primweapon","_secweapon","_newBackpackType","_backpackWpn","_backpackMag","_currentWpn","_muzzles","_display","_oldUnit","_newUnit","_oldBackpack","_backpackWpnTypes","_backpackWpnQtys","_countr","_backpackmagTypes","_backpackmagQtys","_backpackmag","_createSafePos","_rndx","_rndy","_playerObjName","_wpnType","_ismelee"];
_class = _this;

disableSerialization;
_position = getPosATL player;
_dir = getDir player;
_currentAnim = animationState player;
//_currentCamera = cameraView;

//Get PlayerID
	_playerUID = getPlayerUID player;

//BackUp Weapons and Mags
	_weapons = weapons player;
	_magazines = call player_countMagazines; //magazines player;

	if ( (_playerUID == dayz_playerUID) && (count _magazines == 0) && (count (magazines player) > 0 )) exitWith {cutText [localize "str_actions_switchmodel_fail", "PLAIN DOWN"]};


	//if ( count _magazines == 0 ) exitWith {cutText ["can't count magazines!", "PLAIN DOWN"]};

	_primweapon = primaryWeapon player;
	_secweapon = secondaryWeapon player;

	//Checks
	if(!(_primweapon in _weapons) && _primweapon != "") then {
		_weapons set [(count _weapons), _primweapon];
	};

	if(!(_secweapon in _weapons) && _secweapon != "") then {
		_weapons set [(count _weapons), _secweapon];
	};

//	if(count _magazines == 0) then {
//		_magazines = magazines player;
//	};

//BackUp Backpack
	dayz_myBackpack = unitBackpack player;
	_newBackpackType = (typeOf dayz_myBackpack);
	if(_newBackpackType != "") then {
		_backpackWpn = getWeaponCargo unitBackpack player;
		_backpackMag = getMagazineCargo unitBackpack player;
	};

//Get Muzzle
	_currentWpn = currentWeapon player;
	_muzzles = getArray(configFile >> "cfgWeapons" >> _currentWpn >> "muzzles");
	if (count _muzzles > 1) then {
		_currentWpn = currentMuzzle player;
	};

//Debug Message
//	diag_log "Attempting to switch model";
//	diag_log str(_weapons);
//	diag_log str(_magazines);
//	diag_log (str(_backpackWpn));
//	diag_log (str(_backpackMag));

//Secure Player for Transformation
	//player setPosATL dayz_spawnPos;

//Prevent client crash...
	_display = findDisplay 106;
	_display closeDisplay 0;

//BackUp Player Object
	_oldUnit = player;

/***********************************/
//DONT USE player AFTER THIS POINT
/***********************************/

//Create New Character
	//[player] joinSilent grpNull;
	_group = createGroup west;
	_newUnit = _group createUnit [_class,getMarkerPos "respawn_west",[],0,"NONE"];

	_newUnit setDir _dir;

//Clear New Character
	{_newUnit removeMagazine _x;} forEach magazines _newUnit;
	removeAllWeapons _newUnit;

//Equip New Charactar
	{
		if (typeName _x == "ARRAY") then {_newUnit addMagazine [_x select 0,_x select 1] } else { _newUnit addMagazine _x };
		//sleep 0.05;
	} forEach _magazines;

	{
		_newUnit addWeapon _x;
		//sleep 0.05;
	} forEach _weapons;

//Check and Compare it
	if(str(_weapons) != str(weapons _newUnit)) then {
		//Get Differecnce
		{
			_weapons = _weapons - [_x];
		} forEach (weapons _newUnit);

		//Add the Missing
		{
			_newUnit addWeapon _x;
			//sleep 0.2;
		} forEach _weapons;
	};

	if(_primweapon != (primaryWeapon _newUnit)) then {
		_newUnit addWeapon _primweapon;
	};

	if(_secweapon != (secondaryWeapon _newUnit) && _secweapon != "") then {
		_newUnit addWeapon _secweapon;
	};

//Add and Fill BackPack
	if (!isNil "_newBackpackType") then {
		if (_newBackpackType != "") then {
			_newUnit addBackpack _newBackpackType;
			//_oldBackpack = dayz_myBackpack;
			dayz_myBackpack = unitBackpack _newUnit;


			//Fill backpack contents
			//Weapons
			_backpackWpnTypes = [];
			_backpackWpnQtys = [];
			if (count _backpackWpn > 0) then {
				_backpackWpnTypes = _backpackWpn select 0;
				_backpackWpnQtys = _backpackWpn select 1;
			};
			_countr = 0;
			{
				dayz_myBackpack addWeaponCargoGlobal [_x,(_backpackWpnQtys select _countr)];
				_countr = _countr + 1;
			} forEach _backpackWpnTypes;
			//magazines
			_backpackmagTypes = [];
			_backpackmagQtys = [];
			if (count _backpackmag > 0) then {
				_backpackmagTypes = _backpackMag select 0;
				_backpackmagQtys = _backpackMag select 1;
			};
			_countr = 0;
			{
				dayz_myBackpack addmagazineCargoGlobal [_x,(_backpackmagQtys select _countr)];
				_countr = _countr + 1;
			} forEach _backpackmagTypes;
		};
	};
//Debug Message
	diag_log "Swichtable Unit Created. Equipment:";
	diag_log str(weapons _newUnit);
	diag_log str(magazines _newUnit);
	diag_log str(getWeaponCargo unitBackpack _newUnit);
	diag_log str(getMagazineCargo unitBackpack _newUnit);

//Make New Unit Playable (1 of these 3 commands causes crashes with gear dialog open)
	//_oldUnit setPosATL [_position select 0 + cos(_dir) * 2, _position select 1 + sin(_dir) * 2, _position select 2];
	addSwitchableUnit _newUnit;
	setPlayable _newUnit;
	selectPlayer _newUnit;

//Switch the units
	//_createSafePos = [(getMarkerPos "respawn_west"), 2, 100, 0, 1, 20, 0] call BIS_fnc_findSafePos;
	_createSafePos = getMarkerPos "respawn_west";
	_rndx = floor(random 100);
	_rndy = floor(random 100);
	_oldUnit setPosATL [(_createSafePos select 0) + _rndx, (_createSafePos select 1) + _rndy, 0];
	_newUnit setPosATL _position;

//Clear and delete old Unit
	removeAllWeapons _oldUnit;
	{_oldUnit removeMagazine _x;} forEach magazines _oldUnit;
	if !(isNull _oldUnit) then {deleteVehicle _oldUnit;};

//	player switchCamera = _currentCamera;
	if(_currentWpn != "") then {_newUnit selectWeapon _currentWpn;};
	[objNull, player, rSwitchMove,_currentAnim] call RE;
	//dayz_originalPlayer attachTo [_newUnit];
	player disableConversation true;

//	_playerUID=getPlayerUID player;
//	_playerObjName = format["player%1",_playerUID];
//	call compile format["%1 = player;",_playerObjName];
//	publicVariable _playerObjName;

	//melee check
	call dayz_meleeMagazineCheck;

	//reveal all near objects.
	{player reveal _x} forEach (nearestObjects [getPosATL player, ["AllVehicles","WeaponHolder","Land_A_tent","BuiltItems"], 75]);
	//All is arbitrary and will need to be changed to ["AllVehicles","WeaponHolder","Land_A_tent"] ++ others (stashes etc.)
