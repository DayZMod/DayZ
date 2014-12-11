class m16a4_acg: m16a4 {
	displayname = $STR_EQUIP_NAME_M16A4_ACOG;
	descriptionshort = $STR_EQUIP_DESC_M16A4_ACOG;
	magazines[] = {"30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36", "100Rnd_556x45_BetaCMag"};
	dexterity = 1.51;
	distancezoommax = 100;
	distancezoommin = 100;
	model = "\ca\weapons\m16\m16a4_acg";
	modeloptics = "\ca\weapons\2Dscope_Acog_4x32";
	opticsdisableperipherialvision = 1;
	opticsflare = 1;
	opticsppeffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
	opticszoommax = 0.0623;
	opticszoommin = 0.0623;
	picture = "\CA\weapons\data\Equip\W_m16a4_acg_CA.paa";
	class Library {
		libtextdesc = "The M16 assault rifle entered service in 1965 at the onset of the Vietnam War. This weapon uses a small, high velocity round with low recoil and good armor penetration, effective to about 500m. <br/>This one is equipped with an ACOG.";
	};
};