/* Handles the loading screen when joining the game.
Message and progress are passed in as references for the purpose of dependency injection.
The value of each reference can then be modified by other threads without the use of global variables.

Parameters:
	string*		message
	scalar*		progress
	bool*		interrupt

Author:
	Foxy
*/

#include "\dayz\dayz_code\util\reference.hpp"

#define SLEEP_TIME 0.2
#define TIMEOUT 120

#define MESSAGE Ref_Get(_this select 0)
#define PROGRESS Ref_Get(_this select 1)
#define INTERRUPT Ref_Get(_this select 2)

disableSerialization;

startLoadingScreen ["","RscDisplayLoadCustom"];
progressLoadingScreen 0;

Ref_Set(_this select 1, 0);

_start = diag_tickTime;
_display = uiNameSpace getVariable "BIS_loadingScreen";
_messageControl = _display displayCtrl 8400;
_timerControl = _display displayCtrl 102;
_failMessage = nil;

while {PROGRESS < 1} do
{
	_elapsed = diag_tickTime - _start;
	
	if (_elapsed > TIMEOUT) exitWith
	{
		_failMessage = "Login timed out."
	};
	
	if INTERRUPT exitWith
	{
		_failMessage = MESSAGE;
	};
	
	progressLoadingScreen PROGRESS;
	_messageControl ctrlSetText MESSAGE;
	_timerControl ctrlSetText str floor _elapsed;
	
	uiSleep SLEEP_TIME;
};

//Login failed
if (!isNil "_failMessage") exitWith
{
	player enableSimulation false;
	
	//Display fail message for x seconds and count down
	for "_i" from 5 to 1 step -1 do
	{
		_messageControl ctrlSetText _failMessage;
		_timerControl ctrlSetText str _i;
		progressLoadingScreen 1;
		uiSleep 1;
	};
	
	endMission "END1";
};

endLoadingScreen;