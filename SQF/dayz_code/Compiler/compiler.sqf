/*
	Compiles functions defined in CfgFunctions >> x, where x is the first parameter.
	
	Parameters:
		string		CfgFunctions nested classname containing functions to be compiled
		boolean		Debug mode: if true functions are compiled in debug mode
	
	Author:
		Foxy
*/

#define FORMAT_RELEASE '%1 = compile preprocessFileLineNumbers "%2"'
#define FORMAT_DEBUG 'DEBUG_%1 = compile preprocessFileLineNumbers "%2"; %1 = { private["_r", "_d"]; _d = floor random 1000000; if (isNil "_this") then { diag_log ("DEBUG: Starting %1 ID: " + str(_d)); _r = (call DEBUG_%1); } else { diag_log ("DEBUG: Starting %1 ID: " + str(_d) + " Arguments: " + str(_this)); _r = (_this call DEBUG_%1); }; if (!isNil "_r") exitWith { diag_log ("DEBUG: Finished %1 ID: " + str(_d) + " Return: " + str(_r)); _r }; diag_log ("DEBUG: Finished %1 ID: " + str(_d)); };'

/* **** DEBUG THUNK (FORMAT_DEBUG) ****
DEBUG_%1 = compile preprocessFileLineNumbers "%2";
%1 =
{
	private["_r", "_d"];
	
	_d = floor random 1000000;
	
	if (isNil "_this") then
	{
		diag_log ("DEBUG: Starting %1 ID: " + str(_d));
		_r = (call DEBUG_%1);
	}
	else
	{
		diag_log ("DEBUG: Starting %1 ID: " + str(_d) + " Arguments: " + str(_this));
		_r = (_this call DEBUG_%1);
	};
	
	if (!isNil "_r") exitWith
	{
		diag_log ("DEBUG: Finished %1 ID: " + str(_d) + " Return: " + str(_r));
		_r
	};
	diag_log ("DEBUG: Finished %1 ID: " + str(_d));
};
*/

private["_cfg", "_count", "_fCfg", "_fName", "_fFile"];

diag_log format ["Starting compiler. Arguments: %1", _this];

//CfgFunctions config
_cfg = (configFile >> "CfgFunctions" >> _this select 0);

//count number of functions
_count = count _cfg;

//foreach function
for "_i" from 0 to _count - 1 do
{
	//function config
	_fCfg = _cfg select _i;
	_fName = configName _fCfg;
	_fFile = getText(_fCfg >> "file");
	
	diag_log format ["  Compiling %1 as %2", _fFile, _fName];
	
	if (_this select 1) then
	{
		call compile format [FORMAT_DEBUG, _fName, _fFile];
	}
	else
	{
		call compile format [FORMAT_RELEASE, _fName, _fFile];
	};
};