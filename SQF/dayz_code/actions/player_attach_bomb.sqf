private["_theBomb","_vehicle","_curFuel","_newFuel","_timeLeft","_hasToolbox","_hasCarBomb","_dis","_sfx","_alreadyBombed","_hasCrowbar","_started", "_isPlanting"];
_vehicle = 		cursorTarget;
_hasToolbox = 	"ItemToolbox" in items player;
_hasCrowbar = 	"ItemCrowbar" in items player;
_hasCarBomb = 	"ItemCarBomb" in magazines player;
_alreadyBombed = _vehicle getVariable["hasBomb",false];

if(!_hasToolbox or !_hasCrowbar) exitWith {
	cutText ["\n\nYou need a Toolbox and a Crowbar to attach the Bomb to this Vehicle", "PLAIN DOWN"];
};

if(!_hasCarBomb) exitWith {
	cutText ["\n\nYou don't have a Bomb in your Inventory", "PLAIN DOWN"];
};

// Not sure if we should keep this, in real life more than 1 bomb can be on a car // D7
if(_alreadyBombed) exitWith {
	cutText ["\n\nThis Vehicle already has a Bomb attached!", "PLAIN DOWN"];
};

if((player distance getPos _vehicle) > 4) exitWith {
	cutText ["\n\nThis vehicle is not in range", "PLAIN DOWN"];
};

if(!((_vehicle isKindOf "Car") || (_vehicle isKindOf "Air") || (_vehicle isKindOf "Motorcycle") || (_vehicle isKindOf "Boat"))) then{
	cutText ["\n\nPlease attach the bomb to a valid vehicle.", "PLAIN DOWN"];
};

player removeMagazine "ItemCarBomb";

//wait a bit
r_doLoop = true;
_started = false;

[player] allowGetIn false;
player playActionNow "Medic";

_dis = 8; // 8 meters of zombie hearing range, adding a bomb, not playing a trumpet. // D7 // Was _dis = 20 //
_sfx = "tentunpack";


[player,_sfx,0,false,_dis] call dayz_zombieSpeak;  
[player,_dis,true,(getPosATL player)] spawn player_alertZombies;
["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

while {r_doLoop} do {
	_animState = animationState player;
	_isPlanting = ["medic",_animState] call fnc_inString;
	if (_isPlanting or dayz_isSwimming) then {
		_started = true;
	};
	if (_started and !_isPlanting) then {
		r_doLoop = false;
	};
	sleep 0.1;
};
r_doLoop = false;

//Send the Eventhandler to Server
PVDZ_dayzCarBomb = _vehicle;
publicVariableServer "PVDZ_dayzCarBomb";

[player] allowGetIn true;

cutText ["\n\nAttached Carbomb! Next Survivor who starts the Engine will blow up!", "PLAIN DOWN"];