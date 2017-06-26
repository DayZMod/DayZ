class SFX_TreesDay 
{
	sound[]     = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
//	volume      = "trees*(1-night)";
	volume      = "0.093456*trees*(windy factor [0.05,0.65])*(1-rain)*(1-night)";
	randSamp1[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Trees\tree-day1",0.12938,1,25,0.150000,8,15,20};
	randSamp2[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Trees\tree-day2",0.12938,1,25,0.150000,8,15,20};
	randSamp3[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Trees\tree-day3",0.12938,1,25,0.150000,15,30,40};
	randSamp4[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Trees\tree-day4",0.12938,1,25,0.150000,15,30,40};
	randSamp5[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Trees\tree-day5",0.12938,1,25,0.100000,8,15,20};
	random[]    = {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5"};
};
class SFX_TreesNight 
{
	sound[]     = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
//	volume      = "trees*night";
	volume      = "0.093456*trees*(windy factor [0.05,0.65])*(1-rain)*night";
	randSamp1[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Trees\tree-night1",0.12938,1,25,0.150000,8,15,20};
	randSamp2[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Trees\tree-night2",0.12938,1,25,0.150000,8,15,20};
	randSamp3[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Trees\tree-night3",0.12938,1,25,0.150000,15,30,40};
	randSamp4[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Trees\tree-night4",0.12938,1,25,0.150000,15,30,40};
	randSamp5[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Trees\tree-night5",0.12938,1,25,0.100000,8,15,20};
	random[]    = {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5"};
};