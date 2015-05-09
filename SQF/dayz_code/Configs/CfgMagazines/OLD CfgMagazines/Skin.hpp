class SkinBase : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_CLOTHES;
		descriptionShort = $STR_EQUIP_DESC_CLOTHES;
		model = "\dayz_equip\models\cloth_parcel.p3d";
		picture = "\dayz_equip\textures\equip_cloth_parcel_ca.paa";
		Craftoutput = "equip_rag";
		class ItemActions {
			class Use {
				text = $STR_EQUIP_TEXT_CLOTHES;
				script = "spawn player_wearClothes;";
			};
			class tearClothes {
				text = "Tear Clothes";
				script = "spawn player_tearClothes;";
			};
		};
	};
	class Skin_Sniper1_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_GHILLIE;
		descriptionShort = $STR_EQUIP_DESC_GHILLIE;
	};
	
	class Skin_Camo1_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CAMO;
		descriptionShort = $STR_EQUIP_DESC_CAMO;
	};
	
	class Skin_Survivor2_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIV;
		descriptionShort = $STR_EQUIP_DESC_CIV;
	};
	
	class Skin_Soldier1_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_SOLDIER;
		descriptionShort = $STR_EQUIP_DESC_SOLDIER;
	}; 
	/*
	class Skin_RusSoldierHeadset_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_RUSSOLDIERUNIHEADSET;
		descriptionShort = $STR_EQUIP_DESC_RUSSOLDIERUNIHEADSET;
	}; 
	
	class Skin_RusSoldierWoodwarrior_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_RUSSOLDIERWOODS;
		descriptionShort = $STR_EQUIP_DESC_RUSSOLDIERWOODS;
	}; 
	
	class Skin_RusCommander_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_RUSCOMMANDER;
		descriptionShort = $STR_EQUIP_DESC_RUSCOMMANDER;
	}; 
	
	class Skin_RusSoldierLight_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_RUSSOLDIERLIGHT;
		descriptionShort = $STR_EQUIP_DESC_RUSSOLDIERLIGHT;
	}; 
	
	class Skin_HalfGhillie_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_HALFGHILLIE;
		descriptionShort = $STR_EQUIP_DESC_HALFGHILLIE;
	}; 
	
	class Skin_RusSpecOps_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_RUSSPECOPS;
		descriptionShort = $STR_EQUIP_DESC_RUSSPECOPS;
	}; 
	
	class Skin_RusOfficer_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_RUSOFFICER;
		descriptionShort = $STR_EQUIP_DESC_RUSOFFICER;
	}; 
	
	class Skin_RusSoldierWinter_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_RUSWINTER;
		descriptionShort = $STR_EQUIP_DESC_RUSWINTER;
	}; 
	
	class Skin_RusSoldierCasual_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_RUSCASUAL;
		descriptionShort = $STR_EQUIP_DESC_RUSCASUAL;
	}; 
	
	class Skin_JoggingSuit_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_JOGGINGSUIT;
		descriptionShort = $STR_EQUIP_DESC_JOGGINGSUIT;
	}; 
	
	class Skin_CivWorker_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVWORKER;
		descriptionShort = $STR_EQUIP_DESC_CIVWORKER;
	}; 
	
	class Skin_CivLeatherLeisure_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVLEATHERLEISURE;
		descriptionShort = $STR_EQUIP_DESC_CIVLEATHERLEISURE;
	}; 
	
	class Skin_CivLeatherLeisure2_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVLEATHERLEISURE;
		descriptionShort = $STR_EQUIP_DESC_CIVLEATHERLEISURE;
	}; 
	
	class Skin_CivDoctor_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVDOCTOR;
		descriptionShort = $STR_EQUIP_DESC_CIVDOCTOR;
	}; 
	
	class Skin_CivCasualDoctor_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVCASUALDOCTOR;
		descriptionShort = $STR_EQUIP_DESC_CIVCASUALDOCTOR;
	}; 
	
	class Skin_CivPress_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVPRESS;
		descriptionShort = $STR_EQUIP_DESC_CIVPRESS;
	}; 
	
	class Skin_CivCasualCheck_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVCASUALCHECK;
		descriptionShort = $STR_EQUIP_DESC_CIVCASUALCHECK;
	}; 
	
	class Skin_CivSuit_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVSUIT;
		descriptionShort = $STR_EQUIP_DESC_CIVSUIT;
	}; 
	
	class Skin_CivPressLeather_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVPRESSLEATHER;
		descriptionShort = $STR_EQUIP_DESC_CIVPRESSLEATHER;
	}; 
	
	class Skin_CivPilotSuit_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVPILOTSUIT;
		descriptionShort = $STR_EQUIP_DESC_CIVPILOTSUIT;
	}; 
	
	class Skin_CivPoliceUniform_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVPOLICEUNIFORM;
		descriptionShort = $STR_EQUIP_DESC_CIVPOLICEUNIFORM;
	}; 
	
	class Skin_CivPriest_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVPRIEST;
		descriptionShort = $STR_EQUIP_DESC_CIVPRIEST;
	}; 
	
	class Skin_CivLeisureBlue_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVLEISURE;
		descriptionShort = $STR_EQUIP_DESC_CIVLEISURE;
	}; 
	
	class Skin_CivLeisureGrey_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVLEISURE;
		descriptionShort = $STR_EQUIP_DESC_CIVLEISURE;
	}; 
	
	class Skin_CivLeisureBrown_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVLEISURE;
		descriptionShort = $STR_EQUIP_DESC_CIVLEISURE;
	}; 
	
	class Skin_CivRocker1_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVROCKER;
		descriptionShort = $STR_EQUIP_DESC_CIVROCKER;
	}; 
	
	class Skin_CivRocker2_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVROCKER;
		descriptionShort = $STR_EQUIP_DESC_CIVROCKER;
	}; 
	
	class Skin_CivTeacher_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVTEACHER;
		descriptionShort = $STR_EQUIP_DESC_CIVTEACHER;
	}; 
	
	class Skin_CivRusWoodland_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVRUSWOODLAND;
		descriptionShort = $STR_EQUIP_DESC_CIVRUSWOODLAND;
	}; 
	
	class Skin_CivRusWoodland2_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVRUSWOODLAND;
		descriptionShort = $STR_EQUIP_DESC_CIVRUSWOODLAND;
	}; 
	
	class Skin_CivCasualCheck2_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVCASUALCHECK;
		descriptionShort = $STR_EQUIP_DESC_CIVCASUALCHECK;
	}; 
	
	class Skin_CivWorkerOverall_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVWORKEROVERALL;
		descriptionShort = $STR_EQUIP_DESC_CIVWORKEROVERALL;
	}; 
	
	class Skin_CivLeisureVest_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVLEISUREVEST;
		descriptionShort = $STR_EQUIP_DESC_CIVLEISUREVEST;
	}; 
	
	class Skin_CivRedWorkerOverall_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CIVREDWORKEROVERALL;
		descriptionShort = $STR_EQUIP_DESC_CIVREDWORKEROVERALL;
	}; 
	
	class Skin_SoldierWoodwarriorCap_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_SOLDIERWOODWARRIORCAP;
		descriptionShort = $STR_EQUIP_DESC_SOLDIERWOODWARRIORCAP;
	}; 
	
	class Skin_SoldierWoodwarrior_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_SOLDIERWOODWARRIOR;
		descriptionShort = $STR_EQUIP_DESC_SOLDIERWOODWARRIOR;
	}; 
	
	class Skin_SoldierWoodwarriorHat_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_SOLDIERWOODWARRIORHAT;
		descriptionShort = $STR_EQUIP_DESC_SOLDIERWOODWARRIORHAT;
	}; 
	
	class Skin_WoodWarriorIndi_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_WOODWARRIORINDIJONES;
		descriptionShort = $STR_EQUIP_DESC_WOODWARRIORINDIJONES;
	}; 
	
	class Skin_UNOfficer_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_UNOFFICER;
		descriptionShort = $STR_EQUIP_DESC_UNOFFICER;
	}; 
	
	class Skin_CamoFaceCover_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_CAMOFACECOVER;
		descriptionShort = $STR_EQUIP_DESC_CAMOFACECOVER;
	}; 
	
	class Skin_LeasureKevlar_DZ : SkinBase {
		displayName = $STR_EQUIP_NAME_LEASUREKEVLAR;
		descriptionShort = $STR_EQUIP_DESC_LEASUREKEVLAR;
	}; 
	*/
