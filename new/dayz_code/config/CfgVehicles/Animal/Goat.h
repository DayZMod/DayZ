class DZ_Goat : CAAnimalBase
{
	scope = public;
	
	model = "\ca\animals2\Goat\Goat";
	displayName = $STR_DN_GOAT;
	moves = CfgMovesGoat;
	wildAnimal = 0;
	humansDetectionRadius = 2;
	runDistanceMax = 10;
	minIdleTime = 10;
	maxIdleTime = 15;
	
	favouritezones = "(meadow) * (1 - forest) * (1 - houses) * (1 - sea)";
	
	class VariablesString
	{
		_sound1 = "goat_01";
		_sound2 = "goat_02";
		_sound3 = "goat_03";
	};
	
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"ca\animals2\Goat\data\goat.rvmat",
			"ca\animals2\Goat\data\W1_goat.rvmat",
			"ca\animals2\Goat\data\W2_goat.rvmat"
		};
	};
};