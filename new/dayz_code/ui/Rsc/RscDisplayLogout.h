class RscDisplayLogout : RscStandardDisplay
{
	idd = -1;
	
	movingEnable = 0;
	simulationEnabled = 1;
	
	onLoad = "_this call dz_fn_ui_logout_onLoad; _this spawn dz_pc_ui_logout_controller;";
	onUnload = "_this call dz_fn_ui_logout_onUnload;";
	
	class controlsBackground
	{
		class Mainback : RscPicture
		{
			x = 0.13;
			y = 0.24;
			w = 1.254902;
			h = 0.4183007;
			text = "\dayz\dayz_code\ui\data\logout_background_ca.paa";
		};
	};
	
	class controls
	{
		class Title : CA_Title
		{
			idc = 3;
			x = 0.15;
			y = 0.26;
			text = "Logout";
		};
		
		class Text : RscText
		{
			idc = 4;
			x = 0.188315;
			y = 0.354166;
			w = 1;
			text = "Logging out. Please wait.";
		};
		
		class Cancel : RscShortcutButton
		{
			idc = 1;
			x = 0.34;
			y = 0.444;
			text = "Cancel";
			default = 1;
		};
		
		class Timer : RscText
		{
			idc = 2;
			x = 0.15;
			y = 0.48;
			text = "";
		};
	};
};