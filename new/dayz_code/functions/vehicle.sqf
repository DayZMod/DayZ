#include "\dayz\dayz_code\util\string.hpp"
#include "\dayz\dayz_code\util\command.hpp"

dz_fn_vehicle_hitpoints =
{
	private ["_cfg", "_list", "_h"];
	
	_cfg = configFile >> "CfgVehicles" >> typeof _this >> "HitPoints";
	_list = [];
	
	while { isClass _cfg } do
	{
		for "_i" from 0 to count _cfg do
		{
			_h = configName (_cfg select _i);
			if !(_h in _list) then
				{ _list set [count _list, _h] };
		};
		
		_cfg = inheritsFrom _cfg;
	};
};

dz_fn_vehicle_damageColor =
{
	#define GET_HEX(x) String_PadLeft(String_Hex(x), 2, "0")
	format ["#%1%2%3", GET_HEX(0xFF min (0x1FE * _this)), GET_HEX(0xFF min (0x1FE * (1 - _this))), "00"];
	#undef GET_HEX
};