class jsrs_sfx_Owl 
{
	sound[]  = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume   = "0.093456*((trees) max (forest))*(1-houses)*(1-sea)*(night)*(1-hills)"; //Night only, in trees or forests
	name     = "$STR_CFG_SFX_OWL";
	sing1[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\OwlDistant2_1",0.12938,1,60,0.150000,15,60,90};
	sing2[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\OwlDistant2_2",0.12938,1,60,0.150000,15,60,90};
	sing3[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\OwlDistant1_1",0.12938,1,50,0.250000,15,30,90};
	sing4[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\OwlDistant1_2",0.12938,1,50,0.250000,15,30,90};
	sing5[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Owl2_1",0.12938,1,60,0.050000,25,60,90};
	sing6[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Owl2_2",0.12938,1,60,0.050000,25,60,90};
	sing7[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Owl1_1",0.12938,1,50,0.100000,25,60,90};
	sing8[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Owl1_2",0.12938,1,50,0.100000,25,60,90};
	random[] = {"sing1","sing2","sing3","sing4","sing5","sing6","sing7","sing8"};
};