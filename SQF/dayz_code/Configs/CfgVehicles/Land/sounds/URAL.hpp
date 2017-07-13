soundEngineOnInt[] =  {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Ural\Int_Start",1,1};
soundEngineOnExt[] =  {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Ural\Ext_Start",1,1,100};
soundEngineOffInt[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Ural\Int_Off",1,1};
soundEngineOffExt[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Ural\Ext_Off",1,1,100};
class SoundEvents
{
	class AccelerationIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Ural\Int_Acc",1,1};
		limit = 0.15;
		expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[0.5,5]) min (speed factor[5,0.5]))";
	};
	class AccelerationOut
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Ural\Ext_Acc",1,1,100};
		limit = 0.15;
		expression = "engineOn*camPos*2*gmeterZ*((speed factor[0.5,5]) min (speed factor[5,0.5]))";
	};
};
class Sounds
{
	class Engine
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Ural\Ext_Low",1,1,500};
		frequency = "(randomizer*0.02+0.98)*rpm";
		volume = "engineOn*camPos*(rpm factor[0.3, 1])";
	};
	class EngineHighOut
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Ural\Ext_High",1,1,300};
		frequency = "(randomizer*0.02+0.98)*rpm";
		volume = "engineOn*camPos*(rpm factor[0.3, 1])";
		cone[] = {1.750000, 2.000000, 1.500000, 1.250000};
	};
	class IdleOut
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Ural\Ext_Idle",1,1,200};
		frequency = "1";
		volume = "1.25*engineOn*camPos*(rpm factor[0.5,0.15])";
		cone[] = {1.75,2,1.5,1.25};
	};
	class EngineLowIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Ural\INT_Low", 1.000000, 1.000000};
		frequency = "(randomizer*0.05+0.95)*rpm";
		volume = "(1-camPos)*engineOn*(rpm factor[0.3, 1])";
	};
	class EngineHighIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Ural\INT_high", 1.000000, 1.000000};
		frequency = "(randomizer*0.15+1.05)*rpm";	
		volume = "(1-camPos)*engineOn*(rpm factor[0.3,1.2])";
	};
	class IdleIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Ural\INT_idle",1,1};
		frequency = "1";
		volume = "engineOn*(rpm factor[1.0, 0])*(1-camPos)";
	};
	
	class TiresRockOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\ExT_Sand", 0.100000, 1.000000, 120};
		frequency = "1";
		volume = "rock*camPos*(speed factor[2, 20])";
	};
	
	class TiresOffRoadOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\ExT_Sand", 0.100000, 1.000000, 120};
		frequency = "1";
		volume = "camPos*(1-asphalt)*(1-Mud)*(1-rock)*(1-Sand)*(1-Grass)*(1-Gravel)*(speed factor[2, 20])";
	};
	
	class TiresSandOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\ext_sand", 0.100000, 1.000000, 120};
		frequency = "1";
		volume = "camPos*sand*(speed factor[2, 20])";
	};

	class TiresGrassOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\ext_grs", 0.100000, 1.000000, 120};
		frequency = "1";
		volume = "camPos*grass*(speed factor[2, 20])";
	};

	class TiresMudOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\ext_grv", 0.100000, 1.000000, 120};
		frequency = "1";
		volume = "camPos*mud*(speed factor[2, 20])";
	};

	class TiresGravelOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\ext_grv", 0.100000, 1.000000, 120};
		frequency = "1";
		volume = "camPos*gravel*(speed factor[2, 20])";
	};

	class TiresAsphaltOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\ExT_Asp", 0.100000, 1.000000, 120};
		frequency = "(speed factor[1, 20])";
		volume = "camPos*asphalt*(speed factor[2, 20])";
	};

	class TiresRockIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\int_sand", 0.177828, 1.000000};
		frequency = "1";
		volume = "rock*camPos*(speed factor[2, 20])";
	};
	
	class TiresOffRoadIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\InT_Sand", 0.100000, 1.000000};
		frequency = "1";
		volume = "(1-camPos)*(1-asphalt)*(1-Mud)*(1-rock)*(1-Sand)*(1-Grass)*(1-Gravel)*(speed factor[2, 20])";
	};
	
	class TiresSandIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\int_sand", 0.177828, 1.000000};
		frequency = "1";
		volume = "(1-camPos)*sand*(speed factor[2, 20])";
	};

	class TiresGrassIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\int_grs", 0.177828, 1.000000};
		frequency = "1";
		volume = "(1-camPos)*grass*(speed factor[2, 20])";
	};

	class TiresMudIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\int_grv", 0.177828, 1.000000};
		frequency = "1";
		volume = "(1-camPos)*mud*(speed factor[2, 20])";
	};

	class TiresGravelIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\int_grv", 0.177828, 1.000000};
		frequency = "1";
		volume = "(1-camPos)*gravel*(speed factor[2, 20])";
	};

	class TiresAsphaltIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\int_Asp", 0.177828, 1.000000};
		frequency = "(speed factor[1, 20])";
		volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
	};
	
	class NoiseOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Rattle\EXT_noises", 2, 1, 200};
		frequency = "1";
		volume = "camPos*(speed factor[2, 20])";
	};
	class NoiseIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Rattle\INT_noises", 2, 1};
		frequency = "1";
		volume = "(1-camPos)*(speed factor[2, 20])";
	};
};