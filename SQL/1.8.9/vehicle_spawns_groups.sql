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

-- Dumping structure for table hiveminddev.vehicle_spawns_groups
DROP TABLE IF EXISTS `vehicle_spawns_groups`;
CREATE TABLE IF NOT EXISTS `vehicle_spawns_groups` (
  `Spawn_ID` int(11) NOT NULL,
  `Group_ID` int(11) NOT NULL,
  PRIMARY KEY (`Spawn_ID`,`Group_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- Dumping data for table hiveminddev.vehicle_spawns_groups: ~37 rows (approximately)
/*!40000 ALTER TABLE `vehicle_spawns_groups` DISABLE KEYS */;
INSERT INTO `vehicle_spawns_groups` (`Spawn_ID`, `Group_ID`) VALUES
	(1, 13), /* UAZ_Unarmed_TK_EP1 */
	(2, 13), /* UAZ_Unarmed_UN_EP1 */
	(3, 13), /* UAZ_RU */
	(4, 13), /* UAZ_Unarmed_TK_CIV_EP1 */
	(5, 6), /* SkodaBlue */
	(6, 6), /* Skoda */
	(7, 6), /* SkodaGreen */
	(9, 12), /* TT650_Ins */
	(10, 12), /* TT650_TK_CIV_EP1 */
	(12, 6), /* hilux1_civil_3_open */
	(13, 5), /* Ikarus */
	(14, 5), /* Ikarus_TK_CIV_EP1 */
	(15, 11), /* Tractor */
	(16, 6), /* S1203_TK_CIV_EP1 */
	(17, 4), /* V3S_Civ */
	(18, 4), /* UralCivil */
	(19, 6), /* car_hatchback */
	(23, 6), /* Volha_1_TK_CIV_EP1 */
	(24, 6), /* Volha_2_TK_CIV_EP1 */
	(26, 6), /* car_sedan */
	(27, 0), /* UH1H_DZ */
	(27, 10), /* UH1H_DZ */
	(28, 0), /* AH6X_DZ */
	(29, 9), /* AN2_DZ */
	(30, 1), /* BAF_Offroad_D */
	(31, 1), /* BAF_Offroad_W */
	(32, 0), /* MH6J_DZ */
/*	(33, 1), */ /* HMMWV_DZ */
	(34, 2), /* Pickup_PK_INS */
	(35, 2), /* Offroad_DSHKM_INS */
	(36, 9), /* AN2_2_DZ */
	(37, 0), /* UH1H_2_DZ */
	(37, 10), /* UH1H_2_DZ */
	(38, 12), /* M1030 */
	(39, 12), /* Old_moto_TK_Civ_EP1 */
	(40, 4), /* UralCivil2 */
	(41, 4), /* Ural_TK_CIV_EP1 */
	(42, 7), /* Ural_CDF */
	(43, 7), /* Ural_INS */
	(44, 7), /* UralOpen_INS */
	(45, 1), /* LandRover_TK_CIV_EP1 */
	(46, 1), /* LandRover_CZ_EP1 */
	(47, 6), /* datsun1_civil_2_covered */
	(48, 6), /* datsun1_civil_3_open */
	(49, 6), /* hilux1_civil_1_open */
	(50, 6), /* hilux1_civil_2_covered */
	(51, 6), /* VolhaLimo_TK_CIV_EP1 */
	(52, 6), /* ladalm */
	(53, 6), /* lada2 */
	(54, 11), /* tractorOld */
	(55, 6), /* lada1_tk_civ_ep1 */
	(56, 6), /* LADA2_TK_CIV_EP1 */
	(57, 9), /* AN2_3_DZ */
	(58, 7), /* UralOpen_CDF */
	(59, 4), /* Ural_UN_EP1 */
	(60, 7), /* UralSupply_TK_EP1 */
	(61, 7), /* V3S_TK_EP1 */
	(62, 7), /* V3S_Open_TK_EP1 */
	(63, 4), /* V3S_Open_TK_CIV_EP1 */
	(64, 4); /* V3S_TK_GUE_EP1 */
/*!40000 ALTER TABLE `vehicle_spawns_groups` ENABLE KEYS */;
/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
