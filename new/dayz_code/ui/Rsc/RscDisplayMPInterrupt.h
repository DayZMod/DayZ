class RscDisplayMPInterrupt : RscStandardDisplay
{
	//onLoad = "_this call dz_fn_ui_interrupt_onLoad; _this spawn dz_pc_ui_interrupt_controller;";
	//onLoad = "['Init', _this] execVM '\ca\ui\scripts\pauseLoadinit.sqf'; _display = _this select 0; (_display displayCtrl 1010) ctrlEnable ( r_fracture_legs && { !r_player_dead } ); (_display displayCtrl 104) ctrlEnable false; _display spawn dz_pc_ui_interrupt_controller;";
	//onUnload = "['Unload', _this] execVM '\ca\ui\scripts\pauseOnUnload.sqf';";
	
	onLoad = "systemChat 'RscDisplayMPInterrupt load';";
	onUnload = "systemChat 'RscDisplayMPInterrupt unload';";
	
	class controlsBackground
	{
		class Mainback : RscPicture
		{
			idc = 1104;
			x = 0.045;
			y = 0.17;
			w = 0.627451;
			h = 0.8366013;
			text = "\dayz2\dayz2_code\ui\interrupt_background_ca.paa";
		};
	};
	
	class controls
	{
		class CA_B_SAVE {};
		class CA_B_SKIP {};
		class CA_B_REVERT {};
		class CA_B_Respawn {};
		class CA_B_Abort {};
		class ButtonCancel {};
		
		class MissionTitle : RscText
		{
			idc = 120;
			x = 0.05;
			y = 0.618;
			text = "";
		};
		
		class DifficultyTitle : RscText
		{
			idc = 121;
			x = 0.05;
			y = 0.572;
			text = "";
		};
		
		class Paused_Title : CA_Title
		{
			idc = 523;
			x = 0.087;
			y = 0.192;
			text = $STR_DISP_MAIN_MULTI;
		};
		
		class CA_B_Options : RscShortcutButtonMain
		{
			idc = 101;
			x = 0.051;
			y = 0.2537 + 0.101903 * 0;
			text = $STR_DISP_INT_OPTIONS;
		};
		
		class Suicide : CA_B_Options
		{
			idc = 10001;
			y = 0.2537 + 0.101903 * 1;
			text = "Suicide";
			
			action = "if (alive player) then { player setDamage 1; };";
		};
		
		class Logout : CA_B_Options
		{
			idc = 10002;
			y = 0.2537 + 0.101903 * 2;
			text = "Log out";
			
			action = "";
		};
		
		class Cancel : RscShortcutButton
		{
			idc = 10003;
			x = 0.1605;
			y = 0.6633;
			text = $STR_DISP_INT_CONTINUE;
			default = 1;
		};
	};
};