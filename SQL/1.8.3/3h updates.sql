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

-- Dumping structure for event dayzhivemind.3h updates
DELIMITER //
CREATE DEFINER=`root`@`%` EVENT `3h updates` ON SCHEDULE EVERY 1 HOUR STARTS '2014-04-11 11:30:00' ON COMPLETION NOT PRESERVE ENABLE DO BEGIN
	update event_scheduler set LastRun = NOW() where System = "3hRespawns";
	
	CALL `pMain`('1');
	
END//
DELIMITER ;
/*!40014 SET FOREIGN_KEY_CHECKS=1 */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
