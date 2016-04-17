#define STRINGIFY(x) #x
#define PATH(sub_path) STRINGIFY(\dayz\dayz_code\ui\sub_path)
#define CCPP call compile preprocessFileLineNumbers

CCPP PATH(gear\gear.sqf);
CCPP PATH(gear\contextMenu.sqf);