#define true	1
#define false	0

class CfgPatches {
	class ST_bunnyhop {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CA_Anims", "CA_Anims_E"};
	};
};

class CfgMovesBasic {
	class Actions {
		class RifleStandActions;
		
		class RifleStandEvasiveActions : RifleStandActions {
			getOver = "I44_runJumpOver";
		};
		
		class RifleStandActionsRunF : RifleStandActions {
			getOver = "I44_runJumpOver";
		};
		
		class RifleStandActionsJogF : RifleStandActions {
			getOver = "I44_runJumpOver";
		};
		class RifleLowStandActions;
		
		class RifleLowStandActionsRunF : RifleLowStandActions {
			getOver = "I44_runJumpOver";
		};
		
		class RifleLowStandActionsWlkFL : RifleLowStandActions {
			getOver = "I44_runJumpOver";
		};
	};
};

class CfgMovesMaleSdr : CfgMovesBasic {
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	
	class States {
		class SprintBaseDf;
		
		class AmovPercMevaSrasWrflDf : SprintBaseDf {
			InterpolateTo[] = {"I44_runJumpOver", 0.02, "I44_runJumpOver_fast", 0.02, "AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDf", 0.025, "AmovPercMwlkSrasWrflDf", 0.025, "AmovPercMrunSrasWrflDf", 0.025, "AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPknlMevaSrasWrflDf", 0.025, "AmovPercMevaSlowWrflDf", 0.025, "AmovPercMevaSrasWrflDfl", 0.025, "AmovPercMevaSrasWrflDfr", 0.025, "AdthPercMrunSlowWrflDf_6", 0.01, "AdthPercMrunSlowWrflDf_A1short", 0.01, "AdthPercMrunSlowWrflDf_A2short", 0.01, "AdthPercMrunSlowWrflDf_A3short", 0.01, "AdthPercMrunSlowWrflDf_A4short", 0.01};
		};
		class AovrPercMstpSrasWrflDf;
		
		class I44_runJumpOver : AovrPercMstpSrasWrflDf {
			variantsAI[] = {};
			looped = "false";
			speed = 0.65;
			file = "\st_bunnyhop\mov\I44_sprint_jump.rtm";
			leftHandIKBeg = false;
			leftHandIKEnd = false;
			leftHandIKCurve[] = {0};
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wovr.p3d";
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			duty = 2;
			disableWeapons = true;
			disableWeaponsLong = true;
			enableOptics = false;
			limitGunMovement = 0.3;
			headBobStrength = 0.512438;
			forceAim = 0;
			ConnectTo[] = {"AmovPercMevaSrasWrflDf", 0.01};
			InterpolateTo[] = {};
			interpolationSpeed = 1;
			interpolationRestart = true;
		};
		
		class I44_runJumpOver_fast : I44_runJumpOver {
			variantsAI[] = {};
			looped = "false";
			speed = 0.7;
			file = "\st_bunnyhop\mov\I44_sprint_jump_fast.rtm";
		};
	};
};
