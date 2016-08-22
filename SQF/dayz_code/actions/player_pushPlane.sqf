private ["_dir","_object","_speed","_vel"];
_object = _this select 3;

player removeAction s_player_pushPlane;
s_player_pushPlane = -1;

if (!local _object) exitWith {
	localize "str_actions_pilot_seat" call dayz_rollingMessages;
};

_vel = velocity _object;
_dir = direction _object;
_speed = -1;
_object setVelocity [
	(_vel select 0) + (sin _dir * _speed), 
	(_vel select 1) + (cos _dir * _speed), 
	(_vel select 2)
];

// Alert Zombies
[player,20,true,(getPosATL player)] call player_alertZombies;

// Added Nutrition-Factor for work
["Working",0,[20,40,15,0]] call dayz_NutritionSystem;
