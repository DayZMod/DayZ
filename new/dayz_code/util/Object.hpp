#include "Request.hpp"
#include "Array.hpp"

#ifndef _INCLUDE_GUARD_OBJECT
	#define _INCLUDE_GUARD_OBJECT
	
	//Request sole access to the specified object from the server.
	//Returns true if succesful.
	#define Object_WaitLock(object) ((object) call dz_fn_object_waitLock)
	
	//Release lock on the specified object.
	//Note: Call only if the object is already locked by this client.
	#define Object_Unlock(object) Request_Send(2, Array_New2(object, getPlayerUID player), false)
	
	//Returns the 2D distance (distance projected to the (X,Y) plane) between a and b.
	#define Object_Distance2D(a, b) ([a, b] call dz_fn_object_distance2d)
	#define Object_Distance2D_Fast(a, b) sqrt (((getPosATL (a) select 0) - (getPosATL (b) select 0))^2 + ((getPosATL (a) select 1) - (getPosATL (b) select 1))^2)
#endif