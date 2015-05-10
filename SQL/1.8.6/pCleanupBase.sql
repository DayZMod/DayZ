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
CREATE DEFINER=`dayzhivemind`@`%` PROCEDURE `pCleanupBase`()
BEGIN
#Last ran
	update event_scheduler set LastRun = NOW() where System = "pCleanupBase";
	
#Start Maintenance Mode       
	Update
		object_data 
			set Hitpoints = '["Maintenance"]'                    
				WHERE (Classname = 'WoodenFence_1' or Classname = 'WoodenFence_2' or Classname = 'WoodenFence_3' or Classname = 'WoodenFence_4' or Classname = 'WoodenFence_5' or Classname = 'WoodenFence_6' or Classname = 'WoodenFence_7')
				AND DATE(last_updated) < CURDATE() - INTERVAL 7 DAY
 				AND Hitpoints = '[]';
 				
#Check WoodenFence_1_foundation
	update
		object_data
			set Classname = 'WoodenFence_1_foundation'
				where Classname = 'WoodenFence_1_frame'
				AND Hitpoints = '["Maintenance"]'
				AND DATE(last_updated) < CURDATE() - INTERVAL 3 DAY;

#Check WoodenFence_1_frame
	update
		object_data
			set Classname = 'WoodenFence_1_frame'
				where Classname = 'WoodenFence_quaterpanel'
				AND Hitpoints = '["Maintenance"]'
				AND DATE(last_updated) < CURDATE() - INTERVAL 3 DAY;

#Check WoodenFence_halfpanel
	update
		object_data
			set Classname = 'WoodenFence_quaterpanel'
				where Classname = 'WoodenFence_halfpanel'
				AND Hitpoints = '["Maintenance"]'
				AND DATE(last_updated) < CURDATE() - INTERVAL 3 DAY;
				
#Check WoodenFence_thirdpanel
	update
		object_data
			set Classname = 'WoodenFence_halfpanel'
				where Classname = 'WoodenFence_thirdpanel'
				AND Hitpoints = '["Maintenance"]'
				AND DATE(last_updated) < CURDATE() - INTERVAL 3 DAY;
				 
#Check fence 1
	update
		object_data
			set Classname = 'WoodenFence_thirdpanel'
				where Classname = 'WoodenFence_1'
				AND Hitpoints = '["Maintenance"]'
				AND DATE(last_updated) < CURDATE() - INTERVAL 3 DAY;
#Check fence 2
	update
		object_data
			set Classname = 'WoodenFence_1'
				where Classname = 'WoodenFence_2'
				AND Hitpoints = '["Maintenance"]'
				AND DATE(last_updated) < CURDATE() - INTERVAL 3 DAY;	
#Check fence 3
	update
		object_data
			set Classname = 'WoodenFence_2'
				where Classname = 'WoodenFence_3'
				AND Hitpoints = '["Maintenance"]'
				AND DATE(last_updated) < CURDATE() - INTERVAL 3 DAY;					
#Check fence 4
	update
		object_data
			set Classname = 'WoodenFence_3'
				where Classname = 'WoodenFence_4'
				AND Hitpoints = '["Maintenance"]'
				AND DATE(last_updated) < CURDATE() - INTERVAL 3 DAY;					
#Check fence 5
	update
		object_data
			set Classname = 'WoodenFence_4'
				where Classname = 'WoodenFence_5'
				AND Hitpoints = '["Maintenance"]'
				AND DATE(last_updated) < CURDATE() - INTERVAL 3 DAY;					
#Check fence 6
	update
		object_data
			set Classname = 'WoodenFence_5'
				where Classname = 'WoodenFence_6'
				AND Hitpoints = '["Maintenance"]'
				AND DATE(last_updated) < CURDATE() - INTERVAL 3 DAY;					
#Check fence 7
	update
		object_data
			set Classname = 'WoodenFence_6'
				where Classname = 'WoodenFence_7'
				AND Hitpoints = '["Maintenance"]'
				AND DATE(last_updated) < CURDATE() - INTERVAL 3 DAY;												       
END//
DELIMITER ;
/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
