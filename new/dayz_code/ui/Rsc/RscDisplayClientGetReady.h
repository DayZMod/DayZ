class RscDisplayClientGetReady : RscDisplayGetReady
{
	// could probably add a check in the spawn but couldn't test with multiple players
	onload = "[_this,'onload'] call compile preprocessfile '\ca\ui\scripts\server_interface.sqf'; _this spawn { while { !isNull findDisplay 53 } do { ctrlActivate (_this select 0 displayCtrl 1); sleep 0.1; }; };";
};