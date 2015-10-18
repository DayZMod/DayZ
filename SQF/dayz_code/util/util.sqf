util_waitUntil =
{
	private "__time__";
	__time__ = diag_tickTime;
	waitUntil { call (_this select 0) || {(diag_tickTime - __time__) > (_this select 1)} };
};