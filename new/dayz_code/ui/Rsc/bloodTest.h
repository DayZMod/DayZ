class bloodTest
{
	idd = 2200;
	movingEnable = 0;
	enableDisplay = 1;
	onLoad = "uiNamespace setVariable ['DayZ_Blood_Test', _this select 0];";
	
	class ControlsBackground
	{
		class Background : RscPicture
		{
			idc = 1292;
			text = "\dayz\dayz_code\ui\data\blood\\bloodtest_bg.paa";
			x = 0.305208 * safezoneW + safezoneX;
			y = 0.225107 * safezoneH + safezoneY;
			w = 0.395313 * safezoneW;
			h = 0.560781 * safezoneH;
		};
	};
	
	class Controls
	{
		class Name : RscStructuredText
		{
			idc = 1289;
			font = Bitstream;
			colorText[] = {0.157, 0.157, 0.157, 1};
			text = "";
			x = 0.379688 * safezoneW + safezoneX;
			y = 0.489004 * safezoneH + safezoneY;
			w = 0.108854 * safezoneW;
			h = 0.0329871 * safezoneH;
		};
		
		class AntiA : RscPicture
		{
			idc = 1293;
			text = "";
			x = 0.346459 * safezoneW + safezoneX;
			y = 0.326268 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		
		class AntiB : RscPicture
		{
			idc = 1294;
			text = "";
			x = 0.415209 * safezoneW + safezoneX;
			y = 0.326268 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		
		class AntiD : RscPicture
		{
			idc = 1295;
			text = "";
			x = 0.483959 * safezoneW + safezoneX;
			y = 0.326268 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		
		class Control : RscPicture
		{
			idc = 1296;
			text = "";
			x = 0.555 * safezoneW + safezoneX;
			y = 0.324069 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		
		class WatterBottle : RscPicture
		{
			idc = 1297;
			text = "";
			x = 0.631771 * safezoneW + safezoneX;
			y = 0.313073 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.15394 * safezoneH;
			colorActive[] = {1,1,1,0.5};
		};
		
		class ResultsChart : RscPicture
		{
			idc = 1299;
			text = "";
			x = 0.3625 * safezoneW + safezoneX;
			y = 0.434026 * safezoneH + safezoneY;
			w = 0.292188 * safezoneW;
			h = 0.483811 * safezoneH;
		};
		
		class ResultsHidden : RscPicture
		{
			idc = 1288;
			text = "";
			x = 0.368229 * safezoneW + safezoneX;
			y = 0.251499 * safezoneH + safezoneY;
			w = 0.244064 * safezoneW;
			h = 0.145142 * safezoneH;
		};
		
		class Needle : RscPicture
		{
			idc = 1298;
			text = "";
			x = 0.270833 * safezoneW + safezoneX;
			y = 0.313073 * safezoneH + safezoneY;
			w = 0.126042 * safezoneW;
			h = 0.175931 * safezoneH;
		};
		
		class ResultsHiddenButton : RscButton
		{
			idc = -1;
			onButtonClick = "if (r_canClick_resultsCard) then {r_resultsCard_Clicked = true;};";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.368229 * safezoneW + safezoneX;
			y = 0.251499 * safezoneH + safezoneY;
			w = 0.244064 * safezoneW;
			h = 0.145142 * safezoneH;
		};
		
		class NeedleButton : RscButton
		{
			idc = -1;
			onButtonClick = "r_needleclicked = r_needleclicked + 1; if (r_needleReset) then {r_needleReset = false;};";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.270833 * safezoneW + safezoneX;
			y = 0.313073 * safezoneH + safezoneY;
			w = 0.096042 * safezoneW;
			h = 0.175931 * safezoneH;
		};
		
		class AntiAButton : RscButton
		{
			idc = -1;
			onButtonClick = " if ((r_needleclicked >= 2) && r_A_watered && !r_needleReset) then {r_antiA_done = true;}; if (r_water_clicked && !r_A_watered) then {r_A_watered = true;};";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.346459 * safezoneW + safezoneX;
			y = 0.326268 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		
		class AntiBButton : RscButton
		{
			idc = -1;
			onButtonClick = " if ((r_needleclicked >= 2) && r_B_watered && !r_needleReset) then {r_antiB_done = true;}; if (r_water_clicked && !r_B_watered) then {r_B_watered = true;};";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.415209 * safezoneW + safezoneX;
			y = 0.326268 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		
		class AntiDButton : RscButton
		{
			idc = -1;
			onButtonClick = " if ((r_needleclicked >= 2) && r_D_watered && !r_needleReset) then {r_antiD_done = true;}; if (r_water_clicked && !r_D_watered) then {r_D_watered = true;};";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.483959 * safezoneW + safezoneX;
			y = 0.326268 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		
		class ControlButton : RscButton
		{
			idc = -1;
			onButtonClick = " if ((r_needleclicked >= 2) && r_control_watered && !r_needleReset) then {r_control_done = true;}; if (r_water_clicked && !r_control_watered) then {r_control_watered = true;};";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.555 * safezoneW + safezoneX;
			y = 0.324069 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		
		class WatterBottleButton : RscButton
		{
			idc = -1;
			onButtonClick = "r_water_clicked = true;";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.631771 * safezoneW + safezoneX;
			y = 0.313073 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.15394 * safezoneH;
		};
	};
};