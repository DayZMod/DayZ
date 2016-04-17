class RscDisplayMain : RscStandardDisplay
{
	class controlsBackground
	{
		class Mainback : RscPicture
		{
			idc = 1104;
			x = SafeZoneX + 0.04;
			y = SafeZoneY + 0.03;
			w = 0.627451;
			h = 1.000000;
			text = "\ca\ui\data\ui_mainmenu_background_ca.paa";
		};
		
		class CA_ARMA2 : RscPicture
		{
			text = "z\addons\dayz_code\gui\mod.paa";
		};
	};

	class controls
	{
		class CA_Version;
		
		class DAYZ_Version : CA_Version
		{
			idc = -1;
			text = "DayZMod 1.8.7.dev1";
			y = SafeZoneH + SafeZoneY - (1 - 0.95);
		};
		
		delete CA_TitleMainMenu;
		delete CA_SinglePlayer;
		
		class CA_PlayerName : RscText
		{
			idc = 109;
			style = 256;
			colorbackground[] = {0.1, 0.1, 0.1, 0};
			x = SafeZoneX + 0.05;
			y = SafeZoneY + 0.06;
			w = 0.5;
			h = 0.05;
		};
		
		class CA_MP : RscShortcutButtonMain
		{
			idc = 105;
			x = SafeZoneX + 0.05;
			y = SafeZoneY + 0.15;
			toolTip = $STR_TOOLTIP_MAIN_MULTIPLAYER;
			text = $STR_CA_MAIN_MULTI;

			class KeyHints
			{
				class A
				{
					key = 0x00050000 + 0;
					hint = "";
				};
			};
		};
		
		class CA_Options : RscShortcutButtonMain
		{
			x = SafeZoneX + 0.05;
			y = SafeZoneY + 0.30;
		};
		
		class CA_PlayerProfile : RscShortcutButtonMain
		{
			x = SafeZoneX + 0.05;
			y = SafeZoneY + 0.45;
		};
		
		class CA_Expansions : RscShortcutButtonMain
		{
			x = SafeZoneX + 0.05;
			y = SafeZoneY + 0.60;
		};
		
		class CA_Exit : RscShortcutButtonMain
		{
			x = SafeZoneX + 0.05;
			y = SafeZoneY + 0.75;
		};
	};
};