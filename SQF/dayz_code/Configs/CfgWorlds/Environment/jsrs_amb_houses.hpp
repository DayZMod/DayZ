/*
class Houses 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0,1};
};
class HousesNight 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0,1};
};
*/
class Houses 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Houses_Day",0.116234,1};
	volume 	= "5*((houses-0.75)*4)*(1-night)";
};
class HousesNight 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Houses_Night",0.116234,1};
	volume 	= "5*((houses-0.75)*4)*(night)";
};