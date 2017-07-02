class SkodaBase : Car
{
	class Sounds : Sounds
	{
		class TiresRockOut 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\ExT_Sand", 0.100000, 1.000000, 120};
			frequency = "1";
			volume = "rock*camPos*(speed factor[2, 20])";
		};
		
		class TiresOffRoadOut 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\ExT_Sand", 0.100000, 1.000000, 120};
			frequency = "1";
			volume = "camPos*(1-asphalt)*(1-Mud)*(1-rock)*(1-Sand)*(1-Grass)*(1-Gravel)*(speed factor[2, 20])";
		};
		
		class TiresSandOut 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\ext_sand", 0.100000, 1.000000, 120};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};

		class TiresGrassOut 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\ext_grs", 0.100000, 1.000000, 120};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};

		class TiresMudOut 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\ext_grv", 0.100000, 1.000000, 120};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};

		class TiresGravelOut 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\ext_grv", 0.100000, 1.000000, 120};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};

		class TiresAsphaltOut 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\ExT_Asp", 0.100000, 1.000000, 120};
			frequency = "(speed factor[1, 20])";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};

		class TiresRockIn 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\int_sand", 0.177828, 1.000000};
			frequency = "1";
			volume = "rock*camPos*(speed factor[2, 20])";
		};
		
		class TiresOffRoadIn 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\InT_Sand", 0.100000, 1.000000};
			frequency = "1";
			volume = "(1-camPos)*(1-asphalt)*(1-Mud)*(1-rock)*(1-Sand)*(1-Grass)*(1-Gravel)*(speed factor[2, 20])";
		};
		
		class TiresSandIn 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\int_sand", 0.177828, 1.000000};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};

		class TiresGrassIn 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\int_grs", 0.177828, 1.000000};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};

		class TiresMudIn 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\int_grv", 0.177828, 1.000000};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};

		class TiresGravelIn 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\int_grv", 0.177828, 1.000000};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};

		class TiresAsphaltIn 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Tires\int_Asp", 0.177828, 1.000000};
			frequency = "(speed factor[1, 20])";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		
		class NoiseOut 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Rattle\Civ_EXT_noises", 2, 1, 200};
			frequency = "1";
			volume = "camPos*(speed factor[2, 20])";
		};
		class NoiseIn 
		{
			sound[] = {"JSRS_DayZ\AddOns\Vehicles\Land\Vehicle_noises\Rattle\Civ_INT_noises", 2, 1};
			frequency = "1";
			volume = "(1-camPos)*(speed factor[2, 20])";
		};
	};
};