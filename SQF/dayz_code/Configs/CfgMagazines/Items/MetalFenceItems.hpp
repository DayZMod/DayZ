class ItemMetalSheet: CA_Magazine //Construection,farm,indestrial,castle
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemMetalSheet;//"Corrugated Sheet"
	picture = "\z\addons\dayz_buildings\equip\item_sheetmetal.paa";
	model = "z\addons\dayz_buildings\models\sheet_metal.p3d";
	descriptionShort = $STR_BLD_desc_ItemMetalSheet;//"Metal Sheeting"
};
		
class ItemConcreteBlock: CA_Magazine //Construection,indestrial
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemConcreteBlock;//"Concrete Block"
	picture = "\z\addons\dayz_buildings\equip\concreteblock.paa";
	model = "z\addons\dayz_buildings\models\concreteblock.p3d";
	descriptionShort = $STR_BLD_desc_ItemConcreteBlock;//"Concrete Block"
};
	
class ItemRSJ: CA_Magazine //Construection,farm,indestrial,castle
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemRSJ;//"Steel Beam"
	picture = "\z\addons\dayz_buildings\equip\item_rsj.paa";
	model = "z\addons\dayz_buildings\models\rsj.p3d";
	descriptionShort = $STR_BLD_desc_ItemRSJ;//"Steel RSJ Support Beam"
};

class ItemScrews: CA_Magazine //Construection,farm,indestrial,castle,residential
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Loose Screws";//"Box of screws for metal"
	picture = "\z\addons\dayz_buildings\equip\item_screws.paa";
	model = "z\addons\dayz_buildings\models\screws.p3d";
	descriptionShort = $STR_BLD_desc_ItemScrews;//"Box of screws"
};

class ItemBagScrews: CA_Magazine//Construection,indestrial,supermarket
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemScrews;//"Box of screws for metal"
	picture = "\z\addons\dayz_buildings\equip\item_screws.paa";
	model = "z\addons\dayz_buildings\models\screws.p3d";
	descriptionShort = $STR_BLD_desc_ItemScrews;//"Box of screws"
	
	class ItemActions {
		class Spilt {
			text = "Spilt Box";
			script = "; [_this] call fn_spiltBag;";
		};
	};
	
};

/*
ItemScrews //Construection,farm,indestrial,castle,residential
ItemBagScrews //(LowChance)Construection,(LowChance)indestrial,supermarket
ItemRSJ //Construection,farm,indestrial,castle
ItemConcreteBlock //Construection,indestrial
ItemMetalSheet //Construection,farm,indestrial,castle
*/