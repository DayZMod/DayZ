class RscDisplayMissionFail : RscStandardDisplay
{
	onLoad = "ctrlActivate (_this select 0 displayCtrl 2);";
	
	/*class controls
	{
		class BAbort : RscIGUIShortcutButton
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			x = 0.4080875;
			y = 0.863977;
			text = $STR_UI_END;
		};
	};*/
	
	class ControlsBackground
	{
		delete Mainback;
	};
};