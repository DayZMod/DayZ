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