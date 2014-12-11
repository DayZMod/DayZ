private ["_vehicle","_inVehicle","_cursorTarget","_onLadder","_canDo","_ownerArray","_text"];

scriptName "Functions\misc\fn_upgradeActions.sqf";
_vehicle = vehicle player;
_inVehicle = (_vehicle != player);
_cursorTarget = cursorTarget;
if ((isNil "_cursorTarget") or {(isNull _cursorTarget)}) then {
    _cursorTarget = nearestObjects [ player modelToWorld [0,1.5,0] , ["DZ_buildables","BuiltItems"], 1.5];
    _cursorTarget = if (count _cursorTarget == 0) then { objNull } else { _cursorTarget select 0 };
};
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf and !r_player_unconscious and !_onLadder);
r_action_build = false;

dayz_resetUpgradeActions = {
    player removeAction s_player_building;
    s_player_building = -1;
    player removeAction s_player_maintenance;
    s_player_maintenance = -1;
    player removeAction s_player_disassembly;
    s_player_disassembly = -1;
};

if ((player getVariable["alreadyBuilding",0]) == 1) exitWith { call dayz_resetUpgradeActions; };


if (!isNull _cursorTarget and !_inVehicle and (player distance _cursorTarget < 4) and _canDo) then { 
    _ownerArray = _cursorTarget getVariable ["ownerArray",[]];
//    diag_log [ diag_tickTime, __FILE__, "_ownerArray", _ownerArray, "PlayerUID", getPlayerUID player];
    //building System
    //if (typeOf _cursorTarget in ["ShantyHouse_Base","SurvivorWorkshop","SurvivorWorkshopStage2","SurvivorWorkshopAStage3","SurvivorWorkshopBStage3","SurvivorWorkshopCStage3","SurvivorWorkshopAStage4","SurvivorWorkshopBStage4","SurvivorWorkshopCStage4"]) then {
    _text = getText (configFile >> "CfgVehicles" >> typeOf _cursorTarget >> "displayName");
    
    if ((_cursorTarget iskindof "DZ_buildables") and isText(configFile >> "CfgVehicles" >> (typeOf _cursorTarget) >> "Upgrade" >> "create")) then {
        if (s_player_building < 0) then {
            if (isText (configFile >> "CfgVehicles" >> (typeof _cursorTarget) >> "Upgrade" >> "create")) then {
                s_player_building = player addAction [format[localize "str_upgrade",_text], "\z\addons\dayz_code\actions\object_upgradebuilding.sqf",_cursorTarget, 0, false, true, "",""];
            };
        };
        /*
        if (s_player_maintenance < 0) then {
            if (isText (configFile >> "CfgVehicles" >> (typeof _cursorTarget) >> "Maintenance" >> "active")) then {
                _text = getText (configFile >> "CfgVehicles" >> typeOf _cursorTarget >> "maintenancename");
                s_player_maintenance = player addAction [format[localize "str_maintenance",_text], "\z\addons\dayz_code\actions\object_maintenance.sqf",_cursorTarget, 0, false, true, "", "'ItemToolbox' in items player"];
            };
        };*/
    } else {
        player removeAction s_player_building;
        s_player_building = -1;
        player removeAction s_player_maintenance;
        s_player_maintenance = -1;
    };
    
    if (((getPlayerUID player) in _ownerArray) or (count _ownerArray == 0) or ((typeof _cursorTarget) in ["WoodenFence_1_foundation","MetalFence_1_foundation"])) then {
        if (s_player_disassembly < 0) then {
            if (isClass (configFile >> "CfgVehicles" >> (typeof _cursorTarget) >> "Disassembly")) then {
                s_player_disassembly = player addAction [format[localize "str_disassembly",_text], "\z\addons\dayz_code\actions\object_disassembly.sqf",_cursorTarget, 0, false, true, "", "'ItemToolbox' in items player"];
            }/*else { systemchat 'no class Disassembly';}*/;
        }/*else { systemchat 'already Disassembly';}*/;
    }/*else { systemchat 'not owner';}*/;
} else {
    call dayz_resetUpgradeActions;
};


/*
dayz_resetUpgradeActions = {
    s_player_disassembly = -1;
    s_player_building = -1;
    s_player_maintenance = -1;
};
*/

//Monitor
player setVariable ["upgradeActions", diag_ticktime, false];

