class Swamp 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Jungle_Swamp",0.116234,1};
	volume 	= "5*(1-night)*((((1-forest)*(sea)) max meadow) max 0.05)";
//	volume 	= "((1-night)*meadow) max 0.1";
};
class SwampNight 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Jungle_Swamp",0.116234,1};
	volume 	= "5*(night)*((((1-forest)*(sea)) max meadow) max 0.05)";
//	volume 	= "((night)*meadow) max 0.1)";
};