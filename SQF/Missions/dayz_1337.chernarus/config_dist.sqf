//Server settings
dayZ_instance = 1337; //Instance ID of this server
dayZ_serverName = "1337"; //Shown to all players in the bottom left of the screen (country code + server number)

//Game settings
dayz_antihack = 0; // DayZ Antihack / 1 = enabled // 0 = disabled
dayz_antiWallHack = 1; //DayZ AntiWallhack / 1 = enabled // 0 = disabled, Adds items to the map to plug holes.
dayz_REsec = 1; // DayZ RE Security / 1 = enabled // 0 = disabled
dayz_enableRules = true; //Enables a nice little news/rules feed on player login (make sure to keep the lists quick).
dayz_quickSwitch = false; //Turns on forced animation for weapon switch. (hotkeys 1,2,3) False = enable animations, True = disable animations
dayz_POIs = true;
dayz_infectiousWaterholes = true;
dayz_ForcefullmoonNights = false; // Forces night time to be full moon.
dayz_randomMaxFuelAmount = 250; //Puts a random amount of fuel in all fuel stations.

//DayZMod presets
dayz_presets = "Vanilla"; //"Custom","Classic","Vanilla","Elite"

//Only need to edit if you are running a custom server.
if (dayz_presets == "Custom") then {
	dayz_enableGhosting = true; //Enable disable the ghosting system.
	dayz_ghostTimer = 30; //Sets how long in seconds a player must be disconnected before being able to login again.
	dayz_spawnselection = 1; //Turn on spawn selection 0 = random only spawns, 1 = spawn choice based on limits
	dayz_spawncarepkgs_clutterCutter = 2; //0 = loot hidden in grass, 1 = loot lifted, 2 = no grass
	dayz_spawnCrashSite_clutterCutter = 2;	// heli crash options 0 = loot hidden in grass, 1 = loot lifted, 2 = no grass
	dayz_spawnInfectedSite_clutterCutter = 2; // infected base spawn 0 = loot hidden in grass, 1 = loot lifted, 2 = no grass 
	dayz_bleedingeffect = 3; //1 = blood on the ground, 2 = partical effect, 3 = both
	dayz_OpenTarget_TimerTicks = 60 * 10; //how long can a player be freely attacked for after attacking someone unprovoked
	dayz_nutritionValuesSystem = false; //true, Enables nutrition system, false, disables nutrition system.
	dayz_classicBloodBagSystem = false; // removes all blood type bloodbags (not implmented yet)
	dayz_enableFlies = true; // Enable flies on dead bodies (negatively impacts FPS).
};

//Temp settings
dayz_DamageMultiplier = 2; //1 - 0 = Disabled, anything over 1 will multiply damage. Damage Multiplier for Zombies.
dayz_maxGlobalZeds = 500; //Limit the total zeds server wide.
dayz_temperature_override = false; // Set to true to disable all temperature changes.

dayz_ServerMessages = [
	["DayZMod", "Welcome "+(name player)],
	["World", worldName],
	["Teamspeak", "some TS info"],
	["Website/Forums", "some website info"],
	["Server Rules", "Duping, glitching or using any<br />exploit will result in a<br />permanent ban."],
	["Server Rules", "No talking in side."],
	["Server Rules", "Hackers will be banned permanently<br />Respect others"],
	["News", "Some random new info!<br />Random news<br />"]
];