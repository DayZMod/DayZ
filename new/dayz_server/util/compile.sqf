#define STRINGIFY(x) #x
#define PATH(sub_path) STRINGIFY(\dayz\dayz_server\util\sub_path)
#define CCPP call compile preprocessFileLineNumbers

CCPP PATH(request.sqf);
CCPP PATH(command.sqf);
CCPP PATH(object.sqf);