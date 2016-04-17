dz_fn_useMedical =
{
	if !isClass (configFile >> "CfgMagazines" >> _this select 0 >> "Medical") exitWith {};
	["medical", _this select 0] call dz_fn_action;
};

_finish =
{
	_cfg = configFile >> "CfgMagazines" >> _this >> "Medical";
};

["medical", _finish] call dz_fn_action_register;