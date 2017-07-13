soundEngineOnInt[] = 	{"\z\addons\dayz_communityassets\sounds\Vehicles\Air\LittleBird\Int_Start",1,1};
soundEngineOnExt[] = 	{"\z\addons\dayz_communityassets\sounds\Vehicles\Air\LittleBird\Ext_Start",1,1,400};
soundEngineOffInt[] = 	{"\z\addons\dayz_communityassets\sounds\Vehicles\Air\LittleBird\Int_Off",1,1};
soundEngineOffExt[] = 	{"\z\addons\dayz_communityassets\sounds\Vehicles\Air\LittleBird\Ext_Off",1,1,400};
soundDammage[] = 		{"\z\addons\dayz_communityassets\sounds\Vehicles\Air\LittleBird\Alarm",1,1,1};
class Sounds
{
	class Engine
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\LittleBird\Ext_Idle",1,1,1300};
		frequency = "rotorSpeed";
		volume = "camPos*((rotorSpeed-0.72)*4)";
	};
	class RotorLowOut
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\LittleBird\Ext_Low",1,1,800};
		frequency = "rotorSpeed";
		volume = "camPos*(0 max (rotorSpeed-0.1))";
		cone[] = {1.8,3.14,2,0.9};
	};
	class RotorHighOut
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\LittleBird\Ext_High",1,1,400};
		frequency = "rotorSpeed";
		volume = "camPos*10*(0 max (rotorThrust-0.95))";
		cone[] = {1.8,3.14,2,0.9};
	};
	class EngineIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\LittleBird\Int_Idle",1,1};
		frequency = "rotorSpeed";
		volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
	};
	class RotorLowIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\LittleBird\Int_Low",1,1};
		frequency = "rotorSpeed";
		volume = "2*(1-camPos)*((rotorSpeed factor[0.3,1.1]) min (rotorSpeed factor[1.1,0.3]))";
	};
	class RotorHighIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\LittleBird\Int_High",1,1};
		frequency = "rotorSpeed";
		volume = "(1-camPos)*3*(rotorThrust-0.9)";
	};
};