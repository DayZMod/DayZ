class CfgMovesAnimalsBase {
	class ManActions;
	class StandBase;
	class DefaultDie;
	class BlendAnims;
};

class CfgMovesBasic; //Fix for server CTD
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class TransAnimBase_noIK;
		class AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_lnr: TransAnimBase_noIK
		{
			rightHandIKCurve[] = {};
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_lnr",0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_lnr",0.02};
			actions = "BinocKneelLnrActions";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			canPullTrigger = 0;
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_una";
		};
	};
};