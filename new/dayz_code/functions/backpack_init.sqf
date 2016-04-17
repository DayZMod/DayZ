dz_fn_backpack_init =
{
	if (_this select 0 getVariable ["takeActionSet", false]) exitWith {};
	_this select 0 addAction [format [localize "STR_INIT_TAKE", getText (configFile >> "CfgVehicles" >> typeof (_this select 0) >> "displayName")], "\dayz\dayz_code\actions\takeBackpack.sqf"];
};