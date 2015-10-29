#include "Debug.hpp"

#ifdef _DEBUG_

dz_fn_debug_checkTypes
{
	private "_c";
	_c = count (_this select 1) - 1;
	
	{
		#define EXPECTED_TYPE ((_this select 1) select (_foreachIndex min _c))
		
		if (typeName _x != EXPECTED_TYPE) then
		{
			diag_log format ['ERROR: Debug assertation failed in file "%1" on line %2. Index:%3 Type:%4 Expected:%5',
				_this select 2,
				_this select 3,
				typeName _x,
				EXPECTED_TYPE];
		};
		
		#undef EXPECTED_TYPE
	}
	foreach (_this select 0);
};

#endif
