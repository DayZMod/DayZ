#include "\dayz\dayz_code\util\Debug.hpp"
#include "\dayz\dayz_code\util\Request.hpp"
#include "\dayz\dayz_code\util\Dictionary.hpp"

dz_fn_trap_arm =
{
	if (_this getVariable ["armed", false]) exitWith {};
	
	_this setVariable ["armed", true];
	Request_Send("trap_arm", _this, false);
};

dz_fn_trap_disarm =
{
	if !(_this getVariable ["armed", false]) exitWith {};
	
	Request_Send("trap_disarm", _this, false);
};

dz_fn_trap_trigger =
{
	private ["_obj", "_trap", "_handler"];
	
	_obj = _this select 1 select 0;
	if (!local _obj) exitWith {};
	
	_trap = _this select 0 getVariable ["trap", objNull];
	
	if (isNull _trap) exitWith
		{ Debug_LogVerbose("ERROR: Null trap."); };
	
	_handler = Dictionary_Get(dz_trap_handlers, typeOf _trap);
	
	if (!isNil "_handler") then
		{ [_trap, _obj] call _handler; };
};



/* Trap specific handlers */

#define ANIMAL_BASE "Animal"
#define PLAYER_BASE "DZ_PlayerBase_M"

dz_trap_handlers = Dictionary_New();

private "_handler";

_handler =
{
	private ["_trap", "_obj"];
	_trap = _this select 0;
	_obj = _this select 1;
	
	_trap animate ["LeftShutter", 0];
	_trap animate ["RightShutter", 0];
	
	if (_obj isKindOf ANIMAL_BASE) exitWith
	{
		_obj setDamage 1;
	};
	
	if (_obj isKindOf PLAYER_BASE) exitWith
	{
		//TODO: break legs
	};
};

Dictionary_Add(dz_trap_handlers, "DZ_BearTrap", _handler);