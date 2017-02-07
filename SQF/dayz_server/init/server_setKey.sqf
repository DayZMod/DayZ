#include "\z\addons\dayz_code\util\ext.hpp"

local _separator = Ext_GetSeparator();

local _fn_stringFind = compile format [ // text:pattern -> pattern:text
    'parseNumber Ext_Call(String_Format1("%1%2%3%2", _this select 1) + (_this select 0))',
    Ext_Resolve("StringFind"), _separator, "%1"];
#define StringFind(text, pattern) ([text, pattern] call _fn_stringFind)

local _fn_stringSub = compile format [ // text:offset -> offset:text
    'Ext_Call(String_Format1("%1%2%3%2", _this select 1) + (_this select 0))',
    Ext_Resolve("StringSub"), _separator, "%1"];
#define StringSub(text, offset) ([text, offset] call _fn_stringSub)

local _mfstsign = loadFile "mfstsign";
local _index = StringFind(_mfstsign, ":");
dz_fskey = StringSub(_mfstsign, _index + 1);