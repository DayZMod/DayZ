class Sea 
{
	name 	= "JSRS_sea";
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Lake_Day",0.77828,1};
	volume 	= "0.2*(sea)*(1-night)*(windy factor [1,0.4])";
};
class SeaNight 
{
	name 	= "JSRS_seanight";
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Lake_Night",1.27828,1};
	volume 	= "0.3*(sea)*(night)*(1-(windy factor [0.4,1]))";
};
class Sea_Windy 
{
	name 	= "JSRS_sea_windy";
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Lake_Day_Windy",0.77828,1};
	volume 	= "0.3*(sea)*(1-night)*(windy factor [0.4,1])";
};
class SeaNight_Windy 
{
	name 	= "JSRS_seanight_windy";
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Lake_Night_Windy",1.27828,1};
	volume 	= "0.4*(sea)*night*(windy factor [0.4,1])";
};