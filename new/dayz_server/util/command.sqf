#include "Command.hpp"
#include "\dayz\dayz_code\util\array.hpp"
#include "\dayz\dayz_code\util\debug.hpp"
#include "\dayz\dayz_code\util\util.hpp"

#define STRINGIFY(x) #x
#define SAFE_VAR(x) __dz_command##x
#define SAFE_VAR_NAME(x) STRINGIFY(SAFE_VAR(x))

#define Message_New(id, command, args) [command, args, id]
#define Message_NewNoReply(command, args) [command, args]

#define Command_New(handler) [false, handler]
#define Command_Complete(command) ((command) set [0, true])
#define Command_GetHandler(command) ((command) select 1)
#define Command_SetResult(command, result) ((command) set [2, result])

#define Reply_GetID(reply) ((reply) select 0)
#define Reply_GetResult(reply) ((reply) select 1)

dz_command_list = [];

//Send command
dz_fn_command_send =
{
	Debug_Assert(Command_IsInitialized());
	Debug_Params5(Array_New2("SCALAR","STRING"),"SCALAR","ANY","BOOL",Array_New2("CODE","NIL"));
	
	private ["_id", "_command"];
	
	//Expecting reply
	if (_this select 3) exitWith
	{
		//Find id and reserve it atomically
		#define SET_ID(id) (missionNamespace setVariable ["dz_command__id", id])
		_id = [
			SET_ID(dz_command_list find 0),
			SET_ID(Array_New2(dz_command__id, count dz_command_list) select (dz_command__id == -1)),
			dz_command_list set [dz_command__id, 1],
			dz_command__id
		] select 3;
		#undef SET_ID
		
		//Create and store command object
		_command = Command_New(_this select 4);
		dz_command_list set [_id, _command];
		
		//Send message
		Util_PublicVariableClient_Fast("dz_pvc_command", Message_New(_id, _this select 0, _this select 2), _this select 1);
		
		//Return command object
		_command
	};
	
	//Not expecting reply
	Util_PublicVariableClient_Fast("dz_pvc_command", Message_NewNoReply(_this select 0, _this select 2), _this select 1);
	nil
};

//Receive reply
"dz_pvs_command" addPublicVariableEventHandler
{
	SAFE_VAR(_id) = Reply_GetID(_this select 1);
	
	//retrieve and remove command from global list
	SAFE_VAR(_command) = dz_command_list select SAFE_VAR(_id);
	dz_command_list set [SAFE_VAR(_id), 0];
	
	//set result in command object
	Command_SetResult(SAFE_VAR(_command), Reply_GetResult(_this select 1));
	
	//Execute reply handler
	SAFE_VAR(_handler) = Command_GetHandler(SAFE_VAR(_command));
	if !isNil SAFE_VAR_NAME(_handler) then
		{ SAFE_VAR(_command) select 1 call SAFE_VAR(_handler) };
	
	//Complete the command
	Command_Complete(SAFE_VAR(_command));
};

dz_fn_command_wait =
{
	waitUntil { Command_IsDone(_this) };
	Command_GetResult(_this)
};