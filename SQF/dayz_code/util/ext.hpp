#include "string.hpp"

#ifndef _INCLUDE_GUARD_EXT_UTIL
	#define _INCLUDE_GUARD_EXT_UTIL
	
	#define Ext_DLL "Dayz.Util"
	#define Ext_Call(args) (Ext_DLL callExtension (args))
	
	#define Ext_Loaded (dz_ext)
	#define Ext_Version (dz_ext_version)
	
	#define Ext_GetSeparator() Ext_Call("1")
	#define Ext_Separator (dz_ext_separator)
	
	#define Ext_Resolve(name) Ext_Call(String_Format2("2%1%2", Ext_Separator, name))
	
	#define Ext_ParseBool(str) ((str) == "1")
#endif