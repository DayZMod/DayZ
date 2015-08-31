#define Dictionary_New() [0, [], []]

#define Dictionary_Add(d, key, value) ([d, key, value] call dictionary_add)

#define Dictionary_Remove(d, key) ([d, key] call dictionary_remove)

#define Dictionary_Get(d, key) ([d, key] call dictionary_get)

#define Dictionary_ContainsKey(d, key) ([d, key] call dictionary_containsKey)

#define Dictionary_Compact(d) ((d) call dictionary_compact)