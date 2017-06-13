class SandDay 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Sand_Day",0.39811,1};
	volume  = "5*(1-night)*(1-forest)*(1-rain)*((windy factor[0,0.4])-0.1)*(hills factor [0.4,0.8])";
};
class SandNight 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Sand_Night",0.56234,1};
	volume  = "5*night*(1-forest)*(1-rain)*((windy factor[0,0.4])-0.1)*(hills factor [0.4,0.8])";
};