#include "\dayz\dayz_code\util\debug.hpp"
#include "\dayz\dayz_code\util\string.hpp"
#include "\dayz\dayz_code\util\reference.hpp"
#include "\dayz\dayz_code\util\util.hpp"

#define CCPP call compile preprocessFileLineNumbers

#define FADE_IN_TIME 3
#define EXIT_TIME 5

if !isNil "dz_init_started" exitWith {};
dz_init_started = true;
dz_init_finished = false;

dz_mission_root = toArray _this;
dz_mission_root set [count dz_mission_root - 8, 0];
dz_mission_root = toString dz_mission_root;

//Load mission settings
CCPP "settings.sqf";

if isServer exitWith
	{ CCPP "\dayz\dayz_server\init\init.sqf" };

dz_preloadFinished = false;
onPreloadFinished
{
	Debug_LogDebug(String_Format1("Preload finished at %1.", diag_tickTime));
	
	0 cutText ["", "BLACK", 10^-10];
	0 fadeSound 0;
	
	dz_preloadFinished = true;
	onPreloadFinished {};
};

enableSaving [false, false];

startLoadingScreen ["", "RscDisplayLoadCustom"];
progressLoadingScreen 0;

//Get initialization data from server
_ref = Ref_New(false);
_ref spawn
{
	Ref_Set(_this, true);
	
	//Wait for server to be ready
	waitUntil { !isNil "dz_pv_init" };
	Debug_LogDebug(String_Format1("dz_pv_init received at %1.", diag_tickTime));
	dz_date = dz_pv_init select 0;
	dz_seed = dz_pv_init select 1;
	dz_version = dz_pv_init select 2;
	
	//Request init data
	waitUntil { !isNull player };
	Debug_LogDebug(String_Format1("dz_pvs_init sent at %1.", diag_tickTime));
	dz_pvs_init = player;
	publicVariableServer "dz_pvs_init";
	
	//Wait for init data
	waitUntil { !isNil "dz_pvc_init" };
	Debug_LogDebug(String_Format1("dz_pvc_init received at %1.", diag_tickTime));
	dz_owner = dz_pvc_init;
};

//Give the network init script a chance to start in order to speed things up incase server is ready
waitUntil { Ref_Get(_ref) };

_setLoadingScreenMessage = { uiNameSpace getVariable "BIS_loadingScreen" displayCtrl 8400 ctrlSetText _this };

//Compile
CCPP "\dayz\dayz_code\init\compile.sqf";

//Run mission code
CCPP "client.sqf";

//Login
_fail = CCPP "\dayz\dayz_code\login\main.sqf";

//If login failed then exit to lobby
if !isNil "_fail" exitWith
{
	//Show error
	format ["Login failed. %1", _fail] call _setLoadingScreenMessage;
	
	//Smoothly update progress while waiting
	_time = diag_tickTime;
	while { diag_tickTime - _time < EXIT_TIME } do
	{
		progressLoadingScreen ((diag_tickTime - _time) / EXIT_TIME);
		Util_FrameSleep();
	};
	
	endMission "END1";
};

endLoadingScreen;

//Fade in
FADE_IN_TIME fadeSound 1;
0 cutText ["", "BLACK IN", FADE_IN_TIME];

//Display rules
CCPP "\dayz\dayz_code\init\rules.sqf";