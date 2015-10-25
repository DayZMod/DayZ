mutex_tryLock =
{
	_a = [_this select 0, _this set [0, false]];
	_a select 0
};

mutex_waitLock =
{
	waitUntil { _this call mutex_tryLock };
};