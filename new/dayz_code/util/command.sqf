#include "dictionary.hpp"
#include "debug.hpp"
#include "string.hpp"

#define STRINGIFY(x) #x
#define SAFE_VAR(x) __dz_command##x
#define SAFE_VAR_NAME(x) STRINGIFY(SAFE_VAR(x))

#define DEFAULT_REPLY []

#define Command_GetID(command) ((command) select 2)
#define Command_GetFunc(command) ((command) select 0)
#define Command_GetArgs(command) ((command) select 1)
#define Command_ExpectsReply(command) (count (command) > 2)

#define Reply_New(command, result) [Command_GetID(command), result]

dz_command_handlers = Dictionary_New();

//receive command
"dz_pvc_command" addPublicVariableEventHandler
{
	//Retrieve handler
	SAFE_VAR(_handler) = Dictionary_Get(dz_command_handlers, Command_GetFunc(_this select 1));
	
	//No handler found
	if isNil SAFE_VAR_NAME(_handler) exitWith
	{
		if Command_ExpectsReply(_this select 1) then
		{
			//Return default value to prevent server deadlock
			dz_pvs_command = Reply_New(_this select 1, DEFAULT_REPLY);
			publicVariableServer "dz_pvs_command";
		};
		
		Debug_LogError(String_Format1("Command handler not found. Command: %1", Command_GetFunc(_this select 1)));
	};
	
	//Whether server expects a reply.
	//If the handler knows that the player has disconnected they can set this to false to prevent replying.
	SAFE_VAR(_reply) = Command_ExpectsReply(_this select 1);
	
	//Execute handler
	_result = Command_GetArgs(_this select 1) call SAFE_VAR(_handler);
	
	if !SAFE_VAR(_reply) exitWith {};
	
//	if isNil "_result" then { _result = DEFAULT_REPLY };
	
	//Send reply
	dz_pvs_command = Reply_New(_this select 1, _result);
	publicVariableServer "dz_pvs_command";
};