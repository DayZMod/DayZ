//Returns true if the given predicate evaluates to true for any element in the array
array_any =
{
	{
		if (_x call (_this select 1)) exitWith { true };
		false
	}
	foreach (_this select 0);
};

//Returns true if the given predicate evaluates to true for all elements in the array
array_all =
{
	{
		if !(_x call (_this select 1)) exitWith { false };
		true
	}
	foreach (_this select 0);
};

//Returns the first element in the array for which the given predicate evaluates to true. nil if not found
array_first =
{
	{
		if (_x call (_this select 1)) exitWith { _x };
		nil
	}
	foreach (_this select 0)
};

//Selects a random element from the array
array_selectRandom =
{
	_this select floor random count _this
};

//Shuffle using the Fisher-Yates algorithm. Complexity: O(n)
array_shuffle =
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

array_mergeSort =
{
	if ((count _this) == 2) then
	{
		_offset = 0;
		_length = count (_this select 0);
	}
	else
	{
		_offset = _this select 2;
		_length = _this select 3;
	};
	
	if (_length <= 1) exitWith {};
	
	_alen = round (_length / 2);
	_blen = _length - _alen;
	
	[_this select 0, _this select 1, _offset, _alen] call array_mergeSort;
	[_this select 0, _this select 1, _offset + _alen, _blen] call array_mergeSort;
	
	_ai = 0;
	_bi = 0;
	
	_temp = [];
	_temp resize _length;
	
	#define A_NEXT (_this select 0) select (_offset + _ai)
	#define B_NEXT (_this select 0) select (_offset + _alen + _bi)
	
	for "_i" from 0 to _length - 1 do
	{
		if (_ai == _alen) then
		{
			_temp set [_i, B_NEXT];
			_bi = _bi + 1;
		}
		else
		{
			if (_bi == _blen) then
			{
				_temp set [_i, A_NEXT];
				_ai = _ai + 1;
			}
			else
			{
				if (([A_NEXT, B_NEXT] call (_this select 1)) > 0) then
				{
					_temp set [_i, A_NEXT];
					_ai = _ai + 1;
				}
				else
				{
					_temp set [_i, B_NEXT];
					_bi = _bi + 1;
				};
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