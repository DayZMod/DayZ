class jsrs_sfx_Cow 
{
	sound[]  = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume   = "0.093456*(1-sea)*(1-night)*(1-forest)*(1-houses)*((hills factor[0,0.1]) min (hills factor[0.1,0]))"; //Grassing at day
	name     = "$STR_DN_COW";
	moo1[]   = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Cow_Moo01",0.12938,1,50,0.028,30,90,120};
	moo2[]   = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Cow_Moo02",0.12938,1,50,0.028,30,90,120};
	moo3[]   = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\CowMoo01",0.12938,1,50,0.028,30,90,120};
	moo4[]   = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\CowMoo02",0.12938,1,50,0.028,30,90,120};
	moo5[]   = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\CowMoo03",0.12938,1,50,0.028,30,90,120};
	step1[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Cow_Step01",0.12938,1,50,0.16,5,10,15};
	step2[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Cow_Step02",0.12938,1,50,0.16,5,10,15};
	step3[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Cow_Step03",0.12938,1,50,0.16,5,10,15};
	step4[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Cow_Step04",0.12938,1,50,0.16,5,10,15};
	step5[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Cow_Step05",0.12938,1,50,0.16,5,10,15};
	step6[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Animals\Cow_Step06",0.12938,1,50,0.16,5,10,15};
	random[] = {"moo1","moo2","moo3","moo4","moo5","step1","step2","step3","step4","step5","step6"};
};