--
-- Table structure for table `vehicle_spawns_groups`
--

DROP TABLE IF EXISTS `vehicle_spawns_groups`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `vehicle_spawns_groups` (
  `Spawn_ID` int(11) NOT NULL,
  `Group_ID` int(11) NOT NULL,
  PRIMARY KEY (`Spawn_ID`,`Group_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `vehicle_spawns_groups`
--

LOCK TABLES `vehicle_spawns_groups` WRITE;
/*!40000 ALTER TABLE `vehicle_spawns_groups` DISABLE KEYS */;
INSERT INTO `vehicle_spawns_groups` VALUES
(2,6),
(4,6),
(5,6),
(6,6),
(7,6),
(12,6),
(13,5),
(14,5),
(16,6),
(17,4),
(18,4),
(19,6),
(23,6),
(24,6),
(26,6),
(27,0),
(27,10),
(28,0),
(29,0),
(30,9),
(31,1),
(32,1),
(33,0),
(34,1),
(35,2),
(36,2),
(37,9),
(38,0),
(38,10);
/*!40000 ALTER TABLE `vehicle_spawns_groups` ENABLE KEYS */;
UNLOCK TABLES;