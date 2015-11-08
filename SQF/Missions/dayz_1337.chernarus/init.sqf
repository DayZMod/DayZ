//Server Settings

//Add the insttance id  of this server 
dayZ_instance = 1337; // The instance
//Tag info this is shown to all players in the bottom left hand side of the screen 
dayZ_serverName = "1337"; // Servername (country code + server number)

//Gamesettings
dayz_antihack = 0; // DayZ Antihack / 1 = enabled // 0 = disabled
dayz_REsec = 1; // DayZ RE Security / 1 = enabled // 0 = disabled
dayz_enableRules = true; //Enables a nice little news/rules feed on player login (make sure to keep the lists quick).
dayz_quickSwitch = false; //Turns on forced animation for weapon switch. (hotkeys 1,2,3) False = enable animations, True = disable animations
dayz_POIs = true;
dayz_infectiousWaterholes = true;

//DayazMod Presets 
dayz_presets = "Vanilla"; //"Custom","Classic","Vanilla","Elite"

//Only need to edit if you running a custom server.
if ( dayz_presets == "Custom") then {
	dayz_enableGhosting = true; //Enable disable the ghosting system.
	dayz_ghostTimer = 30; //Sets how long in seconds a player must be dissconnected before being able to login again.
	dayz_spawnselection = 1; //Turn on spawn selection 0 = random only spawns, 1 = Spawn choice based on limits
	dayz_spawncarepkgs_clutterCutter = 2; //0 =  loot hidden in grass, 1 = loot lifted and 2 = no grass
	dayz_spawnCrashSite_clutterCutter = 2;	// heli crash options 0 =  loot hidden in grass, 1 = loot lifted and 2 = no grass
	dayz_spawnInfectedSite_clutterCutter = 2; // infected base spawn... 0: loot hidden in grass, 1: loot lifted, 2: no grass 
	dayz_bleedingeffect = 3; //1= blood on the ground, 2= partical effect, 3 = both.
	dayz_ForcefullmoonNights = false; // Forces night time to be full moon.
	dayz_OpenTarget_TimerTicks = 60 * 10; //how long can a player be freely attacked for after attacking someone unprovoked.
	dayz_nutritionValuesSystem = false; //Enables nutrition system
	
	//not implmented yet.
	dayz_classicBloodBagSystem = false; // removes all blood type bloodbags
};

//temp settings
dayz_DamageMultiplier = 2; //1 - 0 = Disabled, anything over 1 will multiply damage. Damage Multiplier for Zombies.
dayz_maxGlobalZeds = 500; //Limit the total zeds server wide.
dayz_temperature_override = false; // Set to true to disable all temperature changes.


// DO NOT EDIT BELOW HERE //
MISSION_ROOT=toArray __FILE__;MISSION_ROOT resize(count MISSION_ROOT-8);MISSION_ROOT=toString MISSION_ROOT;
diag_log 'dayz_preloadFinished reset';
dayz_preloadFinished=nil;
onPreloadStarted "diag_log [diag_tickTime, 'onPreloadStarted']; dayz_preloadFinished = false;";
onPreloadFinished "diag_log [diag_tickTime, 'onPreloadFinished']; if (!isNil 'init_keyboard') then { [] spawn init_keyboard; }; dayz_preloadFinished = true;";

with uiNameSpace do {RscDMSLoad=nil;}; // autologon at next logon

if (!isDedicated) then {
	enableSaving [false, false];
	startLoadingScreen ["","RscDisplayLoadCustom"];
	progressLoadingScreen 0;
	dayz_loadScreenMsg = localize 'str_login_missionFile';
	progress_monitor = [] execVM "\z\addons\dayz_code\system\progress_monitor.sqf";
	0 cutText ['','BLACK',0];
	0 fadeSound 0;
	0 fadeMusic 0;
};

initialized = false;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\variables.sqf";
progressLoadingScreen 0.05;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\publicEH.sqf";
progressLoadingScreen 0.1;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\setup_functions_med.sqf";
progressLoadingScreen 0.15;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\compiles.sqf";
progressLoadingScreen 0.2;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\system\BIS_Effects\init.sqf";
progressLoadingScreen 0.25;
initialized = true;

setTerrainGrid 25;

if (dayz_REsec == 1) then { call compile preprocessFileLineNumbers "\z\addons\dayz_code\system\REsec.sqf"; };
execVM "\z\addons\dayz_code\system\DynamicWeatherEffects.sqf";

if (isServer) then {
	execVM "\z\addons\dayz_server\system\server_monitor.sqf";
	//Must be global spawned, So players dont fall thought buildings (might be best to spilt these to important, not important)
};

if (dayz_POIs) then { execVM "\z\addons\dayz_code\system\mission\chernarus\poi\init.sqf"; };

if (!isDedicated) then {
	if (dayz_infectiousWaterholes) then { execVM "\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\init.sqf"; };
	if (dayz_antihack != 0) then {
		execVM "\z\addons\dayz_code\system\mission\chernarus\security\init.sqf";
		call compile preprocessFileLineNumbers "\z\addons\dayz_code\system\antihack.sqf";
	};
	
	// remove annoying benches
	if (toLower(worldName) == "chernarus") then {
		diag_log format["WARNING: Clearing Benches from %1",worldName];
		([4654,9595,0] nearestObject 145259) setDamage 1;
		([4654,9595,0] nearestObject 145260) setDamage 1;
	};
	
	if (dayz_enableRules) then { execVM "rules.sqf"; };
	if (!isNil "dayZ_serverName") then { execVM "\z\addons\dayz_code\system\watermark.sqf"; };
	execVM "\z\addons\dayz_code\compile\client_plantSpawner.sqf";
	execFSM "\z\addons\dayz_code\system\player_monitor.fsm";
	waituntil {scriptDone progress_monitor};
	cutText ["","BLACK IN", 3];
	3 fadeSound 1;
	3 fadeMusic 1;
	endLoadingScreen;
};
