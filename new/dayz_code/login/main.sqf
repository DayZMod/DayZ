#define DEBUG_LOG_TRACE

#include "\dayz\dayz_code\util\reference.hpp"
#include "\dayz\dayz_code\util\debug.hpp"
#include "\dayz\dayz_code\util\request.hpp"
#include "\dayz\dayz_code\util\string.hpp"
#include "LoginInfo.hpp"

#define CCPP call compile preprocessFileLineNumbers

#define SET_MESSAGE(val) (val) call _setLoadingScreenText
#define SET_PROGRESS(val) progressLoadingScreen(val)

SET_MESSAGE(localize "str_player_loading");
SET_PROGRESS(0);

//Get client version
_version = getText (configFile >> "CfgMods" >> "Dayz" >> "version");
Debug_LogDebug(String_Format1("Client is running dayz_code version ", _version));

waitUntil { !isNil "dz_version" };

//Compare client and server versions
if (_version != dz_version || { CCPP "\dayz\dayz_code\login\checkAddons.sqf" }) exitWith
	{ "Version mismatch" };

waitUntil { !isNull player };

SET_MESSAGE(localize "str_player_waiting_creation");
SET_PROGRESS(0.1);

_playerUID = getPlayerUID player;
if (_playerUID == "" || {_playerUID == "ERROR"}) exitWith
	{ "Failed to acquire player UID." };

SET_MESSAGE(localize "str_player_waiting_start");
SET_PROGRESS(0.2);

waitUntil { !isNil "dz_owner" };

_info = Request_SendWait("login", [player]);

SET_MESSAGE(localize "str_player_request");
SET_PROGRESS(0.3);

//Login was denied, exit to lobby
if LoginInfo_IsDenied(_info) exitWith
	{ LoginInfo_GetErrorMessage(_info) };

waitUntil { dz_preloadFinished };

//Login was unsuccesful, server requires information from client (gender, spawn, etc.)
if LoginInfo_HasError(_info) then
{
	if (LoginInfo_GetError(_info) == LoginInfo_ERROR_DEAD) then
	{
		//TODO: inform player the character has died
	};
	
	//TODO: show menus, create character, inform server
};

//Select player
SET_MESSAGE("Selecting player character.");
SET_PROGRESS(0.5);
if !(_unit CCPP "\dayz\dayz_code\login\selectPlayer.sqf") exitWith
	{ "Failed to select player" };

//Load state
SET_MESSAGE("Loading player state.");
SET_PROGRESS(0.6);
LoginInfo_GetState(_info) CCPP "\dayz\dayz_code\login\loadState.sqf";

//Return nil to indicate success
nil