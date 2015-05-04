class M16A4_ACG_GL: M16A4_GL {
	displayname = $STR_EQUIP_NAME_M16A4_M203_ACOG;
	descriptionshort = $STR_EQUIP_DESC_M16A4_M203_ACOG;
	magazines[] = {"30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36", "100Rnd_556x45_BetaCMag"};
	distancezoommax = 100;
	distancezoommin = 100;
	model = "\ca\weapons\m16\m16a4_acg_gl";
	modeloptics = "\ca\weapons\2Dscope_Acog_4x32";
	opticsdisableperipherialvision = 1;
	opticsflare = 1;
	opticsppeffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
	opticszoommax = 0.0623;
	opticszoommin = 0.0623;
	picture = "\CA\weapons\data\Equip\W_m16a4_acg_gl_CA.paa";
	uipicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	class Library {
		libtextdesc = "The M16 assault rifle entered service in 1965 at the onset of the Vietnam War. This weapon uses a small, high velocity round with low recoil and good armor penetration, effective to about 500m. <br/>This one is equipped with ACOG and with M203 40mm grenade launcher.";
	};
};