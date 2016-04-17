/* Provides an API for client->server RPCs with return values.
Do not use this header on the server.

Author:
	Foxy
*/

#include "Dictionary.hpp"

#ifndef _INCLUDE_GUARD_REQUEST
	#define _INCLUDE_GUARD_REQUEST

	#define Request_IsInitialized() (!isNil "dz_owner")
	
	/* Send request to server.
	Parameters:
		string/scalar request
			Request type. Various request types can be defined by the server.
		any args
			Argument(s) sent to the server.
		boolean reply
			Whether a reply is wanted from the server.
		code handler
			Function to handle the reply.
			Pass nil if not expecting a reply, or don't want to handle it.

	Return:
		Request object which or can be waited and provides the result once completed.
		See Request_Wait() and Request_GetResult().
		Returns nil if no reply is expected.

	Example:
		//Request server to do something.
		Request_Send("DoSomething", _args);
		
		//Request server to return something and wait for the result.
		_result = Request_SendWait("GetSomething", nil);
		
		//Request server to return something and assign a handler.
		Request_SendEx("GetSomething", nil, true, { my_request_result = _this });
	*/
	#define Request_SendEx(request, args, reply, handler) ([request, args, reply, handler] call dz_fn_request_send)
	#define Request_Send(request, args) Request_SendEx(request, args, false, nil)
	#define Request_SendWait(request, args) Request_SendEx(request, args, true, nil)

	//Determines whether the specified request is completed.
	#define Request_IsDone(request) ((request) select 0)

	//Retrieves the result of the request.
	#define Request_GetResult(request) ((request) select 2)

	//Waits for the request to complete and returns the result.
	#define Request_Wait(request) ((request) call dz_fn_request_wait)
#endif