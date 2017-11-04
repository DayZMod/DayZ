if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;
/*
delete object from db
parameters: _obj
*/
private ["_obj","_objectID","_objectUID","_dis","_sfx","_finished"];

_obj = _this select 3;
_objectID = _obj getVariable ["ObjectID","0"];
_objectUID = _obj getVariable ["ObjectUID","0"];

_dis=20;
_sfx = "repair";
[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
[player,_dis,true,(getPosATL player)] call player_alertZombies;

_finished = ["Medic",1] call fn_loopAction;
if (!_finished) exitWith {
	dayz_actionInProgress = false;
};

PVDZ_obj_Destroy = [_objectID,_objectUID,player,_obj,dayz_authKey];
publicVariableServer "PVDZ_obj_Destroy";
//deleteVehicle _obj; //Moved to server to verify before delete

dayz_actionInProgress = false;