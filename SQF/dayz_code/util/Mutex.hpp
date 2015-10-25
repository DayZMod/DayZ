/* What is a mutex? https://en.wikipedia.org/wiki/Mutual_exclusion */

#ifndef _INCLUDE_GUARD_MUTEX
#define _INCLUDE_GUARD_MUTEX

//Returns a new unlocked mutex.
#define Mutex_New() [true]

//Attempts to lock the specified mutex. Returns true if the mutex was locked.
#define Mutex_TryLock(mtx) ((mtx) call mutex_tryLock)

//Waits until the mutex becomes available and locks it.
#define Mutex_WaitLock(mtx) ((mtx) call mutex_waitLock)

//Unlocks the mutex. Use only when you have previously obtained lock yourself.
#define Mutex_Unlock(mtx) ((mtx) set [0, true])

#endif