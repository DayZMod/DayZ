#include "\dayz\dayz_code\util\debug.hpp"

#define CCPP call compile preprocessFileLineNumbers

onPreloadFinished
{
	Debug_LogDebug(String_Format1("Preload finished at %1.", diag_tickTime));
	dz_preloadFinished = true;
	onPreloadFinished {};
};

//TODO: get date from extension
dz_date = 0;
//TODO: get seed from extension?
dz_seed = "";

//Player specific initialization. Returns player's client ID.
"dz_pvs_init" addPublicVariableEventHandler
{
	_obj = _this select 1;
	if !isNull _obj then
	{
		_owner = owner _obj;
		dz_pvc_init = [_owner];
		_owner publicVariableClient "dz_pvc_init";
	};
};

//Server instance specific initialization. Distributes date, seed and server version.
dz_pv_init = [dz_date, dz_seed, getText (configFile >> "CfgMods" >> "DayZ" >> "version")];
publicVariable "dz_pv_init";

CCPP "\dayz\dayz_code\init\compile.sqf";