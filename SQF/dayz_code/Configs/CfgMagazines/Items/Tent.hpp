class ItemTent : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem * 3;
	
	model = "\dayz_equip\models\tentbag_gear.p3d";
	picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
	displayName = $STR_EQUIP_NAME_20;
	descriptionShort = $STR_EQUIP_DESC_20;
	class ItemActions
	{
		class Build
		{
			text = $STR_PITCH_TENT;
			script = "; [_id,'Build'] spawn player_build;";
			require[] = {};
			consume[] = {"ItemTent"};
			create = "TentStorage";
			ghost = "TentStorage_Ghost";
			//Bypass collision test
			bypassCollision = "true";
		};
	};
};

class ItemDomeTent : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem * 3;
	
	model = "\dayz_equip\models\tentbag_gear.p3d";
	picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
	displayName = $STR_VEH_NAME_DOME_TENT;
	descriptionShort = $STR_EQUIP_DESC_20;

	class ItemActions
	{
		class Build
		{
			text = $STR_PITCH_DOME_TENT;
			script = "; [_id,'Build'] spawn player_build;";
			require[] = {};
			consume[] = {"ItemDomeTent"};
			create = "DomeTentStorage";
			ghost = "DomeTentStorage_Ghost";
			//Bypass collision test
			bypassCollision = "true";
		};
	};
};