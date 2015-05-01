/*
DAYZ MOD v1.8.0.1 SQL DATABASE
LATEST CHANGE 23/09/2013 - 12:40 UTC
*/

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET FOREIGN_KEY_CHECKS=0 */;

-- Dumping structure for procedure test.pMain
DELIMITER //
CREATE DEFINER=`dayz`@`localhost` PROCEDURE `pMain`(IN `i` INT)
    MODIFIES SQL DATA
BEGIN

# maximum number of INSTANCE id's USED.
#-----------------------------------------------
	DECLARE sInstance VARCHAR(8) DEFAULT i;
#-----------------------------------------------
#maximum number of vehicles allowed !!! theoretical max. amount
#-----------------------------------------------
	DECLARE iVehSpawnMax INT DEFAULT 85;
#-----------------------------------------------	

# DECLARE iVehSpawnMin				INT DEFAULT 0;		#ToDo !!!
	DECLARE iTimeoutMax 				INT DEFAULT 250;	#number of loops before timeout
	DECLARE iTimeout 						INT DEFAULT 0;		#internal counter for loops done; used to prevent infinite loops - DO NOT CHANGE
	DECLARE iNumVehExisting 		INT DEFAULT 0;		#internal counter for already existing vehicles - DO NOT CHANGE
	DECLARE iNumClassExisting 	INT DEFAULT 0;		#internal counter for already existing class types - DO NOT CHANGE
	DECLARE i INT DEFAULT 1; #internal counter for vehicles spawns - DO NOT CHANGE

#Starts Cleanup
	CALL pCleanup();
	
		SELECT COUNT(*) 				#retrieve the amount of already spawned vehicles...
			INTO iNumVehExisting
			FROM Object_DATA 
			WHERE Instance = sInstance
			AND Classname != '-'			#exclude dummys
			AND Classname != 'Hedgehog_DZ'		#exclude hedgehog
			AND Classname != 'Wire_cat1'		#exclude wirecat
			AND Classname != 'Sandbag1_DZ'		#exclude Sanbag
			AND Classname != 'BearTrap_DZ'		#exclude BearTrap_DZ
			AND Classname != 'TrapBearTrapFlare'	#exclude TrapBearTrapFlare
			AND Classname != 'TrapBearTrapSmoke'	#exclude TrapBearTrapSmoke
			AND Classname != 'Trap_Cans'		#exclude Trap_Cans
			AND Classname != 'TrapTripwireGrenade'	#exclude TrapTripwireGrenade
			AND Classname != 'TrapTripwireFlare'	#exclude TrapTripwireFlare
			AND Classname != 'TrapTripwireSmoke'	#exclude TrapTripwireSmoke
			AND Classname != 'CamoNet_DZ'		#exclude CamoNet_DZ
			AND Classname != 'StashSmall'		#exclude StashSmall
			AND Classname != 'StashMedium'		#exclude StashMedium
			AND Classname != 'DomeTentStorage'	#exclude DomeTentStorage
			AND Classname != 'TentStorage';		#exclude TentStorage

		WHILE (iNumVehExisting < iVehSpawnMax) DO		#loop until maximum amount of vehicles is reached

			#select a random vehicle class
			SELECT Classname, Chance, MaxNum, Damage
				INTO @rsClassname, @rsChance, @rsMaxNum, @rsDamage
				FROM object_classes ORDER BY RAND() LIMIT 1;

			#count number of same class already spawned
			SELECT COUNT(*) 
				INTO iNumClassExisting 
				FROM Object_DATA 
				WHERE Instance = sInstance
				AND Classname = @rsClassname;

			IF (iNumClassExisting < @rsMaxNum) THEN

				IF (rndspawn(@rschance) = 1) THEN
				
					INSERT INTO Object_DATA (ObjectUID, Instance, Classname, Damage, CharacterID, Worldspace, Inventory, Hitpoints, Fuel, Datestamp)
						SELECT ObjectUID, sInstance, Classname, RAND(@rsDamage), '0', Worldspace, Inventory, Hitpoints, RAND(1), SYSDATE() 
							FROM object_spawns 
							WHERE Classname = @rsClassname 
								AND NOT ObjectUID IN (select objectuid from Object_DATA where instance = sInstance)
							ORDER BY RAND()
							LIMIT 0, 1;
							
					SELECT COUNT(*) 
						INTO iNumVehExisting 
						FROM Object_DATA 
						WHERE Instance = sInstance
						AND Classname != '-'			#exclude dummys
						AND Classname != 'Hedgehog_DZ'		#exclude hedgehog
						AND Classname != 'Wire_cat1'		#exclude wirecat
						AND Classname != 'Sandbag1_DZ'		#exclude Sanbag
						AND Classname != 'BearTrap_DZ'		#exclude BearTrap_DZ
						AND Classname != 'TrapBearTrapFlare'	#exclude TrapBearTrapFlare
						AND Classname != 'TrapBearTrapSmoke'	#exclude TrapBearTrapSmoke
						AND Classname != 'Trap_Cans'		#exclude Trap_Cans
						AND Classname != 'TrapTripwireGrenade'	#exclude TrapTripwireGrenade
						AND Classname != 'TrapTripwireFlare'	#exclude TrapTripwireFlare
						AND Classname != 'TrapTripwireSmoke'	#exclude TrapTripwireSmoke
						AND Classname != 'CamoNet_DZ'		#exclude CamoNet_DZ
						AND Classname != 'StashSmall'		#exclude StashSmall
						AND Classname != 'StashMedium'		#exclude StashMedium
						AND Classname != 'DomeTentStorage'	#exclude DomeTentStorage
						AND Classname != 'TentStorage';		#exclude TentStorage		
					#update number of same class already spawned
					SELECT COUNT(*) 
						INTO iNumClassExisting 
						FROM Object_DATA 
						WHERE Instance = sInstance
						AND Classname = @rsClassname;
				
				END IF;
			END IF;	
			
			SET iTimeout = iTimeout + 1; #raise timeout counter
			IF (iTimeout >= iTimeoutMax) THEN
				SET iNumVehExisting = iVehSpawnMax;
			END IF;
		END WHILE;
	SET i = i + 1;
END//
DELIMITER ;
/*!40014 SET FOREIGN_KEY_CHECKS=1 */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
