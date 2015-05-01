class Offroad_DSHKM_base : Car {
	class Turrets
	{
		class MainTurret: NewTurret
		{
			class Turrets;
			class ViewOptics;
		};
	};
};

class Offroad_DSHKM_INS: Offroad_DSHKM_base {
	crew = "";
	displayname = "Off-road (DShKM)";
	faction = "INS";
	hiddenselectionstextures[] = {"\ca\wheeled\hilux_armed\data\coyota_trup1_CO.paa"};
	scope = 2;
	side = 0;
	typicalcargo[] = {};
	class Damage {
		mat[] = {"ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\coyota_armed_destruct.rvmat", "ca\weapons\data\dshk.rvmat", "ca\weapons\data\dshk.rvmat", "ca\weapons\data\dshk_destruct.rvmat", "ca\weapons\data\tripod_dshk.rvmat", "ca\weapons\data\tripod_dshk.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\tripod_dshk_destruct.rvmat", "ca\weapons\data\pkm.rvmat", "ca\weapons\data\pkm.rvmat", "ca\weapons\data\pkm_destruct.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3_destruct.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\drziaky.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\drziaky.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\drziaky_destruct.rvmat", "ca\wheeled\data\detailmapy\coyota_kola.rvmat", "ca\wheeled\data\detailmapy\coyota_kola.rvmat", "ca\wheeled\data\detailmapy\coyota_kola_destruct.rvmat", "ca\wheeled\data\detailmapy\coyota_interier.rvmat", "ca\wheeled\data\detailmapy\coyota_interier.rvmat", "ca\wheeled\data\detailmapy\coyota_interier_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
		tex[] = {};
	};
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {"50Rnd_127x107_DSHKM", "50Rnd_127x107_DSHKM"};
		};
	};
};