/*
DAYZ MOD v1.8.0.1 SQL DATABASE
LATEST CHANGE 23/09/2013 - 12:40 UTC
*/

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET FOREIGN_KEY_CHECKS=0 */;

-- Dumping structure for procedure test.pCleanup
DELIMITER //
CREATE DEFINER=`dayz`@`localhost` PROCEDURE `pCleanup`()
BEGIN 
#starts outofbounds cleanup
        CALL pCleanupOOB();
 
#move dead players to character_dead
        Insert
                INTO character_dead
                SELECT *
                FROM character_data
                        WHERE Alive=0;
 
#remove unused vehicles older then 14 days
        DELETE
                FROM object_data
                WHERE DATE(last_updated) < CURDATE() - INTERVAL 14 DAY
                        AND Classname != 'dummy'
                        AND Classname != 'Hedgehog_DZ'
                        AND Classname != 'Wire_cat1'
                        AND Classname != 'Sandbag1_DZ'
                        AND Classname != 'TrapBear'
                        AND Classname != 'StashSmall'
                        AND Classname != 'StashMedium';
                       
#Remove camonets whose owner has been dead for 1 day
DELETE
        FROM object_data
        USING object_data, character_dead
        WHERE (object_data.Classname = 'CamoNet_DZ')
                AND object_data.CharacterID = character_dead.CharacterID
                AND character_dead.Alive = 0
                AND DATE(character_dead.last_updated) < CURDATE() - INTERVAL 1 Day;                    
 
#remove tents/stashs whose owner has been dead for four days
        DELETE
                FROM object_data
                USING object_data, character_dead
                WHERE (object_data.Classname = 'TentStorage' or object_data.Classname = 'StashSmall' or object_data.Classname = 'StashMedium')
                        AND object_data.CharacterID = character_dead.CharacterID
                        AND character_dead.Alive = 0
                        AND DATE(character_dead.last_updated) < CURDATE() - INTERVAL 4 DAY;
 
#remove empty tents older than seven days
        DELETE
                FROM object_data
                WHERE (Classname = 'TentStorage' or Classname = 'StashSmall' or Classname = 'StashMedium')
                        AND DATE(last_updated) < CURDATE() - INTERVAL 7 DAY
                        AND Inventory = '[[[],[]],[[],[]],[[],[]]]';
       
        DELETE
                FROM object_data
                WHERE (Classname = 'TentStorage' or Classname = 'StashSmall' or Classname = 'StashMedium')
                        AND DATE(last_updated) < CURDATE() - INTERVAL 7 DAY
                        AND Inventory = '[]';          
 
#remove barbed wire older than two days
        DELETE
                FROM object_data
                WHERE Classname = 'Wire_cat1'
                        AND DATE(last_updated) < CURDATE() - INTERVAL 2 DAY;
                       
#remove Tank Traps older than fifteen days
        DELETE
                FROM object_data
                WHERE Classname = 'Hedgehog_DZ'
                        AND DATE(last_updated) < CURDATE() - INTERVAL 15 DAY;
 
#remove Sandbags older than twenty days
        DELETE
                FROM object_data
                WHERE Classname = 'Sandbag1_DZ'
                        AND DATE(last_updated) < CURDATE() - INTERVAL 20 DAY;
 
#remove Bear Traps older than five days
        DELETE
                FROM object_data
                WHERE Classname = 'BearTrap_DZ'
                        AND DATE(last_updated) < CURDATE() - INTERVAL 5 DAY;   
                       
#remove dead players from data table
        DELETE
                FROM character_data
                WHERE Alive=0;                                         
END//
DELIMITER ;
/*!40014 SET FOREIGN_KEY_CHECKS=1 */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
