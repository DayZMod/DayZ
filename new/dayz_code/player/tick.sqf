/* // OLD
disableSerialization;

#include "z\addons\dayz_code\util\math.hpp"

#define SLEEP_TIME 1

#define DELTA_TIME (_this select 0)
#define DISTANCE_MOVED (_this select 1)

private ["_timers", "_time", "_deltaTime", "_position", "_distanceMoved"];
_timers = [];

//Blood
_timers set [count _timers, [0, 1,
{
	
}]];

//reset OpenTarget variable if the timer has run out.
_timers set [count _timers, [0, 30,
{
	if (OpenTarget_Time > 0 && {diag_tickTime - OpenTarget_Time >= dayz_OpenTarget_TimerTicks}) then
	{
		player setVariable ["OpenTarget",false,true];
	};
}]];

//digest food
_timers set [count _timers, [0, 60,
{
	if (r_player_foodstack > 0) then { r_player_foodstack = r_player_foodstack - 1; };
}]];

//Count animals and zombies
_timers set [count _timers, [-300, 300,
{
	dayz_currentGlobalAnimals = count entities "CAAnimalBase";
	dayz_currentGlobalZombies = count entities "zZombie_Base";
}]];

//Sync medical data
_timers set [count _timers, [0, 30,
{
	[] spawn
	{
		PVDZ_playerMedicalSync = [player, player call player_sumMedical];
		publicVariableServer "PVDZ_playerMedicalSync";
	};
}]];

//Record check???????
_timers set [count _timers, [0, 8,
{
	private "_distance";
	//POSITION?
	_distance = dayz_myPosition distance player;
	if (_distance > 10) then {
		//Player has moved
		dayz_myPosition = getPosATL player;
		player setVariable["posForceUpdate",true,true];
		dayz_unsaved = true;
	};
}]];

//Hunger & thirst
_timers set [count _timers, [0, 0,
{
	dayz_hunger = dayz_hunger + DELTA_TIME *
		(player != vehicle player ? DISTANCE_MOVED * dayz_myLoad : 1) *
		(diag_ticktime - dayz_panicCooldown < 120 ? 2 : 1);
	dayz_hunger = dayz_hunger max SleepFood;
	
	if (dayz_hunger >= SleepFood && {r_player_blood < 10}) then
	{
		[player, "starve"] spawn player_death;
	};
	
	dayz_thirst = dayz_thirst + DELTA_TIME *
		(player != vehicle player ? DISTANCE_MOVED * dayz_myLoad : 1);
	dayz_hunger = dayz_thirst max SleepWater;
	
	if (dayz_thirst >= SleepWater && {r_player_blood < 10}) then
	{
		[player, "dehyd"] spawn player_death;
	};
}]];

_position = getPosATL player;

while {true} do
{
	sleep SLEEP_TIME;
	
	_distanceMoved = _position distance player;
	_position = getPosATL player;
	
	{
		_time = diag_tickTime;
		_deltaTime = _time - (_x select 0);
		if (_deltaTime > (_x select 1)) then
		{
			_x set [0, _time];
			[_deltaTime, _distanceMoved] call (_x select 2);
		};
	}
	foreach _timers;
};
*/

#include "\dayz\dayz_code\util\array.hpp"

#define TICK_RESOLUTION 0.5

/* Parameters:
	float		timer interval in seconds
	code		timer handler (parameters: any:context, float:delta time, float:total distance traveled)
	any			context (passed to handler) */
#define ADD_TIMER(interval, handler, context) Array_PushBack_Fast(dz_player_tick_timers, Array_New4(0, interval, handler, context))

dz_player_tick_timers = [];

dz_pc_player_tick =
{
	__pos = getPosATL player;
	__distance = 0;
	
	while {true} do
	{
		sleep TICK_RESOLUTION;
		
		__distance = __distance + (__pos distance player);
		__pos = getPosATL player;
		
		{
			__time = diag_tickTime;
			__deltaTime = __time - (_x select 0);
			
			if (__deltaTime > __x select 1) then
			{
				_x set [0, _time];
				[_x select 3, __deltaTime, __distance] call (_x select 2);
			};
		}
		foreach _this;
	};
};