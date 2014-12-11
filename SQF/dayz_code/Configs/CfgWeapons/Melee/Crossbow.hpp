class Crossbow_DZ : Crossbow {
	displayName=$STR_WPN_NAME_4;
	descriptionShort=$STR_WPN_DESC_4;
	magazines[] ={"Quiver","WoodenArrow"};
	
	scope = public;
	value = 1;
	model = "\dayz_weapons\models\testgun";
	optics = true;
	dexterity = 1.64;
	picture = "\dayz_weapons\textures\equip_crossbow_ca.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	drySound[] = {"Ca\sounds\Weapons\rifles\dry", 0.000316228, 1, 10};
	fireLightDuration = 0;
	fireLightIntensity = 0;
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3", 0.0562341, 1, 20};
	//cursoraim = "\ca\Weapons\Data\m24_crosshair_ca";
	cursoraim = "Foresight";
	class Library {
		libTextDesc = $STR_WPN_DESC_4;
	};
	
	class Single : Mode_SemiAuto {
		dispersion = 0.001;
		soundContinuous = 0;
		reloadTime = 2;
		reloadMagazineSound[] = {"\ca\sounds\weapons\rifles\M1014-reload", 0.316228, 1, 20};
		begin1[] = {"dayz_weapons\sounds\crossbow_fire_0", 0.177828, 1, 15};
		begin2[] = {"dayz_weapons\sounds\crossbow_fire_1", 0.177828, 1, 15};
		soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
		drySound[] = {"ca\sounds\weapons\rifles\dry", 0.01, 1, 10};
		minRange = 0;
		minRangeProbab = 0.5;
		midRange = 60;
		midRangeProbab = 0.2;
		maxRange = 100;
		maxRangeProbab = 0.03;
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_prone_4outof10";
	};
	bullet1[] = {"dayz_weapons\sounds\crossbow_bolt", 0.177828, 1, 15};
	soundBullet[] = {"bullet1", 1};
};