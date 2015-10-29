#include "Request.hpp"
#include "Mutex.hpp"
#include "Dictionary.hpp"

//Default reply sent if request is invalid or handler returns nil.
#define DEFAULT_REPLY []

#define Request_New(id) [dz_owner, id]
#define Request_GetOwner(request) ((request) select 0)
#define Request_GetID(request) ((request) select 1)
#define Request_SetResult(request, result) ((request) set [2, result])
#define Request_GetResult(request) ((request) select 2)

#define Reply_GetID(reply) ((reply) select 0)
#define Reply_GetResult(reply) ((reply) select 1)

#define Request_Server_GetFunc(request) ((request) select 2)
#define Request_Server_GetArgs(request) ((request) select 3)

//TODO: make work for non-dedicated server as well?

if (!isServer) then //CLIENT
{
	dz_request_mutex = Mutex_New();
	dz_request_list = [];
	
	//send request
	dz_fn_request_send = // [functionID, args]
	{
		private ["_id", "_request"];
		
		//acquire lock
		Mutex_WaitLock(dz_request_mutex);
		
		//Get find first valid id and assign new request to it
		_id = dz_request_list find 0;
		if (_id < 0) then { _id = count dz_request_list; };
		_request = Request_New(_id);
		dz_request_list set [_id, _request];
		
		//send request to server
		dz_pvs_request = _request + _this;
		publicVariableServer "dz_pvs_request";
		
		//unlock
		Mutex_Unlock(dz_request_mutex);
		
		//return the request object
		_request
	};
	
	//receive reply
	"dz_pvc_request" addPublicVariableEventHandler
	{
		_id = Reply_GetID(_this select 1);
		
		//retrieve and remove request from global list
		_request = dz_request_list select _id;
		dz_request_list set [_id, 0];
		
		//set result in request object
		Request_SetResult(_request, Reply_GetResult(_this select 1));
	};
}
else //SERVER
{
	dz_request_mutex = Mutex_New();
	dz_request_handlers = Dictionary_New();
	
	//receive request
	"dz_pvs_request" addPublicVariableEventHandler
	{
		//request handler [handler, async]
		__handler = Dictionary_Get(dz_request_handlers, Request_Server_GetFunc(_this select 1));
		
		//Determines whether the client is expecting a reply
		#define EXPECT_REPLY(request) (Request_GetOwner(request) > 0)
		
		//No handler found
		if (isNil "__handler") exitWith
		{
			diag_log format ["ERROR: Received an invalid request:%1 ClientID:%2",
				Request_Server_GetFunc(_this select 1),
				if (EXPECT_REPLY(_this select 1)) then { Request_GetOwner(_this select 1) } else { "?" } ];
			
			//Send reply to prevent client deadlock
			if (EXPECT_REPLY(_this select 1)) then
			{
				//Return default value (empty array)
				__temp = dz_pvc_request;
				dz_pvc_request = DEFAULT_REPLY;
				Request_GetOwner(_this select 1) publicVariableClient "dz_pvc_request";
				dz_pvc_request = __temp;
			};
		};
		
		//Client not expecting reply
		if (!EXPECT_REPLY(_this select 1)) exitWith
		{
			//Async
			if (__handler select 1) then
			{
				Request_Server_GetArgs(_this select 1) spawn (__handler select 0);
			}
			else //Sync
			{
				Request_Server_GetArgs(_this select 1) call (__handler select 0);
			};
		};
		
		//Async
		if (__handler select 1) then
		{
			//Spawn a new thread to handle request asynchronously
			[_this select 1, __handler select 0] spawn
			{
				__result = Request_Server_GetArgs(_this select 0) call (_this select 1);
				
				if (!EXPECT_REPLY(_this select 0)) exitWith {};
				
				if (isNil "__result") then { __result = DEFAULT_REPLY; };
				
				//Acquire lock to prevent race conditions with other asynchronous handlers
				Mutex_WaitLock(dz_request_mutex);
				
				//Send reply
				dz_pvc_request = __result;
				Request_GetOwner(_this select 0) publicVariableClient "dz_pvc_request";
				
				//Unlock
				Mutex_Unlock(dz_request_mutex);
			};
		}
		else //Sync
		{
			//store previous value in case it's being used by a scheduled thread
			__temp = dz_pvc_request;
			
			//Execute handler
			dz_pvc_request = Request_Server_GetArgs(_this select 1) call (__handler select 0);
			
			//Make sure we don't attempt to send nil (not supported in arma 2)
			if (isNil "dz_pvc_request") then { dz_pvc_request = DEFAULT_REPLY; };
			
			//Send reply
			Request_GetOwner(_this select 1) publicVariableClient "dz_pvc_request";
			
			//restore previous value
			dz_pvc_request = __temp;
		};
		
		#undef EXPECT_REPLY
	};
};