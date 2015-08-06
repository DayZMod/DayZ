class ItemEmptyBarrel : CA_Magazine {
	scope = public;
	count = 1;
	type = (256 * 3);	
	model = "z\addons\dayz_buildings\models\barrel_empty.p3d";
	picture = "\dayz_communityassets\pictures\BarrelBlue.paa";
	displayName = "Empty Blue Barrel";//stringtable later
	descriptionShort = "An empty Blue Barrel that can be left to catch rain";//stringtable later
	
	class ItemActions {
		class Build {
			text = $STR_ACTION_BUILD;
			script = "; ['EmptyBarrel','Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {""};
			consume[] = {"ItemEmptyBarrel"};
			create = "EmptyBarrel";
		};
	};
};
