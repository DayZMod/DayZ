#include "\dayz\dayz_code\util\Debug.hpp"
#include "\dayz\dayz_server\util\Request.hpp"

private "_handler";

//Arm
_handler =
{
	if (isNull _this) exitWith
		{ Debug_LogVerbose("ERROR: Null argument."); };
	
	if (_this getVariable ["armed", false]) exitWith
		{ Debug_LogVerbose("ERROR: Trap already armed."); };
	
	private "_trig";
	
	_this animate ["LeftShutter", 0];
	_this animate ["RightShutter", 0];
	
	_trig = createTrigger ["EmptyDetector", getPosATL _this];
	_trig setPosATL getPosATL _this;
	_trig setTriggerArea [0.5, 0.5, 0, false]
	_trig setTriggerActivation ["ANY", "PRESENT", false];
	_trig setTriggerStatements ["this", "[thisTrigger, thisList] call dz_fn_trap_trigger", ""];
	
	_this setVariable ["armed", true, true];
	_this setVariable ["trigger", _trig];
	_trig setVariable ["trap", _this, true];
};
Request_RegisterHandler("trap_arm", _handler, false);



//Disarm
_handler =
{
	if (isNull _this) exitWith
		{ Debug_LogVerbose("ERROR: Null trap."); };
	
	if !(_this getVariable ["armed", false]) exitWith
		{ Debug_LogVerbose("ERROR: Trap not armed."); };
	
	private "_trig";
	_trig = _this getVariable ["trigger", objNull];
	
	if (isNull _trig) exitWith
		{ Debug_LogVerbose("ERROR: Null trigger."); };
	
	deleteVehicle _trig;
	_this setVariable ["armed", false, true];
};
Request_RegisterHandler("trap_disarm", _handler, false);



dz_fn_trap_trigger =
{
	private ["_trig", "_trap"];
	_trig = _this select 0;
	
//	if (isNull _trig) exitWith
//		{ Debug_LogVerbose("ERROR: Null trigger."); };
	
	_trap = _trig getVariable ["trap", objNull];
	
	if (isNull _trap) exitWith
		{ Debug_LogVerbose("ERROR: Null trap."); };
	
	_trap setVariable ["armed", false, true];
	deleteVehicle _trig;
};