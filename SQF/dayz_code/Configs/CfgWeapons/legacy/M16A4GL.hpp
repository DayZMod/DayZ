class M16A4_GL: m16a4 {
	displayname = $STR_EQUIP_NAME_M16A4GL;
	descriptionshort = $STR_EQUIP_DESC_M16A4GL;
	magazines[] = {"30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36", "100Rnd_556x45_BetaCMag"};
	dexterity = 1.41;
	handanim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
	model = "\ca\weapons\m16\m16a4_gl";
	muzzles[] = {"this", "M203Muzzle"};
	picture = "\CA\weapons\data\Equip\W_m16a4_gl_CA.paa";
	uipicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	class Library {
		libtextdesc = "The M16 assault rifle entered service in 1965 at the onset of the Vietnam War. This weapon uses a small, high velocity round with low recoil and good armor penetration, effective to about 500m. <br/>This one is equipped with an additional M203 40mm grenade launcher.";
	};
};