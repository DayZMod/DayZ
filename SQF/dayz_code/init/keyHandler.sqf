keyboard_keys = nil;
(findDisplay 46) displayRemoveAllEventHandlers "KeyUp";
(findDisplay 46) displayRemoveAllEventHandlers "KeyDown";
(findDisplay 46) displayAddEventHandler ["KeyDown","_this call DZ_KeyDown_EH"];