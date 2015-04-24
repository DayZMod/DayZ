/*!50003 DROP FUNCTION IF EXISTS `randomizeVehicleInventory` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` FUNCTION `randomizeVehicleInventory`(`uid` int) RETURNS varchar(255) CHARSET latin1
    READS SQL DATA
BEGIN
	DECLARE WeaponClasses		VARCHAR(255);
	DECLARE WeaponAmounts		VARCHAR(255);
	DECLARE MagazineClasses	VARCHAR(255);
	DECLARE MagazineAmounts	VARCHAR(255);
	DECLARE BackpackClasses	VARCHAR(255);
	DECLARE BackpackAmounts	VARCHAR(255);
	
	DECLARE MaxWeapons		INT DEFAULT (SELECT vehicle_spawns.MaxWeapons		FROM vehicle_spawns WHERE ObjectUID = uid LIMIT 1);
	DECLARE MaxMagazines	INT DEFAULT (SELECT vehicle_spawns.MaxMagazines	FROM vehicle_spawns WHERE ObjectUID = uid LIMIT 1);
	DECLARE MaxBackpacks	INT DEFAULT (SELECT vehicle_spawns.MaxBackpacks	FROM vehicle_spawns WHERE ObjectUID = uid LIMIT 1);
	
	#Weapons
	SET @amt := 0;
	SET @sum := 0;
	SELECT	GROUP_CONCAT("\"", Classname, "\""),
					GROUP_CONCAT(IF(@sum > MaxWeapons, MaxWeapons - @sum + @amt, @amt))
	INTO WeaponClasses, WeaponAmounts
	FROM 
	(
		SELECT *
		FROM vehicle_inventory 
		WHERE ObjectUID = uid 
			AND Type = "Weapon" 
			AND RAND() < Chance
		ORDER BY RAND()
	) AS x
	WHERE (@amt := ROUND(x.MinAmount + RAND() * (x.MaxAmount - x.MinAmount))) IS NOT NULL
		AND (@sum := @sum + @amt) IS NOT NULL
		AND @sum - @amt < MaxWeapons;
	
	#Magazines
	SET @amt := 0;
	SET @sum := 0;
	SELECT	GROUP_CONCAT("\"", Classname, "\""),
					GROUP_CONCAT(IF(@sum > MaxMagazines, MaxMagazines - @sum + @amt, @amt))
	INTO MagazineClasses, MagazineAmounts
	FROM 
	(
		SELECT *
		FROM vehicle_inventory 
		WHERE ObjectUID = uid 
			AND Type = "Magazine" 
			AND RAND() < Chance
		ORDER BY RAND()
	) AS x
	WHERE (@amt := ROUND(x.MinAmount + RAND() * (x.MaxAmount - x.MinAmount))) IS NOT NULL
		AND (@sum := @sum + @amt) IS NOT NULL
		AND @sum - @amt < MaxMagazines;
	
	#Backpacks
	SET @amt := 0;
	SET @sum := 0;
	SELECT	GROUP_CONCAT("\"", Classname, "\""),
					GROUP_CONCAT(IF(@sum > MaxBackpacks, MaxBackpacks - @sum + @amt, @amt))
	INTO BackpackClasses, BackpackAmounts
	FROM 
	(
		SELECT *
		FROM vehicle_inventory 
		WHERE ObjectUID = uid 
			AND Type = "Backpack" 
			AND RAND() < Chance
		ORDER BY RAND()
	) AS x
	WHERE (@amt := ROUND(x.MinAmount + RAND() * (x.MaxAmount - x.MinAmount))) IS NOT NULL
		AND (@sum := @sum + @amt) IS NOT NULL
		AND @sum - @amt < MaxBackpacks;
	
	#Concatenate all classes and amounts into one string in the format:
	#[[[<backpack classes>],[<weapon amounts>]],[[<magazine classes>],[<magazine amounts>]],[[<backpack classes>],[<backpack amounts>]]]
	RETURN CONCAT_WS
	(
		"",
		"[[[",			WeaponClasses,
		"], [",			WeaponAmounts,
		"]], [[",		MagazineClasses,
		"], [",			MagazineAmounts,
		"]], [[",		BackpackClasses,
		"], [",			BackpackAmounts,
		"]]]"
	);
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;