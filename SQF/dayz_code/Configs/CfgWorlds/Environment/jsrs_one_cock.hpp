class jsrs_sfx_Cock 
{
	sound[]  = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
//	volume   = "(houses)*(night factor [0.4,0.6])*(1-forest)"; //Cocks are VERY timely! Not sure if this works though
	volume   = "0.093456*(10*(night factor [0.2,0.8]) max 1) * (10*(night factor [0.8,0.2]) max 1)*(1-forest)"; //Cocks are VERY timely! Not sure if this works though
	name     = "$STR_DN_COCK";
	cock[]   = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Cock",0.12938,1,60,0.500000,6,12,30};
	random[] = {"cock"};
};