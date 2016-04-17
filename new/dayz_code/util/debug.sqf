#include "Debug.hpp"

dz_fn_debug_checkType =
{
	private "_t";
	
	_t = if (isNil "_x") then { "NIL" } else { typeName _x };
	
	if (typeName _exp == typeName []) exitWith
		{ _t in _exp };
	
	if (_exp == "ANY") exitWith
		{ true };
	
	_t == _exp
};

dz_fn_debug_params =
{
	private "_exp";
	
	{
		_exp = (_this select 1) select (_foreachIndex min (count (_this select 1) - 1));
		
		if (!call dz_fn_debug_checkType) then
		{
			assert false;
			
			diag_log format ['ERROR: Type check failed in file "%1" on line %2. Index:%3 Type:%4 Expected:%5',
				_this select 2,
				_this select 3,
				_foreachIndex,
				if (isNil "_x") then { "NIL" } else { typeName _x },
				_exp];
		};
	}
	foreach (_this select 0);
};