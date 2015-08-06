//Vehicle class, loot group
CrashSiteType[] =
{
	{Loot_NONE,			3,		CrashSite_RU, CrashSiteRU},		//Russian Mi-8
	{Loot_NONE,			1,		CrashSite_US, CrashSiteUS},		//American UH-1Y
	{Loot_NONE,			1,		CrashSite_EU, CrashSiteEU},		//European HC3
	{Loot_NONE,			2,		CrashSite_UN, CrashSiteUN}		//United Nations Mi-8
};

CrashSiteRU[] =
{
	//Weapons
	{Loot_WEAPON,		3,		Makarov_DZ},
	{Loot_WEAPON,		3,		Bizon_DZ},
	{Loot_WEAPON,		3,		AKM_DZ},
	{Loot_WEAPON,		3,		RPK74_DZ},
//	{Loot_WEAPON,		3,		PKM_DZ},
	{Loot_WEAPON,		3,		SVD_DZ},
	{Loot_WEAPON,		3,		M40A3_DZ},
	{Loot_WEAPON,		3,		FNFAL_DZ},
	
	//Tools
	{Loot_WEAPON,		3,		ItemCompass},
	{Loot_WEAPON,		3,		Binocular},
	{Loot_WEAPON,		3,		Binocular_Vector},
	{Loot_WEAPON,		3,		NVGoggles},
	
	//Backpacks
	
	//Clothing
	{Loot_MAGAZINE,		3,		Skin_Camo1_DZ},
	{Loot_MAGAZINE,		3,		Skin_Sniper1_DZ},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalHigh, 5, 15},
	{Loot_CONTAINER,	3,		DZ_AmmoBoxRU, AmmoBoxRU1, 15, 30},		//545x39	AK74, RPK74
	{Loot_CONTAINER,	3,		DZ_AmmoBoxRU, AmmoBoxRU2, 10, 20},		//762x39	AK47
	{Loot_CONTAINER,	3,		DZ_AmmoBoxRU, AmmoBoxRU3, 5, 10},		//762x54r	SVD, PKM
	
	//Other
	{Loot_MAGAZINE,		3,		FoodMRE},
	{Loot_MAGAZINE,		3,		PartVRotor},
	{Loot_MAGAZINE,		3,		ItemCamonet},
	{Loot_GROUP,		3,		AmmoMilitaryLow},
	{Loot_GROUP,		3,		AmmoMilitaryHigh},
	{Loot_GROUP,		3,		MedicalLow},
	{Loot_GROUP,		3,		AttachmentsEast}
};

CrashSiteUS[] =
{
	//Weapons
	{Loot_WEAPON,		3,		M9_DZ},
	{Loot_WEAPON,		3,		MP5_DZ},
	{Loot_WEAPON,		3,		M4A1_DZ},
	{Loot_WEAPON,		3,		M16A4_DZ},
	{Loot_WEAPON,		3,		M249_DZ},
	{Loot_WEAPON,		3,		M240_DZ},
	{Loot_WEAPON,		3,		M14_DZ},
	{Loot_WEAPON,		3,		DMR_DZ},
	{Loot_WEAPON,		3,		M24_DZ},
	
	//Tools
	{Loot_WEAPON,		3,		ItemCompass},
	{Loot_WEAPON,		3,		Binocular},
	{Loot_WEAPON,		3,		Binocular_Vector},
	{Loot_WEAPON,		3,		NVGoggles},
	
	//Backpacks
	
	//Clothing
	{Loot_MAGAZINE,		3,		Skin_Camo1_DZ},
	{Loot_MAGAZINE,		3,		Skin_Sniper1_DZ},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalHigh, 5, 15},
	{Loot_CONTAINER,	3,		DZ_AmmoBoxUS, AmmoBoxUS1, 15, 30},		//556x45	STANAG, M249
	{Loot_CONTAINER,	3,		DZ_AmmoBoxUS, AmmoBoxUS2, 5, 10},		//762x51	DMR, M240
	
	//Other
	{Loot_MAGAZINE,		3,		FoodMRE},
//	{Loot_MAGAZINE,		3,		PartVRotor},
	{Loot_MAGAZINE,		3,		ItemCamonet},
	{Loot_GROUP,		3,		AmmoMilitaryLow},
	{Loot_GROUP,		3,		AmmoMilitaryHigh},
	{Loot_GROUP,		3,		MedicalLow},
	{Loot_GROUP,		3,		AttachmentsWest}
};

CrashSiteEU[] =
{
	//Weapons
	{Loot_WEAPON,		3,		G17_DZ},
	{Loot_WEAPON,		3,		MP5_DZ},
	{Loot_WEAPON,		3,		G36C_DZ},
	{Loot_WEAPON,		3,		L85_Holo_DZ},
	{Loot_WEAPON,		3,		G36K_Camo_DZ},
	{Loot_WEAPON,		3,		G36A_Camo_DZ},
	{Loot_WEAPON,		3,		FNFAL_DZ},
	{Loot_WEAPON,		3,		FNFAL_ANPVS4_DZ},
	{Loot_WEAPON,		3,		Mk48_DZ},
	
	//Tools
	{Loot_WEAPON,		3,		ItemCompass},
	{Loot_WEAPON,		3,		Binocular},
	{Loot_WEAPON,		3,		Binocular_Vector},
	{Loot_WEAPON,		3,		NVGoggles},
	
	//Backpacks
	
	//Clothing
	{Loot_MAGAZINE,		3,		Skin_Camo1_DZ},
	{Loot_MAGAZINE,		3,		Skin_Sniper1_DZ},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalHigh, 5, 15},
	{Loot_CONTAINER,	3,		DZ_AmmoBoxUS, AmmoBoxEU1, 15, 30},		//556x45	G36, M249
	{Loot_CONTAINER,	3,		DZ_AmmoBoxUS, AmmoBoxEU2, 5, 10},		//762x51	FAL, M240
	
	//Other
	{Loot_MAGAZINE,		3,		FoodMRE},
//	{Loot_MAGAZINE,		3,		PartVRotor},
	{Loot_MAGAZINE,		3,		ItemCamonet},
	{Loot_GROUP,		3,		AmmoMilitaryLow},
	{Loot_GROUP,		3,		AmmoMilitaryHigh},
	{Loot_GROUP,		3,		MedicalLow},
	{Loot_GROUP,		3,		AttachmentsWest}
};

CrashSiteUN[] =
{
	//Weapons
	{Loot_WEAPON,		3,		AK74_DZ},
	{Loot_WEAPON,		3,		AKS74U_DZ},
	{Loot_WEAPON,		3,		M4A1_DZ},
	{Loot_WEAPON,		3,		M16A4_DZ},
	{Loot_WEAPON,		3,		G36C_DZ},
	{Loot_WEAPON,		3,		L85_Holo_DZ},
	
	//Tools
	{Loot_WEAPON,		3,		ItemCompass},
	{Loot_WEAPON,		3,		Binocular},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalHigh, 5, 15}
};