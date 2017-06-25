#define ACTION_UPGRADE displayName = $STR_UPGRADE;\
	displayNameDefault = $STR_UPGRADE;\
	radius = 3;\
	position = "";\
	onlyForPlayer = 1;\
	condition = "(['ObjectUpgrade',this] call userActionConditions)";\
	statement = "this execVM '\z\addons\dayz_code\actions\object_upgradebuilding.sqf'";

#define ACTION_MAINTENANCE displayName = $STR_MAINTENANCE;\
	displayNameDefault = $STR_MAINTENANCE;\
	radius = 3;\
	position = "";\
	onlyForPlayer = 1;\
	condition = "(['ObjectMaintenance',this] call userActionConditions)";\
	statement = "this execVM '\z\addons\dayz_code\actions\object_maintenance.sqf'";
	
#define ACTION_DISASSEMBLY displayName = $STR_DISASSEMBLY;\
	displayNameDefault = $STR_DISASSEMBLY;\
	radius = 3;\
	position = "";\
	onlyForPlayer = 1;\
	condition = "(['ObjectDisassembly',this] call userActionConditions)";\
	statement = "this execVM '\z\addons\dayz_code\actions\object_disassembly.sqf'";
	
#define ACTION_OPEN_DOORS displayName = $STR_DN_OUT_O_DOOR;\
	displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;\
	radius = 3;\
	position = "DoorL";\
	onlyForPlayer = 1;\
	condition = "this animationPhase 'DoorR' < 0.5";\
	statement = "this animate ['DoorR', 1];this animate ['DoorL', 1]";
	
#define ACTION_CLOSE_DOORS displayName = $STR_DN_OUT_C_DOOR;\
	displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;\
	radius = 3;\
	position = "DoorL";\
	onlyForPlayer = 1;\
	condition = "this animationPhase 'DoorR' >= 0.5";\
	statement = "this animate ['DoorR', 0];this animate ['DoorL', 0]";