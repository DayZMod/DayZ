private [];

_item = _this;

//Get config info
_config = configFile >> "CfgMagazines" >> _item;
_removeItem = getText (_config >> "oldAttachment");
_addItem = getText (_config >> "newAttachment");
_text = "";


if (_removeItem in (magazines player)) then { 
	player removeMagazine _removeItem;
	player addMagazine _addItem;
	
	_text = "Attachment Converted";
} else {
	_text = "Attachment Missing"
};

cutText [_text, "PLAIN DOWN"]