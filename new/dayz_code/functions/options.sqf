#include "\dayz\dayz_code\util\array.hpp"
#include "\dayz\dayz_code\util\math.hpp"

/* Returns the value of the specified option.

Parameters:
	string		option name
*/
dz_fn_options_get =
{
	private "_i";
	_i = dz_options_names find toLower _this;
	if isNil "_i" exitWith { assert false; 0 };
	dz_options select _i
};



#define OPTION_SELECT 0
#define OPTION_SLIDER 1

#define GET_DEFAULT(cfg) getNumber (cfg >> "default")

private ["_cfg", "_opt", "_value"];

_cfg = configFile >> "CfgOptions";

//Build list of names
dz_options_names = [];
dz_options_names resize count _cfg;
for "_i" from 0 to count _cfg - 1 do
	{ dz_options_names set [_i, toLower configName (_cfg select _i)] };

dz_options = profileNamespace getVariable "dz_options";

//If options not found or corrupted, then reset
if (isNil "dz_options" || { typename dz_options != typename [] || { count dz_options != count _cfg }}}) then
{
	dz_options = [];
	dz_options resize count _cfg;
	
	for "_i" from 0 to count _cfg - 1 do
		{ dz_options set [_i, GET_DEFAULT(_cfg select _i)] };
}
else
{
	//Validate loaded values
	for "_i" from 0 to count _cfg - 1 do
	{
		_opt = _cfg select _i;
		_value = dz_options select _i;
		
		switch getNumber ( >> "type") do
		{
			case OPTION_SELECT:
			{
				if (_value < 0 || _value > count getArray (_opt >> "data")) then
					{ dz_options set [_i, GET_DEFAULT(_opt)] };
			};
			
			case OPTION_SLIDER:
			{
				dz_options set [_i, Math_Clamp(_value, 0, 1)];
			};
		};
	};
};