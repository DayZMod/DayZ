#include "Debug.hpp"
#include "Request.hpp"
#include "Array.hpp"
#include "Dictionary.hpp"
#include "Object.hpp"

if (isServer) exitWith { call compile preprocessFileLineNumbers "\dayz\dayz_server\util\object.sqf"; };

dz_fn_object_waitLock =
{
	Debug_Assert(Request_IsInitialized());
	Request_SendWait(1, Array_New2(_this, player))
};

dz_fn_object_distance2d = { Object_Distance2D(_this select 0, _this select 1) };