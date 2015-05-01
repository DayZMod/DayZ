-- --------------------------------------------------------
-- Host:                         173.208.122.66 
-- Server version:               5.5.31-0ubuntu0.12.04.1 - (Ubuntu)
-- Server OS:                    debian-linux-gnu
-- HeidiSQL version:             7.0.0.4053
-- Date/time:                    2014-05-15 18:43:06
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET FOREIGN_KEY_CHECKS=0 */;

-- Dumping structure for function privatehivemind.rndspawn
DELIMITER //
CREATE DEFINER=`dayz`@`localhost` FUNCTION `rndspawn`(`chance` double) RETURNS tinyint(1)
    DETERMINISTIC
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
