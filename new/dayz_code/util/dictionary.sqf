#include "dictionary.hpp"
#include "array.hpp"
#include "debug.hpp"

#define GET_KEYS(d) ((d) select 1)
#define GET_VALUES(d) ((d) select 2)
#define GET_INDEX(d, k) (GET_KEYS(d) find (k))

#define INCREMENT_COUNT(d) ((d) set [0, ((d) select 0) + 1])
#define DECREMENT_COUNT(d) ((d) set [0, ((d) select 0) - 1])

#define SET_TEMP(value) (missionNamespace setVariable ["dz_dictionary_temp", value])
#define GET_TEMP() dz_dictionary_temp

dz_fn_dictionary_reserve =
{
	private "_r";
	
	_r = [
		_this select 0 find (_this select 1),
		SET_TEMP(_this select 0 find true),
		SET_TEMP(Array_New2(GET_TEMP(), count (_this select 0)) select (GET_TEMP() == -1)),
		_this select 0 set [GET_TEMP(), false],
		GET_TEMP()
	];
	
	if (_r select 0 != -1) exitWith
	{
		_this select 0 set [_r select 4, true];
		-1
	};
	
	_this select 0 set [_r select 4, _this select 1];
	_r select 4
};

dz_fn_dictionary_containsKey =
{
	GET_KEYS(_this select 0) find (_this select 1) != -1
};

dz_fn_dictionary_add =
{
	Debug_Assert(typename (_this select 1) != typename false);
	
	private "_index";
	_index = [GET_KEYS(_this select 0), _this select 1] call dz_fn_dictionary_reserve;
	
	if (_index < 0) exitWith { false };
	
	GET_VALUES(_this select 0) set [_index, _this select 2];
	INCREMENT_COUNT(_this select 0);
	
	true
};

dz_fn_dictionary_get =
{
	private "_index";
	_index = GET_INDEX(_this select 0, _this select 1);
	if (_index < 0) exitWith { nil };
	GET_VALUES(_this select 0) select _index
};

dz_fn_dictionary_remove =
{
	private "_index";
	_index = GET_INDEX(_this select 0, _this select 1);
	if (_index == -1) exitWith { false };
	GET_VALUES(_this select 0) set [_index, nil];
	GET_KEYS(_this select 0) set [_index, true];
	DECREMENT_COUNT(_this select 0);
	
	true
};

/*
dz_fn_dictionary_compact =
{
	private ["_keys", "_values", "_i"];
	_keys = [];
	_values = [];
	_keys resize (_this);
	_values resize (_this);
	_i = 0;
	
	{
		if (!isNil "_x") then
		{
			_keys set [_i, _x];
			_values set [_i, GET_VALUES(_this) select _forEachIndex];
			_i = _i + 1;
		};
	}
	foreach GET_KEYS(_this);
	
	_this set [1, _keys];
	_this set [2, _values];
};
*/