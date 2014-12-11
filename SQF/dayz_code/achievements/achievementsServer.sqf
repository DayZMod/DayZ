achievementServer = {

	private ["_player","_achievementID"];
	
	_achievementID = (_this select 0) select 0;
	_player = (_this select 0) select 1;
	_playerOwnerID = owner _player;

	diag_log (text format ["Achievement: %1 was awarded to %2", _achievementID, _player]);

	// now send the OSD message to the client that called this
	achievementClientPV = [_achievementID];
	_playerOwnerID publicVariableClient "achievementClientPV";

};

