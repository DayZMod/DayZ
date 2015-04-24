/*!50003 DROP PROCEDURE IF EXISTS `pSpawnVehicles` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `pSpawnVehicles`(IN `i` INT)
BEGIN
	#---------------------------------------------------------------
	#Change this to affect the maximum number of vehicles on the server.
	DECLARE MaxVehicles INT DEFAULT 85;
	
	#Change this to affect the radius that is checked for existing vehicles when spawning.
	#If set to 0 or negative vehicles will always spawn despite blocking objects.
	#DECLARE SearchRadius DOUBLE DEFAULT 0;
	#---------------------------------------------------------------
	
	DECLARE ServerInstance VARCHAR(8) DEFAULT i;
	
	set @class_num := 0, @class := "";
	set @type_num := 0, @type := "";
	
	#Insert new records into object_data.
	INSERT INTO object_data (ObjectUID, Instance, Classname, CharacterID, Worldspace, Inventory, Hitpoints, Fuel, Damage, Datestamp)
	SELECT	ObjectUID, ServerInstance, Classname, 0,
					#Pick random location from vehicle_locations associated with vehicle_spawns.
					(SELECT Worldspace FROM vehicle_locations WHERE vehicle_locations.ObjectUID = y.ObjectUID ORDER BY RAND() * Weight LIMIT 1),
					#Generate random inventory.
					randomizeVehicleInventory(ObjectUID),
					#Generate random damage for parts.
					randomizeVehicleHitpoints(ObjectUID),
					#Generate random fuel level in the range ]MinFuel,MaxFuel[.
					MinFuel + RAND() * (MaxFuel - MinFuel),
					#Generate random damage in the range ]MinDamage,MaxDamage[.
					MinDamage + RAND() * (MaxDamage - MinDamage),
					SYSDATE()
	FROM
	(
		SELECT *, @class_num, (SELECT Type FROM object_classes WHERE Classname = x.Classname LIMIT 1) AS Type
		FROM
		(
			SELECT ObjectUID, Classname, MinDamage, MaxDamage, MinFuel, MaxFuel
			FROM vehicle_spawns
			#Filter out already spawned vehicles.
			WHERE ObjectUID NOT IN (SELECT ObjectUID FROM object_data WHERE Instance = ServerInstance)
			#Sort by Classname and random in preparation for filtering. See where clause below.
			ORDER BY Classname, RAND()
		) AS x
		WHERE
			#If @class is the same as previous increment @class_num, otherwise reset.
			(@class_num := IF (Classname = @class, @class_num + 1, 1)) IS NOT NULL
			#Set @class to the current Classname.
			AND (@class := Classname) IS NOT NULL
			#Pick n from each class, where n is the number of instances of said class still spawnable.
			#e.g. if 2 hueys can be spawned in total and one is spawned, take one huey.
			AND (@class_num <= (getVehicleClassMaxNum(Classname) - countVehiclesClass(ServerInstance, Classname)))
		#Sort by Type and random in preparation for filtering. See where clause below.
		ORDER BY Type, RAND()
	) AS y
	WHERE
		#See above.
		(@type_num := IF (Type = @type, @type_num + 1, 1)) IS NOT NULL
		AND (@type := Type) IS NOT NULL
		#Same as above but for class groups. e.g. each of the four helicopter classes may have a
		#MaxNum of 2 (resulting in a total of 8), but only a total of 4 helicopters are allowed.
		AND (@type_num <= (getVehicleGroupMaxNum(Type) - countVehiclesGroup(ServerInstance, Type)))
		#Make a random check for each vehicle where the chance is defined in object_classes.
		AND RAND() < (SELECT Chance FROM object_classes WHERE object_classes.Classname = y.Classname LIMIT 1);
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;