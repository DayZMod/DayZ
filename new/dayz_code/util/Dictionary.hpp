/* Defines member functions for a dictionary class.
Can be used to associate string or scalar keys to data.
See https://en.wikipedia.org/wiki/Associative_array

Author:
	Foxy
*/

#ifndef _INCLUDE_GUARD_DICTIONARY
	#define _INCLUDE_GUARD_DICTIONARY
	
	//Initialize a new empty dictionary
	#define Dictionary_New() [0, [], []]
	
	/* Adds a key-value pair to the specified dictionary.
	
	Parameters:
		dictionary		dictionary
		string/scalar	key (case sensitive)
		any				value
	
	Return:
		bool			Whether the key-value pair was added succesfully
	*/
	#define Dictionary_Add(d, key, value) ([d, key, value] call dz_fn_dictionary_add)
	
	/* Removes a the specified key and the associated value from the dictionary.
	
	Parameters:
		dictionary		dictionary
		string/scalar	key (case sensitive)
	
	Return:
		bool			Whether the key-value pair was removed succesfully.
	*/
	#define Dictionary_Remove(d, key) ([d, key] call dz_fn_dictionary_remove)
	
	/* Returns the value associated with the specified key.
	
	Parameters:
		dictionary		dictionary
		string/scalar	key (case sensitive)
	
	Return:
		any				Value associated with the specified key.
	*/
	#define Dictionary_Get(d, key) ([d, key] call dz_fn_dictionary_get)
	
	/* Determines whether the dictionary contains the specified key.
	
	Parameters:
		dictionary		dictionary
		string/scalar	key (case sensitive)
	
	Return:
		bool			True if the dictionary contains the specified key.
	*/
	#define Dictionary_ContainsKey(d, key) ([d, key] call dz_fn_dictionary_containsKey)
	
	/* Returns the number of key-value pairs in the dictionary.
	
	Parameters:
		dictionary		dictionary
	*/
	#define Dictionary_Count(d) ((d) select 0)
#endif