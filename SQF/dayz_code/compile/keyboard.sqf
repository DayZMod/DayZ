// (c) facoptere@gmail.com, licensed to DayZMod for the community

#include "\ca\editor\Data\Scripts\dikCodes.h"

_dikCode = _this select 1;
_shiftState = _this select 2;
_ctrlState = _this select 3;
_altState = _this select 4;
_handled = false;

if (isNil "keyboard_keys") then {
    _deadcheck = { // ESCAPE
//        call player_forceSave;
//        _idd = uiNamespace getVariable "RscDisplayMPInterrupt";
//        if (isNil '_idd') then  {
//            createDialog 'RscDisplayMPInterrupt';
//        }
//        else { 
//            closeDialog 0;
//       };
        //keyboard_keys = nil;*/
        _handled = false;
    };
    _rifle = {
		2 call dz_fn_switchWeapon;
        _handled = true;
    };
    _pistol = {
		3 call dz_fn_switchWeapon;
        _handled = true;
    };
    _melee = {
		4 call dz_fn_switchWeapon;
        _handled = true;
    };
    _throwable = { // select next non empty throwable weapon
        if (vehicle player == player) then {
            _ammo_throwable = [];
            _muzzles_throwable = [];
            _weapon_throwable = [];
            {
                _weapon = _x;
                _muzzles = getArray(configFile >> "cfgWeapons" >> _weapon >> "muzzles");
                if (count _muzzles == 0) then { _muzzles = [_weapon ]; };
                {
                    _muzz = _x;
                    {
                        if (_x in magazines player) then {
                            _ammo_throwable set [ count _ammo_throwable, getText(configFile >> "cfgMagazines" >> _x >> "ammo") ];
                            _muzzles_throwable set [ count _muzzles_throwable, _muzz ];
                            _weapon_throwable set [ count _weapon_throwable, _weapon ];
                        };                      
                    } forEach getArray(configFile >> "cfgWeapons" >> _weapon >> _muzz >> "magazines");
                } forEach _muzzles;
            } forEach [ "Throw"];

            _magCount = count _ammo_throwable;
            if (_magCount > 0) then {
                if (isNil "KB_CurrentThrowable") then { KB_CurrentThrowable = -1; };
                _currentAmmo = (weaponState player) select 3;       
                _idx = _ammo_throwable find _currentAmmo;
                if (_idx >= 0) then { KB_CurrentThrowable = _idx; };
                KB_CurrentThrowable = (KB_CurrentThrowable + 1) mod _magCount;
                player selectWeapon (_muzzles_throwable select KB_CurrentThrowable);
                _handled = true;
            };
        };
    };
    _gear = {
        if ((vehicle player != player) and !_shiftState and !_ctrlState and !_altState && !dialog) then {
            createGearDialog [player, "RscDisplayGear"];
            _handled = true;
        }
        else { if ((vehicle player == player) and (speed vehicle player > 0)) then {
            //[objNull, player, rSwitchMove,""] call RE;
            _handled = true;
        };};
    };
    _turbo = {
        if (vehicle player == player) then {
            [objNull, player, rSwitchMove,""] call RE;
            _handled = true;
        };  
    };
    _forcesave = {
        dayz_lastCheckBit = diag_ticktime;
        call player_forceSave;
    };
    _forcesave2 = {
        if ((!isNull (findDisplay 106)) OR dialog) then {
            call player_forceSave;          
        };
    };
    _drop = {
        force_dropBody = true;
    };
    _interrupt = {
        r_interrupt = true;
    };
    // TODO: left/right, when gear open: onKeyDown = "[_this,'onKeyDown',0,107,0,107] execVM '\z\addons\dayz_code\system\handleGear.sqf'";
    _noise = {
        if (diag_ticktime - dayz_lastCheckBit > 10) then {
            dayz_lastCheckBit = diag_ticktime;
            [player,20,true,(getPosATL player)] call player_alertZombies;
        };
    };
    _journal = {
        if (!dayz_isSwimming and !dialog) then {
            [player,4,true,(getPosATL player)] call player_alertZombies;
            createDialog "horde_journal_front_cover";
        };
        _handled = true;
    };

    _build_left = {
        // fence construction
        if (0 != count Dayz_constructionContext) then {
            _angleRef = Dayz_constructionContext select 1;
            _dir = _angleRef - (getDir player) -5;
            if (_dir > 180) then {_dir = _dir - 360}; 
            if (_dir < -180) then {_dir = _dir + 360};
            if ( _dir > -75) then {
                _new = floor((_angleRef - 5)/5)*5;
                Dayz_constructionContext set [ 1, _new]; // favorite angle
                r_interrupt = true;
            };
            _handled = true;
        };
        // tents and stash construction
        _object = player getVariable ["constructionObject", objNull];
        if (!isNull _object) then {
            _dir = getDir _object - 3;
            _object setDir _dir;
            _handled = true;
        };
        dayz_dodge = true;
    };
    _build_right = {
        if (0 != count Dayz_constructionContext) then {
            _angleRef = Dayz_constructionContext select 1;
            _dir = _angleRef - (getDir player) +5;
            if (_dir > 180) then { _dir = _dir - 360; }; 
            if (_dir < -180) then { _dir = _dir + 360; };
            if (_dir < 75) then {
                _new = ceil((_angleRef + 5)/5)*5;
                Dayz_constructionContext set [ 1, _new]; // favorite angle
                r_interrupt = true;
            };
            _handled = true;
        };
        // tents and stash construction
        _object = player getVariable ["constructionObject", objNull];
        if (!isNull _object) then {
            _dir = getDir _object + 3;
            _object setDir _dir;
            _handled = true;
        };
        dayz_dodge = true;
    };

    _build_camOnOff = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_buildCamera.sqf";

    _build_str8OnOff = {
        if (0 != count Dayz_constructionContext) then {
            Dayz_constructionContext set [ 5, !(Dayz_constructionContext select 5) ];
            _handled = true; // used by keyboard.sqf
            r_interrupt = true;
        };
    };

    _block = {
        _handled = true;
    };
    _addArray = {
        {
            keyboard_keys set [_x, _this select 1];
        } forEach (_this select 0);
    };

    keyboard_keys = [];
    keyboard_keys resize 256;
    [[DIK_ESCAPE], _deadcheck] call _addArray;
    [[DIK_1], _rifle] call _addArray;
    [[DIK_2], _pistol] call _addArray;
    [[DIK_3], _melee] call _addArray;
    //[[DIK_4], _throwable] call _addArray;
    [actionKeys "Gear", _gear] call _addArray;
    [actionKeys "Prone", _drop] call _addArray;
    [actionKeys "Crouch", _drop] call _addArray;
    [actionKeys "MoveLeft", _interrupt] call _addArray;
    [actionKeys "MoveRight", _interrupt] call _addArray;
    [actionKeys "MoveForward", _interrupt] call _addArray;
    [actionKeys "MoveBack", _interrupt] call _addArray;
    [actionKeys "PushToTalk", _noise] call _addArray;
    [actionKeys "VoiceOverNet", _noise] call _addArray;
    [actionKeys "PushToTalkDirect", _noise] call _addArray;
    [actionKeys "Chat", _noise] call _addArray;
    [actionKeys "User20", _journal] call _addArray;
    [actionKeys "Diary", _journal] call _addArray;
    [actionKeys "NetworkStats", _journal] call _addArray;
    //[actionKeys "Turbo", _turbo] call _addArray;
    //[[DIK_F4, DIK_TAB, DIK_DELETE], _forcesave] call _addArray;
    //[[DIK_F4, DIK_RMENU, DIK_LMENU,DIK_LSHIFT,DIK_RSHIFT,DIK_ESCAPE], _forcesave2] call _addArray;
    [actionKeys "LeanLeft", _build_left ] call _addArray;
    [actionKeys "LeanRight", _build_right ] call _addArray;
    [actionKeys "PersonView", _build_camOnOff ] call _addArray; // Camera Mode
    [actionKeys "GetOver", _build_str8OnOff ] call _addArray; // V
//  [[DIK_NUMPAD7], _rotate_left] call _addArray;
//  [[DIK_NUMPAD9], _rotate_right] call _addArray;
    [actionKeys "ForceCommandingMode", _block] call _addArray;
    [[  DIK_F9, DIK_F10, DIK_F11, 
        DIK_F8,DIK_F7,DIK_F6,DIK_F5,DIK_F4,
        DIK_F3,DIK_F2,DIK_F1,DIK_0,DIK_9,
        DIK_8,DIK_7,DIK_6,DIK_5,DIK_4], _block] call _addArray;
    if (serverCommandAvailable "#kick") then {
        [[DIK_F12], gcam_onoff] call _addArray; // GCAM: F12 to start (for admins only)
    }
    else {
        [[DIK_F12], _block] call _addArray;
    };

    (findDisplay 46) displayRemoveAllEventHandlers "KeyUp";
    (findDisplay 46) displayRemoveAllEventHandlers "KeyDown";
    (findDisplay 46) displayAddEventHandler ["KeyDown", preprocessFileLineNumbers (MISSION_ROOT+'keyboard.sqf')];
    //diag_log [diag_ticktime, __FILE__, "eh reset" ];
};

if (r_player_unconsciousInputDisabled) exitWith {true};
_code = keyboard_keys select _dikCode;
if (!isNil "_code") then {
    call _code;
};

if (serverCommandAvailable "#kick") then {
    GCam_KD = _this; // GCAM: GCam_KD is the current pressed key
};

_handled