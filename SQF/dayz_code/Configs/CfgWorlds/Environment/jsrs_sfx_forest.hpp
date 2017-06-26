class SFX_Forest 
{
	sound[] 	 = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 		 = "0.093456*forest*(1-night)*(windy factor[0.4,0.1])"; //Forestlife becomes silent when windy.
	randSamp11[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-sfx01",0.12938,1,30,0.140000,5,8,10};
	randSamp10[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-sfx02",0.12938,30,0.125000,10,20,40};
	randSamp0[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-sfx03",0.12938,1,30,0.130000,4,8,12};
	randSamp1[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-sfx04",0.12938,1,30,0.125000,4,8,12};
	randSamp2[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-sfx05",0.12938,1,30,0.125000,4,8,12};
	randSamp3[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-sfx06",0.12938,1,30,0.100000,4,8,12};
	randSamp8[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-sfx07",0.12938,1,30,0.040000,10,20,40};
	randSamp9[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-sfx08",0.12938,1,30,0.040000,10,20,40};
	randSamp4[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-sfx09",0.12938,1,30,0.025000,4,8,10};
	randSamp5[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-sfx10",0.12938,1,30,0.025000,4,8,10};
	randSamp6[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-sfx11",0.12938,1,30,0.025000,4,8,10};
	randSamp7[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-sfx0",0.12938,1,30,0.025000,4,8,10};
	random[] 	 = {"randSamp11","randSamp10","randSamp0","randSamp1","randSamp2","randSamp3","randSamp8","randSamp9","randSamp4","randSamp5","randSamp6","randSamp7"};
};
class SFX_ForestNight 
{
	sound[] 	 = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 		 = "0.093456*forest*night*(windy factor[0.4,0.1])"; //Forestlist becomes silent when windy
	randSamp1[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-night1",0.12938,1,25,0.150000,8,15,20};
	randSamp2[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-night2",0.12938,1,25,0.150000,8,15,30};
	randSamp3[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-night3",0.12938,1,25,0.150000,15,30,40};
	randSamp4[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-night4",0.12938,1,25,0.150000,15,30,40};
	randSamp5[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-night5",0.12938,1,25,0.100000,8,15,20};
	randSamp6[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-night8",0.12938,1,25,0.100000,8,10,20};
	randSamp7[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-night6",0.12938,1,25,0.100000,8,10,20};
	randSamp8[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-night7",0.12938,1,25,0.100000,8,10,20};
	randSamp9[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-night9",0.12938,1,25,0.100000,8,10,20};
	randSamp10[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-night10",0.12938,1,25,0.100000,8,10,20};
	randSamp11[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-night0",0.12938,1,25,0.100000,8,10,20};
	randSamp12[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Forest\forest-night0",0.12938,1,25,0.100000,8,10,20};
	random[] 	 = {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8","randSamp9","randSamp10","randSamp11","randSamp12"};
};