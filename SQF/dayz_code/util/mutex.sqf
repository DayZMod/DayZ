#include "Mutex.hpp"

dz_fn_mutex_tryLock =
{
	[_this select 0, _this set [0, false]] select 0
};

dz_fn_mutex_waitLock =
{
	Mutex_WaitLock_Fast(_this);
};