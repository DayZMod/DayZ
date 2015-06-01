/*
	Player action for consuming items
	
	Single parameter:
		string		item classname
	
	Author:
		Foxy
*/

#define PILE_SEARCH_RADIUS 2
#define PILE_PLAYER_OFFSET [0,1,0]

private
[
	"_cfg",
	"_nutrition",
	"_bloodRegen",
	"_infectionChance",
	"_sound",
	"_output"
];

_cfg = (ConfigFile >> "CfgMagazines" >> _this);

//class doesn't exist
if (!isClass(_cfg)) exitWith
{
	diag_log format ["DAYZ ERROR: Invalid magazine classname given to player_consume: %1", _this];
};

//class isn't a consumable
if (!isArray(_cfg >> "Nutrition")) exitWith
{
	diag_log format ["DAYZ ERROR: Non-consumable item classname given to player_consume: %1", _this];
};

//player is on a ladder
if ((getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1) exitWith
{
	(localize "str_player_21") call dayz_rollingMessages;
};

//player doesn't have the consumable item
if (!(_this in magazines player)) exitWith
{
	//TODO move to stringtable
	"You seem to have misplaced the foodstuff." call dayz_rollingMessages;
};

//close gear
(findDisplay 106) closeDisplay 0;

//if player is not in a vehicle play animation
if (vehicle player == player) then
{
	player playActionNow "PutDown";
};

//Remove consumed item
player removeMagazine _this;

//Get values from config
_nutrition = getArray (_cfg >> "Nutrition");
_bloodRegen = getNumber (_cfg >> "bloodRegen");
_infectionChance = getNumber (_cfg >> "infectionChance");
_sound = getText (_cfg >> "consumeSound");
_output = getText (_cfg >> "consumeOutput");

//Apply nutrition and blood regen
["FoodDrink",_bloodRegen,_nutrition] call dayz_NutritionSystem;
r_player_foodstack = r_player_foodstack + 1;

//Apply or cure infection base on infectionChance
if (_infectionChance != 0 && {abs(_infectionChance) > random 1}) then
{
	if (_infectionChance > 0) then
	{
		r_player_infected = true;
		player setVariable["USEC_infected",true,true];
	}
	else
	{
		r_player_infected = false;
		player setVariable["USEC_infected",false,true];
	};
};

//Publish messing
player setVariable ["messing",[dayz_hunger,dayz_thirst,dayz_nutrition],true];

//Play sound and alert zombies
if (_sound != "") then
{
	private ["_soundDistance"];
	_soundDistance = getNumber (_cfg >> "consumeSoundDistance");
	
	[player,_sound,0,false,_soundDistance] call dayz_zombieSpeak;
	[player,_soundDistance,true,(getPosATL player)] call player_alertZombies;
};

//If item has a consumeOutput item defined add that to player
//inventory or ground/vehicle inventory based on consumedDrop
if (_output != "") then
{
	//if consumeDrop is false add output item to player inventory
	if (getNumber (_cfg >> "consumeDrop") == 0) then
	{
		player addMagazine _output;
	}
	//consumeDrop is true so drop the output item on the ground
	else
	{
		//if player is not in a vehicle drop output item on the ground
		if (vehicle player == player) then
		{
			//wait a while before dropping the output item
			sleep 3;
			
			private ["_pile","_pilePos"];
			
			//find nearby lootpiles
			_pile = nearestObjects [getPosATL player,["WeaponHolder"],PILE_SEARCH_RADIUS];
			
			//if piles were found select the first one
			if (count _pile != 0) then
			{
				_pile = _pile select 0;
			}
			//otherwise create new pile
			else
			{
				_pilePos = player modeltoWorld PILE_PLAYER_OFFSET;
				_pilePos set [2, 0];
				_pile = createVehicle ["WeaponHolder",_pilePos,[],0.0,"CAN_COLLIDE"];
				_pile setPosATL _pilePos;
			};
			
			//add output item to pile
			_pile addMagazineCargoGlobal [_output,1];
		};
	};
};