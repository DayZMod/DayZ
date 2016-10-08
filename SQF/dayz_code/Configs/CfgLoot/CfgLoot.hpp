#include "LootDefines.hpp"

class CfgLoot
{
	class Groups
	{
		//Not renamed yet
		#define DZ_BP_VestPouch DZ_Czech_Vest_Puch
		#define DZ_BP_Patrol DZ_Patrol_Pack_EP1
		#define DZ_BP_Assault DZ_Assault_Pack_EP1
		#define DZ_BP_Survival DZ_TK_Assault_Pack_EP1
		#define DZ_BP_Alice DZ_ALICE_Pack_EP1
		#define DZ_BP_British DZ_British_ACU
		#define DZ_BP_Czech DZ_CivilBackpack_EP1
		#define DZ_BP_Coyote DZ_Backpack_EP1

		#define ItemBloodbagAPos bloodBagAPOS
		#define ItemBloodbagANeg bloodBagANEG
		#define ItemBloodbagBPos bloodBagBPOS
		#define ItemBloodbagBNeg bloodBagBNEG
		#define ItemBloodbagABPos bloodBagABPOS
		#define ItemBloodbagABNeg bloodBagABNEG
		#define ItemBloodbagOPos bloodBagOPOS
		#define ItemBloodbagONeg bloodBagONEG
		
		#define ItemBloodTester bloodTester
		#define ItemTransfusionKit transfusionKit
		#define ItemBloodbagEmpty emptyBloodBag
		
		// General groups
		#include "Groups\Ammo.hpp"
		#include "Groups\AmmoBox.hpp"
		#include "Groups\Attachments.hpp"
		#include "Groups\Medical.hpp"
		#include "Groups\Generic.hpp"
		#include "Groups\Trash.hpp"
		#include "Groups\Consumable.hpp"
		#include "Groups\ConsumableItems.hpp"
		#include "Groups\Parts.hpp"
		
		// Points of interest
		#include "Groups\CrashSite.hpp"
		#include "Groups\CarePackage.hpp"
		#include "Groups\InfectedCamp.hpp"
		
		// Buildings
		#include "Groups\Buildings\Boat.hpp"
		#include "Groups\Buildings\Castle.hpp"
		#include "Groups\Buildings\Church.hpp"
		#include "Groups\Buildings\Construction.hpp"
		#include "Groups\Buildings\Farm.hpp"
		#include "Groups\Buildings\Hospital.hpp"
		#include "Groups\Buildings\Hunting.hpp"
		#include "Groups\Buildings\Industrial.hpp"
		#include "Groups\Buildings\Military.hpp"
		#include "Groups\Buildings\Office.hpp"
		//#include "Groups\Buildings\Powerlines.hpp"
		#include "Groups\Buildings\Residential.hpp"
		#include "Groups\Buildings\ResidentialRuins.hpp"
		#include "Groups\Buildings\Supermarket.hpp"
		#include "Groups\Buildings\Toilet.hpp"
		#include "Groups\Buildings\Hangar.hpp"
	
		// Zombies
		#include "Groups\Zombies\Civilian.hpp"
		#include "Groups\Zombies\Hunter.hpp"
		#include "Groups\Zombies\Police.hpp"
		#include "Groups\Zombies\Military.hpp"
		
		#undef DZ_BP_VestPouch
		#undef DZ_BP_Patrol
		#undef DZ_BP_Assault
		#undef DZ_BP_Survival
		#undef DZ_BP_Alice
		#undef DZ_BP_British
		#undef DZ_BP_Czech
		#undef DZ_BP_Coyote

		#undef ItemBloodbagAPos
		#undef ItemBloodbagANeg
		#undef ItemBloodbagBPos
		#undef ItemBloodbagBNeg
		#undef ItemBloodbagABPos
		#undef ItemBloodbagABNeg
		#undef ItemBloodbagOPos
		#undef ItemBloodbagONeg
		
		#undef ItemBloodTester
		#undef ItemTransfusionKit
		#undef ItemBloodbagEmpty
	};
	
	class Buildings
	{
		class Default
		{
			zombieChance = 0.2;
			minRoaming = 0;
			maxRoaming = 2;
			zombieClass[] =
			{
			//	"zZombie_Base",
				"z_hunter",
				"z_teacher",
				"z_suit1",
				"z_suit2",
				"z_worker1",
				"z_worker2",
				"z_worker3",
				"z_villager1",
				"z_villager2",
				"z_villager3"
			};
			
			lootChance = 0;
			lootGroup = "";
			lootPos[] = {};
		};
	
		// Buildings
		#include "Buildings\Residential.hpp"
		#include "Buildings\Boat.hpp"
		#include "Buildings\Castle.hpp"
		#include "Buildings\Church.hpp"
		#include "Buildings\Construction.hpp"
		#include "Buildings\CrashSite.hpp"
		#include "Buildings\Farm.hpp"
		#include "Buildings\Hospital.hpp"
		#include "Buildings\Hunting.hpp"
		#include "Buildings\Industrial.hpp"
		#include "Buildings\InfectedCamp.hpp"
		#include "Buildings\Military.hpp"
		#include "Buildings\Office.hpp"
		//#include "Buildings\Powerlines.hpp"
		#include "Buildings\ResidentialRuins.hpp"
		#include "Buildings\Supermarket.hpp"
		#include "Buildings\Toilet.hpp"
		#include "Buildings\Roaming.hpp"
		#include "Buildings\Misc.hpp"
	};
};