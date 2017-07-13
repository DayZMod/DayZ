class Sounds : Sounds
{
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