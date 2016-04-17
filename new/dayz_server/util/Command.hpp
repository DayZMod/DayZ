/* Provides an API for client->server RPCs with return values.
Do not use this header on the server.

Author:
	Foxy
*/

#ifndef _INCLUDE_GUARD_COMMAND
	#define _INCLUDE_GUARD_COMMAND
	
	/* Send command to client.
	Parameters:
		string/scalar command
			Command type. Various command types can be defined by the client.
		scalar client
			Network ID (owner) of the client.
		any args
			Argument(s) sent to the client.
		boolean reply
			Whether a reply is wanted from the client.
		code handler
			Function to handle the reply.
			Pass nil if not expecting a reply, or don't want to handle it.

	Return:
		Command object which or can be waited and provides the result once completed.
		See Command_Wait() and Command_GetResult().
		Returns nil if no reply is expected.

	Example:
		//Command client to do something.
		Command_Send("DoSomething", owner _player, _args);
		
		//Command client to return something and wait for the result.
		_result = Command_SendWait("GetSomething", _clientId, nil);
		
		//Command client to return something and assign a handler.
		Command_SendEx("GetSomething", owner _vehicle, nil, true, { my_command_result = _this });
	*/
	#define Command_SendEx(command, client, args, reply, handler) ([command, client, args, reply, handler] call dz_fn_command_send)
	#define Command_Send(command, client, args) Command_SendEx(command, client, args, false, nil)
	#define Command_SendWait(command, client, args) Command_SendEx(command, client, args, true, nil)

	//Determines whether the specified command is completed.
	#define Command_IsDone(command) ((command) select 0)

	//Retrieves the result of the command.
	#define Command_GetResult(command) ((command) select 2)

	//Waits for the command to complete and returns the result.
	#define Command_Wait(command) ((command) call dz_fn_command_wait)
#endif