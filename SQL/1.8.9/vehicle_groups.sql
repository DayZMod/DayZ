-- --------------------------------------------------------
-- Host:                         108.174.57.160
-- Server version:               5.7.18-log - MySQL Community Server (GPL)
-- Server OS:                    Win64
-- HeidiSQL Version:             9.3.0.4984
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;

-- Dumping structure for table hiveminddev.vehicle_groups
DROP TABLE IF EXISTS `vehicle_groups`;
CREATE TABLE IF NOT EXISTS `vehicle_groups` (
  `ID` int(11) NOT NULL,
  `MaxNum` int(11) NOT NULL,
  `Group_Info` text,
  PRIMARY KEY (`ID`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC COMMENT='0 Helicopters\r\n1 Military cars (Landrover, Offroad)\r\n2 Armed pickups\r\n3 Bikes\r\n4 Trucks\r\n5 Buses\r\n6 Civilian cars\r\n7 Civilian cars high end\r\n8 Civilian cars low end\r\n9 AN-2\r\n10 UH-1H\r\n11 Tractors\r\n12 Motorcycles';

-- Dumping data for table hiveminddev.vehicle_groups: 11 rows
/*!40000 ALTER TABLE `vehicle_groups` DISABLE KEYS */;
INSERT INTO `vehicle_groups` (`ID`, `MaxNum`, `Group_Info`) VALUES
	(0, 4, 'Helicopters'),
	(1, 3, 'Military Cars (Landrover, Offroad)'),
	(2, 2, 'Armed Pickups'),
	(3, 8, 'Bikes'),
	(4, 3, 'Civilian Trucks (Ural, V3S)'),
	(5, 2, 'Buses'),
	(6, 16, 'Civilian Cars'),
	(7, 3, 'Military Trucks (Ural, V3S)'),
	(8, 5, 'Civilian cars low end'),
	(9, 1, 'AN-2'),
	(10, 2, 'UH-1H'),
	(11, 3, 'Tractors'),
	(12, 6, 'Motorcycles'),
	(13, 6, 'UAZ');
/*!40000 ALTER TABLE `vehicle_groups` ENABLE KEYS */;
UNLOCK TABLES;