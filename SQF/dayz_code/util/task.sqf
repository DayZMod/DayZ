/*	Task structure

	code		task function
	script		script handle
	int			task status
	any			task result
*/

#define STATUS_WAITING 0
#define STATUS_STARTED 1
#define STATUS_COMPLETED 2
#define STATUS_CANCELED 3

#define GET_CODE(task) ((task) select 0)

#define GET_SCRIPT(task) ((task) select 1)
#define SET_SCRIPT(task, script) ((task) set [1, script])

#define GET_STATUS(task) ((task) select 2)
#define SET_STATUS(task, status) ((task) set [2, status])

#define GET_RESULT(task) ((task) select 3)
#define SET_RESULT(task, result) ((task) set [3, result])

task_start =
{
	if (GET_STATUS(_this select 0) != STATUS_WAITING) exitWith { nil };
	
	private "_handle";
	
	SET_STATUS(_this select 0, STATUS_STARTED);
	
	_handle = _this spawn 
	{
		SET_RESULT(_this select 0, (_this select 1) call GET_CODE(_this select 0));
		
		SET_STATUS(_this select 0, STATUS_COMPLETED);
	};
	
	SET_SCRIPT(_this select 0, _handle);
	
	_this select 0
};

task_cancel =
{
	if (GET_STATUS(_this) != STATUS_STARTED) exitWith { false };
	
	terminate GET_SCRIPT(_this);
	SET_STATUS(_this, STATUS_CANCELED);
	
	true
};

task_wait =
{
	waitUntil {GET_STATUS(_this) > 1};
	GET_RESULT(_this)
};