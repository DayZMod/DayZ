/*
class Forest 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0,1};
};
class ForestNight 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0,1};
};
*/
class Forest 
{
	sound[]  = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Forest_Day",0.116234,1};
	volume 	 = "5*forest*(1-night)";
	random[] = {};
};
class ForestNight 
{	
	sound[]  = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Forest_Night",0.116234,1};
	volume 	 = "5*forest*night";
	random[] = {};
};