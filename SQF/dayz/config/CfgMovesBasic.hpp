class CfgMovesBasic
{
	class Default
	{
		duty = StandDuty;
	};
	
	class HealBase : Default
	{
		duty = WalkDuty;
	};
	
	class HealBaseRfl;
	class StandBase;
	class DefaultDie;
	class AgonyBase;
	class AgonyBaseRfl;
	class InjuredMovedBase;
	class BlendAnims;
	
	class Actions
	{
		class NoActions;
		class RifleBaseStandActions;
		class CivilStandActions;
		class CivilRunActionsF;
		
		class RifleKneelActions : RifleBaseStandActions
		{
			turnSpeed = 6;
		};
		
		class RifleProneActions : RifleBaseStandActions
		{
			turnSpeed = 4;
		};
		
		class PistolStandActions : NoActions
		{
			/*
			Stand = "AmovPercMstpSrasWpstDnon";
			
			why?
			*/
			
			Stand = "AmovPercMstpSlowWpstDnon";
		};
		
		class PistolKneelActions : PistolStandActions
		{
			/*
			fastF = "AmovPknlMrunSrasWpstDf";
			fastLF = "AmovPknlMrunSrasWpstDfl";
			fastRF = "AmovPknlMrunSrasWpstDfr";
			
			why?
			*/
			
			fastF = "AmovPercMevaSrasWpstDf";
			fastLF = "AmovPercMevaSrasWpstDfl";
			fastRF = "AmovPercMevaSrasWpstDfr";
			
			turnSpeed = 6;
		};
		
		class PistolProneActions : PistolStandActions
		{
			turnSpeed = 4;
		};
		
		class CivilRunActions : CivilStandActions
		{
			Die = "CzmbAdthPercMrunSnonWnonDf";
		};
		
		class CivilWlkActionsF : CivilRunActionsF
		{
			Die = "ZombieWalkingDeath";
		};
		
		class CivilKneelActions : CivilStandActions
		{
			turnSpeed = 6;
		};
		
		class CivilProneActions : CivilStandActions
		{
			turnSpeed = 4;
		};
		
		class LauncherKneelActions : NoActions
		{
			turnSpeed = 6;
		};
	};
};