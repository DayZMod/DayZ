vector_dotProduct = 
{
	((_this select 0) select 0) * ((_this select 1) select 0) +
	((_this select 0) select 1) * ((_this select 1) select 1) +
	((_this select 0) select 2) * ((_this select 1) select 2)
};

vector_crossProduct =
{[
	((_this select 0) select 1) * ((_this select 1) select 2) - ((_this select 0) select 2) * ((_this select 1) select 1),
	((_this select 0) select 2) * ((_this select 1) select 0) - ((_this select 0) select 0) * ((_this select 1) select 2),
	((_this select 0) select 0) * ((_this select 1) select 1) - ((_this select 0) select 1) * ((_this select 1) select 0)
]};

vector_magnitude =
{
	sqrt ( (_this select 0)^2 + (_this select 1)^2 + (_this select 2)^2 );
};

vector_add =
{[
	((_this select 0) select 0) + ((_this select 1) select 0),
	((_this select 0) select 1) + ((_this select 1) select 1),
	((_this select 0) select 2) + ((_this select 1) select 2)
]};

vector_subtract =
{[
	((_this select 0) select 0) - ((_this select 1) select 0),
	((_this select 0) select 1) - ((_this select 1) select 1),
	((_this select 0) select 2) - ((_this select 1) select 2)
]};

vector_negate =
{[
	-(_this select 0),
	-(_this select 1),
	-(_this select 2)
]};

vector_multiply =
{[
	((_this select 0) select 0) * (_this select 1),
	((_this select 0) select 1) * (_this select 1),
	((_this select 0) select 2) * (_this select 1)
]};

vector_divide =
{[
	((_this select 0) select 0) / (_this select 1),
	((_this select 0) select 1) / (_this select 1),
	((_this select 0) select 2) / (_this select 1)
]};

vector_angle =
{
	//acos ( ( a . b ) / ( ||a|| * ||b|| ) )
	acos ( ([_this select 0, _this select 1] call vector_dotProduct) / ((_this select 0) call vector_magnitude) * ((_this select 1) call vector_magnitude) );
};

vector_normalize =
{
	private "_m";
	_m = _this call vector_magnitude;
	[_this, _m] call vector_divide
};

vector_fromDir =
{[
	sin _this,
	cos _this,
	0
]};

vector_rotate =
{[
	((_this select 0) select 0) * cos (_this select 1) - ((_this select 0) select 1) * sin (_this select 1),
	((_this select 0) select 0) * sin (_this select 1) + ((_this select 0) select 1) * cos (_this select 1),
	(_this select 0) select 2
]};