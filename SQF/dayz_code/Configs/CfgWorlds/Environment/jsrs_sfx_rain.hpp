class SFX_Rain 
{
	sound[] 	= {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 		= "0.093456*(2*(1 min (rain*rain*2))*(1-rain))*(1-forest)*(1-houses)*(1-sea)";
	randSamp1[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Day1",0.12938,1,25,0.150000,8,15,20};
	randSamp2[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Day2",0.12938,1,25,0.150000,8,15,20};
	randSamp3[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Day3",0.12938,1,25,0.150000,15,30,40};
	randSamp4[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Day4",0.12938,1,25,0.150000,15,30,40};
	randSamp5[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Day5",0.12938,1,25,0.100000,8,15,20};
	random[] 	= {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5"};
};
class SFX_RainHeavy 
{
	sound[] 	= {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 		= "0.093456*(2*((0.5 max rain)-0.5))*(1-forest)*(1-houses)*(1-sea)";
	randSamp1[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Day1",0.12938,1,25,0.150000,8,15,20};
	randSamp2[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Day2",0.12938,1,25,0.150000,8,15,20};
	randSamp3[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Day3",0.12938,1,25,0.150000,15,30,40};
	randSamp4[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Day4",0.12938,1,25,0.150000,15,30,40};
	randSamp5[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Day5",0.12938,1,25,0.100000,8,15,20};
	random[] 	= {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5"};
};
class SFX_RainForestLight 
{
	name 		= "JSRS_rainforestlight";
	sound[] 	= {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 		= "0.093456*(2*(1 min (rain*rain*2))*(1-rain))*(forest factor [0.5,1.0])";
	randSamp1[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Night1",0.12938,1,25,0.150000,8,15,20};
	randSamp2[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Night2",0.12938,1,25,0.150000,8,15,20};
	randSamp3[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Night3",0.12938,1,25,0.150000,15,30,40};
	randSamp4[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Night4",0.12938,1,25,0.150000,15,30,40};
	randSamp5[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Night5",0.12938,1,25,0.100000,8,15,20};
	random[] 	= {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5"};
};
class SFX_RainForestHeavy 
{
	name 		= "JSRS_rainforestheavy";
	sound[] 	= {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 		= "0.093456*(2*((0.5 max rain)-0.5))*(forest factor [0.5,1.0])";
	randSamp1[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Night1",0.12938,1,25,0.150000,8,15,20};
	randSamp2[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Night2",0.12938,1,25,0.150000,8,15,20};
	randSamp3[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Night3",0.12938,1,25,0.150000,15,30,40};
	randSamp4[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Night4",0.12938,1,25,0.150000,15,30,40};
	randSamp5[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\Rain-Night5",0.12938,1,25,0.100000,8,15,20};
	random[] 	= {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5"};
};
class SFX_RainHousesLight 
{
	name 		= "JSRS_rainhouseslight";
	sound[] 	= {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 		= "0.093456*(1*(1 min (rain*rain*2))*(1-rain))*(houses)";
	randSamp1[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip01",0.12938,1,25,0.125000,2,4,6};
	randSamp2[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip02",0.12938,1,25,0.125000,2,4,6};
	randSamp3[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip03",0.12938,1,25,0.125000,2,4,6};
	randSamp4[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip04",0.12938,1,25,0.125000,2,4,6};
	randSamp5[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip05",0.12938,1,25,0.125000,2,4,6};
	randSamp6[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip06",0.12938,1,25,0.125000,2,4,6};
	randSamp7[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip07",0.12938,1,25,0.125000,2,4,6};
	randSamp8[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip08",0.12938,1,25,0.125000,2,4,6};
	random[] 	= {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
};
class SFX_RainHousesHeavy 
{
	name 		= "JSRS_rainhousesheavy";
	sound[] 	= {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 		= "0.093456*(2*((0.5 max rain)-0.5))*(houses)";
	randSamp1[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip01",0.12938,1,25,0.125000,1,2,3};
	randSamp2[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip02",0.12938,1,25,0.125000,1,2,3};
	randSamp3[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip03",0.12938,1,25,0.125000,1,2,3};
	randSamp4[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip04",0.12938,1,25,0.125000,1,2,3};
	randSamp5[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip05",0.12938,1,25,0.125000,1,2,3};
	randSamp6[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip06",0.12938,1,25,0.125000,1,2,3};
	randSamp7[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip07",0.12938,1,25,0.125000,1,2,3};
	randSamp8[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip08",0.12938,1,25,0.125000,1,2,3};
	random[] 	= {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
};
class SFX_RainSeaLight 
{
	name 		= "JSRS_rainsea_light";
	sound[] 	= {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 		= "0.093456*(2*(1 min (rain*rain*2))*(1-rain))*(sea)";
	randSamp1[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip01",0.12938,1,25,0.125000,2,4,6};
	randSamp2[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip02",0.12938,1,25,0.125000,2,4,6};
	randSamp3[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip03",0.12938,1,25,0.125000,2,4,6};
	randSamp4[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip04",0.12938,1,25,0.125000,2,4,6};
	randSamp5[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip05",0.12938,1,25,0.125000,2,4,6};
	randSamp6[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip06",0.12938,1,25,0.125000,2,4,6};
	randSamp7[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip07",0.12938,1,25,0.125000,2,4,6};
	randSamp8[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip08",0.12938,1,25,0.125000,2,4,6};
	random[] 	= {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
};
class SFX_RainSeaHeavy 
{
	name 		= "JSRS_rainsea_heavy";
	sound[] 	= {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0.12938,1};
	volume 		= "0.093456*(2*((0.5 max rain)-0.5))*(sea)";
	randSamp1[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip01",0.12938,1,25,0.125000,1,2,3};
	randSamp2[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip02",0.12938,1,25,0.125000,1,2,3};
	randSamp3[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip03",0.12938,1,25,0.125000,1,2,3};
	randSamp4[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip04",0.12938,1,25,0.125000,1,2,3};
	randSamp5[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip05",0.12938,1,25,0.125000,1,2,3};
	randSamp6[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip06",0.12938,1,25,0.125000,1,2,3};
	randSamp7[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip07",0.12938,1,25,0.125000,1,2,3};
	randSamp8[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-Rain\WaterDrip08",0.12938,1,25,0.125000,1,2,3};
	random[] 	= {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
};