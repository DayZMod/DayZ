class jsrs_sfx_Frog 
{
	sound[]  = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume   = "0.093456*(1-houses)*(1-sea)*(night)*(rain factor [0.05,0.25])"; //Night only, in trees or forests
	name     = "$STR_CFG_SFX_FROG2";
	sing1[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Frog2_1",0.12938,1,60,0.300000,1,2,5};
	sing2[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Frog2_2",0.12938,1,60,0.300000,1,2,5};
	sing3[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Frog2_3",0.12938,1,60,0.300000,1,2,5};
	Frog01[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Frog1_1",0.017378,1,35,0.800000,1,2,5};
	Frog02[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Frog1_2",0.12938,1,35,0.100000,1,2,5};
	random[] = {"sing1","sing2","sing3","Frog01","Frog02"};
};