#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define EAST 0 // (Russian)

class CfgPatches {
	class dayz_sfx {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		dayzVersion = 1.8;
	};
};

class CfgVehicles {
	class Sound;
	class Sound_Generator1: Sound
	{
		scope = public;
		sound = "Generator1";
		displayName = "Generator";
	};
};

class CfgSFX {
	class Generator1
	{
		sounds[] = {"Generator1"};
		name = "Generator1";
		//RandSamp0[] = {SOUNDFILE,VOLUME,PITCH,DISTANCE,PROBABILLITY,Min DELAY,Mid DELAY,Max DELAY}
		Generator1[] = 	{"\dayz_sfx\effects\generator1",db+10,1,200,1,0,0,0};
		Empty[] = 	{"",0,0,0,0,0,0,0};
	};
};

#include "CfgSounds.hpp"
#include "CfgMusic.hpp"