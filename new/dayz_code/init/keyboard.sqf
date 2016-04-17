#include "\dayz\dayz_code\util\player.hpp"
#include "\ca\editor\data\scripts\dikcodes.h"

#define STRINGIFY(x) #x
#define IDD_MAIN 46

if isNil "dz_keyboard_disable" then
	{ dz_keyboard_disable = false };

private "_handler";
_handler = STRINGIFY(if dz_keyboard_disable exitWith {true}; _handled = false; _this call (%1 select (_this select 1)); _handled)

[format [_handler, "dz_keyboard_down"], format [_handler, "dz_keyboard_up"]] spawn
{
//	waitUntil { dz_preloadFinished };
	waitUntil { !isNull findDisplay IDD_MAIN };
	findDisplay IDD_MAIN displayRemoveAllEventHandlers "KeyDown";
	findDisplay IDD_MAIN displayRemoveAllEventHandlers "KeyUp";
	findDisplay IDD_MAIN displayAddEventHandler ["KeyDown", _this select 0];
	findDisplay IDD_MAIN displayAddEventHandler ["KeyUp", _this select 1];
};

dz_fn_keyboard_init =
{
	dz_keyboard_down = [];
	dz_keyboard_down resize 0x100;
	dz_keyboard_up = [];
	dz_keyboard_up resize 0x100;

	private ["_handler", "_setHandler", "_setKeyDownHandler", "_setKeyUpHandler"];

	_setHandler =
	{
		{
			if (_x < 1 || _x >= 0x100) then
				{ assert false }
			else
				{ _this select 0 set [_x, _this select 2] };
		}
		foreach (_this select 1);
	};

	_setKeyDownHandler = { [dz_keyboard_down, _this select 0, _this select 1] call _setHandler };
	_setKeyUpHandler = { [dz_keyboard_up, _this select 0, _this select 1] call _setHandler };



	//Quick switch keys
	[[DIK_1], {2 call dz_fn_switchWeapon; _handled = true}] call _setKeyDownHandler;
	[[DIK_2], {3 call dz_fn_switchWeapon; _handled = true}] call _setKeyDownHandler;
	[[DIK_3], {4 call dz_fn_switchWeapon; _handled = true}] call _setKeyDownHandler;

	//Gear inside vehicles
	_handler = { if (!Player_IsInVehicle() || {_this select 2 || {_this select 3 || {_this select 4}}}) exitWith {}; createGearDialog [player, "RscDisplayGear"]; _handled = true; };
	[actionKeys "Gear", _handler] call _setKeyDownHandler;

	//Action interrupt
	_handler = dz_fn_action_interrupt;
	[actionKeys "Stand", _handler] call _setKeyDownHandler;
	[actionKeys "Crouch", _handler] call _setKeyDownHandler;
	[actionKeys "Prone", _handler] call _setKeyDownHandler;
	[actionKeys "MoveForward", _handler] call _setKeyDownHandler;
	[actionKeys "MoveBack", _handler] call _setKeyDownHandler;
	[actionKeys "MoveLeft", _handler] call _setKeyDownHandler;
	[actionKeys "MoveRight", _handler] call _setKeyDownHandler;

	//Journal
	_handler = { if dialog exitWith {}; createDialog "RscDayzJournal"; _handled = true; };
	[actionKeys "Diary", _handler] call _setKeyDownHandler;
	[actionKeys "NetworkStats", _handler] call _setKeyDownHandler;

	//Build
	[actionKeys "LeanLeft", {_handled = _this call dz_fn_build_beginRotLeft}] call _setKeyDownHandler;
	[actionKeys "LeanLeft", {_handled = _this call dz_fn_build_endRotLeft}] call _setKeyUpHandler;
	[actionKeys "LeanRight", {_handled = _this call dz_fn_build_beginRotRight}] call _setKeyDownHandler;
	[actionKeys "LeanRight", {_handled = _this call dz_fn_build_endRotRight}] call _setKeyUpHandler;

	//Blocked keys
	_handler = {_handled = true};
	[actionKeys "ForceCommandingMode", _handler] call _setKeyDownHandler;
	[[DIK_F1, DIK_F2, DIK_F3, DIK_F4, DIK_F5, DIK_F6, DIK_F7, DIK_F8, DIK_F9, DIK_F10, DIK_F11, DIK_F12], _handler] call _setKeyDownHandler;
};

call dz_fn_keyboard_init;