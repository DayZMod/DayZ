#include "Util.hpp"

#define STRINGIFY(x) #x

#define SAFE_VAR(x) __dz_util_##x
#define SAFE_VAR_NAME(x) STRINGIFY(SAFE_VAR(x))

dz_fn_util_pv = { Util_PublicVariable_Fast(_this select 0, _this select 1) };
dz_fn_util_pvs = { Util_PublicVariableServer_Fast(_this select 0, _this select 1) };
dz_fn_util_pvc = { Util_PublicVariableClient_Fast(_this select 0, _this select 1, _this select 2) };

dz_fn_util_waitUntil =
{
	private [SAFE_VAR_NAME(_t), SAFE_VAR_NAME(_r), SAFE_VAR_NAME(_p), SAFE_VAR_NAME(_c), SAFE_VAR_NAME(_m)];
	SAFE_VAR(_t) = diag_tickTime;
	SAFE_VAR(_r) = false;
	SAFE_VAR(_p) = _this select 0;
	SAFE_VAR(_c) = _this select 2;
	if isNil SAFE_VAR_NAME(_c) then { SAFE_VAR(_c) = [] };
	SAFE_VAR(_m) = _this select 1;
	
	waitUntil
	{
		if (diag_tickTime - SAFE_VAR(_t) > SAFE_VAR(_m)) exitWith { true };
		if (SAFE_VAR(_c) call SAFE_VAR(_p)) exitWith { SAFE_VAR(_r) = true; true};
	};
	
	SAFE_VAR(_r)
};

dz_fn_util_sleepFrame =
{
	private "_f";
	_f = diag_frameno;
	waitUntil { diag_frameno != _f };
};