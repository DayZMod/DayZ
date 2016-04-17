#include "\z\addons\dayz_code\utils\math.hpp"
#include "\z\addons\dayz_code\utils\array.hpp"

#define PLAYER_BASE "Survivor_DZ"
#define PLAYER_MALE "Survivor2_DZ"
#define PLAYER_FEMALE "SurvivorW2_DZ"

private
[
	"_genderDialog",
	"_gender",
	"_regionDialog",
	"_region",
	"_class"
];

_genderDialog = createDialog "RscDisplaySelectGender";
waitUntil {!dz_gui_gender};
_gender = dz_gui_gender_result;

_region = 0;

if (dayz_spawnSelection) then
{
	_regionDialog = createDialog "RscDisplaySelectRegion";
	waitUntil {!dz_gui_region};
	_region = dz_gui_region_result;
};

if (_region == 0) then
{
	_region = floor Math_RandomRange(1, 7);
};

_marker = getMarkerPos format ["spawn%1", _region];

for "_i" from 1 to 5 do
{
	// https://community.bistudio.com/wiki/BIS_fnc_findSafePos
	_position = [_marker, 0, 1400, 10, 0, 2, 1] call BIS_fnc_findSafePos;
	
	// Check if there are any nearby players
	if (!Array_Any(_position nearEntities Array_New2(PLAYER_BASE, 150), {alive _this})) exitWith {};
};

//true for male, false for female
_class = if (_gender) then { PLAYER_MALE } else { PLAYER_FEMALE };

_class call player_switchModel;