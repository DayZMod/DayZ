/* Defines macros for debugging.
Define any of the debug constants to enable the feature globally.
To define debugging features for a single file define the constants before including this file.

Author:
	Foxy

P.s. Why does this piece of shit not have variadic macros?!
*/

//#define DEBUG_ASSERT
//#define DEBUG_PARAMS

#define DEBUG_LOG_ERROR
#define DEBUG_LOG_WARNING
#define DEBUG_LOG_INFO
//#define DEBUG_LOG_DEBUG
//#define DEBUG_LOG_TRACE


#define __DEBUG_STRINGIFY(x) #x

/* Assertations */

#ifdef DEBUG_ASSERT
	#define Debug_Assert(condition) assert(condition)
#else
	#define Debug_Assert(condition)
#endif

/* Parameter checking */

#ifdef DEBUG_PARAMS
	//TODO: fix params check
//	#define __DEBUG_PARAMS(args) ([_this, args, __FILE__, __LINE__] call dz_fn_debug_params)
	#define __DEBUG_PARAMS(args)
#else
	#define __DEBUG_PARAMS(args)
#endif

#define Debug_Params1(p0) __DEBUG_PARAMS(Array_New1(p0))
#define Debug_Params2(p0,p1) __DEBUG_PARAMS(Array_New2(p0,p1))
#define Debug_Params3(p0,p1,p2) __DEBUG_PARAMS(Array_New3(p0,p1,p2))
#define Debug_Params4(p0,p1,p2,p3) __DEBUG_PARAMS(Array_New4(p0,p1,p2,p3))
#define Debug_Params5(p0,p1,p2,p3,p4) __DEBUG_PARAMS(Array_New5(p0,p1,p2,p3,p4))
#define Debug_Params6(p0,p1,p2,p3,p4,p5) __DEBUG_PARAMS(Array_New6(p0,p1,p2,p3,p4,p5))
#define Debug_Params7(p0,p1,p2,p3,p4,p5,p6) __DEBUG_PARAMS(Array_New7(p0,p1,p2,p3,p4,p5,p6))
#define Debug_Params8(p0,p1,p2,p3,p4,p5,p6,p7) __DEBUG_PARAMS(Array_New8(p0,p1,p2,p3,p4,p5,p6,p7))
#define Debug_Params9(p0,p1,p2,p3,p4,p5,p6,p7,p8) __DEBUG_PARAMS(Array_New9(p0,p1,p2,p3,p4,p5,p6,p7,p8))
#define Debug_Params10(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9) __DEBUG_PARAMS(Array_New10(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9))
#define Debug_Params11(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10) __DEBUG_PARAMS(Array_New11(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10))
#define Debug_Params12(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11) __DEBUG_PARAMS(Array_New12(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11))
#define Debug_Params13(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12) __DEBUG_PARAMS(Array_New13(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12))
#define Debug_Params14(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13) __DEBUG_PARAMS(Array_New14(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13))
#define Debug_Params15(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14) __DEBUG_PARAMS(Array_New15(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14))
#define Debug_Params16(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15) __DEBUG_PARAMS(Array_New16(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15))

/* Logging */

#define __DEBUG_LOG(mode, message) diag_log format [__DEBUG_STRINGIFY(mode: %1), message]
#define __DEBUG_LOG_IF(mode, message, condition) if (condition) then {__DEBUG_LOG(mode,message)}

#ifdef DEBUG_LOG_ERROR
	#define Debug_LogError(message) __DEBUG_LOG(ERROR,message)
	#define Debug_LogErrorIf(message, condition) __DEBUG_LOG_IF(ERROR,message,condition)
#else
	#define Debug_LogError(message)
	#define Debug_LogErrorIf(message, condition)
#endif

#ifdef DEBUG_LOG_WARNING
	#define Debug_LogWarning(message) __DEBUG_LOG(WARNING,message)
	#define Debug_LogWarningIf(message, condition) __DEBUG_LOG_IF(WARNING,message,condition)
#else
	#define Debug_LogWarning(message)
	#define Debug_LogWarningIf(message, condition)
#endif

#ifdef DEBUG_LOG_INFO
	#define Debug_LogInfo(message) __DEBUG_LOG(INFO,message)
	#define Debug_LogInfoIf(message, condition) __DEBUG_LOG_IF(INFO,message,condition)
#else
	#define Debug_LogInfo(message)
	#define Debug_LogInfoIf(message, condition)
#endif

#ifdef DEBUG_LOG_DEBUG
	#define Debug_LogDebug(message) __DEBUG_LOG(DEBUG,message)
	#define Debug_LogDebugIf(message, condition) __DEBUG_LOG_IF(DEBUG,message,condition)
#else
	#define Debug_LogDebug(message)
	#define Debug_LogDebugIf(message, condition)
#endif

#ifdef DEBUG_LOG_TRACE
	#define Debug_LogTrace(message) __DEBUG_LOG(TRACE,message)
	#define Debug_LogTraceIf(message, condition) __DEBUG_LOG_IF(TRACE,message,condition)
#else
	#define Debug_LogTrace(message)
	#define Debug_LogTraceIf(message, condition)
#endif