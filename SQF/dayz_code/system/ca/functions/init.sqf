scriptName "Functions\init.sqf";
textLogFormat ["PRELOAD_ Functions\init.sqf %1", _this];
/*
	File: init.sqf
	Author: Karel Moricky

	Description:
	Function library initialization.
	All files have to start with 'fn_' prefix && they name have to be same as name of function.
	Don't forget to exclude comma after last item in array!
	
	Caution:
	Do not execute this init directly - there is dependency with MPF && need to run on all machines.

	Parameter(s):
	_this select 0: 'Function manager' logic

	Returns:
	Nothing
*/

if (!isServer) then {textLogFormat ["MPF_Client FUNCTIONS init.sqf ..."];};

private ["_recompile"];
_recompile = (count _this) > 0;

//--- Functions are already running
if ((!isNil "BIS_fnc_init") && !_recompile) exitwith {textLogFormat["PRELOAD_ Functions already running."];};
textLogFormat ["Log: [Functions] Init script executed at %1",time];


//--------------------------------------------------------------------------------------------------------
//--- PREPROCESS -----------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------

//--- Create variables for all functions (&& preprocess them after first call)
for "_t" from 0 to 2 do {
	_pathConfig = [configfile,campaignconfigfile,missionconfigfile] select _t;
	_pathFile = ["ca\modules\functions","functions","functions"] select _t;

	_cfgFunctions = (_pathConfig >> "cfgfunctions");
	for "_c" from 0 to (count _cfgFunctions - 1) do {
		_currentTag = _cfgFunctions select _c;

		//--- Is Tag
		if (isclass _currentTag) then {
			_tagName = configname _currentTag;
			_itemPathTag = gettext (_currentTag >> "file");

			for "_i" from 0 to (count _currentTag - 1) do {
				_currentCategory = _currentTag select _i;

				//--- Is Category
				if (isclass _currentCategory) then {
					_categoryName = configname _currentCategory;
					_itemPathCat = gettext (_currentCategory >> "file");

					for "_n" from 0 to (count _currentCategory - 1) do {
						_currentItem = _currentCategory select _n;

						//--- Is Item
						if (isclass _currentItem) then {

							_itemName = configname _currentItem;
							_itemPathItem = gettext (_currentItem >> "file");
							_itemPath = if (_itemPathItem != "") then {_itemPathItem} else {
								if (_itemPathCat != "") then {_itemPathCat + "\fn_" + _itemName + ".sqf"} else {
									if (_itemPathTag != "") then {_itemPathTag + "\fn_" + _itemName + ".sqf"} else {""};
								};
							};
							_itemPath = if (_itemPath == "") then {_pathFile + "\" + _categoryName + "\fn_" + _itemName + ".sqf"} else {_itemPath};
							call compile format ["
								if (isnil '%2_fnc_%3' || %4) then {
									%2_fnc_%3 = {
										if (!%4) then {debuglog ('Log: [Functions] %2_fnc_%3 loaded (%1)')};
										%2_fnc_%3 = compile preprocessFileLineNumbers '%1';
										_this call %2_fnc_%3;
									};
									%2_fnc_%3_path = '%1';
								};
							",_itemPath,_tagName,_itemName,_recompile];
						};
					};
				};
			};
		};
	};
};

//"

private ["_test", "_test2"];
_test = (_this select 0) setPos (getPos (_this select 0)); if (isnil "_test") then {_test = false};
_test2 = (_this select 0) playMove ""; if (isnil "_test2") then {_test2 = false};
_testvar = getText (configFile >> "CfgMissions" >> "Missions" >> "SP_BearRising" >> "directory");
if (_testvar != "") then {
	(_test || _test2) call (compile (preprocessFileLineNumbers "\z\addons\dayz_code\system\ca\functions\fn_initCounter.sqf"));
} else { // Player has A2 Free
	if (_test || _test2) then {0 call (compile (preprocessFileLineNumbers "ca\modules\functions\misc\fn_initCounter.sqf"))};
};

//--------------------------------------------------------------------------------------------------------
//--- INIT COMPLETE --------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------

waitUntil {!isNil "BIS_MPF_InitDone"}; //functions init must be after MPF init
BIS_fnc_init = true;


//if ((missionStart select 0) != 0) then {endLoadingScreen;textLogFormat["PRELOAD_ HACK isServer %1 endLoadingScreen (init functions EH)", isServer];}; //TODO:FIXME:HACK: - in multiplayer game freezes because init.sqf is not launched in MP preload



textLogFormat ["Log: [Functions] Init script terminated at %1",time];
