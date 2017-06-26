class jsrs_sfx_WolfClose 
{
	sound[]  = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume   = "0.093456*(night)*(1-houses)*(1-sea)*(forest)"; //Night forest animal
	name     = "$STR_DN_WOLF";
	wolf1[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Wolf01",0.12938,1,50,0.050000,60,120,240};
	wolf2[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Wolf02",0.12938,1,50,0.050000,60,120,240};
	wolf3[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Wolf03",0.12938,1,50,0.050000,60,120,240};
	random[] = {"wolf1","wolf2","wolf3"};
};
class jsrs_sfx_WolfDistant 
{
	sound[]  = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume   = "0.093456*(night)*(1-houses)*(1-sea)*(forest)"; //Night forest animal
	wolf1[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\WolfDistant01",0.12938,1,50,0.150000,30,60,120};
	wolf2[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\WolfDistant02",0.12938,1,50,0.150000,30,60,120};
	wolf3[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\WolfDistant03",0.12938,1,50,0.150000,30,60,120};
	wolf4[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\WolfDistant04",0.12938,1,50,0.150000,60,120,240};
	random[] = {"wolf1","wolf2","wolf3","wolf4"};
};