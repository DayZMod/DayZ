private ["_idc"];
_inventory = _this;
if (count _inventory > 0) then {
	_wpns = _inventory select 0;
	_mags = _inventory select 1;

	dayz_onBack = if (count _inventory > 2) then { _inventory select 2 } else { "" };

	//Add inventory
	{
		private["_item","_val"];
		//is it an array?
		_idc = 109;
		if (typeName _x == "ARRAY") then {
			_item = _x select 0;
			_val = _x select 1;
		} else {
			_item = _x;
			_val = -1;
		};

		if (_item == "BoltSteel") then { _item = "WoodenArrow" }; // Convert BoltSteel to WoodenArrow
		if (_item == "ItemBloodbag") then { _item = "bloodBagONEG" }; // Convert ItemBloodbag into universal blood type/rh bag

		//Is item legal?
		_isOK = isClass(configFile >> "CfgMagazines" >> _item);
		if (_isOK) then {
			if (_val != -1) then {
				player addMagazine [_item,_val];
			} else {
				player addMagazine _item;
			};
		};
		_idc = _idc + 1;
	} forEach _mags;

	//Add weapons
	{
		if (_x == "Crossbow") then { _x = "Crossbow_DZ" }; // Convert Crossbow to Crossbow_DZ
		// Convert to DayZ Weapons
		if (_x == "DMR") then { _x = "DMR_DZ" };
		//if (_x == "M14_EP1") then { _x = "M14_DZ" };
		if (_x == "SVD") then { _x = "SVD_DZ" }; 
		if (_x == "SVD_CAMO") then { _x = "SVD_CAMO_DZ" };

		//Is item legal?
		_isOK = isClass(configFile >> "CfgWeapons" >> _x);
		if (_isOK) then {
			player addWeapon _x;
		};
	} forEach _wpns;
};
