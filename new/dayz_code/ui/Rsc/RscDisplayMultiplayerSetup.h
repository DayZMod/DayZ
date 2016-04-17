class RscDisplayMultiplayerSetup : RscStandardDisplay
{
	class controlsbackground
	{
		class dayz_black : RscText
		{
			idc = 1017;
			colorBackground[] = {0,0,0,1};
			x = SafeZoneX;
			y = SafeZoneY;
			w = SafeZoneW;
			h = SafeZoneH;
		};
		
		class MP_roles_TitleBorder : RscText
		{
			idc = 1008;
		};
		
		class TextBack : RscText
		{
			idc = 1009;
		};
		
		class TextBorder : RscText
		{
			idc = 1010;
		};
		
		class SidesBack : RscText
		{
			idc = 1011;
			y = 120 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class SidesBorder : RscText
		{
			idc = 1012;
			y = 120 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class ValueRolesBack : RscText
		{
			idc = 1013;
			y = 120 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class ValueRolesBorder : RscText
		{
			idc = 1014;
			y = 120 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class ValuePoolBack : RscText
		{
			idc = 1015;
			y = 120 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class ValuePoolBorder : RscText
		{
			idc = 1016;
			y = 120 / 100 * SafeZoneH + SafeZoneY;
		};
	};
	
	class controls
	{ 
		class TextIsland : RscText
		{
			idc = 1003;
			y = 109.5 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class ValueIsland : RscText
		{
			idc = 102;
			y = 109.5 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class TextSide : RscText
		{
			idc = 1005;
			y = 116.5 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class TextRoles : RscText
		{
			idc = 1007;
			y = 116.5 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class CA_B_West : RscActiveText
		{
			idc = 104;
			y = 121 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class CA_B_East : CA_B_West
		{
			idc = 105;
			y = 131 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class CA_B_Guerrila : CA_B_West
		{
			idc = 106;
			y = 141 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class CA_B_Civilian : CA_B_West
		{
			idc = 107;
			y = 151 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class CA_ValueRoles : RscIGUIListBox
		{
			idc = 109;
			style = 16;
			y = 120.5 / 100 * SafeZoneH + SafeZoneY;
		};
		
		class TextPool : RscText
		{
			idc = 1006;
			x = 2 / 100 * SafeZoneW + SafeZoneX;
			w = 96 / 100 * SafeZoneW;
		};
		
		class CA_ValuePool : RscIGUIListBox
		{
			idc = 114;
			text = "Players";
			x = 2 / 100 * SafeZoneW + SafeZoneX;
			w = 96 / 100 * SafeZoneW;
		};
		
		class CA_ButtonCancel : RscShortcutButton
		{
			idc = 2;
			default = 0;
			shortcuts[] = {0x00050000 + 1};
			x = 68 / 100 * SafeZoneW + SafeZoneX;
			y = 93 / 100 * SafeZoneH + SafeZoneY;
			w = 0.203825;
			text = $STR_DISP_BACK;
		};		
	};
};