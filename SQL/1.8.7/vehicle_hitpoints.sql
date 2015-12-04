--
-- Table structure for table `vehicle_hitpoints`
--

DROP TABLE IF EXISTS `vehicle_hitpoints`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `vehicle_hitpoints` (
  `ID` int(11) NOT NULL,
  `PartName` varchar(255) CHARACTER SET latin1 NOT NULL,
  `MinDamage` double(20,10) NOT NULL DEFAULT '0.0000000000',
  `MaxDamage` double(20,10) NOT NULL DEFAULT '1.0000000000',
  PRIMARY KEY (`ID`,`PartName`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `vehicle_hitpoints`
--

LOCK TABLES `vehicle_hitpoints` WRITE;
/*!40000 ALTER TABLE `vehicle_hitpoints` DISABLE KEYS */;
INSERT INTO `vehicle_hitpoints` VALUES
(1,'palivo',0.0000000000,0.8000000000),
(1,'motor',0.0000000000,0.8000000000),
(1,'karoserie',0.0000000000,1.0000000000),
(1,'wheel_1_1_steering',0.0000000000,1.0000000000),
(1,'wheel_1_2_steering',0.0000000000,1.0000000000),
(1,'wheel_2_1_steering',0.0000000000,1.0000000000),
(1,'wheel_2_2_steering',0.0000000000,1.0000000000),
(2,'motor',0.0000000000,0.8000000000),
(3,'motor',0.0000000000,0.8000000000),
(3,'elektronika',0.0000000000,1.0000000000),
(3,'mala vrtule',0.0000000000,1.0000000000),
(3,'velka vrtule',0.0000000000,1.0000000000),
(4,'glass1',0.0000000000,1.0000000000),
(4,'glass2',0.0000000000,1.0000000000),
(4,'glass3',0.0000000000,1.0000000000),
(4,'glass4',0.0000000000,1.0000000000),
(4,'glass5',0.0000000000,1.0000000000),
(4,'NEtrup',0.0000000000,1.0000000000),
(4,'motor',0.0000000000,0.8000000000),
(4,'elektronika',0.0000000000,1.0000000000),
(4,'mala vrtule',0.0000000000,1.0000000000),
(4,'velka vrtule',0.0000000000,1.0000000000),
(4,'munice',0.0000000000,1.0000000000),
(4,'sklo predni P',0.0000000000,1.0000000000),
(4,'sklo predni L',0.0000000000,1.0000000000),
(4,'glass6',0.0000000000,1.0000000000),
(5,'glass1',0.0000000000,1.0000000000),
(5,'glass2',0.0000000000,1.0000000000),
(5,'glass3',0.0000000000,1.0000000000),
(5,'motor',0.0000000000,0.8000000000),
(5,'palivo',0.0000000000,0.8000000000),
(5,'wheel_1_1_steering',0.0000000000,1.0000000000),
(5,'wheel_1_2_steering',0.0000000000,1.0000000000),
(5,'wheel_2_1_steering',0.0000000000,1.0000000000),
(5,'wheel_2_2_steering',0.0000000000,1.0000000000),
(5,'sklo predni P',0.0000000000,1.0000000000),
(5,'sklo predni L',0.0000000000,1.0000000000),
(5,'karoserie',0.0000000000,1.0000000000),
(5,'wheel_1_4_steering',0.0000000000,1.0000000000),
(5,'wheel_2_4_steering',0.0000000000,1.0000000000),
(5,'wheel_1_3_steering',0.0000000000,1.0000000000),
(5,'wheel_2_3_steering',0.0000000000,1.0000000000),
(5,'glass4',0.0000000000,1.0000000000),
(6,'glass1',0.0000000000,1.0000000000),
(6,'glass2',0.0000000000,1.0000000000),
(6,'glass3',0.0000000000,1.0000000000),
(6,'motor',0.0000000000,0.8000000000),
(6,'palivo',0.0000000000,0.8000000000),
(6,'wheel_1_1_steering',0.0000000000,1.0000000000),
(6,'wheel_1_2_steering',0.0000000000,1.0000000000),
(6,'wheel_2_1_steering',0.0000000000,1.0000000000),
(6,'wheel_2_2_steering',0.0000000000,1.0000000000),
(6,'karoserie',0.0000000000,1.0000000000),
(6,'glass4',0.0000000000,1.0000000000);
/*!40000 ALTER TABLE `vehicle_hitpoints` ENABLE KEYS */;
UNLOCK TABLES;