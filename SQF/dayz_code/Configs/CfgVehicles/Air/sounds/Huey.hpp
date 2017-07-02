soundEngineOnInt[] = 	{"\z\addons\dayz_communityassets\sounds\Vehicles\Air\Huey\Int_Start",1,1};
soundEngineOnExt[] = 	{"\z\addons\dayz_communityassets\sounds\Vehicles\Air\Huey\Ext_Start",1,1,500};
soundEngineOffInt[] = 	{"\z\addons\dayz_communityassets\sounds\Vehicles\Air\Huey\Int_Off",1,1};
soundEngineOffExt[] = 	{"\z\addons\dayz_communityassets\sounds\Vehicles\Air\Huey\Ext_Off",1,1,500};
soundDammage[] = 		{"\z\addons\dayz_communityassets\sounds\Vehicles\Air\Huey\Alarm",1,1,1};
class Sounds
{
	class Engine
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\Huey\Ext_Idle",1,1,1000};
		frequency = "rotorSpeed";
		volume = "camPos*((rotorSpeed-0.72)*4)";
	};
	class RotorLowOut
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\Huey\Ext_Low",1,1,400};
		frequency = "rotorSpeed";
		volume = "camPos*(0 max (rotorSpeed-0.1))";
		cone[] = {1.6,3.14,2,0.5};
	};
	class RotorHighOut
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\Huey\Ext_High",1,1,500};
		frequency = "rotorSpeed";
		volume = "camPos*10*(0 max (rotorThrust-0.9))";
		cone[] = {1.6,3.14,2,0.5};
	};
	class WindNoiseOut
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\Huey\Wind",1,1,5000};
		frequency = "rotorSpeed";
		volume = "camPos*(0 max (rotorSpeed-0.1))";
		cone[] = {1.6,3.14,2,0.5};
	};
	class EngineIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\Huey\Int_Idle",1,1};
		frequency = "rotorSpeed";
		volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
	};
	class RotorLowIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\Huey\Int_Low",1,1};
		frequency = "rotorSpeed";
		volume = "2*(1-camPos)*((rotorSpeed factor[0.3,1.1]) min (rotorSpeed factor[1.1,0.3]))";
	};
	class RotorHighIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Air\Huey\Int_High",1,1};
		frequency = "rotorSpeed";
		volume = "(1-camPos)*3*(rotorThrust-0.9)";
	};
};