#include "\dayz\dayz_code\util\util.hpp"
#include "\dayz\dayz_code\util\player.hpp"

//minimum distance to backpack
#define MIN_DISTANCE 3
//minimum distance to other players
#define SAFE_DISTANCE 10
#define DROP_TIMEOUT 5

_bag = _this select 0;

//Too far to pick up
if (player distance _bag > MIN_DISTANCE) exitWith {};

if (count (player nearEntities [Player_BASE, SAFE_RADIUS]) > 0) exitWith
	{ localize "str_pickup_limit_4" call dz_fn_rollmsg };

if !isNull unitBackpack player then
{
	_old = unitBackpack player;
	player action ["PutBag", player];
	
	if Util_WaitUntil({isNull unitBackpack player}, DROP_TIMEOUT) then
	{
		_old setPosATL getPosATL _bag;
	};
};

player action ["TakeBag", _bag];

// _pickup =
// {
	// if !isNull unitBackpack player then
	// {
		// _old = unitBackpack player;
		// player action ["PutBag", player];
		
		// if Util_WaitUntil({isNull unitBackpack player}, DROP_TIMEOUT) then
		// {
			// _old setPosATL getPosATL _bag;
		// };
	// };
	
	// player action ["TakeBag", _bag];
// };

// //No players nearby
// if (count (player nearEntities [Player_BASE, SAFE_RADIUS]) == 0) exitWith
// {
	// call _pickup;
// }
// else
// {
	// //Start animation
	// player playActionNow "Put";
	
	// //Try to lock bag and exit on failure
	// if !Object_WaitLock(_bag) exitWith {};
	
	// call _pickup;
	
	// //Unlock bag
	// Object_Unlock(_bag);
// };