#include "String.hpp"
#include "Math.hpp"

dz_fn_string_substr =
{
	private ["_a", "_o", "_l"];
	_o = _this select 1;
	_l = _this select 2;
	
	if (_o < 0) exitWith { "" };
	if (_l == 0) exitWith { "" };
	if (_o == 0 && { _l < 0 } ) exitWith { _this select 0 };
	
	_a = toArray (_this select 0);
	
	if (_o >= count _a - 1) exitWith { "" };
	
	if (_l < 0) then
		{ _l = count _a - _o };
	
	if (_o > 0) then
		{ for "_i" from 0 to _l - 1 do { _a set [_i, _a select (_o + _i)] } };
	
	_a set [_l, 0];
	
	toString _a
};

dz_fn_string_find =
{
	if (_this select 1 == "") exitWith { 0 };
	if (_this select 0 == "") exitWith { -1 };
	
	private ["_a", "_b", "_cm", "_m", "_r", "_f", "_i"];
	_a = toArray (_this select 0);
	_b = toArray (_this select 1);
	
	_r = _this select 2;
	_m = count _a - count _b; //last index of a to check
	if (_m < _r) exitWith {};
	_cm	= count _b - 1; //last index of b
	_f = _b select 0; //first character to search for
	
	_i = 0;
	
	//zero out any matches before the start index
	for "_j" from 0 to count _a do
	{
		_i = _a find _f;
		if (_i < 0 || _i >= _r) exitWith {};
		_a set [_i, 0];
	};
	
	for "_j" from _i to count _a do
	{
		if (_i < 0 || _i > _m) exitWith { -1 };
		
		_r = -1;
		
		//compare
		for "_k" from 0 to _cm do
			{ if (_a select (_i + _k) != (_b select _k)) exitWith { _r = _i + _k } };
		
		//if compare found no errors then return
		if (_r < 0) exitWith { _i };
		
		//zero out any find matches inside the compared section
		for "_k" from _i to _i + _cm do
		{
			_i = _a find _f;
			if (_i < 0 || _i >= _r) exitWith {};
			_a set [_i, 0];
		};
	};
};

dz_fn_string_padleft =
{
	private ["_a", "_s", "_c", "_o"];
	_s = toArray (_this select 0);
	if (_this select 1 == count _s) exitWith { _this select 0 };
	_c = toArray (_this select 2) select 0;
	_a = [];
	_a resize (_this select 1);
	_o = count _a - count _s;
	
	for "_i" from 0 to _o - 1 do
		{ _a set [_i, _c] };
	
	for "_i" from 0 to count _s - 1 do
		{ _a set [_o + _i, _s select _i] };
	
	toString _a;
};

dz_fn_string_padright =
{
	private ["_a", "_c", "_o"];
	_a = toArray (_this select 0);
	_c = toArray (_this select 2) select 0;
	_o = count _a;
	_a resize (_this select 1);
	
	for "_i" from _o to count _a - 1 do
		{ _a set [_i, _c] };
	
	toString _a;
};

dz_string_hex = toArray "0123456789ABCDEF";

dz_fn_string_hex =
{
	private "_a";
	_a = [];
	_a resize (1 max (1 + floor Math_Log(0x10, _this)));
	
	for "_i" from count _a - 1 to 0 step -1 do
	{
		_a set [_i, dz_string_hex select floor _this % 0x10];
		_this = _this / 0x10;
	};
	
	toString _a;
};