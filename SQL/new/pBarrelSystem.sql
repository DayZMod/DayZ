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

DELIMITER //
CREATE DEFINER=`dayzhivemind`@`%` PROCEDURE `pBarrelSystem`()
BEGIN
#Last ran
	update event_scheduler set LastRun = NOW() where System = "pBarrelSystem";
					
#Check Barrel 1
	update
		object_data
			set Classname = 'WaterBarrel'
				where Classname = 'EmptyBarrel'
				AND DATE(last_updated) < CURDATE() - INTERVAL 1 DAY;												       
END//
DELIMITER ;
/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
