/*
This file defines event handlers and helper functions for displaying context menus for items in the gear UI,
with context menu items defined in the item config inside an ItemActions class.

Author:
	Foxy
*/

//#define EDITOR_DEBUG

#define STRINGIFY(x) #x

//Prevent local variable corruption when calling ItemActions conditions
#define SAFE_VAR(x) __dz_ui_contextMenu##x
#define SAFE_VAR_NAME(x) STRINGIFY(SAFE_VAR(x))

#define IDC_INTERACTION 6902



//width
dz_ui_contextMenu_w = getNumber (configFile >> "RscDisplayGear" >> "controls" >> "G_Interaction" >> "controls" >> "RscButton_1600" >> "w");

//height per item
dz_ui_contextMenu_h = getNumber (configFile >> "RscDisplayGear" >> "controls" >> "G_Interaction" >> "controls" >> "RscButton_1600" >> "h");

//base x
dz_ui_contextMenu_x = getNumber (configFile >> "RscDisplayGear" >> "controls" >> "G_GearItems" >> "x") - dz_ui_contextMenu_w * 0.2;

//base y
dz_ui_contextMenu_y = getNumber (configFile >> "RscDisplayGear" >> "controls" >> "G_GearItems" >> "y") - dz_ui_contextMenu_h * 0.5;



/* MouseButtonDown event handler for the gear slot icons. */
dz_fn_ui_contextMenu_open =
{
	disableSerialization;
	
	if (_this select 1 != 1) exitWith {};
	
	SAFE_VAR(_control) = _this select 0;
	SAFE_VAR(_display) = ctrlParent SAFE_VAR(_control);
	
	SAFE_VAR(_item) = nil;
	SAFE_VAR(_ammo) = nil; // -2: carry slot, -1: backpack 0: weapon, >0: magazine
	
	//If carry slot
	if (str SAFE_VAR(_control) == "Control #1209") then
	{
		SAFE_VAR(_item) = dz_onBack;
		SAFE_VAR(_ammo) = -2;
	}
	else
	{
		SAFE_VAR(_item) = gearSlotData SAFE_VAR(_control);
		SAFE_VAR(_ammo) = if (str SAFE_VAR(_control) == "Control #108" && { SAFE_VAR(_item) == typeOf unitBackpack player } ) then { -1 } else { gearSlotAmmoCount SAFE_VAR(_control) };
	};
	
	if (SAFE_VAR(_item) == "") exitWith {};
	SAFE_VAR(_cfg) = configFile >> if (SAFE_VAR(_ammo) == -1) then { "CfgVehicles" } else { if (SAFE_VAR(_ammo) > 0) then { "CfgMagazines" } else { "CfgWeapons" } } >> SAFE_VAR(_item);
	
#ifndef EDITOR_DEBUG
	SAFE_VAR(_itemActions) = SAFE_VAR(_cfg) >> "ItemActions";
	if (!isClass SAFE_VAR(_itemActions)) exitWith {};
#endif
	
	SAFE_VAR(_itemName) = getText (SAFE_VAR(_cfg) >> "displayName");
	dz_ui_contextMenu_arguments = [SAFE_VAR(_item), SAFE_VAR(_ammo) max 0, SAFE_VAR(_ammo) == -2];
	
	SAFE_VAR(_actionIndex) = 0;
	
	//For each item action
	for SAFE_VAR_NAME(_i) from 0 to
#ifdef EDITOR_DEBUG
	1
#else
	count SAFE_VAR(_itemActions) - 1
#endif
	do
	{
	#ifndef EDITOR_DEBUG
		SAFE_VAR(_cfg) = SAFE_VAR(_itemActions) select SAFE_VAR(_i);
		SAFE_VAR(_text) = getText (SAFE_VAR(_cfg) >> "text");
	#endif
		
		SAFE_VAR(_actionControl) = SAFE_VAR(_display) displayCtrl (1600 + SAFE_VAR(_actionIndex));
		
		//Check the action condition
	#ifdef EDITOR_DEBUG
		if (SAFE_VAR(_actionIndex) == 0) then
	#else
		if (SAFE_VAR(_cfg) call dz_fn_ui_contextMenu_condition) then
	#endif
		{
		#ifdef EDITOR_DEBUG
			#define GET_ACTION_CODE(cfg) "systemChat str _this"
			#define GET_UPDATE_CODE(cfg) "_this select 0 call dz_fn_ui_contextMenu_close"
		#else
			#define GET_ACTION_CODE(cfg) getText (cfg >> "action")
			#define GET_UPDATE_CODE(cfg) if (getNumber(cfg >> "closeDisplay") == 1) then { "ctrlParent (_this select 0) closeDisplay 0" } else { "_this select 0 call dz_fn_ui_contextMenu_close" }
		#endif
			
			#define GET_ACTION(cfg) format ["%1; dz_ui_contextMenu_arguments call { %2 }", GET_UPDATE_CODE(cfg), GET_ACTION_CODE(cfg)]
			
			SAFE_VAR(_actionControl) ctrlSetEventHandler ["ButtonClick", GET_ACTION(SAFE_VAR(_cfg))];
			SAFE_VAR(_actionControl) ctrlEnable true;
		}
		else
		{
			SAFE_VAR(_actionControl) ctrlEnable false;
		};
		
	#ifdef EDITOR_DEBUG
		SAFE_VAR(_actionControl) ctrlSetText format ["Action %1", SAFE_VAR(_i)];
	#else
		SAFE_VAR(_actionControl) ctrlSetText format [SAFE_VAR(_text), SAFE_VAR(_itemName)];
	#endif
		SAFE_VAR(_actionControl) ctrlShow true;
		
		SAFE_VAR(_actionIndex) = SAFE_VAR(_actionIndex) + 1;
	};
	
	//Hide unused context menu entries
	for SAFE_VAR_NAME(_i) from SAFE_VAR(_actionIndex) to 9 do
	{
		SAFE_VAR(_actionControl) = SAFE_VAR(_display) displayCtrl (1600 + SAFE_VAR(_i));
		SAFE_VAR(_actionControl) ctrlShow false;
	};
	
	SAFE_VAR(_container) = SAFE_VAR(_display) displayCtrl 6902;
	SAFE_VAR(_container) ctrlShow true;
	ctrlSetFocus SAFE_VAR(_container);
	SAFE_VAR(_container) ctrlSetPosition [(_this select 2) + dz_ui_contextMenu_x, (_this select 3) + dz_ui_contextMenu_y, dz_ui_contextMenu_w, SAFE_VAR(_actionIndex) * dz_ui_contextMenu_h];
	SAFE_VAR(_container) ctrlCommit 0;
};



/* Executes a handler prior to loading a context menu item.

A condition can be specified in an ItemAction entry
to be executed before showing the context menu item.
The condition script should return return a boolean
indicating whether the action should be skipped.

For example:
	class ItemActions
	{
		class MyAction
		{
			text = "Do something";
			action = "_this call my_awesome_function";
			condition = "player hasWeapon 'SomeWeapon'"; //action is only shown if player has the weapon <SomeWeapon>.
		};
	};

Parameters:
	config	ItemAction entry
*/
dz_fn_ui_contextMenu_condition =
{
	//If no condition is defined, exit.
	if (!isText (_this >> "condition")) exitWith { true };
	
	//Call the condition script.
	SAFE_VAR(_result) = dz_ui_contextMenu_arguments call compile getText (SAFE_VAR(_cfg) >> "condition");
	
	//If the condition script returned nothing, interpret as true.
	if (isNil SAFE_VAR_NAME(_result)) exitWith { true };
	
	//If the condition script returned something other than a boolean, interpret as true.
	if (typeName SAFE_VAR(_result) != typeName true) exitWith { true };
	
	SAFE_VAR(_result)
};



/* Event handler for mouse movement inside the context menu container control. */
dz_fn_ui_contextMenu_mouseMoving =
{
	//If mouse is over the container, exit.
	if (_this select 3) exitWith {};
	
	//Check if mouse is over the container after all.
	//Due to a bug the handler is executed slightly after closing the context menu by clicking one of the buttons.
	//If a new context menu is opened quickly enough, the handler will incorrectly close the new context menu.
	if ([[_this select 1, _this select 2], ctrlPosition (_this select 0)] call dz_fn_ui_contextMenu_isInside) exitWith {};
	
	//Close the context menu.
	_this call dz_fn_ui_contextMenu_close;
};



/* Checks if the specified 2D coordinates are inside the specified rectangle.

Parameters:
	[x, y] 2D coordinates
	[x, y, w, h] 2D coordinates, width and height
*/
dz_fn_ui_contextMenu_isInside =
{
	(_this select 0 select 0) > (_this select 1 select 0) &&
	(_this select 0 select 1) > (_this select 1 select 1) &&
	(_this select 0 select 0) < (_this select 1 select 0) + (_this select 1 select 2) &&
	(_this select 0 select 1) < (_this select 1 select 1) + (_this select 1 select 3)
};



/* Closes the item context menu.

Parameters:
	control		context menu button
*/
dz_fn_ui_contextMenu_close =
{
	disableSerialization;
	
	private "_control";
	_control = ctrlParent _this displayCtrl IDC_INTERACTION;
	_control ctrlSetPosition [0, 0, 0, 0];
	_control ctrlShow false;
	_control ctrlCommit 0;
};