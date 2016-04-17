/* Gear ui event handlers and helper functions.

Author:
	Foxy
*/

#include "\dayz\dayz_code\util\util.hpp"
#include "\dayz\dayz_code\util\array.hpp"

//#define SEARCH_ENABLE_ADVANCED
#define SEARCH_RADIUS 3
#define SEARCH_CONTAINER "ReammoBox"
#define SEARCH_VEHICLE "AllVehicles"

#define IDC_CONTAINER_NAME 156
#define IDC_CLOSE_BACKPACK_BUTTON 158
#define IDC_LISTBOX 105

#define MONITOR_RATE 0.1

dz_fn_ui_gear_load =
{
	disableSerialization;
	
	uiNamespace setVariable ["dz_ui_gear", _this select 0];
	
	[_this, "onLoad"] call dz_fn_ui_gear_handleGear;
	
	_disp = _this select 0;
	
	//Remove all melee magazines
	false call dz_fn_meleeMagazines;
	
	//Hide slot count information
	for "_i" from 0 to 2 do
	{
		_disp displayCtrl (9001 + _i * 2) ctrlShow false;
		_disp displayCtrl (9002 + _i * 2) ctrlShow false;
	};
	
	#define GET_NEARBY_CONTAINERS() Array_Append(player nearObjects Array_New2(SEARCH_CONTAINER, SEARCH_RADIUS), player nearObjects Array_New2(SEARCH_VEHICLE, SEARCH_RADIUS))
	uiNamespace setVariable ["dz_ui_gear_monitor", [_this select 0, GET_NEARBY_CONTAINERS()] spawn dz_pc_ui_gear_monitor];
	
	// //Try to find the opened container
	// _container = _disp displayCtrl IDC_CONTAINER_NAME call dz_fn_ui_gear_findContainer;
	
	// if !isNull _container then
	// {
		// //Start monitor
		// uiNamespace setVariable ["dz_ui_gear_monitor", [_this select 0, _container] spawn dz_pc_ui_gear_monitor];
	// }
	// else
	// {
		// //Hide slot information
		// for "_i" from 0 to 2 do
		// {
			// _disp displayCtrl (9001 + _i * 2) ctrlShow false;
			// _disp displayCtrl (9002 + _i * 2) ctrlShow false;
		// };
	// };
};

dz_fn_ui_gear_unload =
{
	//Add all melee magazines;
	true call dz_fn_meleeMagazines;
	
	call player_forceSave;
	
	terminate (uiNamespace getVariable ["dz_ui_gear_monitor", scriptNull]);
};

// dz_fn_ui_gear_findContainer =
// #ifdef SEARCH_ENABLE_ADVANCED
// {
	// #define GET_NEARBY_CONTAINERS() Array_Append(player nearObjects Array_New2(SEARCH_CONTAINER, SEARCH_RADIUS), player nearObjects Array_New2(SEARCH_VEHICLE, SEARCH_RADIUS))
	
	// private "_container";
	// _container = cursorTarget;
	
	// //if ( (object is not null) AND (object is container) AND (name matches) )
	// if ( !isNull _container && { ( _container isKindOf SEARCH_CONTAINER || { _container isKindOf SEARCH_VEHICLE } ) && { getText (configFile >> "CfgVehicles" >> typeOf _container >> "displayName") == _this } } )
		// exitWith { _container };
	
	// //Find nearby containers where name matches
	// _container = Array_Where(GET_NEARBY_CONTAINERS(), { getText (configFile >> "CfgVehicles" >> typeOf _x >> "displayName") == _this });
	// if (count _container == 1) exitWith { _container select 0 };
	
	// objNull
// };
// #else
// {
	// private "_container";
	// _container = cursorTarget;
	
	// //if ( (object is not null) AND (object is container) AND (name matches) )
	// if ( !isNull _container && { ( _container isKindOf SEARCH_CONTAINER || { _container isKindOf SEARCH_VEHICLE } ) && { getText (configFile >> "CfgVehicles" >> typeOf _container >> "displayName") == _this } } )
		// exitWith { _container };
	
	// objNull
// };
// #endif

dz_pc_ui_gear_monitor =
{
	disableSerialization;
	
	_listbox = _this select 0 displayCtrl IDC_LISTBOX;
	if !Util_WaitUntil({lnbSize _listbox select 0 > 0}, 0.5) exitWith {};
	
	#define GET_NAME() ctrlText (_this select 0 displayCtrl IDC_CONTAINER_NAME);
	#define GET_DATA() Array_Select(Array_New(lnbSize _listbox), {_listbox lnbData [_foreachIndex, 1]});
	
	_container = [_this select 1, GET_NAME(), GET_DATA()] call dz_fn_ui_gear_findContainer;
	
	#undef GET_NAME
	#undef GET_DATA
	
	if isNull _container exitWith {};
	
	_maxima =
	[
		getNumber (_cfg >> "transportMaxWeapons"),
		getNumber (_cfg >> "transportMaxMagazines"),
		getNumber (_cfg >> "transportMaxBackpacks")
	];
	
	for "_i" from 0 to 2 do
	{
		_disp displayCtrl (9001 + _i * 2) ctrlShow true;
	};
	
	while { true } do
	{
		_items = _container call dz_fn_ui_gear_countCargo;
		
		for "_i" from 0 to 2 do
		{
			_disp displayCtrl (9002 + _i * 2) ctrlSetText str (_maxima select _i - (_items select _i));
		};
		
		uiSleep MONITOR_RATE;
	};
};

dz_fn_ui_gear_findContainer
{
	if (count (_this select 0) == 1) exitWith
	{
		if (getText (configFile >> "CfgVehicles" >> typeof (_this select 0 select 0) >> "displayName") == (_this select 1)) then
			{ _this select 0 select 0 }
		else
			{ objNull };
	};
	
	scopeName "root";
	private ["_result", "_cargo"];
	_result = objNull;
	
	{
		if (getText (configFile >> "CfgVehicles" >> typeof _x >> "displayName") == (_this select 1)) then
		{
			_cargo = Array_Append(Array_Append(getWeaponCargo _x select 0, getMagazineCargo _x select 0), getBackpackCargo _x select 0);
			
			if (count _cargo != count (_this select 2)) exitWith {};
			if !Array_All(_this select 2, {_x in _cargo}) exitWith {};
			
			_result = _x;
			breakTo "root";
		};
	}
	foreach (_this select 0);
	
	_result
};

dz_fn_ui_gear_countCargo =
{
	private ["_r", "_n"];
	_r = [0,0,0];
	
	_n = 0;
	{ _n = _n + _x } foreach getWeaponCargo _this select 1;
	_r set [0, _n];
	
	_n = 0;
	{ _n = _n + _x } foreach getMagazineCargo _this select 1;
	_r set [1, _n];
	
	_n = 0;
	{ _n = _n + _x } foreach getBackpackCargo _this select 1;
	_r set [2, _n];
	
	_r
};

dz_fn_ui_gear_openBackpack =
{
	if isNull unitBackpack player exitWith {};
	
	[player, "open_backpack", 0, false, 5] call dayz_zombieSpeak;
};

dz_fn_ui_gear_closeBackpack =
{
	//Active close backpack button
	ctrlActivate (_this select 0 displayCtrl IDC_CLOSE_BACKPACK_BUTTON);
	
	[player, "open_backpack", 0, false, 5] call dayz_zombieSpeak;
};