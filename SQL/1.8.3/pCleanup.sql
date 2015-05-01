-- --------------------------------------------------------
-- Host:                         184.164.146.210
-- Server version:               5.6.11 - MySQL Community Server (GPL)
-- Server OS:                    Win64
-- HeidiSQL version:             7.0.0.4053
-- Date/time:                    2014-06-23 17:53:11
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET FOREIGN_KEY_CHECKS=0 */;

-- Dumping structure for procedure dayzhivemind.pCleanup
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
 
#remove damaged objects
        DELETE
                FROM object_data
                WHERE Damage = 1;

#remove empty tents older than seven days
        DELETE
                FROM object_data
                WHERE (Classname = 'TentStorage%' or Classname = 'StashSmall%' or Classname = 'StashMedium%')
                        AND DATE(last_updated) < CURDATE() - INTERVAL 7 DAY
                        AND Inventory = '[[[],[]],[[],[]],[[],[]]]';
       
        DELETE
                FROM object_data
                WHERE (Classname = 'TentStorage%' or Classname = 'StashSmall%' or Classname = 'StashMedium%')
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
                        
#remove incomplete fence's after 3 hours								
        DELETE
                FROM object_data
                WHERE (Classname = 'WoodenFence_1_foundation' or Classname = 'WoodenFence_1_frame' or Classname = 'WoodenFence_quaterpanel' or Classname = 'WoodenFence_halfpanel' or Classname = 'WoodenFence_thirdpanel')
                        AND DATE(last_updated) < CURDATE() - INTERVAL 1 hour;  
                       
#remove dead players from data table
        DELETE
                FROM character_data
                WHERE Alive=0;                                         
END//
DELIMITER ;
/*!40014 SET FOREIGN_KEY_CHECKS=1 */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
