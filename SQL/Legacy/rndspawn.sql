-- --------------------------------------------------------
-- Host:                         127.0.0.1
-- Server version:               5.6.10 - MySQL Community Server (GPL)
-- Server OS:                    Win64
-- HeidiSQL version:             7.0.0.4053
-- Date/time:                    2013-03-01 22:49:12
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET FOREIGN_KEY_CHECKS=0 */;

-- Dumping structure for function test.rndspawn
DELIMITER //
CREATE DEFINER=`dayz`@`localhost` FUNCTION `rndspawn`(`chance` double) RETURNS tinyint(1) DETERMINISTIC
BEGIN

	DECLARE bspawn tinyint(1) DEFAULT 0;

	IF (RAND() <= chance) THEN
		SET bspawn = 1;
	END IF;

	RETURN bspawn;

END//
DELIMITER ;
/*!40014 SET FOREIGN_KEY_CHECKS=1 */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
