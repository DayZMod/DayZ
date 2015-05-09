class HandRoadFlare : HandGrenade {
		class ItemActions {
			class CombineMag {
				text = $STR_MAG_COMBINE;
				script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
			};
		};
	};
	
	class ChemLightMag : HandGrenade {
		class ItemActions {
			class CombineMag {
				text = $STR_MAG_COMBINE;
				script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
			};
		};
	};
	
	class HandChemBlue : ChemLightMag {
		class ItemActions {
			class CombineMag {
				text = $STR_MAG_COMBINE;
				script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
			};
		};
	};
	
	class HandChemGreen : ChemLightMag {
		class ItemActions {
			class CombineMag {
				text = $STR_MAG_COMBINE;
				script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
			};
		};
	};
	
	class HandChemRed : ChemLightMag {
		class ItemActions {
			class CombineMag {
				text = $STR_MAG_COMBINE;
				script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
			};
		};
	};