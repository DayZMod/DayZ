--
-- Table structure for table `vehicle_spawns`
--

DROP TABLE IF EXISTS `vehicle_spawns`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `vehicle_spawns` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `Classname` varchar(255) NOT NULL,
  `Chance` double NOT NULL,
  `MaxNum` int(11) NOT NULL DEFAULT '1',
  `Location` int(11) NOT NULL,
  `Inventory` int(11) DEFAULT NULL,
  `Hitpoints` int(11) DEFAULT NULL,
  `MinDamage` double NOT NULL,
  `MaxDamage` double NOT NULL,
  `MinFuel` double NOT NULL,
  `MaxFuel` double NOT NULL,
  `MaxWeapons` int(11) NOT NULL,
  `MaxMagazines` int(11) NOT NULL,
  `MaxBackpacks` int(11) NOT NULL,
  `CleanupTime` int(11) NOT NULL,
  PRIMARY KEY (`ID`),
  UNIQUE KEY `Classname` (`Classname`) USING HASH
) ENGINE=MyISAM AUTO_INCREMENT=39 DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `vehicle_spawns`
--

LOCK TABLES `vehicle_spawns` WRITE;
/*!40000 ALTER TABLE `vehicle_spawns` DISABLE KEYS */;
INSERT INTO `vehicle_spawns` (`ID`, `Classname`, `Chance`, `MaxNum`, `Location`, `Inventory`, `Hitpoints`, `MinDamage`, `MaxDamage`, `MinFuel`, `MaxFuel`, `MaxWeapons`, `MaxMagazines`, `MaxBackpacks`, `CleanupTime`) VALUES 
(1, 'UAZ_Unarmed_TK_EP1', 0.59, 2, 7, 9, 1, 0.2, 0.8, 0, 0.8, 10, 50, 8, 300),
(2, 'UAZ_Unarmed_UN_EP1', 0.7, 1, 7, 8, 1, 0.2, 0.8, 0, 0.8, 10, 50, 8, 300),
(3, 'UAZ_RU', 0.59, 2, 7, 9, 1, 0.2, 0.8, 0, 0.8, 10, 50, 8, 300),
(4, 'UAZ_Unarmed_TK_CIV_EP1', 0.65, 3, 7, 9, 1, 0.2, 0.8, 0, 0.8, 10, 50, 8, 300),
(5, 'SkodaBlue', 0.69, 2, 10, 20, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(6, 'Skoda', 0.69, 2, 10, 20, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(7, 'SkodaGreen', 0.69, 2, 10, 20, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(8, 'ATV_US_EP1', 0.7, 6, 0, 21, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 120),
(9, 'TT650_Ins', 0.65, 2, 1, 2, 2, 0.2, 0.8, 0, 0.8, 0, 5, 0, 120),
(10, 'TT650_TK_CIV_EP1', 0.65, 2, 1, 2, 2, 0.2, 0.8, 0, 0.8, 0, 5, 0, 120),
(11, 'Old_bike_TK_CIV_EP1', 0.64, 8, 6, NULL, NULL, 0.2, 0.8, 0, 0, 0, 0, 0, 60),
(12, 'hilux1_civil_3_open', 0.65, 3, 10, 11, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(13, 'Ikarus', 0.59, 2, 11, 6, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 180),
(14, 'Ikarus_TK_CIV_EP1', 0.59, 2, 11, 6, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 180),
(15, 'Tractor', 0.7, 3, 12, 22, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 60),
(16, 'S1203_TK_CIV_EP1', 0.58, 2, 10, 1, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(17, 'V3S_Civ', 0.48, 2, 13, 18, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(18, 'UralCivil', 0.59, 2, 13, 17, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(19, 'car_hatchback', 0.69, 2, 10, 19, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(20, 'Fishing_Boat', 0.61, 1, 14, 16, 2, 0.2, 0.8, 0, 0.8, 40, 400, 8, 300),
(21, 'PBX', 0.59, 1, 14, 4, 2, 0.2, 0.8, 0, 0.8, 5, 50, 2, 300),
(22, 'Smallboat_1', 0.59, 2, 14, 16, 2, 0.2, 0.8, 0, 0.8, 20, 200, 4, 300),
(23, 'Volha_1_TK_CIV_EP1', 0.69, 3, 10, 20, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(24, 'Volha_2_TK_CIV_EP1', 0.69, 3, 10, 20, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(25, 'SUV_DZ', 0.59, 1, 10, 3, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(26, 'car_sedan', 0.69, 2, 10, 19, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(27, 'UH1H_DZ', 0.59, 2, 2, 13, 3, 0.2, 0.8, 0, 0.8, 5, 25, 4, 900),
(28, 'AH6X_DZ', 0.48, 3, 3, 7, 4, 0.2, 0.8, 0, 0.8, 3, 30, 2, 900),
(29, 'AN2_DZ', 0.6, 1, 5, 14, NULL, 0, 0, 0.1, 0.4, 10, 80, 15, 900),
(30, 'BAF_Offroad_D', 0.54, 2, 7, 10, 5, 0.2, 0.8, 0, 0.8, 10, 90, 2, 300),
(31, 'BAF_Offroad_W', 0.48, 2, 7, 10, 5, 0.2, 0.8, 0, 0.8, 10, 90, 2, 300),
(32, 'MH6J_DZ', 0.48, 2, 3, 7, 4, 0.2, 0.8, 0, 0.8, 3, 30, 2, 900),
(33, 'HMMWV_DZ', 0.21, 2, 7, 5, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(34, 'Pickup_PK_INS', 0.1, 2, 7, 12, 6, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(35, 'Offroad_DSHKM_INS', 0.07, 1, 7, 12, 6, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(36, 'AN2_2_DZ', 1, 1, 5, 15, NULL, 0, 0, 0.1, 0.4, 10, 80, 15, 900),
(37, 'UH1H_2_DZ', 0.3, 1, 2, 13, 3, 0.2, 0.8, 0, 0.8, 5, 25, 4, 900),
(38, 'M1030', 0.72, 2, 1, 2, 2, 0.2, 0.8, 0, 0.8, 0, 5, 0, 120),
(39, 'Old_moto_TK_Civ_EP1', 0.72, 2, 1, 2, 2, 0.2, 0.8, 0, 0.8, 0, 5, 0, 120),
(40, 'UralCivil2', 0.68, 2, 13, 17, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(41, 'Ural_TK_CIV_EP1', 0.68, 2, 13, 23, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(42, 'Ural_CDF', 0.63, 2, 13, 17, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(43, 'Ural_INS', 0.63, 2, 13, 24, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(44, 'UralOpen_INS', 0.54, 2, 13, 25, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(45, 'LandRover_TK_CIV_EP1', 0.63, 2, 7, 10, 5, 0.2, 0.8, 0, 0.8, 10, 90, 2, 300),
(46, 'LandRover_CZ_EP1', 0.54, 2, 7, 10, 5, 0.2, 0.8, 0, 0.8, 10, 90, 2, 300),
(47, 'datsun1_civil_2_covered', 0.65, 2, 10, 11, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(48, 'datsun1_civil_3_open', 0.65, 2, 10, 11, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(49, 'hilux1_civil_1_open', 0.65, 2, 10, 11, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(50, 'hilux1_civil_2_covered', 0.65, 2, 10, 11, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(51, 'VolhaLimo_TK_CIV_EP1', 0.69, 2, 10, 19, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(52, 'ladalm', 0.69, 2, 10, 19, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(53, 'lada2', 0.69, 2, 10, 19, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 300),
(54, 'tractorOld', 0.65, 3, 12, 22, 1, 0.2, 0.8, 0, 0.8, 10, 50, 2, 60),
(55, 'lada1_tk_civ_ep1', 0.69, 2, 10, 19, 1, 0.2, 0.8, 0, 0.8, 10, 50, 8, 300),
(56, 'LADA2_TK_CIV_EP1', 0.69, 2, 10, 19, 1, 0.2, 0.8, 0, 0.8, 10, 50, 8, 300),
(57, 'AN2_3_DZ', 0.75, 1, 5, 26, NULL, 0, 0, 0.1, 0.4, 10, 80, 15, 900),
(58, 'UralOpen_CDF', 0.54, 2, 13, 24, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(59, 'Ural_UN_EP1', 0.71, 2, 13, 23, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(60, 'UralSupply_TK_EP1', 0.54, 2, 13, 18, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(61, 'V3S_TK_EP1', 0.71, 2, 13, 23, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(62, 'V3S_Open_TK_EP1', 0.66, 2, 13, 24, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(63, 'V3S_Open_TK_CIV_EP1', 0.59, 2, 13, 18, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300),
(64, 'V3S_TK_GUE_EP1', 0.48, 2, 13, 25, 1, 0.2, 0.8, 0, 0.8, 50, 200, 8, 300);
/*!40000 ALTER TABLE `vehicle_spawns` ENABLE KEYS */;
UNLOCK TABLES;
