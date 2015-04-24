--
-- Table structure for table `vehicle_groups`
--

DROP TABLE IF EXISTS `vehicle_groups`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `vehicle_groups` (
  `Type` varchar(255) NOT NULL,
  `MaxNum` int(11) NOT NULL,
  PRIMARY KEY (`Type`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `vehicle_groups`
--

LOCK TABLES `vehicle_groups` WRITE;
/*!40000 ALTER TABLE `vehicle_groups` DISABLE KEYS */;
INSERT INTO `vehicle_groups` VALUES ('helicopter',4);
/*!40000 ALTER TABLE `vehicle_groups` ENABLE KEYS */;
UNLOCK TABLES;