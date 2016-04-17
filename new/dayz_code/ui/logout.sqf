dbg_logout_onLoad =
{
	disableSerialization;
	
	_disp = _this select 0;
	_cancel = _disp displayCtrl 1;
	_timer = _disp displayCtrl 2;
	_title = _disp displayCtrl 3;
	_text = _disp displayCtrl 4;
	
	_cancel ctrlSetPosition dbg_logout_cancel_pos;
	_cancel ctrlCommit 0;
	
	_text ctrlSetPosition dbg_logout_text_pos;
	_text ctrlSetText "Logging out. Please wait.";
	_text ctrlCommit 0;
	
	_this spawn
	{
		disableSerialization;
		
		_timer = _this select 0 displayCtrl 2;
		_timeout = 30;
		_time = diag_tickTime;
		
		
		
		while { diag_tickTime - _time < _timeout } do
		{
			_timer ctrlSetText str ceil ( _timeout - diag_tickTime + _time );
			sleep 0.5;
		};
		
		_timer ctrlSetText "";
	};
};

dbg_logout_onunload =
{
	disableSerialization;
	
	_disp = _this select 0;
};