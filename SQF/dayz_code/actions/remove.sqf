/*
delete object from db
parameters: _obj
*/
private["_obj","_objectID","_objectUID","_dis","_sfx"];

_obj = _this select 3;
_objectID = _obj getVariable ["ObjectID","0"];
_objectUID = _obj getVariable ["ObjectUID","0"];

player playActionNow "Medic";
sleep 1;

_dis=20;
_sfx = "repair";
[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
[player,_dis,true,(getPosATL player)] call player_alertZombies;

//["PVDZ_obj_Delete",[_objectID,_objectUID]] call callRpcProcedure;
PVDZ_obj_Destroy = [_objectID,_objectUID];
publicVariableServer "PVDZ_obj_Destroy";
deleteVehicle _obj;

_obj