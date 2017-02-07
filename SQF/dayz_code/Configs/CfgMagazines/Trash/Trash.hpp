class ItemSodaEmpty : HandGrenade
{
	scope = public;
	
	model = "\dayz_equip\models\soda_coke_e.p3d";
	picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	displayName = $STR_EQUIP_NAME_35;
	descriptionShort = $STR_EQUIP_DESC_35;
	
	ammo = "SodaCan";
	
	class ItemActions
	{
		class Drink
		{
			text = $STR_ACTIONS_DRINK2;
			script = ";[_id] spawn player_fillWater;";
		};
	};
};
	
class TrashTinCan : HandGrenade
{
	scope = public;
	
	model = "\dayz_equip\models\trash_tincan.p3d";
	picture = "\dayz_equip\textures\equip_tincan_ca.paa";
	displayName = $STR_EQUIP_NAME_33;
	descriptionShort = $STR_EQUIP_DESC_33;
	
	ammo = "TinCan";
	
	class ItemActions
	{
		class Drink
		{
			text = $STR_ACTIONS_DRINK2;
			script = ";[_id] spawn player_fillWater;";
		};
	};
};

#include "SodaCan.hpp"
#include "TinCan.hpp"
#include "Misc.hpp"