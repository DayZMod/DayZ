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
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* S1203_TK_CIV_EP1 - stoner */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Weapon', 'MeleeBaseBallBat', 1, 1, 0.8500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Weapon', 'MeleeBaseBallBatBarbed', 1, 1, 0.2500000000);

INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'ItemTent', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'ItemTrashToiletpaper', 1, 2, 0.8500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'equip_comfreyleafs', 1, 3, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'ItemKosmosSmokes', 1, 2, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'equip_herb_box', 1, 1, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'FoodCakeCremeCakeClean', 2, 2, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'FoodChipsChocolate', 1, 2, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'FoodChipsChocolateEmpty', 1, 3, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'FoodChipsSulahoops', 2, 2, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'FoodChipsSulahoopsEmpty', 2, 2, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'FoodCandyLegacys', 2, 2, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'ItemSodaRabbit', 1, 3, 0.8500000000);

INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (1, 'Magazine', 'ItemFuelcan', 1, 2, 0.7500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* TT650_Ins, TT650_TK_CIV_EP1 - parts */
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (2, 'Magazine', 'PartGeneric', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (2, 'Magazine', 'ItemSodaRabbit', 1, 1, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (2, 'Magazine', 'PartWheel', 1, 1, 0.4000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (2, 'Magazine', 'ItemFuelcanEmpty', 1, 1, 1.0000000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*SUV_DZ - gang */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (3, 'Weapon', 'PDW_DZ', 1, 1, 0.1500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (3, 'Weapon', 'ItemKnife', 1, 1, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (3, 'Weapon', 'ItemMachete', 1, 1, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (3, 'Weapon', 'MeleeBaseBallBatNails', 1, 1, 0.6500000000);

INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (3, 'Magazine', 'PipeBomb', 1, 2, 0.8500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (3, 'Magazine', 'FoodCanFrankBeans', 1, 2, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (3, 'Magazine', 'ItemSodaRabbit', 1, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (3, 'Magazine', 'FoodCanFraggleos', 1, 2, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (3, 'Magazine', '30Rnd_9x19_UZI', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (3, 'Magazine', 'ItemFuelcan', 1, 1, 0.2500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* PBX - spec ops */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (4, 'Weapon', 'M16A4_GL_ACOG_DZ', 1, 1, 0.1000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (4, 'Magazine', 'Skin_Sniper1_DZ', 1, 1, 0.1000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (4, 'Magazine', 'Skin_Camo1_DZ', 1, 1, 0.1500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (4, 'Magazine', 'HandGrenade_west', 2, 4, 0.1500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (4, 'Magazine', 'FoodMRE', 2, 2, 0.9000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (4, 'Magazine', 'SmokeShellGreen', 1, 2, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (4, 'Magazine', 'SmokeShellRed', 1, 2, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (4, 'Magazine', 'ItemFlashlightRed', 1, 1, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (4, 'Magazine', '30Rnd_556x45_StanagSD', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (4, 'Magazine', 'ItemFuelcan', 1, 1, 0.4500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* HMMWV_DZ - NATO squad */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (5, 'Weapon', 'L110A1_CCO_DZ', 1, 1, 0.1500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (5, 'Magazine', 'FoodMRE', 2, 3, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (5, 'Magazine', 'ItemBandage', 2, 3, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (5, 'Magazine', 'SmokeShell', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (5, 'Magazine', 'HandGrenade_west', 2, 2, 0.3000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (5, 'Magazine', '200Rnd_556x45_M249', 2, 2, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (5, 'Magazine', 'ItemJerrycan', 1, 1, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (5, 'Backpack', 'DZ_ALICE_Pack_EP1', 1, 1, 0.3500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* BUS Ikarus_TK_CIV_EP1, Ikarus - party bus */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (6, 'Weapon', 'MeleeBaseBallBatBarbed', 1, 1, 0.9500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (6, 'Weapon', 'MeleeBaseBallBatNails', 1, 1, 0.9500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (6, 'Magazine', 'FoodBeefRaw', 2, 4, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (6, 'Magazine', 'ItemSodaPeppsy', 2, 4, 0.9500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (6, 'Magazine', 'TrashJackDaniels', 2, 2, 0.9500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (6, 'Magazine', 'FoodbaconRaw', 2, 4, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (6, 'Magazine', 'ItemTrashToiletpaper', 2, 4, 0.9500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (6, 'Magazine', 'ItemTrashRazor', 1, 1, 0.9500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (6, 'Magazine', 'equip_rag', 2, 4, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (6, 'Magazine', 'ItemCards', 2, 4, 0.9500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* MH6J_DZ, AH6X_DZ - sniper */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (7, 'Weapon', 'FNFAL_ANPVS4_DZ', 1, 1, 0.1000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (7, 'Magazine', '20Rnd_762x51_FNFAL', 4, 4, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (7, 'Magazine', 'ItemJerrycan', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (7, 'Magazine', 'ItemJerrycanEmpty', 1, 1, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (7, 'Backpack', 'DZ_Backpack_EP1', 2, 2, 0.2500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* UAZ_Unarmed_UN_EP1 - medical*/
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Weapon', 'M9_DZ', 1, 1, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Magazine', '15Rnd_9x19_M9', 2, 3, 1.0000000000);

INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Magazine', 'ItemBandage', 2, 5, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Magazine', 'ItemPainkiller', 2, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Magazine', 'ItemMorphine', 2, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Magazine', 'ItemEpinephrine', 2, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Magazine', 'ItemAntibiotic', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Magazine', 'emptyBloodBag', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Magazine', 'bloodBagONEG', 2, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Magazine', 'equip_gauzepackaged', 2, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Magazine', 'equip_gauze', 2, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Magazine', 'bloodTester', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Magazine', 'transfusionKit', 1, 1, 0.5000000000);

INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (8, 'Backpack', 'DZ_Patrol_Pack_EP1', 1, 1, 1.0000000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* UAZ_Unarmed_TK_EP1, UAZ_Unarmed_TK_CIV_EP1, UAZ_RU - eastern weapons */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (9, 'Weapon', 'AK74_DZ', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (9, 'Magazine', 'FoodmuttonCooked', 1, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (9, 'Magazine', 'ItemWaterbottleDmg', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (9, 'Magazine', 'HandGrenade_east', 2, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (9, 'Magazine', '1Rnd_HE_GP25', 1, 2, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (9, 'Magazine', '1Rnd_SMOKE_GP25', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (9, 'Magazine', '30Rnd_545x39_AK', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (9, 'Magazine', 'ItemJerrycan', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (9, 'Backpack', 'DZ_Czech_Vest_Puch', 1, 1, 0.8500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* BAF_Offroad_D, BAF_Offroad_W */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (10, 'Weapon', 'SA58_Holo_DZ', 1, 1, 0.1000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (10, 'Magazine', 'FoodMRE', 1, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (10, 'Magazine', 'PartWheel', 1, 1, 0.3500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (10, 'Magazine', 'HandGrenade_west', 2, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (10, 'Magazine', '30Rnd_762x39_SA58', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (10, 'Magazine', '20Rnd_762x51_DMR', 1, 2, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (10, 'Magazine', 'ItemJerrycanEmpty', 1, 1, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (10, 'Backpack', 'DZ_British_ACU', 1, 1, 0.3500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*  hilux1_civil_3_open(pickup), - hunter  */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (11, 'Weapon', 'CZ550_DZ', 1, 2, 0.4500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (11, 'Weapon', 'ItemKnife', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (11, 'Weapon', 'ItemFishingPole', 1, 1, 0.1500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (11, 'Weapon', 'ItemHatchet', 1, 1, 0.5000000000);

INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (11, 'Magazine', 'equip_brick', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (11, 'Magazine', 'PartWoodPile', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (11, 'Magazine', 'ItemTent', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (11, 'Magazine', 'FoodCanFrankBeans', 1, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (11, 'Magazine', 'FoodCanRusStew', 1, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (11, 'Magazine', '5Rnd_17HMR', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (11, 'Magazine', 'ItemFuelcan', 1, 2, 0.2500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* Pickup_PK_INS,   Offroad_DSHKM_INS[50 cal pickup] */
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (12, 'Weapon', 'M4A1_DZ', 1, 2, 0.1500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (12, 'Magazine', 'HandGrenade_west', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (12, 'Magazine', '30Rnd_556x45_Stanag', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (12, 'Magazine', 'ItemJerrycanEmpty', 1, 1, 0.2500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*  UH1H_DZ,UH1H_2_DZ   */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (13, 'Weapon', 'G36K_Camo_DZ', 1, 1, 0.2000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (13, 'Magazine', '30Rnd_556x45_G36', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (13, 'Magazine', '100Rnd_762x51_M240', 1, 2, 0.1500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (13, 'Magazine', 'FoodMRE', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (13, 'Magazine', 'TrashJackDaniels', 1, 1, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (13, 'Magazine', 'ItemSodaRabbit', 1, 2, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (13, 'Magazine', 'ItemJerrycan', 1, 2, 0.6500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* PLANE AN2_DZ - parts transport */
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (14, 'Weapon', 'PKM_DZ', 1, 2, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (14, 'Magazine', 'PartFueltank', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (14, 'Magazine', 'PartGlass', 1, 2, 0.4000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (14, 'Magazine', 'PartWheel', 1, 2, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (80, 'Magazine', 'PartEngine', 1, 1, 0.0500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (14, 'Magazine', '100Rnd_762x54_PK', 2, 4, 1.0000000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*  AN2_2_DZ - food transport */
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (15, 'Weapon', 'AK74_DZ', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (15, 'Weapon', 'ItemMatchbox', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (15, 'Magazine', '30Rnd_545x39_AK', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (15, 'Magazine', 'FoodgoatRaw', 2, 3, 0.4500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (15, 'Magazine', 'FoodmuttonRaw', 1, 3, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (15, 'Magazine', 'FishRawSeaBass', 2, 3, 0.4500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (15, 'Magazine', 'FishRawTrout', 1, 2, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (15, 'Magazine', 'FoodCanSardines', 1, 1, 0.2500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* Fishing_Boat*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (16, 'Weapon', 'ItemFishingPole', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (16, 'Weapon', 'ItemMachete', 1, 1, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (16, 'Weapon', 'ItemCrowbar', 1, 1, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (16, 'Magazine', 'FishRawSeaBass', 2, 3, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (16, 'Magazine', 'FishRawTrout', 2, 3, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (16, 'Magazine', 'ItemWaterbottleDmg', 1, 1, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (16, 'Magazine', 'equip_duct_tape', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (16, 'Magazine', 'ItemSodaRabbit', 1, 2, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (16, 'Magazine', 'ItemJerrycan', 1, 1, 0.2500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* V3S_Civ - building supplies */
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Weapon', 'ItemShovel', 1, 1, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Weapon', 'ItemPickaxe', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Weapon', 'ItemPickaxeBroken', 1, 1, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Weapon', 'ItemSledgeHammer', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Weapon', 'ItemSledgeHammerBroken', 1, 1, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Weapon', 'ItemCrowbar', 1, 2, 0.9500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Magazine', 'ItemStone', 2, 4, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Magazine', 'ItemLog', 2, 4, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Magazine', 'equip_nails', 2, 4, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Magazine', 'equip_duct_tape', 1, 2, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Magazine', 'equip_2inch_metal_pipe', 1, 2, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Magazine', 'equip_rope', 1, 2, 0.4500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (17, 'Magazine', 'ItemJerrycanEmpty', 1, 2, 0.7500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* UralCivil - random supplies */
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (18, 'Weapon', 'Bizon_DZ', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (18, 'Weapon', 'Makarov_DZ', 1, 2, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (18, 'Magazine', '64Rnd_9x19_Bizon', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (18, 'Magazine', '8Rnd_9x18_Makarov', 2, 4, 1.0000000000);

INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (18, 'Magazine', 'PartEngine', 1, 1, 0.0500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (18, 'Magazine', 'PartGeneric', 1, 2, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (18, 'Magazine', 'FoodCanSardines', 1, 1, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (18, 'Magazine', 'ItemSodaPeppsy', 2, 2, 0.7500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* car_sedan, car_hatchback - kidnapping */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (19, 'Weapon', 'Crossbow_DZ', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (19, 'Magazine', 'equip_duct_tape', 1, 1, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (19, 'Magazine', 'equip_rope', 1, 1, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (19, 'Magazine', 'ItemMorphine', 1, 1, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (19, 'Magazine', 'emptyBloodBag', 1, 1, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (19, 'Magazine', 'bloodBagONEG', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (19, 'Magazine', 'equip_gauzepackaged', 1, 1, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (19, 'Magazine', 'ItemTrashRazor', 1, 1, 0.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (19, 'Magazine', 'equip_rag', 1, 1, 0.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (19, 'Magazine', '1Rnd_Arrow_Wood', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (19, 'Magazine', 'TrashJackDaniels', 1, 1, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (19, 'Magazine', 'ItemSodaRabbit', 2, 2, 0.6500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* Civilian  Skoda, SkodaGreen, SkodaBlue, Volha_1_TK_CIV_EP1, Volha_2_TK_CIV_EP1 - the basics */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (20, 'Weapon', 'LeeEnfield_DZ', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (20, 'Weapon', 'ItemKnife', 1, 1, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (20, 'Weapon', 'ItemMachete', 1, 1, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (20, 'Magazine', 'ItemTrashToiletpaper', 1, 1, 0.8500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (20, 'Magazine', 'ItemSodaRabbit', 6, 6, 0.8500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (20, 'Magazine', 'FoodCanHerpyEmpty', 1, 2, 0.6500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (20, 'Magazine', '10Rnd_303British', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (20, 'Magazine', 'ItemFuelcan', 1, 1, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (20, 'Backpack', 'DZ_Patrol_Pack_EP1', 1, 2, 0.4500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* Civilian SVD ATV_US_EP1 - hunter */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Weapon', 'SVD_DZ', 1, 1, 0.1500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Weapon', 'ItemCompass', 1, 1, 0.7500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Weapon', 'ItemHatchet', 1, 1, 0.8000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Weapon', 'ItemFishingPole', 1, 1, 0.2500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Magazine', 'PartWoodPile', 1, 1, 0.3500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Magazine', 'equip_brick', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Magazine', 'FoodCanFrankBeans', 1, 2, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Magazine', '10Rnd_762x54_SVD', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Magazine', 'ItemTent', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Magazine', 'ItemWaterbottleBoiled', 1, 1, 0.4000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Magazine', 'FoodCanRusStew', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Magazine', 'FoodrabbitCooked', 1, 1, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (21, 'Backpack', 'DZ_Patrol_Pack_EP1', 1, 1, 0.5000000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* Civilian tractor - farmer */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (22, 'Weapon', 'Remington870_DZ', 1, 1, 0.3500000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (22, 'Magazine', 'equip_feathers', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (22, 'Magazine', '8Rnd_12Gauge_Slug', 2, 4, 1.0000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (22, 'Magazine', '2Rnd_12Gauge_Buck', 2, 4, 0.5000000000);
INSERT INTO `vehicle_inventory` (`ID`, `Type`, `Classname`, `MinAmount`, `MaxAmount`, `Chance`) VALUES (22, 'Magazine', 'ItemWire', 1, 2, 0.6500000000);
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!40000 ALTER TABLE `vehicle_inventory` ENABLE KEYS */;
UNLOCK TABLES;
