_magazineArray = [] call player_countMagazines;

PVDZ_plr_Save = [player,[_magazineArray,dayz_onBack],false,dayz_playerAchievements];
publicVariableServer "PVDZ_plr_Save";

_objects = nearestObjects [getPosATL player, DayZ_GearedObjects, 10];

{
	PVDZ_veh_Save = [_x,"gear"];
	publicVariableServer "PVDZ_veh_Save";

} foreach _objects;
					
dayz_lastSave = diag_tickTime;
