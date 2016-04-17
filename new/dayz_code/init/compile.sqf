#define STRINGIFY(x) #x
#define PATH(sub_path) STRINGIFY(\dayz\dayz_code\sub_path)
#define CCPP call compile preprocessFileLineNumbers

//Common compiles
CCPP PATH(util\compile.sqf);
CCPP PATH(loot\compile.sqf);

//Server compiles
if isServer exitWith { CCPP "\dayz\dayz_server\init\compile.sqf" };

//Client compiles

//functions
CCPP PATH(functions\rollmsg.sqf);
CCPP PATH(functions\crashsite_fire.sqf);
CCPP PATH(functions\itemWear.sqf);
CCPP PATH(functions\action.sqf);

//ui
CCPP PATH(ui\compile.sqf);

//actions
CCPP PATH(actions\build.sqf);
CCPP PATH(actions\attachment.sqf);
CCPP PATH(actions\consume.sqf);
CCPP PATH(actions\switchWeapon.sqf);
CCPP PATH(actions\chopWood.sqf);
CCPP PATH(actions\consume.sqf);
CCPP PATH(actions\gut.sqf);
CCPP PATH(actions\jerry_fill.sqf);
CCPP PATH(actions\refuel.sqf);
CCPP PATH(actions\wearClothing.sqf);

//player
CCPP PATH(player\player.sqf);
CCPP PATH(player\handleDamage.sqf);
CCPP PATH(player\tick.sqf);

//keyboard
CCPP PATH(init\keyboard.sqf);