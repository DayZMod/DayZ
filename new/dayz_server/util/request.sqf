#include "\dayz\dayz_code\util\dictionary.hpp"
#include "\dayz\dayz_code\util\debug.hpp"
#include "\dayz\dayz_code\util\string.hpp"

#define STRINGIFY(x) #x
#define SAFE_VAR(x) __dz_request##x
#define SAFE_VAR_NAME(x) STRINGIFY(SAFE_VAR(x))

#define DEFAULT_REPLY []

#define Request_GetOwner(request) ((request) select 2)
#define Request_GetID(request) ((request) select 3)
#define Request_GetFunc(request) ((request) select 0)
#define Request_GetArgs(request) ((request) select 1)
#define Request_ExpectsReply(request) (count (request) > 2)

#define Reply_New(request, result) [Request_GetID(request), result]

dz_request_handlers = Dictionary_New();

//receive request
"dz_pvs_request" addPublicVariableEventHandler
{
	//Retrieve handler
	SAFE_VAR(_handler) = Dictionary_Get(dz_request_handlers, Request_GetFunc(_this select 1));
	
	//No handler found
	if isNil SAFE_VAR_NAME(_handler) exitWith
	{
		if Request_ExpectsReply(_this select 1) exitWith
		{
			//Return default value to prevent client deadlock
			dz_pvc_request = Reply_New(_this select 1, DEFAULT_REPLY);
			Request_GetOwner(_this select 1) publicVariableClient "dz_pvc_request";
			
			Debug_LogError(String_Format2("Request handler not found. Request: %1, %2", Request_GetFunc(_this select 1), Request_GetOwner(_this select 1)));
		};
		
		Debug_LogError(String_Format1("Request handler not found. Request: %1", Request_GetFunc(_this select 1)));
	};
	
	//Whether client expects a reply.
	//If the handler knows that the player has disconnected they can set this to false to prevent replying.
	SAFE_VAR(_reply) = Request_ExpectsReply(_this select 1);
	
	//Execute handler
	_result = Request_GetArgs(_this select 1) call SAFE_VAR(_handler);
	
	if !SAFE_VAR(_reply) exitWith {};
	
//	if isNil "_result" then { _result = DEFAULT_REPLY };
	
	//Send reply
	dz_pvc_request = Reply_New(_this select 1, _result);
	Request_GetOwner(_this select 1) publicVariableClient "dz_pvc_request";
};