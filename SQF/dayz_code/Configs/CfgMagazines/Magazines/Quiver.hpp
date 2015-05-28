class WoodenArrow : CA_Magazine
{
	scope = public;
	displayName = $STR_ITEMWOODENARROW_CODE_NAME;
	model = "\dayz_weapons\models\bolt_gear";
	picture = "\z\addons\dayz_communityassets\pictures\equip_warrow_ca.paa";
	ammo = "WoodenArrow";
	count = 1;
	initSpeed = 150;
	descriptionShort = $STR_ITEMWOODENARROW_CODE_DESC;
	
	class ItemActions {
		class CreateQuiver {
			text = $STR_ACTION_CREATEQUIVER;
			script = "spawn player_createquiver;";
		};
	};
};

class Quiver : CA_Magazine
{
	scope = public;
	ammo = "WoodenArrow";
	count = 12;
	type = 256 * 2;
	descriptionShort = $STR_ITEMQUIVER_CODE_DESC;
	displayName = $STR_ITEMQUIVER_CODE_NAME;
	initSpeed = 150;
	model = "\z\addons\dayz_communityassets\models\quiver";
	picture = "\z\addons\dayz_communityassets\pictures\equip_quiver_ca.paa";
	
	class ItemActions {
	/*
		class TakeArrow {
			text = $STR_ACTION_TAKEARROW;
			script = "spawn player_takearrow;";
		};
	*/	
		class FillQuiver {
			text = $STR_ACTION_FILLQUIVER;
			script = "spawn player_fillquiver;";
		};
		
		COMBINE_MAG
	};
};