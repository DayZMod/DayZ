DROP PROCEDURE IF EXISTS temp_pClassnames;
DELIMITER ;;
CREATE PROCEDURE temp_pClassnames ()
BEGIN
	DECLARE i INT DEFAULT 0;
	DECLARE c INT DEFAULT 0;
	DECLARE inst INT DEFAULT 0;

	DROP TEMPORARY TABLE IF EXISTS temp_classes;
	CREATE TEMPORARY TABLE temp_classes (Old varchar(255), New varchar(255));
	
	INSERT INTO temp_classes VALUES
	('"AKS_74_kobra"','"AK74_DZ"'),
	('"AKS_74_U"','"AKS74U_DZ"'),
	('"AK_47_M"','"AKM_DZ"'),
	('"AK_74"','"AK74_DZ"'),
	
	('"Sa58V_RCO_EP1"','"SA58_ACOG_DZ"'),
	('"Sa58V_CCO_EP1"','"SA58_CCO_DZ"'),
	('"Sa58V_EP1"','"SA58_DZ"'),
	('"Sa58P_EP1"','"SA58_DZ"'),
	
	('"M4A3_CCO_EP1"','"M4A1_FL_DZ"'),
	('"M4A1_HWS_GL_camo"','"M4A1_GL_FL_DZ"'),
	('"M4A1_HWS_GL"','"M4A1_GL_FL_DZ"'),
	('"M4A1_AIM_SD_camo"','"M4A1_SD_DZ"'),
	('"M4A1_Aim_camo"','"M4A1_DZ"'),
	('"M4A1_Aim"','"M4A1_DZ"'),
	('"M4A1"','"M4A1_DZ"'),
	
	('"M16A4_ACG_GL"','"M16A4_GL_DZ"'),
	('"m16a4_acg"','"M16A4_DZ"'),
	('"M16A4_GL"','"M16A4_GL_DZ"'),
	('"M16A2GL"','"M16A2_GL_DZ"'),
	('"m16a4"','"M16A4_DZ"'),
	('"M16A2"','"M16A2_DZ"'),
	
	('"G36A_camo"','"G36K_Camo_DZ"'),
	('"G36K_camo"','"G36K_Camo_DZ"'),
	('"G36C_camo"','"G36C_DZ"'),
	('"G36C"','"G36C_DZ"'),
	
	('"FN_FAL_ANPVS4"','"FNFAL_DZ"'),
	('"FN_FAL"','"FNFAL_DZ"'),
	('"SVD_CAMO_DZ"','"SVD_Gh_DZ"'),
	('"M14_EP1"','"M14_DZ"'),
	('"M40A3"','"M40A3_DZ"'),
	('"M24"','"M24_DZ"'),
	
	('"bizon_silenced"','"Bizon_SD_DZ"'),
	('"bizon"','"Bizon_DZ"'),
	('"MP5SD"','"MP5_SD_DZ"'),
	('"MP5A5"','"MP5_DZ"'),
	
	('"BAF_L85A2_RIS_Holo"','"L85_Holo_DZ"'),
	('"LeeEnfield"','"LeeEnfield_DZ"'),
	('"huntingrifle"','"CZ550_DZ"'),
	('"Mk_48_DZ"','"Mk48_DZ"'),
	('"M1014"','"M1014_DZ"'),
	
	('"MakarovSD"','"Makarov_SD_DZ"'),
	('"Makarov"','"Makarov_DZ"'),
	('"M9SD"','"M9_SD_DZ"'),
	('"M9"','"M9_DZ"'),
	('"glock17_EP1"','"G17_FL_DZ"'),
	('"Colt1911"','"M1911_DZ"'),
	('"revolver_EP1"','"Revolver_DZ"'),
	('"UZI_EP1"','"PDW_DZ"'),
	
	('"Attachment_M4A1_Aim"','"Attachment_CCO"'),
	('"Attachment_Crossbow_CCO"','"Attachment_CCO"'),
	('"Attachment_M14_SniperScope"','"Attachment_Holo"'),
	
	('"Attachment_M9Silencer"','"Attachment_Sup9"'),
	('"Attachment_M4A1_AIM_SD_camo"','"Attachment_Sup556"'),
	('"Attachment_bizonSilencer"','"Attachment_SupBizon"'),
	('"Attachment_MakarovSilencer"','"Attachment_SupMakarov"');
	
	SET c = (SELECT COUNT(*) FROM temp_classes);
	
	WHILE (i < c) DO
		SET @from_str = (SELECT Old FROM temp_classes LIMIT i, 1);
		SET @to_str = (SELECT New FROM temp_classes LIMIT i, 1);
		
		UPDATE character_data
		SET Inventory = REPLACE(Inventory,@from_str,@to_str), Backpack = REPLACE(Backpack,@from_str,@to_str)
		WHERE InstanceID = inst;
		
		UPDATE object_data
		SET Inventory = REPLACE(Inventory,@from_str,@to_str)
		WHERE Instance = inst;
		
		SET i = i + 1;
	END WHILE;
	
	DROP TEMPORARY TABLE IF EXISTS temp_classes;
END;;
DELIMITER ;

CALL temp_pClassnames();

DROP PROCEDURE temp_pClassnames;