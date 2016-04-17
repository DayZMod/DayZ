class RscDisplayGameOptions
{
	//onLoad = "((_this select 0) displayCtrl 140) lbAdd 'Default';((_this select 0) displayCtrl 140) lbAdd 'Debug';((_this select 0) displayCtrl 140) lbAdd 'None';((_this select 0) displayCtrl 140) lbSetCurSel (uiNamespace getVariable ['DZ_displayUI', 0]);";
	onUnload = "call ui_changeDisplay;"; /*diag_log[diag_tickTime,'RscDisplayGameOptions'];*/
	/*class controls
	{
		class CA_TextUIDisplay: CA_TextLanguage
		{
			x = 0.159803;
			y = "(0.420549 + 4*0.069854)";
			text = "DayZ UI:";
		};
		class CA_ValueUIDisplay: RscXListBox
		{
			idc = 140;
			x = 0.400534;
			y = "(0.420549 + 4*0.069854)";
			w = 0.3;
			onLBSelChanged = "(uiNamespace setVariable ['DZ_displayUI', (_this select 1)]);";
		};
	};*/
};