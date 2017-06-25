/*!50003 DROP FUNCTION IF EXISTS `countVehiclesGroup` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`dayzhivemind`@`%` FUNCTION `countVehiclesGroup`(`inst` int, `groupid` int) RETURNS int(11)
    READS SQL DATA
BEGIN
	DECLARE count INT;
	
	/*SELECT COUNT(*)
		INTO count
		FROM object_data AS obj
		WHERE CharacterID = 0
			AND Instance = instance
		AND t = (SELECT `Group` FROM vehicle_spawns AS spawn WHERE spawn.Classname = obj.Classname LIMIT 1);*/
	
	SELECT COUNT(*)
	INTO count
	FROM object_data
	WHERE CharacterID = 0
		AND Instance = inst
		AND Classname IN
		(
			SELECT Classname
			FROM vehicle_spawns
			WHERE ID IN
			(
				SELECT Spawn_ID
				FROM vehicle_spawns_groups
				WHERE Group_ID = groupid
			)
		);
	
	RETURN count;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;