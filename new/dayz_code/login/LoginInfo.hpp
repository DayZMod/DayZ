#include "\dayz\dayz_code\util\struct.hpp"

//common
#ifndef _INCLUDE_GUARD_LOGIN_INFO
	#define _INCLUDE_GUARD_LOGIN_INFO
	
	//no player character
	#define LoginInfo_ERROR_SPAWN -2
	//no error (server sent unit)
	#define LoginInfo_ERROR_NONE -1
	//character has died while player was disconnected
	#define LoginInfo_ERROR_UNKNOWN 0
	#define LoginInfo_ERROR_DEAD 1
#endif

#ifdef SERVER
	#define _INCLUDE_GUARD_LOGIN_INFO_CLIENT
#else
	#define _INCLUDE_GUARD_LOGIN_INFO_SERVER
#endif

//server
#ifndef _INCLUDE_GUARD_LOGIN_INFO_SERVER
	#define _INCLUDE_GUARD_LOGIN_INFO_SERVER
	
	#define LoginInfo_New(error, unit, state) [error, unit, state]
#endif

//client
#ifndef _INCLUDE_GUARD_LOGIN_INFO_CLIENT
	#define _INCLUDE_GUARD_LOGIN_INFO_CLIENT
	
	#define LoginInfo_IsDenied(info) (LoginInfo_GetError(info) > LoginInfo_ERROR_DEAD)
	#define LoginInfo_HasError(info) (LoginInfo_GetError(info) != LoginInfo_ERROR_NONE)
	#define LoginInfo_GetError(info) Struct_Get(info, 0)
	#define LoginInfo_GetErrorMessage(info) (__loginInfo_errors select (LoginInfo_GetError(info) max LoginInfo_ERROR_UNKNOWN))
	#define LoginInfo_GetUnit(info) Struct_Get(info, 1)
	#define LoginInfo_GetState(info) Struct_Get(info, 2)
	
	__loginInfo_errors =
	[
		"Unknown login error. Please contact the administrator.",
		"You are dead."
	];
#endif