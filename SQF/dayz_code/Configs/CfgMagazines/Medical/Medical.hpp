class ItemAntibacterialWipe : CA_Magazine {
	scope = public;
	count = 1;
	type = 16;
	displayName = $STR_ITEM_NAME_WIPES;
	model = "\z\addons\dayz_communityassets\models\antiseptic.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_antiseptic_ca.paa";
	descriptionShort = $STR_ITEM_DESC_WIPES;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_MEDICAL_WIPE;
			script = "spawn player_useMeds;";
		};
	};
};

class ItemSepsisBandage : CA_Magazine {
	scope = public;
	count = 1;
	type = 16;
	displayName = $STR_EQUIP_NAME_SEPSISBANDAGE;
	model = "\dayz_equip\models\fad.p3d";
	picture = "\dayz_equip\textures\equip_fad_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_SEPSISBANDAGE;
	
	class ItemActions {
		class Use {
			text = $STR_BANDAGE_SELF;
			script = "spawn player_useMeds;";
		};
	};
};

#include "BloodBags.hpp"