#include "Request.hpp"
#include "Array.hpp"
#include "Debug.hpp"
#include "Util.hpp"

#define STRINGIFY(x) #x
#define SAFE_VAR(x) __dz_request##x
#define SAFE_VAR_NAME(x) STRINGIFY(SAFE_VAR(x))

#define Message_New(id, request, args) [request, args, dz_owner, id]
#define Message_NewNoReply(request, args) [request, args]

#define Request_New(handler) [false, handler]
#define Request_Complete(request) ((request) set [0, true])
#define Request_GetHandler(request) ((request) select 1)
#define Request_SetResult(request, result) ((request) set [2, result])

#define Reply_GetID(reply) ((reply) select 0)
#define Reply_GetResult(reply) ((reply) select 1)

dz_request_list = [];

//Send request
dz_fn_request_send =
{
	Debug_Assert(Request_IsInitialized());
	Debug_Params4(Array_New2("SCALAR","STRING"),"ANY","BOOL",Array_New2("CODE","NIL"));
	
	private ["_id", "_request"];
	
	//Expecting reply
	if (_this select 2) exitWith
	{
		//Find id and reserve it atomically
		#define SET_ID(id) (missionNamespace setVariable ["dz_request__id", id])
		_id = [
			SET_ID(dz_request_list find 0),
			SET_ID(Array_New2(dz_request__id, count dz_request_list) select (dz_request__id == -1)),
			dz_request_list set [dz_request__id, 1],
			dz_request__id
		] select 3;
		#undef SET_ID
		
		//Create and store request object
		_request = Request_New(_this select 3);
		dz_request_list set [_id, _request];
		
		//Send message
		Util_PublicVariableServer_Fast("dz_pvs_request", Message_New(_id, _this select 0, _this select 1));
		
		//Return request object
		_request
	};
	
	//Not expecting reply
	Util_PublicVariableServer_Fast("dz_pvs_request", Message_NewNoReply(_this select 0, _this select 1));
	nil
};

//Receive reply
"dz_pvc_request" addPublicVariableEventHandler
{
	SAFE_VAR(_id) = Reply_GetID(_this select 1);
	
	//retrieve and remove request from global list
	SAFE_VAR(_request) = dz_request_list select SAFE_VAR(_id);
	dz_request_list set [SAFE_VAR(_id), 0];
	
	//set result in request object
	Request_SetResult(SAFE_VAR(_request), Reply_GetResult(_this select 1));
	
	//Execute reply handler
	SAFE_VAR(_handler) = Request_GetHandler(SAFE_VAR(_request));
	if !isNil SAFE_VAR_NAME(_handler) then
		{ SAFE_VAR(_request) select 1 call SAFE_VAR(_handler) };
	
	//Complete the request
	Request_Complete(SAFE_VAR(_request));
};

dz_fn_request_wait =
{
	waitUntil { Request_IsDone(_this) };
	Request_GetResult(_this)
};