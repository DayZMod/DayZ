class RscDisplayGenderSelect
{
	idd = 6902;
	enableDisplay = 1;
	
	onLoad = "dz_gui_gender = true; dz_gui_gender_result = false;";
	onUnload = "dz_gui_gender = false;";
	
	class controlsBackground
	{
		class Mainback : RscPicture
		{
			idc = -1;
			text = "\z\addons\dayz_code\gui\spawn\spawn_bg.paa";
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
	
	class controls
	{
		class Male : RscActiveText
		{
			idc = -1;
			style = 48;
			text = "z\addons\dayz_code\gui\gender_menu_man.paa";
			x = 0.28 * safezoneW + safezoneX;
			y = 0.24 * safezoneH + safezoneY;
			w = 0.117188 * safezoneW;
			h = 0.542373 * safezoneH;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "closeDialog 0; dz_gui_gender = false; dz_gui_gender_result = false;";
		};
		
		class Female : RscActiveText
		{
			idc = -1;
			style = 48;
			text = "z\addons\dayz_code\gui\gender_menu_woman.paa";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.24 * safezoneH + safezoneY;
			w = 0.117188 * safezoneW;
			h = 0.542373 * safezoneH;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "closeDialog 0; dz_gui_gender = false; dz_gui_gender_result = true;";
		};
		
		class Title : RscStructuredText
		{
			idc = -1;
			text = "$STR_UI_GENDER_TITLE";
			x = 0.4 * safezoneW + safezoneX;
			y = 0.221864 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.05 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
		
		class Description : RscStructuredText
		{
			idc = -1;
			text = "$STR_UI_GENDER_DESC";
			x = 0.4 * safezoneW + safezoneX;
			y = 0.366134 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.3 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
	};
};