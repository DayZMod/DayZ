#include "\dayz\dayz_code\util\array.hpp"
#include "\dayz\dayz_code\util\dictionary.hpp"
#include "\dayz\dayz_code\util\queue.hpp"
#include "\dayz\dayz_code\util\mutex.hpp"
#include "\dayz\dayz_code\util\util.hpp"
#include "\dayz\dayz_code\util\player.hpp"

//#define EDITOR_DEBUG

#define OPTIONAL_PARAMETER(index, default) if (count _this > index) then { _this select index } else { default }

/* Register new action type.

Parameters:
	string		name	(Unique name used to invoke the action.)
	code		finish	(Executed when the player finishes the action. Return true to repeat.)
	code		begin	(Optional. Default: nothing. Executed when the player begins the action.)
	code		cancel	(Optional. Default: nothing. Executed when the player cancels the action.)
	string		action	(Optional. Default: "medic".)
*/
dz_fn_action_register =
{
	Dictionary_Add(dz_action_dictionary, _this select 0, Array_New5(OPTIONAL_PARAMETER(4, "medic"), OPTIONAL_PARAMETER(2, {}), OPTIONAL_PARAMETER(3, {}), _this select 1));
};

#ifdef EDITOR_DEBUG
if isNil "dz_action_debug_managers" then { dz_action_debug_managers = [] };
#endif

/* Add action to queue.

Parameters:
	string		name
	any			args
	bool		priority (optional)
*/
dz_fn_action =
{
	if Player_IsInVehicle() exitWith {};
	
	private "_action";
	_action = Dictionary_Get(dz_action_dictionary, _this select 0);
	if isNil "_action" exitWith {};
	
	if !Mutex_TryLock_Fast(dz_action_mutex) exitWith {};
	
	if (OPTIONAL_PARAMETER(2, false)) then
		{ Queue_Push(dz_action_queue, Array_New2(_action, _this select 1)) }
	else
		{ Queue_Enqueue(dz_action_queue, Array_New2(_action, _this select 1)) };
	
	if isNil "dz_action_manager" then
		{ dz_action_manager = 0 spawn dz_pc_action_manager };
	
#ifdef EDITOR_DEBUG
	if !(dz_action_manager in dz_action_debug_managers) then
		{ Array_PushBack_Fast(dz_action_debug_managers, dz_action_manager) };
#endif
	
	Mutex_Unlock(dz_action_mutex);
};



#define STRINGIFY(x) #x

//Prevent local variable corruption when calling handlers
#define SAFE_VAR(x) __dz_action_manager##x
#define SAFE_VAR_NAME(x) STRINGIFY(SAFE_VAR(x))

#define ACTION_ACTION 0
#define ACTION_BEGIN 1
#define ACTION_CANCEL 2
#define ACTION_FINISH 3

#define TIMEOUT 4

dz_action_dictionary = Dictionary_New();
dz_action_queue = Queue_New();
dz_action_mutex = Mutex_New();
dz_action_active = false;

//Manager procedure for the action queue
dz_pc_action_manager =
{
	scopeName "root";
	
	SAFE_VAR(_player) = objNull;
	SAFE_VAR(_handlers) = nil;
	
	while { true } do
	{
		//Wait until queue is not empty
		waitUntil { Queue_Count(dz_action_queue) > 0 };
		
		//Lock and retrieve next action
		Mutex_WaitLock(dz_action_mutex);
		SAFE_VAR(_action) = Queue_Dequeue(dz_action_queue);
		Mutex_Unlock(dz_action_mutex);
		
		//If player unit has changed then rehook event handlers
		if (player != SAFE_VAR(_player)) then
		{
			call dz_fn_action_unhook;
			SAFE_VAR(_player) = player;
			SAFE_VAR(_handlers) = call dz_fn_action_hook;
		};
		
		//Repeat as long as true is returned
		SAFE_VAR(_action) call dz_fn_action_execute;
		
		if Mutex_TryLock_Fast(dz_action_mutex) then
		{
			//If queue is empty, exit
			if (Queue_Count(dz_action_queue) == 0) then
			{
				//Unhook event handlers
				call dz_fn_action_unhook;
				
				//Reset manager reference
				dz_action_manager = nil;
				
				Mutex_Unlock(dz_action_mutex);
				breakTo "root";
			};
			
			Mutex_Unlock(dz_action_mutex);
		};
	};
};

//Do action
dz_fn_action_execute =
{
	private SAFE_VAR_NAME(_action);
	SAFE_VAR(_action) = _this select 0;
	SAFE_VAR(_args) = _this select 1;
	SAFE_VAR(_result) = true;
	
	//Find action animation
	SAFE_VAR(_cfgMoves) = getText (configFile >> "CfgVehicles" >> typeof player >> "moves");
	SAFE_VAR(_cfgActions) = getText (configFile >> SAFE_VAR(_cfgMoves) >> "States" >> animationState player >> "actions");
	dz_action_anim = getText (configFile >> SAFE_VAR(_cfgMoves) >> "Actions" >> SAFE_VAR(_cfgActions) >> SAFE_VAR(_action) select ACTION_ACTION);
	
	//If animation not found exit
	if (dz_action_anim == "") exitWith { assert false };
	
	//Event handlers need access to the action and args
	dz_action_action = SAFE_VAR(_action);
	dz_action_args = SAFE_VAR(_args);
	
	while { SAFE_VAR(_result) } do
	{
		//Reset state flags
		dz_action_started = false;
		dz_action_done = false;
		dz_action_interrupt = false;
		
		//Begin action
		Util_SleepFrame();
		dz_action_active = true;
	//	player playMoveNow dz_action_anim;
		player playActionNow (SAFE_VAR(_action) select ACTION_ACTION);
		
		//Wait until action is started or timeout
		if !Util_WaitUntil({dz_action_started}, TIMEOUT) exitWith
		{
			//Action failed to start in time
		#ifdef EDITOR_DEBUG
			systemChat "timeout";
		#endif
			
			//Disable any further event handlers
			dz_action_active = false;
			
			//If begin hasn't been executed then exit
			if !dz_action_started exitWith {};
			
			assert false;
			
			//TODO: figure out a way to run this unscheduled
			//If cancel or finish haven't been executed then execute cancel
			if (!dz_action_interrupt && !dz_action_done) then
				{ SAFE_VAR(_args) call (SAFE_VAR(_action) select ACTION_CANCEL) };
		};
		
		//Wait for action to finish
		waitUntil { !dz_action_active };
		
		SAFE_VAR(_result) = if dz_action_interrupt then { false } else { if isNil "dz_action_result" then { false } else { dz_action_result } };
		
		//If result is not bool then result = false
		if (typename SAFE_VAR(_result) != typename false) then
			{ SAFE_VAR(_result) = false };
	};
};

//Hook anim event handlers
dz_fn_action_hook =
{
	[
		SAFE_VAR(_player) addEventHandler ["AnimStateChanged", dz_fn_action_animStateChanged],
		SAFE_VAR(_player) addEventHandler ["AnimDone", dz_fn_action_animDone]
	]
};

//Unhook anim event handlers
dz_fn_action_unhook =
{
	if isNull SAFE_VAR(_player) exitWith {};
	SAFE_VAR(_player) removeEventHandler ["AnimStateChanged", SAFE_VAR(_handlers) select 0];
	SAFE_VAR(_player) removeEventHandler ["AnimDone", SAFE_VAR(_handlers) select 1];
};

dz_fn_action_animStateChanged =
{
	if (!dz_action_active || { dz_action_started || { _this select 1 != dz_action_anim}}) exitWith {};
	
	dz_action_started = true;
	
	dz_action_args call (dz_action_action select ACTION_BEGIN);
};

dz_fn_action_animDone =
{
	if (!dz_action_active || { !dz_action_started || { _this select 1 != dz_action_anim }}) exitWith {};
	
	dz_action_done = true;
	dz_action_active = false;
	
	dz_action_result = dz_action_args call (dz_action_action select ACTION_FINISH);
};

dz_fn_action_interrupt =
{
	if (!dz_action_active || { !dz_action_started }) exitWith {};
	
	dz_action_interrupt = true;
	dz_action_active = false;
	
	player switchMove format
	[
		"Amov%1Mstp%3%2Dnon",
		Player_GetStanceAnim(),
		Player_GetWeaponAnim(),
		["Snon", "Sras"] select (Player_GetWeaponAnim() == "Wnon")
	];
	
	player playActionNow "stop";
	
	dz_action_queue = Queue_New();
	
	dz_action_args call (dz_action_action select ACTION_CANCEL);
};