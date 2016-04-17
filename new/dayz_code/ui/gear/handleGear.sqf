#define IDC_LISTBOX 105
#define IDC_SELECTION_NAME 1101
#define IDC_SELECTION_DESC 1106
#define IDC_SELECTION_ICON 1104

dz_fn_ui_gear_handleGear =
{
	private "_display";
	
	_display = _this select 0 select 0;
	
	if (typeName _display == typeName controlNull) then
		{ _display = ctrlParent _display }
	
	switch (_this select 1) do
	{
		case "onLoad":
		{
			_display call dz_fn_ui_gear_updateSelectionInfo;
		};
		
		case "onLBSelChanged":
		{
			_display call dz_fn_ui_gear_updateSelectionInfo;
		};
	};
};

dz_fn_ui_gear_updateSelectionInfo =
{
	private ["_control", "_data", "_cfg", "_name", "_desc", "_icon"];
	
	_control = _this displayCtrl IDC_LISTBOX;
	_data = lnbData [lbCurSel _control, 1];
	
	_name = "";
	_desc = "";
	_icon = "";
	
	_cfg = configFile >> "CfgWeapons" >> _data;
	if !isClass _cfg then { _cfg = configFile >> "CfgMagazines" >> _data };
	
	if isClass _cfg then
	{
		_name = getText (_cfg >> "displayName");
		_desc = getText (_cfg >> "descriptionShort");
		_icon = getText (_cfg >> "picture");
	};
	
	_display displayCtrl IDC_SELECTION_NAME ctrlSetText _name;
	_display displayCtrl IDC_SELECTION_DESC ctrlSetStructuredText parseText _desc;
	_display displayCtrl IDC_SELECTION_ICON ctrlSetText _icon;
};