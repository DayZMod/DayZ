class bloodBagBase : CA_Magazine {
	scope = 1;	
	count = 1;
	type = 256;
};

class bloodBagANEG : bloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_bloodBagANEG;//"Blood Bag: A-"
	model = "z\addons\dayz_communityassets\models\bbag_full_m_A.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_bloodBagANEG;//"A blood bag ready for transfusion kits, type A- that is compatible A-, A+, AB-, AB+ recipients"
};
class bloodBagAPOS : bloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_bloodBagAPOS;//"Blood Bag: A+"
	model = "z\addons\dayz_communityassets\models\bbag_full_p_A.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_bloodBagAPOS;//"A blood bag ready for transfusion kits, type A+ that is compatible A+ and AB+ recipients"
};
class bloodBagBNEG : bloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_bloodBagBNEG;//"Blood Bag: B-"
	model = "z\addons\dayz_communityassets\models\bbag_full_m_B.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_bloodBagBNEG;//"A blood bag ready for transfusion kits, type B- that is compatible B-, B+, AB+, AB- recipients"
};
class bloodBagBPOS : bloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_bloodBagBPOS;//"Blood Bag: B+"
	model = "z\addons\dayz_communityassets\models\bbag_full_p_B.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_bloodBagBPOS;//"A blood bag ready for transfusion kits, type B+ that is compatible B+ and AB+ recipients"
};
class bloodBagABNEG : bloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_bloodBagABNEG;//"Blood Bag: AB-"
	model = "z\addons\dayz_communityassets\models\bbag_full_m_AB.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_bloodBagABNEG;//"A blood bag ready for transfusion kits, type AB- that is compatible AB+ and AB- recipients"
};
class bloodBagABPOS : bloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_bloodBagABPOS;//"Blood Bag: AB+"
	model = "z\addons\dayz_communityassets\models\bbag_full_p_AB.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_bloodBagABPOS;//"A blood bag ready for transfusion kits, type AB+ that is compatible AB+ recipients"
};
class bloodBagONEG : bloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_bloodBagONEG;//"Blood Bag: O-"
	model = "z\addons\dayz_communityassets\models\bbag_full_m_O.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_bloodBagONEG;//"A blood bag ready for transfusion kits, type O- that is compatible with all recipients"
};
class bloodBagOPOS : bloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_bloodBagOPOS;//"Blood Bag: O+"
	model = "z\addons\dayz_communityassets\models\bbag_full_p_O.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_bloodBagOPOS;//"A blood bag ready for transfusion kits, type O+ that is compatible O+, AB+, A+, B+ recipients"
};

class wholeBloodBagBase : bloodBagBase {
	class ItemActions {
		class Use {
			text = $STR_BLD_use;//"Use Blood Bag"
			script = "spawn player_useMeds;";
		};
	};
};
//Whole blood bags -- Can only be obtained by taking blood from another player.
class wholeBloodBagANEG : wholeBloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagANEG;//"Whole Blood: A-"
	model = "z\addons\dayz_communityassets\models\bbag_full_m_A.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_wholeBloodBagANEG;//"Personal blood Bag, type A- that is compatible A- recipients"
};
class wholeBloodBagAPOS : wholeBloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagAPOS;//"Whole Blood: A+"
	model = "z\addons\dayz_communityassets\models\bbag_full_p_A.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_wholeBloodBagAPOS;//"Personal blood Bag, type A+ that is compatible A+ recipients"
};
class wholeBloodBagBNEG : wholeBloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagBNEG;//"Whole Blood: B-"
	model = "z\addons\dayz_communityassets\models\bbag_full_m_B.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_wholeBloodBagBNEG;//"Personal blood Bag, type B- that is compatible B- recipients"
};
class wholeBloodBagBPOS : wholeBloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagBPOS;//"Whole Blood: B+"
	model = "z\addons\dayz_communityassets\models\bbag_full_p_B.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_wholeBloodBagBPOS;//"Personal blood Bag, type B+ that is compatible B+ recipients"
};
class wholeBloodBagABNEG : wholeBloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagABNEG;//"Whole Blood: AB-"
	model = "z\addons\dayz_communityassets\models\bbag_full_m_AB.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_wholeBloodBagABNEG;//"Personal blood Bag, type AB- that is compatible AB- recipients"
};
class wholeBloodBagABPOS : wholeBloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagABPOS;//"Whole Blood: AB+"
	model = "z\addons\dayz_communityassets\models\bbag_full_p_AB.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_wholeBloodBagABPOS;//"Personal blood Bag, type AB+ that is compatible AB+ recipients"
};
class wholeBloodBagONEG : wholeBloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagONEG;//"Whole Blood: O-"
	model = "z\addons\dayz_communityassets\models\bbag_full_m_O.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_wholeBloodBagONEG;//"Personal blood Bag, type O- that is compatible with O- recipients"
};
class wholeBloodBagOPOS : wholeBloodBagBase {
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagOPOS;//"Whole Blood Bag: O+"
	model = "z\addons\dayz_communityassets\models\bbag_full_p_O.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = $STR_BLD_desc_wholeBloodBagOPOS;//"Personal blood Bag, type O+ that is compatible O+ recipients"
};

//MISC tools needed
class bloodTester : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_bloodTester;//"Blood Testing Kit"
	model = "z\addons\dayz_communityassets\models\blood_test.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_blood_test_ca.paa";
	descriptionShort = $STR_BLD_desc_bloodTester;//"Used to determine RH and blood type"
	class ItemActions {
		class Use {
			text = $STR_BLD_use_bloodTester;//"Test Blood"
			script = "spawn player_useMeds;";
		};
	};
};

class transfusionKit : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_transfusionKit;//"Transfusion Kit"
	model = "z\addons\dayz_communityassets\models\blood_transfuse.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bloodbag_transfuse_CA.paa";
	descriptionShort = $STR_BLD_desc_transfusionKit;//"A blood transfusion kit that is required to perform blood transfusions and fill blood bags"
	class ItemActions {
		class Use {
			text = $STR_BLD_use_transfusionKit;//"Fill Blood Bag"
			script = "spawn player_useMeds;";
		};
	};
};

class emptyBloodBag : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_emptyBloodBag;//"Empty Blood Bag"
	model = "z\addons\dayz_communityassets\models\bbag_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_empty_ca.paa";
	descriptionShort = $STR_BLD_desc_emptyBloodBag;//"An empty bag that is yet to be filled with blood"
};
