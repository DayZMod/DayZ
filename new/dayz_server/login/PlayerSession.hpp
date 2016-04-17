/*
class Player
{
	Mutex		Mutex;			//Used to lock the session for login or finalization.
	object		Ghost;			//Character left behind by an improperly disconnected player.
	scalar		GhostTime		//Set when player disconnects. Used to remove the ghost after x amount of time of inactivity.
	script		Controller;		//ghostController.sqf Temporary controller script assigned to the ghost character.
	boolean		Logout;			//Checked by both onPlayerDisconnect and the logout PV to see if the other has fired.
	//State		State;			//Ghost state i.e. food, drink, medical etc.
};
*/

#include "\z\addons\dayz_code\util\mutex.hpp"

#ifndef _INCLUDE_GUARD_PLAYER_SESSION
#define _INCLUDE_GUARD_PLAYER_SESSION

/*//Player is currently ingame
#define PlayerSession_State_PLAY 1
//Player is not ingame
#define PlayerSession_State_SAFE 2
//Player has disconnected improperly and the character is ingame
#define PlayerSession_State_GHOST 3*/

#define PlayerSession_New(uid) [uid, Mutex_New(), objNull, 0, scriptNull, false]

#define PlayerSession_GetUID(session) ((session) select 0)

#define PlayerSession_GetMutex(session) ((session) select 1)

#define PlayerSession_GetGhost(session) ((session) select 2)
#define PlayerSession_SetGhost(session, player) ((session) set [2, player])

#define PlayerSession_GetGhostTime(session) ((session) select 3)
#define PlayerSession_SetGhostTime(session, time) ((session) set [3, time])

#define PlayerSession_GetController(session) ((session) select 4)
#define PlayerSession_SetController(session, controller) ((session) set [4, controller])

#define PlayerSession_GetLogout(session) ((session) select 5)
#define PlayerSession_SetLogout(session, logout) ((session) set [5, logout])

#define PlayerSession_GetLockedObject(session) ((session) select 6)
#define PlayerSession_SetLockedObject(session, object) ((session) set [6, object])

//#define PlayerSession_GetState(session) ((session) select 6)
//#define PlayerSession_SetState(session, state) ((session) set [6, state])

#endif