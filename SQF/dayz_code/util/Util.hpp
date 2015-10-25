#ifndef _INCLUDE_GUARD_UTIL
#define _INCLUDE_GUARD_UTIL

//Waits until the predicate is true or until the specified amount of time has passed.
#define Util_WaitUntil(pred, time) ([pred, time] call util_waitUntil)

#endif