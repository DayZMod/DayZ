#include "Array.hpp"

dz_fn_array_new =
{
	private "_a";
	_a = [];
	_a resize _this;
	_a
};

//Returns true if the given predicate evaluates to true for any element in the array
dz_fn_array_any =
{
	if (count (_this select 0) == 0) exitWith { false };
	if isNil { _this select 2 } then
		{ _this set [2, []] };
	
	{
		if (_this select 2 call (_this select 1)) exitWith { true };
		false
	}
	foreach (_this select 0);
};

//Returns true if the given predicate evaluates to true for all elements in the array
dz_fn_array_all =
{
	if (count (_this select 0) == 0) exitWith { false };
	if isNil { _this select 2 } then
		{ _this set [2, []] };
	
	{
		if !(_this select 2 call (_this select 1)) exitWith { false };
		true
	}
	foreach (_this select 0);
};

//Returns the first element in the array for which the given predicate evaluates to true. nil if not found
dz_fn_array_first =
{
	if (count (_this select 0) == 0) exitWith { nil };
	if isNil { _this select 2 } then
		{ _this set [2, []] };
	
	{
		if (_this select 2 call (_this select 1)) exitWith { _x };
		nil
	}
	foreach (_this select 0);
};

dz_fn_array_where =
{
	if (count (_this select 0) == 0) exitWith { [] };
	if isNil { _this select 2 } then
		{ _this set [2, []] };
	
	private "__dz_fn_array_where_result";
	__dz_fn_array_where_result = [];
	
	{
		if (_this select 2 call (_this select 1)) then { __dz_fn_array_where_result set [count __dz_fn_array_where_result, _x] };
	}
	foreach (_this select 0);
	
	__dz_fn_array_where_result
};

dz_fn_array_select =
{
	if (count (_this select 0) == 0) exitWith { [] };
	if isNil { _this select 2 } then
		{ _this set [2, []] };
	
	private "__dz_fn_array_select_result";
	__dz_fn_array_select_result = [];
	__dz_fn_array_select_result resize count (_this select 0);
	
	{
		__dz_fn_array_select_result set [_foreachIndex, _this select 2 call (_this select 1)];
	}
	foreach (_this select 0);
	
	__dz_fn_array_select_result
};

dz_fn_array_exchange = { Array_Exchange_Fast(_this select 0, _this select 1, _this select 2) };

dz_fn_array_pushBack = { Array_PushBack_Fast(_this select 0, _this select 1) };

dz_fn_array_append =
{
	if (count (_this select 1) == 0) exitWith { _this select 0 };
	
	private ["_a", "_b", "_c"];
	_a = _this select 0;
	_b = _this select 1;
	_c = count _this select 0;
	_a resize (_c + count _b);
	
	for "_i" from 0 to count _b do
	{
		_a set [_c + _i, _b select _i];
	};
	
	_a
};

//Selects a random element from the array
dz_fn_array_selectRandom = { _this select floor random count _this };

//Shuffle using the Fisher-Yates algorithm. Complexity: O(n)
dz_fn_array_shuffle =
{
	private ["_i", "_r", "_t"];
	for "_i" from (count _this) - 1 to 1 step -1 do
	{
		//Select random index
		_r = floor random (_i + 1);
		
		//Swap 
		if (_i != _r) then
		{
			_t = _this select _i;
			_this set [_i, _this select _r];
			_this set [_r, _t]; 
		};
	};
	_this
};

dz_fn_array_mergeSort =
{
	private ["_offset", "_length", "_alen", "_blen", "_ai", "_bi", "_temp"];
	
	//Root call
	if (count _this == 2) then
	{
		_offset = 0;
		_length = count (_this select 0);
	}
	//Recursive call
	else
	{
		_offset = _this select 2;
		_length = _this select 3;
	};
	
	if (_length <= 1) exitWith {};
	
	_alen = round (_length / 2);
	_blen = _length - _alen;
	
	[_this select 0, _this select 1, _offset, _alen] call dz_fn_array_mergeSort;
	[_this select 0, _this select 1, _offset + _alen, _blen] call dz_fn_array_mergeSort;
	
	_ai = 0;
	_bi = 0;
	
	_temp = [];
	_temp resize _length;
	
	#define A_NEXT (_this select 0) select (_offset + _ai)
	#define B_NEXT (_this select 0) select (_offset + _alen + _bi)
	
	for "_i" from 0 to _length - 1 do
	{
		switch (true) do
		{
			case (_ai == _alen):
			{
				_temp set [_i, B_NEXT];
				_bi = _bi + 1;
			};
			
			case (_bi == _blen):
			{
				_temp set [_i, A_NEXT];
				_ai = _ai + 1;
			};
			
			case (([A_NEXT, B_NEXT] call (_this select 1)) > 0):
			{
				_temp set [_i, A_NEXT];
				_ai = _ai + 1;
			};
			
			default
			{
				_temp set [_i, B_NEXT];
				_bi = _bi + 1;
			};
		};
	};
	
	#undef A_NEXT
	#undef B_NEXT
	
	for "_i" from 0 to _length - 1 do
	{
		(_this select 0) set [_offset + _i, _temp select _i];
	};
	
	_this select 0
};