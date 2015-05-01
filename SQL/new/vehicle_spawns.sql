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
  PRIMARY KEY (`ID`),
  UNIQUE KEY `Classname` (`Classname`) USING HASH
) ENGINE=MyISAM AUTO_INCREMENT=37 DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `vehicle_spawns`
--

LOCK TABLES `vehicle_spawns` WRITE;
/*!40000 ALTER TABLE `vehicle_spawns` DISABLE KEYS */;
INSERT INTO `vehicle_spawns` VALUES
(1,'UAZ_Unarmed_TK_EP1',0.7,2,7,NULL,1,0.2,0.8,0,0.8,1,3,0),
(2,'UAZ_Unarmed_UN_EP1',0.59,2,10,NULL,1,0.2,0.8,0,0.8,1,0,0),
(3,'UAZ_RU',0.59,1,7,NULL,1,0.2,0.8,0,0.8,1,2,0),
(4,'UAZ_Unarmed_TK_CIV_EP1',0.59,3,10,NULL,1,0.2,0.8,0,0.8,0,0,0),
(5,'SkodaBlue',0.68,2,10,NULL,1,0.2,0.8,0,0.8,0,0,0),
(6,'Skoda',0.68,2,10,NULL,1,0.2,0.8,0,0.8,0,0,0),
(7,'SkodaGreen',0.68,2,10,NULL,1,0.2,0.8,0,0.8,0,0,0),
(8,'ATV_US_EP1',0.7,6,0,NULL,1,0.2,0.8,0,0.8,0,0,0),
(9,'TT650_Ins',0.72,1,1,NULL,2,0.2,0.8,0,0.8,0,0,0),
(10,'TT650_TK_CIV_EP1',0.72,3,1,NULL,2,0.2,0.8,0,0.8,0,0,0),
(11,'Old_bike_TK_CIV_EP1',0.64,8,6,NULL,NULL,0.2,0.8,0,0,0,0,0),
(12,'hilux1_civil_3_open',0.59,3,10,NULL,1,0.2,0.8,0,0.8,0,0,0),
(13,'Ikarus',0.59,2,11,NULL,1,0.2,0.8,0,0.8,0,0,0),
(14,'Ikarus_TK_CIV_EP1',0.59,2,11,NULL,1,0.2,0.8,0,0.8,0,0,0),
(15,'Tractor',0.7,3,12,NULL,1,0.2,0.8,0,0.8,0,0,0),
(16,'S1203_TK_CIV_EP1',0.69,2,10,NULL,1,0.2,0.8,0,0.8,0,0,0),
(17,'V3S_Civ',0.66,2,13,NULL,1,0.2,0.8,0,0.8,0,0,0),
(18,'UralCivil',0.59,2,13,NULL,1,0.2,0.8,0,0.8,0,0,0),
(19,'car_hatchback',0.73,2,10,NULL,1,0.2,0.8,0,0.8,0,0,0),
(20,'Fishing_Boat',0.61,1,14,NULL,2,0.2,0.8,0,0.8,0,0,0),
(21,'PBX',0.59,1,14,NULL,2,0.2,0.8,0,0.8,0,0,0),
(22,'Smallboat_1',0.59,2,14,NULL,2,0.2,0.8,0,0.8,0,0,0),
(23,'Volha_1_TK_CIV_EP1',0.71,3,10,NULL,1,0.2,0.8,0,0.8,0,0,0),
(24,'Volha_2_TK_CIV_EP1',0.71,3,10,NULL,1,0.2,0.8,0,0.8,0,0,0),
(25,'SUV_DZ',0.59,1,9,NULL,1,0.2,0.8,0,0.8,0,0,0),
(26,'car_sedan',0.59,2,10,NULL,1,0.2,0.8,0,0.8,0,0,0),
(27,'UH1H_DZ',0.59,2,2,NULL,3,0.2,0.8,0,0.8,0,0,0),
(28,'AH6X_DZ',0.48,3,4,NULL,4,0.2,0.8,0,0.8,0,0,0),
(29,'Mi17_DZ',0.49,1,3,NULL,4,0.2,0.8,0,0.8,0,0,0),
(30,'AN2_DZ',1,1,5,NULL,NULL,0.2,0.8,0,0.8,0,0,0),
(31,'BAF_Offroad_D',0.54,2,7,NULL,5,0.2,0.8,0,0.8,0,0,0),
(32,'BAF_Offroad_W',0.54,2,7,NULL,5,0.2,0.8,0,0.8,0,0,0),
(33,'MH6J_DZ',0.48,2,4,NULL,3,0.2,0.8,0,0.8,0,0,0),
(34,'HMMWV_DZ',0.21,2,7,NULL,1,0.2,0.8,0,0.8,0,0,0),
(35,'Pickup_PK_INS',0.1,2,8,NULL,6,0.2,0.8,0,0.8,0,0,0),
(36,'Offroad_DSHKM_INS',0.07,1,8,NULL,6,0.2,0.8,0,0.8,0,0,0);
/*!40000 ALTER TABLE `vehicle_spawns` ENABLE KEYS */;
UNLOCK TABLES;