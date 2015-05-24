disableSerialization;

// Enable
// 0=False/off, 1=True/on
dayz_Trash = 1;

//Model Variables
Bandit1_DZ = "Bandit1_DZ";
BanditW1_DZ = "BanditW1_DZ";
Survivor1_DZ = "Survivor1_DZ";
Survivor2_DZ = "Survivor2_DZ";
SurvivorW2_DZ = "SurvivorW2_DZ";
Sniper1_DZ = "Sniper1_DZ";
Camo1_DZ = "Camo1_DZ";
Soldier1_DZ = "Soldier1_DZ";
Rocket_DZ = "Rocket_DZ";

//Rolling Msg system
Message_1 = "";
Message_2 = "";
Message_3 = "";
Message_1_time = 0;
Message_2_time = 0;
Message_3_time = 0;

///Player class's
AllPlayers = ["Survivor_DZ","Survivor1_DZ","SurvivorW2_DZ","Survivor2_DZ","Sniper1_DZ","Soldier1_DZ","Camo1_DZ","BanditW1_DZ","Bandit1_DZ","Survivor3_DZ"];
DayZ_Male = ["Survivor_DZ","Survivor1_DZ","Survivor2_DZ","Survivor3_DZ","Sniper1_DZ","Soldier1_DZ","Camo1_DZ","Bandit1_DZ"];
DayZ_Female = ["SurvivorW2_DZ","BanditW1_DZ"];

//Classnames for specific items
MeleeWeapons = ["MeleeHatchet","MeleeCrowbar","MeleeMachete","MeleeBaseball","MeleeBaseBallBat","MeleeBaseBallBatBarbed","MeleeBaseBallBatNails","MeleeFishingPole"];
MeleeMagazines = ["hatchet_swing","crowbar_swing","Machete_swing","Bat_Swing","BatBarbed_Swing","BatNails_Swing","Fishing_Swing"];
//Fishing Tool
Dayz_fishingItems = ["MeleeFishingPole"];
//Plants
Dayz_plants = ["Dayz_Plant1","Dayz_Plant2","Dayz_Plant3"];
//Attachment array - NOt USED
Dayz_attachment_array = ["Attachment_ACG","Attachment_AIM"];
//DayZ_Tents = ["TentStorage","TentStorage0","TentStorage1","TentStorage2","TentStorage3","TentStorage4","DomeTentStorage","DomeTentStorage0","DomeTentStorage1","DomeTentStorage2","DomeTentStorag3","DomeTentStorage4"]
//DayZ_Stashs = ["StashSmall","StashSmall1","StashSmall2","StashSmall3","StashSmall4","StashMedium","StashMedium1","StashMedium2","StashMedium3", "StashMedium4"]
//DayZ_cutter = ["Wire_cat1","Sandbag1_DZ","Fence_DZ","Generator_DZ","Hedgehog_DZ","CamoNet_DZ"]
//Bags
DayZ_Backpacks = ["DZ_Patrol_Pack_EP1","DZ_Assault_Pack_EP1","DZ_Czech_Vest_Puch","DZ_ALICE_Pack_EP1","DZ_TK_Assault_Pack_EP1","DZ_British_ACU","DZ_CivilBackpack_EP1","DZ_Backpack_EP1"];
//Tools used in gutting
Dayz_Gutting = ["ItemKnife","ItemKnife5","ItemKnife4","ItemKnife3","ItemKnife2","ItemKnife1","ItemKnifeBlunt"];
//Dayz fire starters
Dayz_Ignators = ["ItemMatchbox","Item5Matchbox","Item4Matchbox","Item3Matchbox","Item2Matchbox","Item1Matchbox"];
//Dayz FuelCans
DayZ_fuelCans = ["ItemJerrycan","ItemFuelcan"];
//Dayz Empty FuelCans
DayZ_fuelCansEmpty = ["ItemJerrycanEmpty","ItemFuelcanEmpty"];
//Traps
DayZ_traps = ["Trap_Cans", "TrapTripwireFlare", "TrapBearTrapSmoke", "TrapTripwireGrenade", "TrapTripwireSmoke", "TrapBearTrapFlare"];
//New Zeds
DayZ_ViralZeds = ["z_new_villager2","z_new_villager3","z_new_villager4","z_new_worker2","z_new_worker3","z_new_worker4"];

//placed objects
DayZ_SafeObjects = ["Base_Fire_DZ","WoodenGate_1","WoodenGate_2","WoodenGate_3","WoodenGate_4","Land_Fire_DZ", "TentStorage","TentStorage0","TentStorage1","TentStorage2","TentStorage3","TentStorage4","StashSmall","StashSmall1","StashSmall2","StashSmall3","StashSmall4","StashMedium","StashMedium1","StashMedium2","StashMedium3", "StashMedium4", "Wire_cat1", "Sandbag1_DZ", "Fence_DZ", "Generator_DZ", "Hedgehog_DZ", "BearTrap_DZ", "DomeTentStorage", "DomeTentStorage0", "DomeTentStorage1", "DomeTentStorage2", "DomeTentStorage3", "DomeTentStorage4", "CamoNet_DZ", "Trap_Cans", "TrapTripwireFlare", "TrapBearTrapSmoke", "TrapTripwireGrenade", "TrapTripwireSmoke", "TrapBearTrapFlare"];

//objects with gear menus
DayZ_GearedObjects = ["Car", "Helicopter", "Motorcycle", "Ship", "TentStorage_base", "StashSmall_base", "StashMedium_base" ];

// Resting Animations
DayZ_RestingAnims = ["amovpsitmstpsnonwpstdnon_ground", "amovpsitmstpsnonwpstdnon_smoking", "amovpsitmstpsraswrfldnon_weaponcheck1", "amovpsitmstpsraswrfldnon"];

//Dayz achievements
dayz_playerAchievements = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];

//Cooking
Dayz_meatraw = [
    "FoodSteakRaw",
    "FoodmeatRaw",
    "FoodbeefRaw",
    "FoodmuttonRaw",
    "FoodchickenRaw",
    "FoodrabbitRaw",
    "FoodbaconRaw",
    "FoodgoatRaw",
	"FishRawTrout",
	"FishRawSeaBass",
	"FishRawTuna"
];
Dayz_meatcooked = [
    "FoodSteakCooked",
    "FoodmeatCooked",
    "FoodbeefCooked",
    "FoodmuttonCooked",
    "FoodchickenCooked",
    "FoodrabbitCooked",
    "FoodbaconCooked",
	"FoodgoatCooked",
	"FishCookedTrout",
	"FishCookedSeaBass",
	"FishCookedTuna"
];

//Eating
no_output_food = [
	"FoodMRE",
	"FoodPistachio",
	"FoodNutmix",
	"FoodCandyAnders",
	"FoodCandyLegacys",
	"FoodCandyMintception"
]+Dayz_meatcooked+Dayz_meatraw;

food_with_output=[
    "FoodCanBakedBeans",
    "FoodCanSardines",
    "FoodCanFrankBeans",
    "FoodCanPasta",
	"FoodCanGriff",
	"FoodCanBadguy",
	"FoodCanBoneboy",
	"FoodCanCorn",
	"FoodCanCurgon",
	"FoodCanDemon",
	"FoodCanFraggleos",
	"FoodCanHerpy",
	"FoodCanDerpy",
	"FoodCanOrlok",
	"FoodCanPowell",
	"FoodCanTylers",
	"FoodCanUnlabeled",
	"FoodCanRusUnlabeled",
	"FoodCanRusPork",
	"FoodCanRusPeas",
	"FoodCanRusMilk",
	"FoodCanRusCorn",
	"FoodCanRusStew",
	"FoodChipsSulahoops",
	"FoodChipsMysticales",
	"FoodCanPotatoes",
	"FoodCanBeef"
];

food_output = [
    "FoodCanUnlabeledEmpty",
    "FoodCanUnlabeledEmpty",
    "FoodCanUnlabeledEmpty",
    "FoodCanUnlabeledEmpty",
	"FoodCanGriffEmpty",
	"FoodCanBadguyEmpty",
	"FoodCanBoneboyEmpty",
	"FoodCanCornEmpty",
	"FoodCanCurgonEmpty",
	"FoodCanDemonEmpty",
	"FoodCanFraggleosEmpty",
	"FoodCanHerpyEmpty",
	"FoodCanDerpyEmpty",
	"FoodCanOrlokEmpty",
	"FoodCanPowellEmpty",
	"FoodCanTylersEmpty",
	"FoodCanUnlabeledEmpty",
	"FoodCanRusUnlabeledEmpty",
	"FoodCanRusPorkEmpty",
	"FoodCanRusPeasEmpty",
	"FoodCanRusMilkEmpty",
	"FoodCanRusCornEmpty",
	"FoodCanRusStewEmpty",
	"FoodChipsSulahoopsEmpty",
	"FoodChipsMysticalesEmpty",
	"FoodCanPotatoesEmpty",
	"FoodCanBeefEmpty"
];
//Drinking
no_output_drink = ["ItemWaterbottle", "ItemWaterbottleBoiled", "ItemWaterBottleInfected", "ItemWaterBottleSafe","ItemWaterBottleHerbal"];

drink_with_output = [
    "ItemSoda",  //just to define item for ItemSodaEmpty
	"ItemSodaClays",
	"ItemSodaDrwaste",
	"ItemSodaFranka",
	"ItemSodaGrapeDrink",
	"ItemSodaLemonade",
	"ItemSodaLirik",
	"ItemSodaLvg",
	"ItemSodaMtngreen",
	"ItemSodaMzly",
	"ItemSodaPeppsy",
	"ItemSodaR4z0r",
	"ItemSodaRabbit",
	"ItemSodaRocketFuel",
	"ItemSodaSacrite",
	//"ItemSodaSherbet",
	"ItemSodaSmasht"
];
 
drink_output = [
    "ItemSodaEmpty",
	"ItemSodaClaysEmpty",
	"ItemSodaDrwasteEmpty",
	"ItemSodaFrankaEmpty",
	"ItemSodaGrapeDrinkEmpty",
	"ItemSodaLemonadeEmpty",
	"ItemSodaLirikEmpty",
	"ItemSodaLvgEmpty",
	"ItemSodaMtngreenEmpty",
	"ItemSodaMzlyEmpty",
	"ItemSodaPeppsyEmpty",
	"ItemSodaR4z0rEmpty",
	"ItemSodaRabbitEmpty",
	"ItemSodaRocketFuelEmpty",
	"ItemSodaSacriteEmpty",
	//"ItemSodaSherbetEmpty",
	"ItemSodaSmashtEmpty"
];
boil_tin_cans = [
    "TrashTinCan",
	"FoodCanGriffEmpty",
	"FoodCanBadguyEmpty",
	"FoodCanBoneboyEmpty",
	"FoodCanCornEmpty",
	"FoodCanCurgonEmpty",
	"FoodCanDemonEmpty",
	"FoodCanFraggleosEmpty",
	"FoodCanHerpyEmpty",
	"FoodCanDerpyEmpty",
	"FoodCanOrlokEmpty",
	"FoodCanPowellEmpty",
	"FoodCanTylersEmpty",
	"FoodCanUnlabeledEmpty",
	"FoodCanRusUnlabeledEmpty",
	"FoodCanRusStewEmpty",
	"FoodCanRusPorkEmpty",
	"FoodCanRusPeasEmpty",
	"FoodCanRusMilkEmpty",
	"FoodCanRusCornEmpty",
    "ItemSodaEmpty",
	"ItemSodaClaysEmpty",
	"ItemSodaDrwasteEmpty",
	"ItemSodaFrankaEmpty",
	"ItemSodaGrapeDrinkEmpty",
	"ItemSodaLemonadeEmpty",
	"ItemSodaLirikEmpty",
	"ItemSodaLvgEmpty",
	"ItemSodaMtngreenEmpty",
	"ItemSodaMzlyEmpty",
	"ItemSodaPeppsyEmpty",
	"ItemSodaR4z0rEmpty",
	"ItemSodaRabbitEmpty",
	"ItemSodaRocketFuelEmpty",
	"ItemSodaSacriteEmpty",
	//"ItemSodaSherbetEmpty",
	"ItemSodaSmashtEmpty",
	"FoodCanPotatoesEmpty",
    "FoodCanBeefEmpty"
];

canPickup = false;
pickupInit = false;

//Hunting Variables
dayZ_partClasses = [
	"PartFueltank",
	"PartWheel",
	//"PartGeneric", //No need to add, it is default for everything
	"PartEngine"
];
dayZ_explosiveParts = [
	"palivo",
	"motor"
];
//Survival Variables
SleepFood = 2160; //minutes (48 hours)
SleepWater = 1440; //minutes (24 hours)
SleepTemperatur = 90 / 100;	//Firs Value = Minutes untill Player reaches the coldest Point at night (without other effects! night factor expected to be -1) //TeeChange

//Server Variables
allowConnection = false;
dayz_serverObjectMonitor = [];

//Streaming Variables (player only)
dayz_Locations = [];
dayz_locationsActive = [];

//GUI
Dayz_GUI_R = 0.38; // 0.7 .38
Dayz_GUI_G = 0.63; // -0.63
Dayz_GUI_B = 0.26; // -0.26

//actions blockers
a_player_cooking = false;
a_player_boil = false;
a_player_jerryfilling = false;
a_player_repairing = false;

//Player self-action handles
dayz_resetSelfActions = {
	s_player_equip_carry = -1;
	s_player_dragbody = -1;
	s_player_fire = -1;
	s_player_cook = -1;
	s_player_boil = -1;
	s_player_fireout = -1;
	s_player_butcher = -1;
	s_player_packtent = -1;
	s_player_packtentinfected = -1;
	s_player_fillwater = -1;
	s_player_fillwater2 = -1;
	s_player_fillfuel = -1;
	s_player_grabflare = -1;
	s_player_removeflare = -1;
	s_player_painkiller = -1;
	s_player_studybody = -1;
	s_build_Sandbag1_DZ = -1;
	s_build_Hedgehog_DZ = -1;
	s_build_Wire_cat1 = -1;
	s_player_deleteBuild = -1;
	s_player_flipveh = -1;
	s_player_stats = -1;
	s_player_sleep = -1;
	s_player_fillfuel20 = -1;
	s_player_fillfuel5 = -1;
	s_player_siphonfuel = -1;
	s_player_repair_crtl = -1;
	s_player_fishing = -1;
	s_player_fishing_veh = -1;
	s_player_gather = -1;
	s_player_debugCheck = -1;
	s_player_destorytent = -1;
	s_player_attach_bomb = -1;
	s_player_upgradestroage = -1;
	s_player_Drinkfromhands = -1;
	s_player_lockhouse = -1;
	s_player_unlockhouse = -1;
	s_player_openGate = -1;
	s_player_CloseGate = -1;
	s_player_breakinhouse = -1;
	s_player_setCode = -1;
};
call dayz_resetSelfActions;

dayz_resetUpgradeActions = {
	s_player_disassembly = -1;
	s_player_building = -1;
	s_player_maintenance = -1;
};
call dayz_resetUpgradeActions;

//Engineering variables
s_player_lastTarget = objNull;
s_player_repairActions = [];

//for carry slot since determining mouse pos doesn't work right
mouseOverCarry = false;

//Initialize Medical Variables
force_dropBody = false;
r_interrupt = false;
r_doLoop = false;
r_self = false;
r_self_actions = [];
r_drag_sqf = false;
r_action = false;
r_action_unload = false;
r_player_handler = false;
r_player_unconsciousInProgress = false;
r_player_unconsciousInputDisabled = false;
r_player_dead = false;
r_player_unconscious = false;
r_player_infected = false;
//infection from hits
r_player_Sepsis = [false, 0];
r_player_injured = false;
r_player_inpain = false;
r_player_loaded = false;
r_player_cardiac = false;
r_fracture_legs = false;
r_fracture_arms = false;
r_player_vehicle = player;
r_player_blood = 12000;
//Blood Regen
r_player_bloodregen = 0;
//Blood Gain Per Sec
r_player_bloodgainpersec = 0;
//Blood Loss Per Sec
r_player_bloodlosspersec = 0;
//Blood Per Sec (gain - loss)
r_player_bloodpersec = 0;
//Food Stack
r_player_foodstack = 1;
//player skill
r_player_lowblood = false;
r_player_timeout = 0;
r_player_bloodTotal = r_player_blood;
r_public_blood = r_player_blood;
r_player_bloodDanger = r_player_bloodTotal * 0.2;
r_player_actions = [];
r_handlerCount = 0;
r_action_repair = false;
r_action_targets = [];
r_pitchWhine = false;
r_isBandit = false;
dayz_DisplayGenderSelect = true;
//blood test vars
r_A_watered = false;
r_B_watered = false;
r_D_watered = false;
r_control_watered = false;
r_canClick_resultsCard = false;
r_resultsCard_Clicked = false;
r_water_clicked = false;
r_needleclicked = 0;
r_needleReset = false;
r_control_done = false;
r_antiA_done = false;
r_antiB_done = false;
r_antiD_done = false;
carryClick = false;
dayz_workingInprogress = false;

//INT Nutrition Info
r_player_Nutrition = [0]; //[Calories]
r_player_nutritionMuilpty = 2;

//count actions
r_action_count = 0;

//ammo routine
r_player_actions2 = [];
r_action2 = false;
r_player_lastVehicle = objNull;
r_player_lastSeat = [];
r_player_removeActions2 = {
	if (!isNull r_player_lastVehicle) then {
		{
			r_player_lastVehicle removeAction _x;
		} forEach r_player_actions2;
		r_player_actions2 = [];
		r_action2 = false;
	};
};

USEC_woundHit = [ // limbs hit given by arma engine when fnc_usec_damageHandler is called
	"",
	"body",
	"hands",
	"legs",
	"head_hit"
];
DAYZ_woundHit = [
	[
		"body",
		"hands",
		"legs",
		"head_hit"
	],
	[ 0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,2,2,3]
];
DAYZ_woundHit_ok = [
	[
		"body",
		"hands",
		"legs"
	],
	[0,0,0,0,0,1,1,1,2,2]
];
USEC_MinorWounds = [
	"hands",
	"legs"
];
USEC_woundPoint = [ // translation table USEC_woundHit -> SV suffixes
	["Pelvis","aimpoint"],
	["aimpoint"], //,"RightShoulder","LeftShoulder"
	["lelbow","relbow"],
	["RightFoot","LeftFoot"],
	["neck","pilot"]
];
USEC_typeOfWounds = [ // used by player_sumMedical, should contains all limbs described in USEC_woundPoint. These limbs statuses are saved by server_playerSync in HIVE if they are bleeding (medical select 8)
	"Pelvis",
	"aimpoint",
	"lelbow","relbow",
	"RightFoot","LeftFoot",
	"neck","pilot"
];

//Initialize Zombie Variables
dayz_zombieTargetList = [
	["SoldierWB",50],
	["Air",500],
	["LandVehicle",200]
];
PVDZ_obj_Publish = [];		//used for eventhandler to spawn a mirror of players tent
PVCDZ_obj_HideBody = objNull;

//DayZ settings
dayz_maxAnimals = 5;
dayz_maxPlants = 3;
dayz_animalDistance = 600;
dayz_plantDistance = 600;

dayz_maxMaxModels = 80; // max quantity of Man models (player or Z, dead or alive) around players. Below this limit we can spawn Z // max quantity of loot piles around players. Below this limit we can spawn some loot
dayz_spawnArea = 300; // radius around player where we can spawn loot & Z
dayz_cantseeDist = 150; // distance from which we can spawn a Z in front of any player without ray-tracing and angle checks
dayz_cantseefov = 70; // half player field-of-view. Visible Z won't be spawned in front of any near players
dayz_canDelete = 350; // Z, further than this distance from its "owner", will be deleted

if(isNil "dayz_serversideloot") then {
	dayz_serversideloot = false; //enables server side loot spawning.
};
if(isNil "dayz_POIs") then {
    dayz_POIs = true; //Enable POI's
};
if(isNil "dayz_ForcefullmoonNights") then {
    dayz_ForcefullmoonNights = false; //force full moon nights.
};
if(isNil "dayz_infectiouswaterholes") then {
	dayz_infectiouswaterholes = true; //Enable infected waterholes
};

if(isNil "dayz_quickSwitch") then {
	dayz_quickSwitch = false; //Enable quick weapon switch,
};

if(isNil "dayz_bleedingeffect") then { 
	dayz_bleedingeffect = 3;
};//dayz_bleedingeffect = 3; //1= blood on the ground, 2= partical effect, 3 = both.

if(isNil "dayz_DamageMultiplier") then { 
	dayz_DamageMultiplier = 1;
};

if(isNil "dayz_temperature_override") then { 
	dayz_temperature_override = false;
};

if(isNil "dayz_attackRange") then { 
	dayz_attackRange = 3;
};

if(isNil "dayz_maxGlobalZeds") then {
	dayz_maxGlobalZeds = 1000;
};

//init global arrays for Loot Chances
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\loot_init.sqf";

//start achievements_init
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\achievements_init.sqf";

if(isServer) then {
	dayz_players = [];
	dead_bodyCleanup = [];
	needUpdate_objects = [];
	Server_InfectedCamps = [];
	//dayz_spawnCrashSite_clutterCutter=0; // helicrash spawn... 0: loot hidden in grass, 1: loot lifted, 2: no grass 
	//dayz_spawnInfectedSite_clutterCutter=0; // infected base spawn... 0: loot hidden in grass, 1: loot lifted, 2: no grass 
	dayz_traps = [];
	dayz_traps_active = [];
	dayz_traps_trigger = [];
	//Objects to remove when killed.
	DayZ_removableObjects = ["Wire_cat1", "Sandbag1_DZ", "Hedgehog_DZ", "CamoNet_DZ", "Trap_Cans", "TrapTripwireFlare", "TrapBearTrapSmoke", "TrapTripwireGrenade", "TrapTripwireSmoke", "TrapBearTrapFlare"];
	//[10416.695, 4198.4634],[7982.2563, 1419.8256],[10795.93, 1419.8263],[7966.083, 4088.7463],[9259.7266, 2746.1985],[5200.5234, 3915.3274],[6494.1665, 2572.7798],[5216.6968, 1246.407],[2564.7244, 3915.3296],[3858.3674, 2572.782],[2580.8977, 1246.4092],[13398.995, 4400.5874],[12242.025, 2948.3196],[13551.842, 1832.2257],[14870.512, 3009.5117],[-178.19415, 1062.4478],[1099.2754, 2388.8206],[-194.36755, 3731.3679],[10394.215, 8322.1719],[7959.7759, 5543.5342],[10773.449, 5543.5342],
	dayz_grid =[[7943.6025, 8212.4551],[9237.2461, 6869.9063],[5178.043, 8039.0361],[6471.686, 6696.4883],[5194.2163, 5370.1152],[2542.2439, 8039.0381],[3835.887, 6696.4902],[2558.4172, 5370.1172],[13376.514, 8524.2969],[12219.544, 7072.0273],[13529.361, 5955.9336],[14848.032, 7133.2197],[-200.67474, 5186.1563],[1076.7949, 6512.5283],[-216.84814, 7855.0771],[10293.751, 12197.736],[7859.312, 9419.0996],[10672.988, 9419.0996],[7843.1387, 12088.021],[9136.7822, 10745.474],[5077.5791, 11914.601],[6371.2222, 10572.052],[5093.7524, 9245.6816],[2441.78, 11914.604],[3735.4231, 10572.055],[2457.9534, 9245.6816],[13276.053, 12399.861],[12119.08, 10947.596],[13428.897, 9831.501],[14747.566, 11008.786],[-301.13867, 9061.7207],[976.33112, 10388.096],[-317.31201, 11730.642],[10271.271, 16321.429],[7836.8315, 13542.813],[10650.506, 13542.813],[7820.6582, 16211.718],[9114.3018, 14869.175],[5055.0986, 16038.3],[6348.7417, 14695.758],[5071.272, 13369.392],[2419.2996, 16038.305],[3712.9426, 14695.76],[2435.4729, 13369.392],[13253.568, 16523.553],[12096.6, 15071.295],[13406.416, 13955.209],[14725.089, 15132.486],[-323.61914, 13185.43],[953.85059, 14511.8],[-339.79248, 15854.346]];
	dayz_gridsActive = [];
	dayz_seedloot = [];
	dayz_deseedloot = [];
	dayz_ghostPlayers = [];
	dayz_activePlayers = [];
	dayz_died = [];
};

if(!isDedicated) then {
	//Establish Location Streaming
	_funcGetLocation =
	{
		dayz_Locations = [];
		for "_i" from 0 to ((count _this) - 1) do
		{
			private ["_location","_config","_locHdr","_position","_size","_type"];
			//Get Location Data from config
			_config = (_this select _i);
			_position = getArray (_config >> "position");
			_locHdr = configName _config;
			_size = getNumber (_config >> "size");
			dayz_Locations set [count dayz_Locations, [_position,_locHdr,_size]];
		};
	};
	_cfgLocation = configFile >> "CfgTownGeneratorChernarus";
	_cfgLocation call _funcGetLocation;
	
	_funcGetGrid =
	{
		dayz_GridSystem = [];
		for "_i" from 0 to ((count _this) - 1) do
		{
			private ["_location","_config","_locHdr","_position","_size","_type"];
			_config = (_this select _i);
			_position = getArray (_config >> "position");
			_locHdr = configName _config;
			_size = getNumber (_config >> "size");
			dayz_GridSystem set [count dayz_GridSystem, [_position,_locHdr,_size]];
		};
	};
	_cfggrid = configFile >> "CfgGrid";
	_cfggrid call _funcGetGrid;

	dayz_buildingMonitor = [];	//Buildings to check
	dayz_bodyMonitor = [];
	dayz_flyMonitor = [];		//used for monitor flies
	dayz_zedMonitor = [];
	dayz_buildingBubbleMonitor = [];
	dayz_gridsActive = [];
	
	dayz_baseTypes = getArray (configFile >> "CfgBuildingLoot" >> "Default" >> "zombieClass");

	//temperature variables
	dayz_temperatur = 36;		//TeeChange
	dayz_temperaturnormal = 36;		//TeeChange
	dayz_temperaturmax = 42;		//TeeChange
	dayz_temperaturmin = 27;		//TeeChange

	//player special variables
	dayZ_lastPlayerUpdate = 0;
	dayz_hunger = 0;
	dayz_thirst = 0;
	dayz_nutrition = 0;
	dayz_preloadFinished = true;
	dayz_statusArray = [1,1];
	dayz_disAudial = 0;
	dayz_disVisual = 0;
	dayz_firedCooldown = 0;
	dayz_damageCounter = time;
	dayz_lastSave = time;
	dayz_isSwimming = true;
	dayz_currentDay = 0;
	dayz_hasLight = false;
	dayz_surfaceNoise = 0;
	dayz_surfaceType = "None";
	dayz_noPenalty = [];
	dayz_heavenCooldown = 0;
	deathHandled = false;
	dayz_firstGroup = group player;
	dayz_originalPlayer = player;
	dayz_playerName = "Unknown";
	dayz_sourceBleeding = objNull;
	dayz_clientPreload = false;
	dayz_authed = false;
	dayz_panicCooldown = 0;
	dayz_areaAffect = 3.5;
	dayz_monitorPeriod = 0.6; // number of seconds between each player_zombieCheck calls
	dayz_heartBeat = false;
//Current local
	dayz_spawnZombies = 0;
	dayz_swarmSpawnZombies = 0;
//Max local
	dayz_maxLocalZombies = 15; // max quantity of Z controlled by local gameclient, used by player_spawnCheck. Below this limit we can spawn Z
//Current NearBy
	dayz_CurrentNearByZombies = 0;
//Max NearBy
	dayz_maxNearByZombies = 30; // max quantity of Z controlled by local gameclient, used by player_spawnCheck. Below this limit we can spawn Z
//Current total
	dayz_currentGlobalZombies = 0;
//Max global zeds.
	dayz_maxGlobalZeds = 1000;
//Animals
	dayz_currentGlobalAnimals =	0;
	dayz_maxGlobalAnimals =		50;
//Plnats	
	dayz_currentGlobalPlants = 0;
	dayz_maxGlobalPlants = 500;
//Loot
	r_player_divideinvehicle = 0;
	dayz_currentWeaponHolders = 0;
	dayz_maxMaxWeaponHolders = 80;	
	dayz_inVehicle = false;
	dayzGearSave = false;
	dayz_unsaved = false;
	dayz_scaleLight = 0;
	dayzDebug = false;
	dayzState = -1;
	dayz_onBack = "";
	dayz_onBackActive = false;
	dayz_fishingInprogress = false;
	dayz_siphonFuelInProgress = false;
	dayz_salvageInProgress = false;
	lastSpawned = diag_tickTime;
	lastSepsis = 0;
	//uiNamespace setVariable ['DAYZ_GUI_display',displayNull];
	//if (uiNamespace getVariable ['DZ_displayUI', 0] == 2) then {
	//	dayzDebug = true;
	//};
	dayz_dodge = false;
	Dayz_constructionContext = [];
	Dayz_freefall = [ time, 0, 0.1 ];
};
