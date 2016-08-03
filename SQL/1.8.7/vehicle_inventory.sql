--
-- Table structure for table `vehicle_inventory`
--

DROP TABLE IF EXISTS `vehicle_inventory`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `vehicle_inventory` (
  `ID` int(11) NOT NULL,
  `Type` enum('Backpack','Magazine','Weapon') CHARACTER SET latin1 NOT NULL DEFAULT 'Magazine',
  `Classname` varchar(255) CHARACTER SET latin1 NOT NULL,
  `MinAmount` tinyint(3) NOT NULL DEFAULT '1',
  `MaxAmount` tinyint(3) NOT NULL DEFAULT '1',
  `Chance` double(20,10) NOT NULL DEFAULT '1.0000000000',
  PRIMARY KEY (`ID`,`Type`,`Classname`),
  KEY `ObjectUID` (`ID`) USING BTREE
) ENGINE=MyISAM DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `vehicle_inventory`
--

LOCK TABLES `vehicle_inventory` WRITE;
/*!40000 ALTER TABLE `vehicle_inventory` DISABLE KEYS */;
INSERT INTO `vehicle_inventory` VALUES
(30728533,'Magazine','20Rnd_762x51_DMR',2,4,1.0000000000),
(30728533,'Weapon','DMR_DZ',1,1,0.0500000000),
(26883451,'Magazine','20Rnd_762x51_DMR',1,3,1.0000000000),
(26883451,'Magazine','5x_22_LR_17_HMR',2,5,1.0000000000),
(26883451,'Weapon','huntingrifle',1,1,0.8000000000),
(42231659,'Magazine','30Rnd_556x45_StanagSD',2,5,1.0000000000),
(42231659,'Weapon','M4A1_Aim_SD_Camo',1,1,0.2000000000),
(30507947,'Magazine','HandGrenade_west',1,2,0.5000000000),
(30507947,'Magazine','30Rnd_545x39_AK',2,4,1.0000000000),
(30507947,'Weapon','AK_74',1,1,0.5000000000),
(25844760,'Magazine','20Rnd_762x51_DMR',1,3,1.0000000000),
(25844760,'Weapon','MeleeMachete',1,1,0.9000000000),
(25844760,'Weapon','LeeEnfield',1,1,0.7000000000),
(25844760,'Magazine','10x_303',1,3,1.0000000000);
/*!40000 ALTER TABLE `vehicle_inventory` ENABLE KEYS */;
UNLOCK TABLES;