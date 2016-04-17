class RscDisplayDebriefing : RscStandardDisplay
{
	onLoad = "ctrlActivate (_this select 0 displayCtrl 2);";
	
	class controls
	{
		delete Debriefing_MissionTitle;
		delete CA_MissionTitle;
		delete CA_TextVotingTimeLeft;
		delete CA_MissionResult;
		delete CA_DebriefingTextGroup;
		delete CA_DebriefingObjectivesGroup;
		delete CA_DebriefingStatsGroup;
		delete ButtonStatistics;
		delete ButtonRetry;
		class CA_DebriefingInfo : RscHTML {};
		
		class ButtonContinue : RscIGUIShortcutButton
		{
			idc = 2;
			shortcuts[] = {0x00050000 + 0, 28, 57, 156};
			x = 0.4080875;
			y = 0.863977;
			text = $STR_UI_CONTINUE;
		};
	};
	
	class ControlsBackground
	{
		delete Mainback;
	};
};