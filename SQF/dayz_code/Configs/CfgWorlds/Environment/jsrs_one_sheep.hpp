class jsrs_sfx_SheepClose 
{
	sound[]  = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume   = "0.093456*(1-forest)*(1-houses)*(hills factor[0.25,0.45])*((hills factor[0.35,0.45]) min (hills factor[0.45,0.35]))"; //Grassing at day
	sheep1[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Sheep01",0.12938,1,60,0.06,60,120,180};
	sheep2[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Sheep02",0.12938,1,60,0.06,60,120,180};
	sheep3[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Sheep03",0.12938,1,60,0.06,60,120,180};
	sheep4[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Sheep04",0.12938,1,60,0.06,60,120,180};
	sheep5[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Sheep05",0.12938,1,60,0.06,60,120,180};
	sheep6[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Sheep06",0.12938,1,60,0.06,60,120,180};
	random[] = {"sheep1","sheep2","sheep3","sheep4","sheep5","sheep6"};
};
class jsrs_sfx_SheepDistant 
{
	sound[]  = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume   = "0.093456*(1-forest)*(1-houses)*(hills factor[0.25,0.45])*(hills factor[0.45,0.25])"; //Grassing in the hills
	sheep1[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\SheepDistant01",0.12938,1,60,0.12,30,60,90};
	sheep2[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\SheepDistant02",0.12938,1,60,0.12,30,60,90};
	sheep3[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\SheepDistant03",0.12938,1,60,0.12,30,60,90};
	sheep4[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\SheepDistant04",0.12938,1,60,0.12,30,60,90};
	sheep5[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\SheepDistant05",0.12938,1,60,0.12,30,60,90};
	sheep6[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\SheepDistant06",0.12938,1,60,0.12,30,60,90};
	random[] = {"sheep1","sheep2","sheep3","sheep4","sheep5","sheep6"};
};