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
