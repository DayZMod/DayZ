/*	See dayz_code\util\Request.hpp

Author:
	Foxy
*/

#include "\dayz\dayz_code\util\Dictionary.hpp"

#ifndef _INCLUDE_GUARD_REQUEST_SERVER
	#define _INCLUDE_GUARD_REQUEST_SERVER

	/* Registers a request handler.
	Parameters:
		string/scalar id
			String or number used as an identifier for the function.
			String identifiers are case sensitive.
		code handler
			Function that handles the request.
		
	Example:
		Request_RegisterHandler("GetDate", {my_global_date_variable});
		Request_RegisterHandler("GetObjectOwner", {owner _this});
	*/
	#define Request_RegisterHandler(id, handler) Dictionary_Add(dz_request_handlers, id, handler)
	
	/* Call inside the request handler to cancel reply, when it is known that the client has disconnected. */
	#define Request_NoReply() __dz_request_reply = false
#endif