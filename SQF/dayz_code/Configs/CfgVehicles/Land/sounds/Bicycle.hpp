soundgetin[] =  {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Bicycle\GetIn",1,1,25};
soundgetout[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Bicycle\GetOut",1,1,25};
class Sounds
{
	class Engine
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Bicycle\Ext_Low",1,1,35};
		frequency = "(randomizer*0.01+1.0)*rpm";
		volume = "camPos*engineOn*((speed factor[0.1, 0.6]) min (speed factor[0.6, 0.1]))";
	};
	class EngineHighOut
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\BicycleExt_High",1,1,50};
		frequency = "(randomizer*0.6+1.0)*rpm";
		volume = "camPos*engineOn*(speed factor[0.4, 0.9])";
	};
	class IdleOut
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\BicycleExt_Idle",1,1,35};
		frequency = 1;
		volume = "camPos*engineOn*(speed factor[0.05, 0.9])";
	};
	class EngineLowIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\BicycleInt_Low",1,1};
		frequency = "(randomizer*0.1+1)*speed";
		volume = "(1-camPos)*engineOn*((speed factor[0.1, 0.6]) min (speed factor[0.6, 0.1]))";
	};
	class EngineHighIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Bicycle\Int_High",1,1};
		frequency = "(randomizer*0.6+1.0)*rpm";
		volume = "(1-camPos)*engineOn*(speed factor[0.4, 0.9])";
	};
	class IdleIn
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Bicycle\Int_Idle",1,1};
		frequency = 1;
		volume = "(1-camPos)*engineOn*(speed factor[0.05, 0.9])";
	};
	
	class TiresRockOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_ExT_Sand", 0.100000, 1.000000, 50};
		frequency = "1";
		volume = "rock*camPos*(speed factor[2, 20])";
	};
	
	class TiresOffRoadOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_ExT_Sand", 0.100000, 1.000000, 50};
		frequency = "1";
		volume = "camPos*(1-asphalt)*(1-Mud)*(1-rock)*(1-Sand)*(1-Grass)*(1-Gravel)*(speed factor[2, 20])";
	};
	
	class TiresSandOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_ext_sand", 0.100000, 1.000000, 50};
		frequency = "1";
		volume = "camPos*sand*(speed factor[2, 20])";
	};

	class TiresGrassOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_ext_grs", 0.100000, 1.000000, 50};
		frequency = "1";
		volume = "camPos*grass*(speed factor[2, 20])";
	};

	class TiresMudOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_ext_grv", 0.100000, 1.000000, 50};
		frequency = "1";
		volume = "camPos*mud*(speed factor[2, 20])";
	};

	class TiresGravelOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_ext_grv", 0.100000, 1.000000, 50};
		frequency = "1";
		volume = "camPos*gravel*(speed factor[2, 20])";
	};

	class TiresAsphaltOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_ExT_Asp", 0.100000, 1.000000, 50};
		frequency = "(speed factor[1, 20])";
		volume = "camPos*asphalt*(speed factor[2, 20])";
	};

	class TiresRockIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_int_sand", 0.177828, 1.000000};
		frequency = "1";
		volume = "rock*camPos*(speed factor[2, 20])";
	};
	
	class TiresOffRoadIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_InT_Sand", 0.100000, 1.000000};
		frequency = "1";
		volume = "(1-camPos)*(1-asphalt)*(1-Mud)*(1-rock)*(1-Sand)*(1-Grass)*(1-Gravel)*(speed factor[2, 20])";
	};
	
	class TiresSandIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_int_sand", 0.177828, 1.000000};
		frequency = "1";
		volume = "(1-camPos)*sand*(speed factor[2, 20])";
	};

	class TiresGrassIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_int_grs", 0.177828, 1.000000};
		frequency = "1";
		volume = "(1-camPos)*grass*(speed factor[2, 20])";
	};

	class TiresMudIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_int_grv", 0.177828, 1.000000};
		frequency = "1";
		volume = "(1-camPos)*mud*(speed factor[2, 20])";
	};

	class TiresGravelIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_int_grv", 0.177828, 1.000000};
		frequency = "1";
		volume = "(1-camPos)*gravel*(speed factor[2, 20])";
	};

	class TiresAsphaltIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Tires\Bike_int_Asp", 0.177828, 1.000000};
		frequency = "(speed factor[1, 20])";
		volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
	};
	
	class NoiseOut 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Rattle\Bike_EXT_noises", 2, 1, 50};
		frequency = "1";
		volume = "camPos*(speed factor[2, 20])";
	};
	class NoiseIn 
	{
		sound[] = {"\z\addons\dayz_communityassets\sounds\Vehicles\Land\Vehicle_noises\Rattle\Bike_INT_noises", 2, 1};
		frequency = "1";
		volume = "(1-camPos)*(speed factor[2, 20])";
	};
};