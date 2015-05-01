class M16A2GL: M16A2 {
	displayname = $STR_EQUIP_NAME_M16A2GL;
	descriptionshort = $STR_EQUIP_DESC_M16A2GL;
	magazines[] = {"30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36", "100Rnd_556x45_BetaCMag"};
	dexterity = 1.46;
	handanim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
	model = "\ca\weapons_e\m16\M16A2_GL";
	muzzles[] = {"this", "M203Muzzle"};
	picture = "\CA\weapons\data\equip\w_m16m203_ca.paa";
	uipicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	class Library {
		libtextdesc = "The M16 assault rifle entered service in 1965 at the onset of the Vietnam War. It answered the Army's need to replace the ill-suited M14 with a lightweight rifle capable of effective automatic fire.<br/>This version is equipped with an additional M203 40 mm grenade launcher.";
	};
};