#define DURATION 5

private "_format";

_format = '
<t	font="TahomaB"
	size="0.40"
	color="#a81e13"
	align="right"
	shadow="1"
	shadowColor="#000000">%1</t>
<br/>
<t	font="TahomaB"
	size="0.60"
	color="#FFFFFF"
	align="right"
	shadow="1"
	shadowColor="#000000">%2</t>';

{
	uiSleep 2;
	
	[
		format [_format, _x select 0, _x select 1],
		[safezoneX + safezoneW - 0.8, 0.5],
		[safezoneY + safezoneH - 0.8, 0.7],
		DURATION,
		0.5
	]
	call BIS_fnc_dynamicText;
	
	uiSleep (DURATION * 1.1);
}
foreach call compile preprocessFileLineNumbers "rules.sqf";