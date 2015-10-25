#ifndef _INCLUDE_GUARD_ARRAY
#define _INCLUDE_GUARD_ARRAY

//Returns true if any of the array elements matches the specified predicate
#define Array_Any(arr, predicate) ([arr, predicate] call array_any)

//Returns true if all of the array elements match the specified predicate
#define Array_All(p_arr,p_pred) ([arr, predicate] call array_all)

//Returns the first element of the array that matches the specified predicate
#define Array_First(arr, predicate) ([arr, predicate] call array_first)

//Selects a random element from the specified array
#define Array_SelectRandom(arr) ((arr) call array_selectRandom)

//Shuffles the given array. Modifies the passed in array and returns it.
//To preserve the original pass in a copy: Array_Shuffle(+myArray)
//Algorithm: Fisher-Yates		Complexity: O(n)
#define Array_Shuffle(arr) ((arr) call array_shuffle)

//Sorts the given array using specified comparer function.
//To preserve the original pass in a copy: Array_MergeSort(+myArray, myComparer)
//Algorithm: Merge Sort			Complexity: O(n log n)
#define Array_MergeSort(arr, comparer) ([arr, comparer] call array_mergeSort)

#endif