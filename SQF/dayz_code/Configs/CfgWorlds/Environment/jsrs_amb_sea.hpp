class Sea 
{
	name    = "JSRS_sea";
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Sea_Day",0.77828,1};
	volume  = "0.4*(sea)*(1-night)*(windy factor [1,0.4])";
};
class SeaNight 
{
	name    = "JSRS_seanight";
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Sea_Night",1.27828,1};
	volume  = "0.5*(sea)*(night)*(windy factor [1,0.4])";
};
class Sea_Windy 
{
	name    = "JSRS_sea_windy";
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Sea_Day_Windy",0.77828,1};
	volume  = "0.5*(sea)*(1-night)*(windy factor [0.4,1])";
};
class SeaNight_Windy 
{
	name    = "JSRS_seanight_windy";
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Sea_Night_Windy",1.27828,1};
	volume  = "0.6*(sea)*(night)*(windy factor [0.4,1])";
};