class CfgMagazines {
	class CA_Magazine;	// External class reference
	//class FoodDrink; //External class reference
	//class FoodEdible; //External class reference
	class TrashTinCan; //External class reference
	class HandGrenade; //External class reference
	
	class Quiver : CA_Magazine {
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
			class CombineMag {
				text = "Combine Quivers";
				script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
			};
		};
	};
	
	class WoodenArrow : CA_Magazine {
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
	
	class ItemPadlock: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemPadlock;//"Padlock"
		picture = "\z\addons\dayz_buildings\equip\padlock.paa";
		model = "z\addons\dayz_buildings\models\padlock.p3d";
		descriptionShort = $STR_BLD_desc_ItemPadlock;//"Padlock - Used for securing Workshop's & Houses."
	};	
	class ItemStone: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemStone;//"Rough Stone"
		picture = "\z\addons\dayz_buildings\equip\rocks.paa";
		model = "z\addons\dayz_buildings\models\rocks.p3d";
		descriptionShort = $STR_BLD_desc_ItemStone;//"Rough Stone"
	};
	class ItemWorkBench : CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemWorkBench;//"Work Bench (Packed)"
		model = "z\addons\dayz_buildings\models\workbench_flat.p3d";
		picture = "\z\addons\dayz_buildings\equip\item_workbench.paa"; // add to PBO
		descriptionShort = $STR_BLD_desc_ItemWorkBench;//"A Folded Workbench, required for House Building and Some Crafting"
		vehicle = "WorkBench";
		sfx = "tentunpack";
		class ItemActions {
			class Build {
				text = $STR_BLD_build_ItemWorkBench;//"place WorkBench"
				script = "; ['ItemWorkBench','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[] = {};
				consume[] = {"ItemWorkBench"};
				create = "WorkBench";
			};
		};
	};	
	
	class ItemLog: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemLog;//"Wooden Log"
		picture = "\z\addons\dayz_buildings\equip\item_log.paa";
		model = "z\addons\dayz_buildings\models\logs.p3d";
		descriptionShort = $STR_BLD_desc_ItemLog;//"Rough Wooden Log"
		class ItemActions
		{
			class Crafting
			{
				text = $STR_BLD_craft_ItemLog;//"Wooden Plank"
				script = "spawn player_craftItem;";
				neednearby[] = {}; 
				requiretools[] = {"ItemHatchet"};
				output[] = {{"ItemPlank","CfgMagazines",2}};
				input[] = {{"ItemLog","CfgMagazines",1}};
			};
		};
	};	

	class ItemPlank: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_BLD_name_ItemPlank;//"Sawn Planks"
		picture = "\z\addons\dayz_buildings\equip\item_plank.paa";
		model = "z\addons\dayz_buildings\models\planks.p3d";
		descriptionShort = $STR_BLD_desc_ItemPlank;//"Saw Planks"
		class ItemActions
		{
			class Crafting
			{
				text = $STR_BLD_craft_ItemPlank;//"Wood Piles"
				script = "spawn player_craftItem;";
				neednearby[] = {}; 
				requiretools[] = {"ItemHatchet"};
				output[] = {{"PartWoodPile","CfgMagazines",2}};
				input[] = {{"ItemPlank","CfgMagazines",1}};
			};
		};
	};

	
	//add here any magazines types you want to be re-combined like shown before
	
	#include "CfgMagazines\CombineMag.hpp"
	#include "CfgMagazines\MeleeSwing.hpp"
	#include "CfgMagazines\TrashTinCan.hpp"
	#include "CfgMagazines\TrashLoot.hpp"
	//Chemlight and Roadflare
	#include "CfgMagazines\HandGrenade.hpp"
	//Skins
	#include "CfgMagazines\Skin.hpp"
	//medical
	#include "CfgMagazines\medical.hpp"
	#include "CfgMagazines\BloodBags.hpp"
	
	//Attachments
	//Old Types, needs removing
	#include "CfgMagazines\Attachments\legacy\Attachment_ACG.hpp"
	#include "CfgMagazines\Attachments\legacy\Attachment_AIM.hpp"
	#include "CfgMagazines\Attachments\legacy\Attachment_Camo.hpp"
	#include "CfgMagazines\Attachments\legacy\Attachment_GL.hpp"
	#include "CfgMagazines\Attachments\legacy\Attachment_Kobra.hpp"
	#include "CfgMagazines\Attachments\legacy\Attachment_Silencer.hpp"
	#include "CfgMagazines\Attachments\legacy\Attachment_SniperScope.hpp"
	//#include "CfgMagazines\Attachments\legacy\Attachment_CrossbowCCO.hpp"
	//New Type
	#include "CfgMagazines\Attachments\Attachment_SCOPED.hpp"
	#include "CfgMagazines\Attachments\Attachment_CCO.hpp"
	#include "CfgMagazines\Attachments\Attachment_FL.hpp"
	#include "CfgMagazines\Attachments\Attachment_BELT.hpp"
	
	
	//crafting
	#include "CfgCrafting\Mats.hpp"
};
