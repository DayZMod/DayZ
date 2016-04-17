class UralCivil;

//Covered
class DZ_Ural_Civ1 : UralCivil
{
	crew = "";
	side = TCivilian;
	typicalCargo[] = {};
	
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 10;
	
	model = "\ca\wheeled_E\Ural\ural.p3d";
	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] =
	{
		"\ca\wheeled\data\ural_kabina_civ1_co.paa",
		"\ca\wheeled\data\ural_plachta_civ1_co.paa"
	};
	
	class Damage
	{
		tex[] = {};
		mat[] =
		{
			"Ca\wheeled_E\Ural\Data\ural_kabina.rvmat",
			"Ca\wheeled_E\Ural\Data\ural_kabina_damage.rvmat",
			"Ca\wheeled_E\Ural\Data\ural_kabina_destruct.rvmat",

			"Ca\wheeled_E\Ural\Data\ural_plachta.rvmat",
			"Ca\wheeled_E\Ural\Data\ural_plachta_damage.rvmat",
			"Ca\wheeled_E\Ural\Data\ural_plachta_destruct.rvmat",

			"Ca\wheeled_E\Ural\Data\ural_interier.rvmat",
			"Ca\wheeled_E\Ural\Data\ural_interier_damage.rvmat",
			"Ca\wheeled_E\Ural\Data\ural_interier_destruct.rvmat",

			"Ca\wheeled_E\Data\auta_skla_in.rvmat",
			"Ca\wheeled_E\Data\auta_skla_in_damage.rvmat",
			"Ca\wheeled_E\Data\auta_skla_in_damage.rvmat",

			"Ca\wheeled_E\Data\auta_skla.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat",

			"Ca\Ca_E\data\default.rvmat",
			"Ca\Ca_E\data\default.rvmat",
			"Ca\Ca_E\data\default_destruct.rvmat"
		};
	};
};

//Open
class DZ_Ural_Civ2 : DZ_Ural_Civ1
{
	model = "\ca\wheeled_E\Ural\Ural_Open.p3d";
	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] =
	{
		"\ca\wheeled\data\ural_kabina_civ2_co.paa",
		"\ca\wheeled\data\ural_korba_civ2_co.paa"
	};
	
	class Damage
	{
		tex[] = {};
		mat[] =
		{
			"Ca\wheeled_E\Ural\Data\ural_kabina.rvmat",
			"Ca\wheeled_E\Ural\Data\ural_kabina_damage.rvmat",
			"Ca\wheeled_E\Ural\Data\ural_kabina_destruct.rvmat",

			"Ca\wheeled_E\Ural\Data\ural_open.rvmat",
			"Ca\wheeled_E\Ural\Data\ural_open_damage.rvmat",
			"Ca\wheeled_E\Ural\Data\ural_open_destruct.rvmat",

			"Ca\wheeled_E\Ural\Data\ural_interier.rvmat",
			"Ca\wheeled_E\Ural\Data\ural_interier_damage.rvmat",
			"Ca\wheeled_E\Ural\Data\ural_interier_destruct.rvmat",

			"Ca\wheeled_E\Data\auta_skla_in.rvmat",
			"Ca\wheeled_E\Data\auta_skla_in_damage.rvmat",
			"Ca\wheeled_E\Data\auta_skla_in_damage.rvmat",

			"Ca\wheeled_E\Data\auta_skla.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat",

			"Ca\Ca_E\data\default.rvmat",
			"Ca\Ca_E\data\default.rvmat",
			"Ca\Ca_E\data\default_destruct.rvmat"
		};
	};
};

//Open
class DZ_Ural_Mil : DZ_Ural_Civ2
{
	hiddenSelectionsTextures[] =
	{
		"\ca\wheeled\data\ural_kabina_khk_co.paa",
		"\ca\wheeled\data\ural_korba_khk_co.paa"
	};
};

//Covered
class DZ_Ural_UN : DZ_Ural_Civ1
{
	hiddenSelectionsTextures[] =
	{
		"\ca\wheeled_e\ural\data\ural_kabina_un_co.paa",
		"\ca\wheeled_e\ural\data\ural_plachta_un_co.paa"
	};
};