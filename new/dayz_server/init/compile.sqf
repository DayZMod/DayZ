#define STRINGIFY(x) #x
#define PATH(sub_path) STRINGIFY(\dayz\dayz_server\sub_path)
#define CCPP compile preprocessFileLineNumbers

//Server utilities
CCPP PATH(util\compile.sqf);

//Functions
CCPP PATH(functions\traps.sqf);

//Actions
CCPP PATH(actions\build.sqf);
CCPP PATH(actions\refuel.sqf);