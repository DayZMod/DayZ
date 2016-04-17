#include "Dictionary.hpp"
#include "Debug.hpp"
#include "String.hpp"

dz_publish_handlers = Dictionary_New();

"dz_pv_publish" addPublicVariableEventHandler
{
	_handler = Dictionary_Get(dz_publish_handlers, _this select 1 select 0);
	if isNil "_handler" exitWith { Debug_LogWarning(String_Format1("Publish handler not found. %1", _this select 1 select 0)) };
	_this select 1 select 1 call _handler
};