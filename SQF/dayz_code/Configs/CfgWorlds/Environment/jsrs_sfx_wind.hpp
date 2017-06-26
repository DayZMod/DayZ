class SFX_WindBreeze 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume  = "0.093456*(1-hills)*(2*(1 min (windy*windy*2)) max 0.025)";
};
class SFX_WindForestHigh 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
//	volume  = "forest*(0.1 max windy factor[0,1])*(0.1+(hills factor[0,1])*0.9)-(night*0.25)";
	volume  = "0.093456*forest*(2*((0.5 max windy)-0.5))*(0.1+(hills factor[0,1])*0.9) max 0.025";
};
class SFX_WindNoForestHigh 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
//	volume  = "(1-forest)*(0.1 max windy factor[0,1])*(0.1+(hills factor[0,1])*0.9)-(night*0.25)";
	volume  = "0.093456*(1-forest)*(2*((0.5 max windy)-0.5))*(0.1+(hills factor[0,1])*0.9) max 0.025";
};