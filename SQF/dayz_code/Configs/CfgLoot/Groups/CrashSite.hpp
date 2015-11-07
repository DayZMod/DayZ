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
	{Loot_WEAPON,		6,		Makarov_DZ},
	{Loot_WEAPON,		6,		Bizon_DZ},
	{Loot_WEAPON,		4,		AKS74U_DZ},
	{Loot_WEAPON,		4,		AK74_DZ},
	{Loot_WEAPON,		4,		AKM_DZ},
	{Loot_WEAPON,		2,		RPK74_DZ},
	{Loot_WEAPON,		1,		PKM_DZ},
	{Loot_WEAPON,		1,		SVD_DZ},
	{Loot_WEAPON,		2,		M40A3_DZ},
	{Loot_WEAPON,		1,		FNFAL_DZ},
	
	//Tools
	{Loot_WEAPON,		3,		ItemCompass},
	{Loot_WEAPON,		6,		Binocular},
	{Loot_WEAPON,		6,		ItemKnife},
	{Loot_WEAPON,		1,		Binocular_Vector},
	{Loot_WEAPON,		0.5,	NVGoggles},
	
	//Backpacks
	
	//Clothing
	{Loot_MAGAZINE,		3,		Skin_Camo1_DZ},
	{Loot_MAGAZINE,		1.5,	Skin_Sniper1_DZ},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalHigh, 5, 15},
	{Loot_CONTAINER,	3,		DZ_AmmoBoxRU, AmmoBoxRU1, 15, 30},		//545x39	AK74, RPK74
	{Loot_CONTAINER,	2.5,	DZ_AmmoBoxRU, AmmoBoxRU2, 10, 20},		//762x39	AK47
	{Loot_CONTAINER,	1.5,	DZ_AmmoBoxRU, AmmoBoxRU3, 5, 10},		//762x54r	SVD, PKM
	
	//Other
	{Loot_MAGAZINE,		1,		FoodMRE},
	{Loot_MAGAZINE,		2,		PartVRotor},
	{Loot_MAGAZINE,		3,		ItemCamonet},
	{Loot_GROUP,		10,		Consumable},
	{Loot_GROUP,		15,		AmmoMilitaryLow},
	{Loot_GROUP,		10,		AmmoMilitaryHigh},
	{Loot_GROUP,		15,		MedicalLow},
	{Loot_GROUP,		8,		AttachmentsEast},
	{Loot_GROUP,		4,		AttachmentsWest}
};

CrashSiteUS[] =
{
	//Weapons
	{Loot_WEAPON,		6,		M9_DZ},
	{Loot_WEAPON,		6,		MP5_DZ},
	{Loot_WEAPON,		4,		M4A1_DZ},
	{Loot_WEAPON,		6,		M16A4_DZ},
	{Loot_WEAPON,		1,		M249_DZ},
	{Loot_WEAPON,		0.7,	Mk48_DZ},
	{Loot_WEAPON,		2,		M14_DZ},
	{Loot_WEAPON,		0.5,	DMR_DZ},
	{Loot_WEAPON,		1,		M24_DZ},
	
	//Tools
	{Loot_WEAPON,		3,		ItemCompass},
	{Loot_WEAPON,		6,		ItemKnife},
	{Loot_WEAPON,		6,		Binocular},
	{Loot_WEAPON,		1,		Binocular_Vector},
	{Loot_WEAPON,		0.5,	NVGoggles},
	
	//Backpacks
	
	//Clothing
	{Loot_MAGAZINE,		3,		Skin_Camo1_DZ},
	{Loot_MAGAZINE,		1.5,	Skin_Sniper1_DZ},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalHigh, 5, 15},
	{Loot_CONTAINER,	3,		DZ_AmmoBoxUS, AmmoBoxUS1, 15, 30},		//556x45	STANAG, M249
	{Loot_CONTAINER,	2,		DZ_AmmoBoxUS, AmmoBoxUS2, 5, 10},		//762x51	DMR, M240
	
	//Other
	{Loot_MAGAZINE,		5,		FoodMRE},
	{Loot_MAGAZINE,		2,		PartVRotor},
	{Loot_MAGAZINE,		3,		ItemCamonet},
	{Loot_GROUP,		15,		AmmoMilitaryLow},
	{Loot_GROUP,		10,		AmmoMilitaryHigh},
	{Loot_GROUP,		15,		MedicalLow},
	{Loot_GROUP,		10,		AttachmentsWest}
};

CrashSiteEU[] =
{
	//Weapons
	{Loot_WEAPON,		6,		G17_DZ},
	{Loot_WEAPON,		6,		MP5_DZ},
	{Loot_WEAPON,		5,		G36C_DZ},
	{Loot_WEAPON,		5,		L85_Holo_DZ},
	{Loot_WEAPON,		2,		G36K_Camo_DZ},
	{Loot_WEAPON,		3,		G36A_Camo_DZ},
	{Loot_WEAPON,		1,		FNFAL_DZ},
	{Loot_WEAPON,		0.5,	FNFAL_ANPVS4_DZ},
	{Loot_WEAPON,		0.7,	M240_DZ},
	{Loot_WEAPON,		1,		L110A1_DZ},
	{Loot_WEAPON,		1,		M24_DZ},
	
	//Tools
	{Loot_WEAPON,		3,		ItemCompass},
	{Loot_WEAPON,		6,		ItemKnife},
	{Loot_WEAPON,		6,		Binocular},
	{Loot_WEAPON,		1,		Binocular_Vector},
	{Loot_WEAPON,		0.5,	NVGoggles},
	
	//Backpacks
	
	//Clothing
	{Loot_MAGAZINE,		3,		Skin_Camo1_DZ},
	{Loot_MAGAZINE,		1.5,	Skin_Sniper1_DZ},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalHigh, 5, 15},
	{Loot_CONTAINER,	3,		DZ_AmmoBoxUS, AmmoBoxEU1, 15, 30},		//556x45	G36, M249
	{Loot_CONTAINER,	2,		DZ_AmmoBoxUS, AmmoBoxEU2, 5, 10},		//762x51	FAL, M240
	
	//Other
	{Loot_MAGAZINE,		4,		FoodMRE},
	{Loot_MAGAZINE,		2,		PartVRotor},
	{Loot_MAGAZINE,		3,		ItemCamonet},
	{Loot_GROUP,		15,		AmmoMilitaryLow},
	{Loot_GROUP,		10,		AmmoMilitaryHigh},
	{Loot_GROUP,		15,		MedicalLow},
	{Loot_GROUP,		10,		AttachmentsWest}
};

CrashSiteUN[] =
{
	//Weapons
	{Loot_WEAPON,		2,		Makarov_DZ},
	{Loot_WEAPON,		2,		M9_DZ},
	{Loot_WEAPON,		2,		G17_DZ},
	{Loot_WEAPON,		2,		Bizon_DZ},
	{Loot_WEAPON,		2,		MP5_DZ},
	{Loot_WEAPON,		3,		AK74_DZ},
	{Loot_WEAPON,		3,		AKS74U_DZ},
	{Loot_WEAPON,		2,		M4A1_DZ},
	{Loot_WEAPON,		3,		M16A4_DZ},
	{Loot_WEAPON,		3,		G36C_DZ},
	{Loot_WEAPON,		2,		L85_Holo_DZ},
	{Loot_WEAPON,		1,		RPK74_DZ},
	
	//Tools
	{Loot_WEAPON,		3,		ItemCompass},
	{Loot_WEAPON,		3,		Binocular},
	{Loot_WEAPON,		3,		ItemKnife},
	{Loot_WEAPON,		3,		ItemMap},
	
	//Containers
	{Loot_CONTAINER,	10,		DZ_MedBox, MedicalHigh, 5, 15}
	{Loot_CONTAINER,	10,		DZ_CardboardBox, Consumable, 10, 20}
	{Loot_CONTAINER,	2,		DZ_AmmoBoxUS, AmmoBoxUS1, 15, 30},		//556x45	STANAG, M249
	{Loot_CONTAINER,	2,		DZ_AmmoBoxRU, AmmoBoxRU1, 15, 30},		//545x39	AK74, RPK74
	
	//Other
	{Loot_MAGAZINE,		1,		FoodMRE},
	{Loot_MAGAZINE,		2,		PartVRotor},
	{Loot_MAGAZINE,		3,		ItemCamonet},
	{Loot_GROUP,		20,		Consumable},
	{Loot_GROUP,		10,		AmmoMilitaryLow},
	{Loot_GROUP,		5,		AmmoMilitaryHigh},
	{Loot_GROUP,		4,		AttachmentsEast},
	{Loot_GROUP,		3,		AttachmentsWest}
};