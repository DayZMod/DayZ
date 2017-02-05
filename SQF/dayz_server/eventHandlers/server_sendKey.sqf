local _var = "PVDZ_fskey" + (_this select 1);
missionNamespace setVariable [_var, dz_fskey];

owner (_this select 0) publicVariableClient _var;
missionNamespace setVariable [_var, nil];