class Rain 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Rain",1.00000,1};
	volume  = "rain*(1-forest)*(1-houses)*(1-sea)";
};
class RainForest
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Rainforest",1.00000,1};
	volume  = "rain*forest";
};
class RainHouses
{	
	sound[]      = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Rainhouse",1.00000,1};
	random[]     = {"randSamp11", "randSamp10", "randSamp0", "randSamp1", "randSamp2", "randSamp3", "randSamp8", "randSamp9", "randSamp4", "randSamp5", "randSamp6", "randSamp7"};
	randsamp0[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-rain\House01", 0.125893, 1, 30, 0.13, 4, 8, 30};
	randsamp1[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-rain\House02", 0.125893, 1, 30, 0.125, 4, 8, 30};
	randsamp10[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-rain\House03", 0.1, 30, 0.125, 10, 20, 30};
	randsamp11[] = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-rain\House04", 0.1, 1, 30, 0.14, 5, 8, 30};
	randsamp2[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-rain\House05", 0.125893, 1, 30, 0.125, 4, 8, 30};
	randsamp3[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-rain\House06", 0.125893, 1, 30, 0.1, 4, 8, 30};
	randsamp4[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-rain\House07", 0.1, 1, 30, 0.025, 4, 8, 30};
	randsamp5[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-rain\House08", 0.1, 1, 30, 0.025, 4, 8, 30};
	randsamp6[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-rain\House09", 0.1, 1, 30, 0.025, 4, 8, 30};
	randsamp7[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-rain\House10", 0.1, 1, 30, 0.025, 4, 8, 30};
	randsamp8[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-rain\House11", 0.1, 1, 30, 0.04, 10, 20, 30};
	randsamp9[]  = {"\z\addons\dayz_communityassets\sounds\Environment\SFX-rain\House12", 0.1, 1, 30, 0.04, 10, 20, 30};
	volume       = "rain*houses";
};
class RainSea
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Rainsea",1.00000,1};
	volume  = "rain*sea";
};