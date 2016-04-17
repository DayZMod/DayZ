dz_pvs_logout = true;

dz_fn_ui_interrupt_onLoad =
{
	disableSerialization;
	//['Init', _this] execVM '\ca\ui\scripts\pauseLoadinit.sqf';
	_display = _this select 0;
	_display displayCtrl 1010 ctrlEnable ( r_fracture_legs && { !r_player_dead } );
	_display displayCtrl 104 ctrlEnable false;
	//_this spawn dz_pc_ui_interrupt_controller;
};

dz_pc_ui_interrupt_controller =
{
	disableSerialization;
	
	_display = _this select 0;
	_respawn = _display displayCtrl 1010;
	_abort = _display displayCtrl 104;
	_abortText = ctrlText _abort;

	if (r_player_dead) exitWith
	{
		_abort ctrlEnable true;
	};

	_timeout = 30;

	while { !isNull _display && { !r_player_dead } } do
	{
		_time = diag_tickTime;
		_timeout = _timeout max ( player getVariable ["combattimeout", 0] );
		
		if (_timeout > 0) then
		{
			_abort ctrlEnable false;
			_abort ctrlSetText format ["%1 (%2)", _abortText, ceil _timeout];
		}
		else
		{
			_abort ctrlEnable true;
			_abort ctrlSetText _abortText;
		};
		
		sleep 0.5;
		
		_timeout = _timeout - diag_tickTime + _time;
	};

	if ( r_player_dead && { !isNull _display } ) exitWith
	{
		_abort ctrlEnable true;
		_respawn ctrlEnable false;
	};
};