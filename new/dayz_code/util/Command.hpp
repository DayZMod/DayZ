/* Provides an API for a server->client RPCs with return values.
Do not use this header on the server.

Author:
	Foxy
*/

#include "Dictionary.hpp"

#ifndef _INCLUDE_GUARD_COMMAND
	#define _INCLUDE_GUARD_COMMAND
	
	/* Registers a command handler.
	
	Parameters:
		string/scalar id
			String or number used as an identifier for the function.
			String identifiers are case sensitive.
		code handler
			Function that handles the command.
		
	Example:
		Request_RegisterHandler("GetDate", {my_global_date_variable});
		Request_RegisterHandler("GetObjectOwner", {owner _this});
	*/
	#define Command_RegisterHandler(command, handler) Dictionary_Add(dz_command_handlers, command, handler)
#endif