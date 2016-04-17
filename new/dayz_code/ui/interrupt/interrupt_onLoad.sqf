disableSerialization;

_respawn = _this displayCtrl 1010;
_abort = _this displayCtrl 104;
_abortText = ctrlText _abort;

if (r_player_dead) exitWith
{
	_abort ctrlEnable true;
};

_timeout = 30;

while { !isNull _this && { !r_player_dead } } do
{
	_time = diag_tickTime;
	_timeout = _timeout max ( player getVariable ["combattimeout", 0] );
	
	if (_timeout > 0) then
	{
		_abort ctrlEnable false;
		_abort ctrlSetText format ["%1 (%2)", _abortText, round _timeout];
	}
	else
	{
		_abort ctrlEnable true;
		_abort ctrlSetText _abortText;
	};
	
	sleep 1;
	
	_timeout = _timeout - diag_tickTime + _time;
};

if (r_player_dead) exitWith
{
	_abort ctrlEnable true;
	_respawn ctrlEnable false;
};