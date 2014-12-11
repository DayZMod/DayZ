class SVD_CAMO_DZ: SVD_CAMO {
	model = "\ca\weapons\SVD_CAMO";
	dexterity = 1.57;
	picture = "\CA\weapons\data\equip\W_SVD_camo_CA.paa";
	class Single_Sniper	{
		displayName = "$STR_DN_MODE_SEMIAUTO";
		multiplier = 1;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		burst = 1;
		dispersion = 0.00045;
		begin1[] = {"ca\sounds\weapons\rifles\sniper_single_05",1.7782794,1,1000};
		soundBegin[] = {"begin1",1}; //EMPTY
		soundEnd[] = {}; //EMPTY
		soundLoop[] = {}; //EMPTY
		soundContinuous = 0;
		soundBurst = 1;
		reloadTime = 0.6;
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_prone_4outof10";
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		flash = "gunfire";
		flashSize = 0.1;
		autoFire = 0;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 800;
		maxRangeProbab = 0.05;
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 800;
	};
	modes[] = {"Single_Sniper"};
};
