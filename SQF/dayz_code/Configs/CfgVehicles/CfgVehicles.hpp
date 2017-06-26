#include "CommonActions.hpp"

class CfgVehicles {
	class ALL;
	class AllVehicles : ALL
	{
		class NewTurret;
		class DefaultEventhandlers;
		class EventHandlers: DefaultEventhandlers
		{
			killed = "_this call BIS_Effects_EH_Killed;";
		};
	};
	class Air : AllVehicles
	{
		class NewTurret;
		class ViewPilot;
		class AnimationSources;
	};
	class Helicopter : Air
	{
		class HitPoints;
		class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets;
				class ViewOptics;
            };
        };
		class UserActions
		{
			class Repair {ACTION_REPAIR; radius = 8;};
			class Salvage {ACTION_SALVAGE; radius = 8;};
		};
	};
	class Plane: Air
	{
		class ViewPilot;
		class ViewOptics;
		class AirplaneHUD;
		class HitPoints
		{
			class HitHull;
		};
		class AnimationSources;
		class UserActions
		{
			class Repair {ACTION_REPAIR; radius = 8;};
			class Salvage {ACTION_SALVAGE; radius = 8;};
			class PushPlane {ACTION_PUSH;};
		};
	};
	class Land: AllVehicles
	{
		//class NewTurret;
	};
	class LandVehicle : Land
	{
		class HitPoints;
		class NewTurret;
		class UserActions
		{
			class Repair {ACTION_REPAIR; radius = 4;};
			class Salvage {ACTION_SALVAGE; radius = 4;};
		};
	};
	class Car : LandVehicle {
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;

			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;

			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class Turrets
        {
            class MainTurret: NewTurret
            {
                //class Turrets;
				//class ViewOptics;
            };
        };
	};


	//External Class
	class SkodaBase;
	class ATV_Base_EP1 : Car
	{
		class HitPoints : HitPoints
		{
			class HitEngine {armor=2;material=-1;name="motor";visual="motor";passThrough=0;};
			class HitFuel {armor=1;material=-1;name="palivo";passThrough=0;};

			class HitLFWheel:HitLFWheel{armor=1;};
			class HitLBWheel:HitLBWheel{armor=1;};

			class HitRFWheel:HitRFWheel{armor=1;};
			class HitRBWheel:HitRBWheel{armor=1;};
		};
	};
	class Motorcycle;
	class RubberBoat;
	class UAZ_Unarmed_Base;
	class HMMWV_Base;
	class AH6_Base_EP1;
	class An2_Base_EP1;
	class TT650_Base;
	class V3S_Base;
	class SUV_Base_EP1 : Car
	{
		class HitPoints : HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitFuel;
			class HitEngine;

			//armored glass - hight armor value
			class HitGlass1:HitGlass1 {armor=1;};
			class HitGlass2:HitGlass2 {armor=1;};
			class HitGlass3:HitGlass3 {armor=1;};
			class HitGlass4:HitGlass4 {armor=1;};

		};
	};
	class Ship: AllVehicles
	{
		class UserActions
		{
			class Repair {ACTION_REPAIR; radius = 8;};
			class Salvage {ACTION_SALVAGE; radius = 8;};
		};
	};
	//class Bag_Base_EP1;
	//class Bag_Base_BAF;
	class HouseBase;
	class House : HouseBase
	{
		class DestructionEffects;
	};
	class House_EP1;
	class SpawnableWreck : House {};
	class Strategic;
	class NonStrategic;
	class Thing;
//	class Land_Fire;
	class BuiltItems;
	class Building;
	class ReammoBox;
	
	class Old_bike_base_EP1;
	class Old_moto_base;
	class Ikarus_base;
	class Volha_TK_CIV_Base_EP1;
	class LandRover_CZ_EP1;
	class Ural_Base;
	
	class BAF_Offroad_D:LandRover_CZ_EP1 { typicalcargo[] = {}; };
	class BAF_Offroad_W:BAF_Offroad_D { typicalcargo[] = {}; };
	class SkodaBlue:SkodaBase { typicalcargo[] = {}; };
	class SkodaGreen:SkodaBase { typicalcargo[] = {}; };
	class Volha_1_TK_CIV_EP1:Volha_TK_CIV_Base_EP1 { typicalcargo[] = {}; };
	class Volha_2_TK_CIV_EP1:Volha_TK_CIV_Base_EP1 { typicalcargo[] = {}; };

	#include "Movement.hpp"
	
	#include "RepairParts.hpp" //names for all reapir parts. Needs moving to hitpoints
	//ZEDS
	#include "Zeds\Zeds.hpp" //old type zeds
	#include "Zeds\ViralZeds.hpp" //Viral type zeds
	#include "Zeds\WildZeds.hpp" //Viral type zeds
	#include "Zeds\SwarmZeds.hpp" //Swarm
	//Survivor Skins
	#include "Skins.hpp"
	//Bags
	#include "Bags.hpp"
	//DZAnimal and DZ_Fin
	#include "Animal.hpp"

	//Includes all DayZ Vehilces
	//Car's
	#include "Car\HMMWV.hpp"
	#include "Car\Ikarus.hpp"
	#include "Car\S1203.hpp"
	#include "Car\Tractor.hpp"
	#include "Car\CAR_HATCHBACK.hpp"
	#include "Car\UAZ.hpp"
	#include "Car\CAR_SEDAN.hpp"
	#include "Car\V3S_Civ.hpp"
	#include "Car\SUV_DZ.hpp"
	#include "Car\Pickup_PK_INS.hpp"
	#include "Car\Offroad_DSHKM_INS.hpp"
	#include "Car\UralCivil_DZ.hpp"
	//Helicopter's
	#include "Helicopter\MI17.hpp"
	#include "Helicopter\UH1H.hpp"
	#include "Helicopter\AH6X.hpp"
	#include "Helicopter\MH6J_DZ.hpp"
	#include "CrashSite.hpp"
	//Planes
	#include "Plane\AN2_DZ.hpp"
	//Bikes
	#include "Bikes\ATV_US_EP1.hpp"
	#include "Bikes\ATV_CZ_EP1.hpp"
	#include "Bikes\Old_bike.hpp"
	#include "Bikes\Old_moto.hpp"
	#include "Bikes\TT650_Ins.hpp"
	#include "Bikes\TT650_Civ.hpp"
	#include "Bikes\M1030.hpp"
	//Boat
	#include "Boat\PBX.hpp"
	#include "Boat\Fishing_Boat.hpp"
	#include "Boat\smallboat.hpp"

	//Includes all Building Stuff
	// This parent class is made to make referring to these objects easier later with allMissionObjects
	#include "Buildings\HouseDZ.hpp"
	//Fire
	#include "Buildings\Land_Fire.hpp"
	//Buildings
	#include "Buildings\Land_A_Crane_02b.hpp"
	#include "Buildings\Land_A_FuelStation_Feed.hpp"
	#include "Buildings\Land_A_TVTower_Mid.hpp"
	#include "Buildings\Land_A_TVTower_Top.hpp"
	#include "Buildings\Land_Farm_WTower.hpp"
	#include "Buildings\Land_HouseB_Tenement.hpp"
	#include "Buildings\Land_Ind_MalyKomin.hpp"
	#include "Buildings\Land_komin.hpp"
	#include "Buildings\Land_majak.hpp"
	#include "Buildings\Land_Mil_ControlTower.hpp"
	#include "Buildings\Land_NAV_Lighthouse.hpp"
	#include "Buildings\Land_NavigLight.hpp"
	#include "Buildings\Land_Rail_Semafor.hpp"
	#include "Buildings\Land_Rail_Zavora.hpp"
	#include "Buildings\Land_runway_edgelight.hpp"
	#include "Buildings\Land_Stoplight.hpp"
	#include "Buildings\Land_telek1.hpp"
	#include "Buildings\Land_VASICore.hpp"
	#include "Buildings\Land_Vysilac_FM.hpp"
	#include "Buildings\WaterSources.hpp"

	//camo
	#include "CamoNetting.hpp"
	#include "Hedgehog.hpp"
	#include "Sandbag.hpp"


	//WeaponHolder
	#include "WeaponHolder.hpp"

	//itemBox's
	//#include "CardboardBox.hpp"
	#include "LootContainer.hpp"

	//Tents,storage
	//#include "Storage.hpp"
	
	// Traps 
	#include "Traps.hpp"

	//Antihack
	#include "antihack_logic.hpp"
	#include "antihack_plants.hpp"
	#include "antihack_weaponholders.hpp"
	
	class Land_CncBlock_AntiHack: NonStrategic
	{
		scope=public;
		vehicleClass="Misc";
		//model = \Ca\misc3\CncBlock_D;
		model = "z\addons\dayz_communityassets\models\CncBlock_D.p3d";
		Icon = "\Ca\misc3\Data\Icons\icon_cnc_con_barrier_CA.paa";
		mapSize = 4;
		displayName=$STR_MISC_CNCBLOCK_D;
		armor=150;
	};
	
	class FileSignature_DZ : Logic
	{
		class EventHandlers
		{
			init = "diag_log ('WARNING: Spawning FileSignature_DZ'); if (isServer) then { [] execVM '\z\addons\dayz_server\init\server_setKey.sqf' } else { [] execVM '\z\addons\dayz_code\system\filesign\verify_mission.sqf' }; ";
		};
	};
	
	//Blood Trail
	#include "Buildings\Blood_Trail_DZ.hpp"

	class waterHoleProxy: House {
		model = "z\addons\dayz_communityassets\models\waterHoleProxy.p3d";
	};
	
	//Camps
	#include "InfectedCamps\IC_Fireplace1.hpp"

	class WeaponHolder;
	class Plant_Base: WeaponHolder {
		scope = public;
		icon = "";
		mapSize = 0;
		transportMaxWeapons = 0;
		accuracy = 1000;
		class DestructionEffects{};
		favouritezones = "(meadow) * (forest) * (1 - houses) * (1 - sea)";
		displayName = "$STR_ITEM_NAME_comfrey";
		class eventHandlers {
			init="(_this select 0)setVariable['permaLoot',true];";
		};
		supplyRadius = 1;
	};
	#include "gathered_plants.hpp"
	class Generator_Base: SkodaBase
	{
		model = "\dayz_equip\models\generator_gear.p3d";
		picture = "\dayz_equip\textures\equip_generator_ca.paa";
		displayName="Generator";
	};
	class Generator_DZ: Generator_Base
	{
		scope = 1;
		transportMaxWeapons=0;
		transportmaxbackpacks = 0;
		transportMaxMagazines=10;
		displayName="Generator";
		weapons[] = {};
		magazines[] = {};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		maximumLoad = 200;
		supplyRadius = -1;
		memoryPointSupply = "";
		
		soundengineoffext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-stop-1", 0.398107, 1, 250};
		soundengineonext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-start-1", 0.398107, 1, 250};

		class Turrets {};
			
		class UserActions
		{
			class EngineOn
			{
				displayNameDefault = "Switch On";
				displayName = "Switch On";
				position = "";
				shortcut = "EngineOn";
				radius = 2.7;
				onlyForPlayer = 1;
				condition = "alive this and !isEngineOn this";
				statement = "[this,true] call dayz_engineSwitch";
			};
			class EngineOff: EngineOn
			{
				displayNameDefault = "Switch Off";
				displayName = "Switch Off";
				position = "";
				shortcut = "EngineOn";
				radius = 2.7;
				onlyForPlayer = 1;
				condition = "alive this and isEngineOn this";
				statement = "player action ['engineOff', this];";
			};
		};
	};
};
class CfgNonAIVehicles {
	#include "StreetLamps.hpp"
};
