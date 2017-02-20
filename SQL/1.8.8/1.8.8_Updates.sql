/*
	DayZ Mod 1.8.8 Updates
	
	RUN THIS FILE IF UPDATING AN EXISTING 187 DATABASE TO 188.
*/

-- ----------------------------
-- UH1H_DZ2 was removed because it was a duplicate of UH1H_2_DZ.
-- ----------------------------
update object_classes set Classname = 'UH1H_2_DZ' where classname = 'UH1H_DZ2';
update object_data set Classname = 'UH1H_2_DZ' where classname = 'UH1H_DZ2';
update object_spawns set Classname = 'UH1H_2_DZ' where classname = 'UH1H_DZ2';
update vehicle_spawns set Classname = 'UH1H_2_DZ' where classname = 'UH1H_DZ2';

-- ----------------------------
-- Woodensplint now takes two inventory slots, so replace it with an item that takes one (ItemMorphine) to avoid gear loss.
-- ----------------------------
-- UPDATE character_data SET Backpack = REPLACE(Backpack, '"equip_woodensplint"', '"ItemMorphine"') WHERE INSTR(Backpack, '"equip_woodensplint"') > 0;
-- UPDATE character_data SET Inventory = REPLACE(Inventory, '"equip_woodensplint"', '"ItemMorphine"') WHERE INSTR(Inventory, '"equip_woodensplint"') > 0;

-- ----------------------------
-- Renamed DZ_Czech_Vest_Puch --> DZ_Czech_Vest_Pouch
-- ----------------------------
UPDATE character_data SET Backpack = REPLACE(Backpack, 'DZ_Czech_Vest_Puch', 'DZ_Czech_Vest_Pouch') WHERE INSTR(Backpack, 'DZ_Czech_Vest_Puch') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, 'DZ_Czech_Vest_Puch', 'DZ_Czech_Vest_Pouch') WHERE INSTR(Inventory, 'DZ_Czech_Vest_Puch') > 0;