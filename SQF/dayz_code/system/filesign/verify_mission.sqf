#include "\z\addons\dayz_code\util\ext.hpp"

#define TIME_OUT 30

#define MANIFEST "manifest"
#define MFSTSIGN "mfstsign"

#define SEPARATOR ":"


//Do not whitelist in filters.
#define FAIL(value) (isnil { PVDZ_fserr = (value); publicVariableServer "PVDZ_fserr"; })

local _separator = Ext_GetSeparator();

#undef Ext_Separator
#define Ext_Separator (_separator)

if (_separator == "") exitWith
	{ FAIL("Extension"); };

local _fn_stringFind = compile format [ // text:pattern -> pattern:text
	'parseNumber Ext_Call(String_Format1("%1%2%3%2", _this select 1) + (_this select 0))',
	Ext_Resolve("StringFind"), _separator, "%1"];
#define StringFind(text, pattern) ([text, pattern] call _fn_stringFind)

local _fn_stringFindEx = compile format [ // text:pattern:offset -> offset:pattern:text
	'parseNumber Ext_Call(String_Format2("%1%2%3%2%4%2", _this select 2, _this select 1) + (_this select 0))',
	Ext_Resolve("StringFindEx"), _separator, "%1", "%2"];
#define StringFindEx(text, pattern, offset) ([text, pattern, offset] call _fn_stringFindEx)

local _fn_stringSub = compile format [ // text:offset -> offset:text
	'Ext_Call(String_Format1("%1%2%3%2", _this select 1) + (_this select 0))',
	Ext_Resolve("StringSub"), _separator, "%1"];
#define StringSub(text, offset) ([text, offset] call _fn_stringSub)
	
local _fn_stringSubEx = compile format [ //text:offset:length -> offset:length:text
	'Ext_Call(String_Format2("%1%2%3%2%4%2", _this select 1, _this select 2) + (_this select 0))',
	Ext_Resolve("StringSubEx"), _separator, "%1", "%2"];
#define StringSubEx(text, offset, length) ([text, offset, length] call _fn_stringSubEx)

local _fn_fileSignatureSetKey = compile format [ // key -> key
	'Ext_ParseBool(Ext_Call(String_Format1("%1%2%3", _this)))',
	Ext_Resolve("FileSignatureSetKey"), _separator, "%1"];
#define FileSignatureSetKey(key) ((key) call _fn_fileSignatureSetKey)

local _fn_fileSignatureVerify = compile format [ // data:signature -> signature:data
	'Ext_ParseBool(Ext_Call(String_Format1("%1%2%3%2", _this select 1) + (_this select 0)))',
	Ext_Resolve("FileSignatureVerify"), _separator, "%1"];
#define FileSignatureVerify(data, sign) ([data, sign] call _fn_fileSignatureVerify)

local _chars = toArray "abcdefghijklmnopqrstuvxyz";

local _keyvar = [];
_keyvar resize 10;

for "_i" from 0 to count _keyvar - 1 do
	{ _keyvar set [_i, _chars select floor random count _chars]; };

_keyvar = toString _keyvar;

isnil {
    PVDZ_fskey = [player, _keyvar];
    PVDZ_fskey = publicVariableServer "PVDZ_fskey";
	0
};

_keyvar = "PVDZ_fskey" + _keyvar;

local _time = diag_tickTime;
waitUntil { !isnil _keyvar || { diag_tickTime - _time > TIME_OUT } };

if (isnil _keyvar) exitWith
	{ FAIL("Timeout"); };

if (!FileSignatureSetKey(missionNamespace getVariable _keyvar)) exitWith
	{ FAIL("SetKey"); };

local _manifest = loadFile MANIFEST;
local _mfstsign = loadFile MFSTSIGN;

_mfstsign = StringSubEx(_mfstsign, 0, StringFind(_mfstsign, SEPARATOR));

if (!FileSignatureVerify(_manifest, _mfstsign)) exitWith
	{ FAIL(String_Format1("File: %1", MANIFEST)); };

local _newline = tostring [10];
local _index = 0;
local _next = 0;

while { _next >= 0 } do
{
	_index = _next;
	_next = StringFindEx(_manifest, _newline, _index);
	
	local _entry = StringSubEx(_manifest, _index, _next - _index);
	
	_separator = StringFind(_entry, SEPARATOR);
	local _sign = StringSubEx(_entry, 0, _separator);
	local _file = StringSub(_entry, _separator + 1);
	local _data = loadFile _file;
	
	if (!(if (_sign == "") then { _data == "" } else { FileSignatureVerify(_data, _sign) })) exitWith
		{ FAIL(String_Format1("File: %1", _file)); };
	
	if (_next >= 0) then
		{ _next = _next + 1; };
};