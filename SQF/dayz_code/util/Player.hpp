/* Defines functions working with the player object.

Author: Foxy
*/

#ifndef _INCLUDE_GUARD_PLAYER
#define _INCLUDE_GUARD_PLAYER

//True if player is on a ladder, otherwise false
#define Player_IsOnLadder() ((getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1)

//Gets the classname of the player's sidearm. nil if the player has no sidearm.
#define Player_GetSidearm() ({ if ((getNumber (configFile >> "CfgWeapons" >> _x >> "type")) == 2) exitWith { _x }; nil } foreach weapons player)
	
#endif