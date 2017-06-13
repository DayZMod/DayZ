class SFX_Sea 
{
	name 	= "JSRS_sea";
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 	= "0.093456*(sea)*(1-night)*(1-(windy factor [0.4,1]))";
};
class SFX_SeaNight 
{
	name 	= "JSRS_seanight";
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 	= "0.093456*(sea)*night*(1-(windy factor [0.4,1]))";
};
class SFX_Sea_Windy 
{
	name 	= "JSRS_sea_windy";
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 	= "0.093456*(sea)*(1-night)*(windy factor [0.4,1])";
};
class SFX_SeaNight_Windy 
{
	name 	= "JSRS_seanight_windy";
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 	= "0.093456*(sea)*night*(windy factor [0.4,1])";
};