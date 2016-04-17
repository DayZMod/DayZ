#define STRINGIFY(x) #x
#define PATH(sub_path) STRINGIFY(\dayz\dayz_code\util\sub_path)
#define CCPP call compile preprocessFileLineNumbers

//Debug
CCPP PATH(debug.sqf);

//Generic utilities
CCPP PATH(util.sqf);
CCPP PATH(mutex.sqf);
CCPP PATH(math.sqf);
CCPP PATH(array.sqf);
CCPP PATH(string.sqf);

//Collections
CCPP PATH(stack.sqf);
CCPP PATH(queue.sqf);
CCPP PATH(dictionary.sqf);

//RPC
CCPP PATH(publish.sqf);
if !isDedicated then { CCPP PATH(request.sqf) };
if !isDedicated then { CCPP PATH(command.sqf) };

//Specialized
CCPP PATH(vector.sqf);
CCPP PATH(player.sqf);
CCPP PATH(object.sqf);