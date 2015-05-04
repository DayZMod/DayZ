class M16A2: M16_base {
	afmax = 0;
	displayname = $STR_EQUIP_NAME_M16A2;
	descriptionshort = $STR_EQUIP_DESC_M16A2;
	dexterity = 1.64;
	drysound[] = {"Ca\sounds\Weapons\rifles\dry", 0.000316228, 1, 10};
	magazines[] = {"30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36", "100Rnd_556x45_BetaCMag"};
	htmax = 480;
	htmin = 1;
	mfact = 1;
	mfmax = 0;
	model = "\ca\weapons_e\m16\M16A2";
	optics = 1;
	picture = "\CA\weapons\data\equip\w_m16_ca.paa";
	reloadmagazinesound[] = {"ca\sounds\weapons\rifles\reload-m16-3", 0.0562341, 1, 20};
	scope = 2;
	tbody = 100;
	uipicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	value = 0;
	class Library {
		libtextdesc = "The M16 assault rifle entered service in 1965 at the onset of the Vietnam War. It answered the army's need to replace the ill-suited M14 with a lightweight rifle capable of effective automatic fire.<br/>The M16 uses a small, high velocity round with low recoil and good armor penetration, effective to about 500m. After numerous improvements and upgrades throughout its lifespan, the M16A2 remains in service today as the army's basic service rifle.";
	};
};