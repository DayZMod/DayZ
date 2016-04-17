/* String tools.

Author:
	Foxy
*/

#ifndef _INCLUDE_GUARD_STRING
	#define _INCLUDE_GUARD_STRING
	
	//Produces a string literal containing the argument.
	#define STRINGIFY(x) #x
	
	//Extracts a substring from the string starting at the specified offset.
	//Pass -1 as the length to continue to the end of the string.
	#define String_Substring(string, offset, length) ([string, offset, length] call dz_fn_string_substr)
	
	//Finds the index of the first occurrence of a substring in the string, starting at the specified index.
	//Returns -1 the substring was not found.
	#define String_Find(string, search, start) ([toLower (string), toLower (search), start] call dz_fn_string_find)
	#define String_Finds(string, search, start) ([string, search, start] call dz_fn_string_find)
	
	#define String_PadLeft(string, length, char) ([string, length, char] call dz_fn_string_padleft)
	#define String_PadRight(string, length, char) ([string, length, char] call dz_fn_string_padright)
	
	#define String_Hex(value) ((value) call dz_fn_string_hex)
	
	//Same as format [STRING, ANY...]
	#define String_Format1(string,p0) format [string,p0]
	#define String_Format2(string,p0,p1) format [string,p0,p1]
	#define String_Format3(string,p0,p1,p2) format [string,p0,p1,p2]
	#define String_Format4(string,p0,p1,p2,p3) format [string,p0,p1,p2,p3]
	#define String_Format5(string,p0,p1,p2,p3,p4) format [string,p0,p1,p2,p3,p4]
	#define String_Format6(string,p0,p1,p2,p3,p4,p5) format [string,p0,p1,p2,p3,p4,p5]
	#define String_Format7(string,p0,p1,p2,p3,p4,p5,p6) format [string,p0,p1,p2,p3,p4,p5,p6]
	#define String_Format8(string,p0,p1,p2,p3,p4,p5,p6,p7) format [string,p0,p1,p2,p3,p4,p5,p6,p7]
	#define String_Format9(string,p0,p1,p2,p3,p4,p5,p6,p7,p8) format [string,p0,p1,p2,p3,p4,p5,p6,p7,p8]
	#define String_Format10(string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9) format [string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9]
	#define String_Format11(string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10) format [string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10]
	#define String_Format12(string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11) format [string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11]
	#define String_Format13(string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12) format [string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12]
	#define String_Format14(string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13) format [string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13]
	#define String_Format15(string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14) format [string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14]
	#define String_Format16(string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15) format [string,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15]
#endif