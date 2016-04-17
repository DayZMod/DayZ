/* Provides functions for working with arrays.

Author:
	Foxy
*/

#ifndef _INCLUDE_GUARD_ARRAY
	#define _INCLUDE_GUARD_ARRAY
	
	//Get or set the element at specific index.
	#define Array_Get(array, index) ((array) select (index))
	#define Array_Set(array, index, value) ((array) set [index, value])
	
	//Atomically retrieve and replace the value at specified index.
	#define Array_Exchange(array, index, value) ([array, index, value] call dz_fn_array_exchange)
	#define Array_Exchange_Fast(array, index, value) ([(array) select (index), (array) set [index, value]] select 0)
	
	#define Array_PushBack(array, value) ([array, value] call dz_fn_array_pushBack)
	#define Array_PushBack_Fast(array, value) ((array) set [count (array), value])
	
	#define Array_Append(array, elements) ([array, elements] call dz_fn_array_append)
	
	//Returns true if any of the array elements matches the specified predicate
	#define Array_Any(array, predicate) ([array, predicate, _this] call dz_fn_array_any)
	
	//Returns true if all of the array elements match the specified predicate
	#define Array_All(array, predicate) ([array, predicate, _this] call dz_fn_array_all)
	
	//Returns the first element of the array that matches the specified predicate
	#define Array_First(array, predicate) ([array, predicate, _this] call dz_fn_array_first)
	
	//Returns a new array containing elements selected using the specified predicate.
	#define Array_Where(array, predicate) ([array, predicate, _this] call dz_fn_array_where)
	
	//Returns a new array containing values derived using the specified selector function.
	#define Array_Select(array, selector) ([array, selector, _this] call dz_fn_array_select)
	
	//Selects a random element from the specified array
	#define Array_SelectRandom(array) ((array) call dz_fn_array_selectRandom)
	#define Array_SelectRandom_Fast(array) ((array) select floor random count (array))
	
	//Shuffles the given array. Modifies the passed in array and returns it.
	//To preserve the original pass in a copy: Array_Shuffle(+myArray)
	//Algorithm: Fisher-Yates		Complexity: O(n)
	#define Array_Shuffle(array) ((array) call dz_fn_array_shuffle)
	
	//Sorts the given array using specified comparer function.
	//To preserve the original pass in a copy: Array_MergeSort(+myArray, myComparer)
	//Algorithm: Merge Sort			Complexity: O(n log n)
	#define Array_MergeSort(array, comparer) ([array, comparer] call dz_fn_array_mergeSort)
	
	//Array initialization macros for passing arrays as macro arguments.
	#define Array_New(size) ((size) call dz_fn_array_new)
	#define Array_New0() []
	#define Array_New1(p0) [p0]
	#define Array_New2(p0,p1) [p0,p1]
	#define Array_New3(p0,p1,p2) [p0,p1,p2]
	#define Array_New4(p0,p1,p2,p3) [p0,p1,p2,p3]
	#define Array_New5(p0,p1,p2,p3,p4) [p0,p1,p2,p3,p4]
	#define Array_New6(p0,p1,p2,p3,p4,p5) [p0,p1,p2,p3,p4,p5]
	#define Array_New7(p0,p1,p2,p3,p4,p5,p6) [p0,p1,p2,p3,p4,p5,p6]
	#define Array_New8(p0,p1,p2,p3,p4,p5,p6,p7) [p0,p1,p2,p3,p4,p5,p6,p7]
	#define Array_New9(p0,p1,p2,p3,p4,p5,p6,p7,p8) [p0,p1,p2,p3,p4,p5,p6,p7,p8]
	#define Array_New10(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9]
	#define Array_New11(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10]
	#define Array_New12(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11]
	#define Array_New13(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12]
	#define Array_New14(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13]
	#define Array_New15(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14]
	#define Array_New16(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15]
#endif