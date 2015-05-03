-- --------------------------------------------------------
-- Host:                         184.164.146.210
-- Server version:               5.5.27 - MySQL Community Server (GPL)
-- Server OS:                    Win32
-- HeidiSQL Version:             9.1.0.4867
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;

-- Dumping structure for procedure dayzhivemind.pCleanup
DELIMITER //
CREATE DEFINER=`dayzhivemind`@`%` PROCEDURE `pCleanup`()
BEGIN 
#Last ran
	update event_scheduler set LastRun = NOW() where System = "pCleanup";

#starts outofbounds cleanup
        CALL pCleanupOOB();
 
#remove damaged objects
        DELETE
                FROM object_data
                WHERE Damage = 1;

#remove empty tents older than seven days
        DELETE
                FROM object_data
                WHERE (Classname like 'TentStorage%' or Classname like 'StashSmall%' or Classname like 'StashMedium%' or Classname like 'DomeTentStorage%')
                        AND DATE(last_updated) < CURDATE() - INTERVAL 7 DAY
                        AND Inventory = '[[[],[]],[[],[]],[[],[]]]';
       
        DELETE
                FROM object_data
                WHERE (Classname like 'TentStorage%' or Classname like 'StashSmall%' or Classname like 'StashMedium%' or Classname like 'DomeTentStorage%')
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
 
#remove Traps older than five days
        DELETE
                FROM object_data
                WHERE (Classname = 'BearTrap_DZ' or Classname = 'TrapBearTrapFlare' or Classname = 'TrapBearTrapSmoke' or Classname = 'Trap_Cans' or Classname = 'TrapTripwireFlare' or Classname = 'TrapTripwireGrenade' or Classname = 'TrapTripwireSmoke')
                        AND DATE(last_updated) < CURDATE() - INTERVAL 5 DAY; 
                        
#remove incomplete fences after 1 Day								
        DELETE
                FROM object_data
                WHERE (Classname = 'WoodenFence_1_foundation')
                        AND DATE(last_updated) < CURDATE() - INTERVAL 1 Day;  
                        
#remove incomplete fences after 3 Dayz								
        DELETE
                FROM object_data
                WHERE (Classname = 'WoodenFence_1_frame' or Classname = 'WoodenFence_quaterpanel' or Classname = 'WoodenFence_halfpanel' or Classname = 'WoodenFence_thirdpanel')
                        AND DATE(last_updated) < CURDATE() - INTERVAL 3 Day; 
                       
#remove dead players from data table
        DELETE
                FROM character_data
                WHERE Alive=0 AND DATE(last_updated) < CURDATE() - INTERVAL 90 Day; 
#Remove Bad Data
       DELETE
		 	FROM object_data
         	WHERE Classname like '%_base';	
			
#Remove wire if the owner has died.						
		DELETE
			FROM Object_DATA
			USING Object_DATA, Character_DATA
				WHERE Object_DATA.Classname = 'Wire_cat1'
					AND Object_DATA.CharacterID = Character_DATA.CharacterID
					AND Character_DATA.Alive = 0;			
END//
DELIMITER ;
/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
