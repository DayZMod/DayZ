/*

Opens player inventory to save

*/

_magazineArray = [] call player_countMagazines;

PVDZ_plr_Save = [player,[_magazineArray,dayz_onBack]];
publicVariableServer "PVDZ_plr_Save";
					
dayz_lastSave = diag_tickTime;
