private ["_dir","_object","_speed","_vel"];
_object = _this;

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
["Working",0,[0,1,3,0]] call dayz_NutritionSystem;
