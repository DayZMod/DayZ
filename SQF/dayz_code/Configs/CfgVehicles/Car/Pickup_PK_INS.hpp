class Pickup_PK_base: Car {
	class UserActions; //Inherit external
	
	class HitPoints;
	class Turrets
	{
		class MainTurret: NewTurret{};
	};
	class AnimationSources;
};

class Pickup_PK_DZ_base : Pickup_PK_base
{
	class HitPoints;
	class Turrets
	{
		class MainTurret: NewTurret{};
	};
	class AnimationSources;
};

class Pickup_PK_INS: Pickup_PK_DZ_base {
	crew = "";
	faction = "INS";
	hiddenselectionstextures[] = {"\ca\wheeled\datsun_armed\data\datsun_trup3_CO.paa"};
	scope = 2;
	side = 0;
	typicalcargo[] = {};
	class Damage {
		mat[] = {"ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\coyota_armed_destruct.rvmat", "ca\weapons\data\dshk.rvmat", "ca\weapons\data\dshk.rvmat", "ca\weapons\data\dshk_destruct.rvmat", "ca\weapons\data\tripod_dshk.rvmat", "ca\weapons\data\tripod_dshk.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\tripod_dshk_destruct.rvmat", "ca\weapons\data\pkm.rvmat", "ca\weapons\data\pkm.rvmat", "ca\weapons\data\pkm_destruct.rvmat", "ca\wheeled\data\detailmapy\datsun_interier.rvmat", "ca\wheeled\data\detailmapy\datsun_interier.rvmat", "ca\wheeled\data\detailmapy\datsun_interier_destruct.rvmat", "ca\wheeled\datsun_armed\data\detailmapy\datsun_trup.rvmat", "ca\wheeled\datsun_armed\data\detailmapy\datsun_trup.rvmat", "ca\wheeled\datsun_armed\data\detailmapy\datsun_trup_destruct.rvmat", "ca\wheeled\datsun_armed\data\detailmapy\datsun_trup_b.rvmat", "ca\wheeled\datsun_armed\data\detailmapy\datsun_trup_b.rvmat", "ca\wheeled\datsun_armed\data\detailmapy\datsun_trupb_destruct.rvmat", "ca\wheeled\data\detailmapy\coyota_kola.rvmat", "ca\wheeled\data\detailmapy\coyota_kola.rvmat", "ca\wheeled\data\detailmapy\coyota_kola_destruct.rvmat", "ca\wheeled\data\detailmapy\coyota_interier.rvmat", "ca\wheeled\data\detailmapy\coyota_interier.rvmat", "ca\wheeled\data\detailmapy\coyota_interier_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
		tex[] = {};
	};
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			outGunnerMayFire = 1;
			forceHideGunner = 1;
			castGunnerShadow = 1;
			viewGunnerInExternal = 1;
			gunnerOpticsModel = "";
			gunnerForceOptics = 0;
			weapons[] = {"PKT"};
			soundServo[] = {};
			stabilizedInAxes = 0;
			magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK"};
			gunnerAction = "datsun_Gunner01";
			gunnerInAction = "datsun_Gunner01";
			ejectDeadGunner = 1;
			minElev = -18;
			maxElev = 40;
			minTurn = -45;
			maxTurn = 45;
			initTurn = 0;
			gunnerCompartments = "Compartment2";
		};
	};
	class UserActions : UserActions
	{
		class RearmVehicle
		{
			displayName = "Add Ammo to PKT";
			displayNameDefault = "Add Ammo to PKT";
			ACTION_REARM;
			/*
				For some reason weaponTurrent isnt reporting this vehicle having a weapon.
			*/
			statement = "[this,'PKT',[0]] execVM ""\z\addons\dayz_code\actions\ammo.sqf"";";
		};
	};
};