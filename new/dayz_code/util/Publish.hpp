/* Provides an API for a global RPCs.

Author:
	Foxy
*/

#include "Dictionary.hpp"
#include "Util.hpp"
#include "Array.hpp"

#ifndef _INCLUDE_GUARD_PUBLISH
	#define _INCLUDE_GUARD_PUBLISH
	
	/* Send request to all clients and the server.
	
	Parameters:
		string/scalar	event identifier
		any				arguments
	
	Return:
		nothing
	
	Example:
		Publish_Send("doSomething", player);
		Publish_Send(17, diag_tickTime);
	*/
	#define Publish_Send(event, args) Util_PublicVariable("dz_pv_publish", Array_New2(event, args))
	
	/* Register a handler for the specified event
	
	Parameters:
		string/scalar	event identifier
		code			handler
	*/
	#define Publish_RegisterHandler(event, handler) Dictionary_Add(dz_publish_handlers, id, handler)
#endif