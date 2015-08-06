/*
Selects random items from loot tables defined in bin\config.bin/CfgLoot/Groups

Parameters:
	integer		Loot group index
	integer		Number of items to select.

Author:
	Foxy
*/

#include "Loot.hpp"

private
[
	"_lootGroup",
	"_lootNum",
	"_result",
	"_weighted",
	"_def",
	"_sub"
];

_lootGroup = _this select 0;
_lootNum = _this select 1;

if (_lootNum < 1 || _lootGroup < 0) exitWith { [] };

//Initialize the result array
_result = [];
_result resize _lootNum;

_weighted = dayz_lootWeighted select _lootGroup;

for "_i" from 0 to _lootNum - 1 do
{
	_def = dayz_lootDefinitions select (_weighted select floor random count _weighted);
	
	while {(_def select 0) == Loot_GROUP} do
	{
		_sub = dayz_lootWeighted select (_def select 1);
		_def = dayz_lootDefinitions select (_sub select floor random count _sub);
	};
	
	_result set [_i, _def];
};

_result