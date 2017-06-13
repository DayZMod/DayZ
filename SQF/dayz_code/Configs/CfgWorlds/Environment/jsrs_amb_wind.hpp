class WindForestHigh {};
class WindNoForestHigh {};
//class Forest {};
//class ForestNight {};
//class Meadows {};
//class MeadowsNight {};

class WindForest
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\WindForest",1,1};
	volume  = "forest*(windy factor[0,1])";
};
class Wind
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Wind",1,1};
	volume  = "(1-forest)*(1-houses)*(1-night)*(windy factor[0,1])";
};
class WindHouses
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\WindHouses",1,1};
	volume  = "(houses-0.75)*(windy factor[0,1])";
};
class WindSea
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\WindHouses",1,1};
	volume  = "sea*(windy factor[0,1])";
};