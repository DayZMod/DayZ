#define _DEBUG_

#ifdef _DEBUG_
	#define Debug_Log(val) (diag_log val)
	#define Debug_LogGeneric() (diag_log format ["DEBUG: File: %1 Line: %2 Time: %3", __FILE__, __LINE__, diag_tickTime])
#else
	#define Debug_Log(val)
	#define Debug_LogGeneric()
#endif