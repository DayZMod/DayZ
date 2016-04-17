class DZ_ZombieBase : Citizen
{
	class HitDamage {};
	armor = 3;
	glassesEnabled = 0;
	vehicleClass = Zombie;
	displayName = $STR_ZNAME_INFECTED;
	fsmDanger = "";
	fsmFormation = "";
	zombieLoot = ZombieCivilian;
	moves = CfgMovesZombie;
	isMan = false;
	weapons[] = {};
	magazines[] = {};
	sensitivity = 2;
	sensitivityEar = 2;
	identityTypes[] = {"zombie1", "zombie2", "zombie3"};
	class TalkTopics {};
	languages[] = {};
	
	damageScale = 350;
	sepsisChance = 18;
	BleedChance  = 15;
	forcedSpeed = 6;
	
	class Eventhandlers
	{
		init = "_this call zombie_initialize;";
		local = "_z = _this select 0; if ((!isServer and !isNull _z) and {(side _z != civilian)}) exitWith { PVDZ_sec_atp = [ 'wrong side', player ]; publicVariableServer 'PVDZ_sec_atp'; deleteVehicle _z; }; if (!(_this select 1)) exitWith {}; if (isServer) exitWith { _z call sched_co_deleteVehicle; }; [(position _z), _z, true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm';";
	};
	
	class HitPoints
	{
		class HitHead
		{
			armor = 0.1;
			material = -1;
			name = "head_hit";
			passThrough = true;
			memoryPoint = "pilot";
		};
		
		class HitBody : HitHead
		{
			armor = 2.4;
			name = "body";
			memoryPoint = "aimPoint";
		};
		
		class HitSpine : HitHead
		{
			armor = 2;
			name = "Spine2";
			memoryPoint = "aimPoint";
		};
		
		class HitHands : HitHead
		{
			armor = 0.5;
			material = -1;
			name = "hands";
			passThrough = true;
		};
		
		class HitLArm : HitHands
		{
			name = "LeftArm";
			memoryPoint = "lelbow";
		};
		
		class HitRArm : HitHands
		{
			name = "RightArm";
			memoryPoint = "relbow";
		};
		
		class HitLForeArm : HitHands
		{
			name = "LeftForeArm";
			memoryPoint = "lwrist";
		};
		
		class HitRForeArm : HitHands
		{
			name = "RightForeArm";
			memoryPoint = "rwrist";
		};
		
		class HitLHand : HitHands
		{
			name = "LeftHand";
			memoryPoint = "LeftHandMiddle1";
		};
		
		class HitRHand : HitHands
		{
			name = "RightHand";
			memoryPoint = "RightHandMiddle1";
		};
		
		class HitLegs : HitHands
		{
			name = "legs";
			memoryPoint = "pelvis";
		};
		
		class HitLLeg : HitHands
		{
			name = "LeftLeg";
			memoryPoint = "lknee";
		};
		
		class HitLLegUp : HitHands
		{
			name = "LeftUpLeg";
			memoryPoint = "lfemur";
		};
		
		class HitRLeg : HitHands
		{
			name = "RightLeg";
			memoryPoint = "rknee";
		};
		
		class HitRLegUp : HitHands
		{
			name = "RightUpLeg";
			memoryPoint = "rfemur";
		};
	};
	
	class SpeechVariants
	{
		class Default
		{
			speechplural[] = {""};
			speechsingular[] = {""};
		};
		
		class EN : Default
		{
			speechplural[] = {""};
			speechsingular[] = {""};
		};
		
		class CZ
		{
			speechplural[] = {""};
			speechsingular[] = {""};
		};
		
		class CZ_Akuzativ
		{
			speechplural[] = {""};
			speechsingular[] = {""};
		};
		
		class RU
		{
			speechplural[] = {""};
			speechsingular[] = {""};
		};
	};
};

class DZ_ViralBase : DZ_ZombieBase
{
	armor = 5;
	displayName = $STR_ZNAME_INFECTEDVIRAL;
	zombieLoot = ZombieCivilianViral;
	sensitivityEar = 2;
	
	damageScale = 450;
	sepsisChance = 36;
	BleedChance  = 30;
	forcedSpeed = 6;
	
	class HitPoints
	{
		class HitHead
		{
			armor = 0.1;
			material = -1;
			name = "head_hit";
			passThrough = true;
			memoryPoint = "pilot";
		};
		
		class HitBody : HitHead
		{
			armor = 10;
			name = "body";
			memoryPoint = "aimPoint";
		};
		
		class HitSpine : HitHead
		{
			armor = 2;
			name = "Spine2";
			memoryPoint = "aimPoint";
		};
		
		class HitHands : HitHead
		{
			armor = 0.5;
			material = -1;
			name = "hands";
			passThrough = true;
		};
		class HitLArm : HitHands
		{
			name = "LeftArm";
			memoryPoint = "lelbow";
		};
		
		class HitRArm : HitHands
		{
			name = "RightArm";
			memoryPoint = "relbow";
		};
		
		class HitLForeArm : HitHands
		{
			name = "LeftForeArm";
			memoryPoint = "lwrist";
		};
		
		class HitRForeArm : HitHands
		{
			name = "RightForeArm";
			memoryPoint = "rwrist";
		};
		
		class HitLHand : HitHands
		{
			name = "LeftHand";
			memoryPoint = "LeftHandMiddle1";
		};
		
		class HitRHand : HitHands
		{
			name = "RightHand";
			memoryPoint = "RightHandMiddle1";
		};
		
		class HitLegs : HitHands
		{
			//armor = 10;
			name = "legs";
			memoryPoint = "pelvis";
		};
		
		class HitLLeg : HitHands
		{
			name = "LeftLeg";
			memoryPoint = "lknee";
		};
		
		class HitLLegUp : HitHands
		{
			name = "LeftUpLeg";
			memoryPoint = "lfemur";
		};
		
		class HitRLeg : HitHands
		{
			name = "RightLeg";
			memoryPoint = "rknee";
		};
		
		class HitRLegUp : HitHands
		{
			name = "RightUpLeg";
			memoryPoint = "rfemur";
		};
	};
};

#include "Citizen.h"
#include "Doctor.h"
#include "Hunter.h"
#include "Police.h"
#include "Suit.h"
#include "Teacher.h"
#include "Worker.h"
#include "Villager.h"
#include "Priest.h"
#include "Soldier.h"