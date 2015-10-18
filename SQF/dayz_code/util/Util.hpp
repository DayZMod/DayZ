//Waits until the predicate is true or until the specified amount of time has passed.
#define Util_WaitUntil(pred, time) ([pred, time] call util_waitUntil)