============
DayZ Mod Changelog
============

Version 1.7.7
---------------

* Releasedate 10 June 2013


Affected addons:
* dayz_anim
* dayz_code 
* dayz_communityassets
* dayz_sfx

Serverside affected addons:
* dayz_server (server admins only)
* Mission (server admins only) (Prerequisites) Downloaded from http://www.silentspy.net/utility/dayz/mission-generator/
* SQL Files (server admins only)
* BattlEye-Filters (server admins only)

		
	Changes:
	
	    * [NEW] - Removed annoying "re-arm" option from actions menu.
	    * [NEW] - Models and textures for mutton.
	    * [NEW] - Separate meat for goats, same blood regen as mutton.
	    * [NEW] - Can now combine magazines.
	    * [NEW] - Added new loot & loot table for church.
	    * [NEW] - Added new food and drink items (only found in supermarkets).
	    * [NEW] - Added model for a dropped map and watch.
	    * [NEW] - Weapon MakarovSD (Military and Military Special).
	    * [NEW] - Weapon RPK_74 (Mi8 Helicrash).
	    * [NEW] - Vehicle damage displayed in percent (With a Toolbox).
	    * [NEW] - 5L Fuel can takes 1 inv slot.
	    * [NEW] - Added auth retry system to make sure clients are auth'ed before they spawn (should stop seagull issue).
	    * [NEW] - Added force end mission for players joining with wrong version/failed auth. (Will replace timeout later).
	    * [NEW] - Mi8 crash site model.
	    * [NEW] - 2 New background tracks.
	    * [NEW] - 6 New "Viral" zeds - They are harder to kill, they do more damage, and they have a higher chance of causing an infection... be afraid. (Headshot will kill in one shot)
	    * [NEW] - Added optional watermark for servername (Server admins can choose to enable/disable. (See Mission prerequisites)). Shows servername in the bottom right of screen max 6 letters.
	    * [NEW] - Remote exec security. Should prevent all major RE exploits
	    * [NEW] - Clear Ground around loot at crash sites added but disabled by default, server admins can enable. Adds a small circle around each loot pile
	    * [NEW] - Vehicles and tents now report free gear slots. Example: Old Camping Tent (weapons/others/backpacks). http://ziellos2k.net/images/20130417141327522.png
	    * [NEW] - Weapons spawns now have a chance to spawn with 0 mags up to a max of 2.
	    * [NEW] - Melee weapons can now be dropped and picked up using the normal a2 system. (This means you can now store in backpack and tents, without swapping to toolbelt) No need to take itemslots.
	    * [NEW] - New starting gear added. Guaranteed Start Items: ("ItemBandage","HandRoadFlare") + 1 RandomStartItem: ("ItemBandage","ItemPainkiller").
	    * [NEW] - Servers date has been locked to give full moon nights.
	    * [NEW] - Zeds hitting through Walls/Buildings should now be fixed.
	    * [NEW] - Mainmenu Intro.
	    * [NEW] - Loadingscreen (Small changes).
	    * [NEW] - 2 new stash sites. (tools required = Etool or Shovel. Items required = 1 sandbog for small, 2 sandbags for medium)
			    Small Stash = 12 object slots, 0 Weapon, 0 bags.
			    Medium Stash = 25 object slots, 1 Weapon, 0 bags.
	    * [NEW] - Infected survivor camps. Three types (small).
	    * [NEW] - FPS Monitor this will dynamicly change how/total amount of zeds/loot/trash is spawning to keep the players base fps up.
	    * [NEW] - 1 New Melee weapon.(BaseBallBat)
	    * [NEW] - Wild Spawning of zeds has been redone and readded.
	    * [NEW] - Zed Spawning fully updated to spawn outside the players field of view. (Excludes Infected camps, due to trigger zones being tested).
	    * [NEW] - Zeds can now tackle players to the ground when attacked.
	    * [NEW] - Epeen UI has now been updated and renamed journal. 
	    * [NEW] - All blood gained from food is now added into a regenreation pool that players will regenerate over time
	    * [NEW] - All food types now have a diminishing effect so the more you try and eat at once, the less blood you will get in return.
	    * [NEW] - Blood UI updated to indicate the player's blood loss / gain rate and will also indicate when you're sick (infected).
	    * [NEW] - Bloodbags will no longer transfer 12000 blood instantly, it's now done over 12 seconds (1000 blood per second). If the medic breaks away from the transfusion animation or the recipient moves out of range, the transfer stops and the remaining amount is lost along with the bloodbag in use.
	
	    * [FIXED] - Vehicle repair should now work correctly.
	    * [FIXED] - Humanity skin change can now change during gameplay in all directions. (No longer have to die/logout to change from hero to normal to bandit and vice versa)
	    * [FIXED] - StudyBody should now work. (Describing wounds accurately)
	    * [FIXED] - Crashsite loot should now spawn correctly for all types of Crash models.
	    * [FIXED] - Hero Skin teleport issue.
	    * [FIXED] - BAF Bags so they don't set on fire. :-) (no moaning it was a bug)
	    * [FIXED] - Updated timeout timer from 40 secs to 3000 secs, Should allow lower end systems to keep up. (Something went wrong, please disconnect and try again!)
	    * [FIXED] - Zeds spawning underground.
	    * [FIXED] - Loot spawning underground.
	    * [FIXED] - Melee weapons having no ammo on login/skin change. (Open close gear menu will always reset ammo count to 10000)
	    * [FIXED] - Loot Spawns have now been fully resolved. Buildings are now tagged and will not spawn any new loot for 15 minutes.
	    * [FIXED] - Loot Cleanup has now been fully resolved. Old loot piles will now be cleaned every 60 minutes and no players within 250 meters(WIP). (Server performance boost)
	    * [FIXED] - Gear menu exploit to force respawn.
	    * [FIXED] - Optimized some destruction effects for security and performance.
	    * [FIXED] - Unconscious damage scale to only happen if hit by zeds. (reduces damage while unconscious)
	    * [FIXED] - Dayz Date/Time public var will now end mission on failed attempt.
	    * [FIXED] - Can no longer break legs by anything other than players/zeds/falling/getting out of moving vehicle.
	    * [FIXED] - A lot of duping issues should now be resolved.
	    * [FIXED] - Most wallhack exploits should now be resolved.
	    * [FIXED] - No more 3x get up Animation loop when recovering from unconscious
	    * [FIXED] - You can no longer get into vehicles while dragging players
	    * [FIXED] - Peripheral Vision. (Peripheral Dots)
		
	    * [UPDATED] - Zed sight limited to 100 meters.
	    * [UPDATED] - Updated rabbit to drop 2 raw food items. Lowered hp gain to Raw - 200 each / Cooked - 1000 each.
	    * [UPDATED] - Updated chicken - hp gain. Raw - 200 each / Cooked - 1000 each.
	    * [UPDATED] - Moved anti teleport system to mission. Server admins can choose to enable/disable. (See prerequisites)
	    * [UPDATED] - ALL loot table weights have been updated.
	    * [UPDATED] - ALL loot table weights have been rebalanced.
	    * [UPDATED] - Updated Czech, German, Spanish, French and Russian stringtable.
	    * [UPDATED] - Makarov and 1911 Pistol dmg updated.
	    * [UPDATED] - CrashSite Loot should now represent each type of model more. (("MilitaryWEST","HeliCrashWEST") Two new crash site loot tables)
	    * [UPDATED] - Re-added the "save" option to tents and vehicles. This is a fail-safe option, not required. (Due to a small amount of servers reporting issues with tents saving. With no info for us to recreate we re-added this option to save tents/vehicles) 
	    * [UPDATED] - Zed generate system. has now been fully rewrote should stop zeds spawning in view of players then being deleted.
	    * [UPDATED] - Zeds overall dmg has been updated per hit/per zed (Old Type: Max possible dmg = body 600, Legs 100, Hands 50, Head 1200 New Type: Body 1200, Head 2400)
	    * [UPDATED] - Bleed from zed attacks will now only happen if the initial dmg is above 0.7 or the zed gives a head shot. (should reduce the amount of bandages needed)
	    * [UPDATED] - Zeds knocking players unconscious now has a 50/50 chance if damage multiplier is above > 0.8
	    * [UPDATED] - When unconscious all damage is reduced to 50 blood for each hit zeds do no matter the part they hit. (Should allow some survivability)
	    * [UPDATED] - Zeds sight and sound chance has been re-added so there is a chance they can ignore you.
	    * [UPDATED] - Sight and sound rebalanced to make them a little more even from movement.
	    * [UPDATED] - Call extension calls for vehicle damage.
	    * [UPDATED] - Zeds will no longer spawn for air vehicles.
	    * [UPDATED] - Hunters loot table adjusted with more weapons.
	    * [UPDATED] - SQL files working on Linux.
	    * [UPDATED] - Add crawl animation damage. Players will now take dmg from crawling zeds.
	    * [UPDATED] - Updated zed speed to default.
	    * [UPDATED] - Melee systems updated.
	    * [UPDATED] - Old Bandit skin for male characters.
	    * [UPDATED] - Lowered action sound for refuel from 10 meters to 5.
	    * [UPDATED] - Lowered Direct comms action sound.
	    * [UPDATED] - Vehicle damage syncs updated to reduce call extension spam.
	    * [UPDATED] - Lowered Transfusion infection rate.
	    * [UPDATED] - Quiver acts as a quiver, you now have to take an arrow out of the quiver.
	    * [UPDATED] - You can now only have 1 useable quiver in your main inventory and unlimited in your backpack.
	    * [UPDATED] - Melee range has been updated.
	    * [UPDATED] - HMMWV Cargo updated. (10 weapons, 50 slots and 2 backpack)
	    * [UPDATED] - AH6 & MH6 Cargo updated. (AH6 3 weapons, 30 slots and 2 backpacks) (MH6J 3 weapons, 20 slots and 3 backpacks)
	    * [UPDATED] - Fire Places will no longer act as storage systems.
	    * [UPDATED] - Fireplace can now only be lit once without adding new wood inside the fireplace.
	    * [UPDATED] - Fireplace can no longer be picked up after lighting.
	    * [UPDATED] - Vehicles speeds HMMWV, PBX and UAZ - Faster / ATV's - Slower
	    * [UPDATED] - Tanktraps, sandbags and razor-wires won't spawn in buildings. Tents will always spawn in a safe place.
	    * [UPDATED] - Up to +/-2000 Humanity gain/loss according to "humanKills" counter from killed character.
	    * [UPDATED] - Refuel now locks the player in place for the time to fill.
	    * [UPDATED] - More lootable buildings (Iron barn, car wrecks, several non enterable buildings...)
	    * [UPDATED] - 3 Chopper crash sites spawn on server start + 2-3 infected Camps.
	    * [UPDATED] - Sickness(Infection) can now cause death.
		
	    * [REMOVED] - M107 and AS50(Banned) from all loot tables and removed all damage from bullets so they do 0 damage even if spawned in.

______________________
Version 1.7.6.1
---------------

* Releasedate 26 February 2013


Affected addons:
* dayz_code

	Changes:

	    * [UPDATED] - Fixed version issues.
	    * [UPDATED] - Updated Spanish StringTables
	    * [UPDATED] - Force save updated.
	    * [REMOVED] - New models by JoeysLucky22:
			- (Soda)  Long's Island Iced Tea (Clayton)
			- (Soda)  Dr. Wasteland (Dr. wasteland)
			- (Soda)  Mikhail Made Lemonade (-=PA=-Mikhail)
			- (Soda)  LVG Root Beer (LVG)
			- (Soda)  Mountain Green
			- (Soda)  mZLY yZLY (mZLY)
			- (Soda)  R4Z0R soda (R4Z0R)
			- (Soda)  Smasht (Smasht)
			- (Beer)  Rabbitman (Rabbitman)
			- (Can) Bad Guy's Ubiquitous Peaches (UbiquitousBadGuy)
			- (Can) Chef Boneboy Ravioli (Boneboys)
			- (Can) Curgon's Chicken Noodle Soup (Curgon)
			- (Can) Demon Groves Green Beans (DemonGroover)
			- (Can) FraggleOs (Fraggle)
			- (Can) Griff Black Beans (Griff)
			- (Can) Herpy Dooves Canned Muffins (DerpyHooves)
			- (Can) Orlok Mixed Fruit (orlok)
			- (Can) Powell's New England Clam Chowder (Powell)
			- (Can) Unlabeled Can
			- (Can) Tyler's Kidney Beans
			- (Can) Conrad's Whole Kernel Corn
			
			
______________________
Version 1.7.6
---------------

* Releasedate 26 February 2013


Affected addons:
* dayz_code 
* dayz_sfx
* dayz_communityassets

Serverside affected addons:
* dayz_server (server admins only)
* Mission (server admins only)

	Changes:
	
	    * [NEW] - Added a 2 minite delay to new zeds spawning once MaxLocal zeds fall's below the acceptable level.
	    * [NEW] - Added new sfx for chopping wood.
	    * [NEW] - Started Update for Cherno intro. (map intro)
	    * [NEW] - Zed attraction, this will draw zeds to loiter closer to players over time.
	    * [NEW] - BAF_L85A2_RIS_SUSAT - (Heilcrash - HeliCrash_No50s)
	    * [NEW] - Crossbow Quiver added - 6 arrow mag size.
	    * [NEW] - WoodenArrow added 6 arrows can be turned into a quiver.
	    * [NEW] - WoodenArrow can be picked up after use.
	    * [NEW] - 20% of breaking WoodenArrow when firing it.
	    * [NEW] - Crowbar now attaches to toolbelt.
	    * [NEW] - Added Anti teleport script. Reported to server's RPT log
	
	    * [NEW] - New models by JoeysLucky22:
				- (Soda)  Long's Island Iced Tea (Clayton)
				- (Soda)  Dr. Wasteland (Dr. wasteland)
				- (Soda)  Mikhail Made Lemonade (-=PA=-Mikhail)
				- (Soda)  LVG Root Beer (LVG)
				- (Soda)  Mountain Green
				- (Soda)  mZLY yZLY (mZLY)
				- (Soda)  R4Z0R soda (R4Z0R)
				- (Soda)  Smasht (Smasht)
				- (Beer)  Rabbitman (Rabbitman)
				- (Can) Bad Guy's Ubiquitous Peaches (UbiquitousBadGuy)
				- (Can) Chef Boneboy Ravioli (Boneboys)
				- (Can) Curgon's Chicken Noodle Soup (Curgon)
				- (Can) Demon Groves Green Beans (DemonGroover)
				- (Can) FraggleOs (Fraggle)
				- (Can) Griff Black Beans (Griff)
				- (Can) Herpy Dooves Canned Muffins (DerpyHooves)
				- (Can) Orlok Mixed Fruit (orlok)
				- (Can) Powell's New England Clam Chowder (Powell)
				- (Can) Unlabeled Can
				- (Can) Tyler's Kidney Beans
				- (Can) Conrad's Whole Kernel Corn
			
	    * [NEW] - New models by Elvaron:
				- New melee weapon: Machete - (Farm - Hunting)
				- New Food: Pack of pistachios
				- New Food: Pack of trail mix
				- New Food: MRE military rations (Military Loot)
				- New junk loot
				- Model for Compass instead of green pouch in loot pile
				- 2rnd shells for pellet and slugshot shotgun ammunition (no more 8 bullets shown on ground when it's actually 2 bullets)
				- New models and textures for FoodBaconRaw and FoodBaconCooked.
				- Model and textures for Quiver.
	
	    * [UPDATED] - BoltsSteel replaced with WoodenArrows.
	    * [UPDATED] - BAF_L85A2_RIS_Holo Removed from crash site's added to Military tables
	    * [UPDATED] - loot weighted array generation fixed.
	    * [UPDATED] - Updated logout system to check radius of zeds from 50 meters to 35 meters (30 sec count)
	    * [UPDATED] - Player range on logout to 6 meters. (30 Sec count)
	    * [UPDATED] - Max Range of targets 120 meters down from 300 meters. (this should help long range agro, This is zeds max target range).
	    * [UPDATED] - AI behavior updated to try making them zigzag less.
	    * [UPDATED] - Added push bikes to the zeds pull from vehicle list.
	    * [UPDATED] - Epeen key moved to Custom Controls - Use action key 20 (No default key needs setting up)
	    * [UPDATED] - Zeds Targets array modified 
		* [UPDATED] - Weapon fire sounds divided by 2 (This will help us settle zeds hearing a little more) (107_DZ Zed pull range 450 meters / 2 = 225 meters (capped 120 meters about for now))
		* [UPDATED] - Max local zeds per client now fixed at 40 zeds, Global at 40 +10 for each player within 400 meters and total 500 zeds max.
		* [UPDATED] - Added some czech language
		* [UPDATED] - Updated zed attraction to dead players from 50 meters to 20 meters.
		* [UPDATED] - Players will now drop empty cans after consumption to nearest lootpile or creates new one.
		* [UPDATED] - Updated Infection to cough, shake camera and loose blood.
		* [UPDATED] - Updated Russian string tables.
		* [UPDATED] - Backpack Spawns should now see higher grade backpacks more.
		* [UPDATED] - Deer stands has its own loot table (Hunting).
		* [UPDATED] - Reduced Zed Running Speed.
	
		* [FIXED] - Zeds talk, lowed to 80 meters down from 200 meters this will stop any zeds targeting for sight/noise outside of this radius
		* [FIXED] - CookedBeef StringTables now added.
		* [FIXED] - Spanish, French StringTables updated.
		* [FIXED] - logout timers updated from sleep 3 to sleep 1 this should now fix long logout timers.
		* [FIXED] - Zeds should no longer walk though all objects. (Some objects can still be walked thought)
		* [FIXED] - Updated refuel to attract zeds. (3-6 Meters)
		* [FIXED] - EH's updated to work with BattlEye filters.
		* [FIXED] - Ammo counts now fixed on dc.
		* [FIXED] - Zeds will no longer magically hit players just because there within 3 meters. (	Zeds can no longer dmg without running the attack animations. (running into zeds will no longer dmg the player))
		* [FIXED] - Fixed some base class's for vehicles reporting issues with crew
		* [FIXED] - You can now logout with a broken leg.
		* [FIXED] - Temperature icon should not disappear anymore.
		* [FIXED] - Humanity should now work increase again.
		* [FIXED] - Chemlights and flares now work again.
		* [FIXED] - time is now set on startup.
		* [FIXED] - Hatchet and crowbar don't require reload anymore.
		* [FIXED] - Hatchet and crowbar no longer overwrite each other.
		* [FIXED] - Exploit when converting Mags into other mags (Example - DMR to M24 then back)
		* [FIXED] - Blood particles not shown for player.
		* [FIXED] - Hide body animation not shown for player.
		
		* [REMOVED] - Chase combat logging systems removed. (Removed due to early warning of aggro)
		* [REMOVED] - Debriefing window has started to be cleaned up. (blank box on dc)
		* [REMOVED] - BearTrap Due to issues with the trap still staying active after removal.
		* [REMOVED] - Removed DZ_Patrol_Pack_EP1 Due to us no longer planning to remove backpacks from new spawns.
		* [REMOVED] - Removed all chance based systems for sight and sound from zeds they will now only agro if in view or your making noise. Should allow more freedom to move.
	
		* [NOT FIXED] - Zombies attacking through objects (This won't be anything we can fix without a massive fps cost).
		
	Combat Roll:
	
		* [FIXED] - No longer possible to combat roll with broken leg
		* [FIXED] - Added 4 sec delay to multiple rolls.
		* [FIXED] - No longer possible to combat roll over player created objects (tents, sandbags so on)
		* [FIXED] - No longer combat roll in buildings.
	
		
	
______________________
Version 1.7.5.1
---------------

* Releasedate 04 February 2013


Affected addons:
* dayz_code
* dayz_anim  

	Changes:

		* [UPDATED] - STR_ITEMWATERBOTTLEBOILED_CODE_DESC - German (Eine Flasche mit abgekochten Wasser)
		* [UPDATED] - STR_ITEMWATERBOTTLEBOILED_CODE_DESC - French (Une bouteille a ï¿½tï¿½ remplie d'eau bouillie qui peut ï¿½tre consommï¿½e.)
		* [UPDATED] - HMMWV Stroage has been updated to 4 weapons, 12 slots and 4 backpacks.
		
		* [FIXED] - HMMWV Should now be able to be repaired fully.
		* [FIXED] - Gut object should be working without errors.
		* [FIXED] - Repair option should now only work on vehicles.
		* [FIXED] - AS50 was mistakenly banned now unbanned.
	
______________________
Version 1.7.5
---------------

* Releasedate 04 February 2013


Affected addons:
* dayz_code
* dayz_anim

Serverside affected addons:
* dayz_server (server admins only)
* Mission (server admins only)

	Changes:

		* [NEW]	Weapon - Sa58P_EP1. (Military)
		* [NEW]	Weapon - Sa58V_EP1. (Military)
		* [NEW]	Weapon - Sa58V_RCO_EP1. (MilitaryS)
		* [NEW]	Weapon - Sa58V_CCO_EP1. (MilitaryS)
		* [NEW]	Weapon - G36C. (HeliCrash)
		* [NEW]	Weapon - G36C_camo. (HeliCrash)
		* [NEW]	Weapon - G36A_camo. (HeliCrash)
		* [NEW]	Weapon - G36K_camo. (HeliCrash)
		* [NEW]	Weapon - M40A3 (MilitaryS)
		* [NEW] Vehicle - HMMWV_DZ.
		* [NEW] Vehicle - MH6J_DZ.
		* [NEW] - Ability to flip ATV's.
		* [NEW] - Zeds spawn while in vehicles.
		* [NEW] - Zeds now have the ability to damage vehicles. This is limited to glass only once glass is destroyed players within will be damaged.
		* [NEW] - Zeds now have the ability to pull you from open vehicles.
		* [NEW] - New Load screens added.
		* [NEW] - Chopper weapons can now be reloaded.
		* [NEW] - UH60Wreck added
		* [NEW] - New zed & loot spawn systems rewrote Phase 1.
		* [NEW] - Revamped GUI icons to now empty as you lose the relevant item (blood,food,water) Thanks Des
		* [NEW] - Infection changes when eating food and drinking water. (tin and canned items don't count)
		* [NEW] - Epeen monitor added to display player stats. (Zombies Killed, Headshots, Murders, Bandits Killed, Humanity) - Press Scroll Lock to use
		* [NEW] - Toolbox is now needed to build Wire,tanktrap.
		* [NEW] - Etool is now needed to build Sandbags.
		* [NEW] - 5 New types of food ("FoodmuttonCooked","FoodchickenCooked","FoodBaconCooked","HIDDEN","FooedRabbitCooked").
		* [NEW] - 4 New Raw food. ("FoodbaconRaw","FoodchickenRaw","FoodmuttonRaw","foodrabbitRaw")
		* [NEW] - Bloodbags can now give an infection.
		* [NEW] - Added moving combat roll (KK's Volt).
		* [NEW] - Survived Dayz added to Epeen monitor.
		
		* [NEW] - Cutting down trees now attracts zeds.
		* [NEW] - After you have eaten a canned product you now get an empty tincan back.
		* [NEW] - Added definition of arrays for meatraw / meatcooked
		* [NEW] - You can now eat raw meat (low hp add + possible infection), and Cooked meat (high hp add w/o infection)
		
		* [NEW] - RawMeat blood values (beef-100,rabbit-400,bacon-150,chicken-100,mutton-100).
		* [NEW] - Cookedmeat blood values (beef-600,rabbit-1600,bacon-400,chicken-400,mutton-400).
			
		* [NEW] - You can now boil water using a fire,TrashTinCan or ItemSodaEmpty and fullwaterbottle
		* [NEW] - Water (possible infection), and Boiled Water (w/o infection)
		
		
		* [UPDATED] - BAF_L85A2_RIS_CWS replaced with BAF_L85A2_RIS_Holo. (HeliCrash)
		* [UPDATED] - Added a much faster login process. (Advantages: Login Speed up)
		* [UPDATED] - Limited amount of ammo found with weapons.
		* [UPDATED] - Gender selection images updated thanks Des.
		* [UPDATED] - Updated infection chance during zed attacks from 1/1000 to 1/500.
		* [UPDATED] - Changed Loot tables to increase the supply of Antibiotic drops.
		* [UPDATED] - Combat Mode is now affected by everything you do and everything done to you (example any kind of damage).			
		* [UPDATED] - Updated Mi17_DZ and UH1H_DZ to max ammo Max 100 rounds per gun.
		* [UPDATED] - UH1 Crash sites no longer all spawn on server start but throughout the game.
		* [UPDATED] - Damage processing for zombie attacks with prebuilt weighted arrays. (Advantages: speedup and saves a lot of cpu cycles)
		* [UPDATED] - Much faster fn_instring.
		* [UPDATED] - Cargo space redo.
						MI17_DZ ( transportMaxWeapons = 10;, transportMaxMagazines = 50;, transportmaxbackpacks = 10; )
						UH1H_DZ ( transportMaxWeapons = 5;, transportMaxMagazines = 25;, transportmaxbackpacks = 4; )
						AH6_DZ ( transportMaxWeapons = 3;, transportMaxMagazines = 10;, transportmaxbackpacks = 2; )
						Mh6J_DZ ( transportMaxWeapons = 3;, transportMaxMagazines = 20;, transportmaxbackpacks = 0; )
						AN2_DZ ( transportMaxWeapons = 10;, transportMaxMagazines = 80;, transportmaxbackpacks = 15; )
		* [UPDATED] - CZ_VestPouch_EP1 to be more useful 12 slots 0 weapon slots.
		* [UPDATED] - Zeds will talk to other zeds within 80 meter.
		* [UPDATED] - Combat Logging is now active during Zombie chase.
		* [UPDATED] - Backpacks updated. (https://github.com/R4Z0R49/DayZMod/wiki/Backpacks)
		* [UPDATED] - Animal Meat reset. 6(cow),4(goat),4(sheep),4(boar),2(Hen),1(Rabbit)
		* [UPDATED] - Epeen monitor moved to scroll lock key and work started on moving to diary
		* [UDDATED] - Massive cleanup remove all useless files.
		* [UPDATED] - Redone all public EH's
		* [UPDTAED] - Combat/zombie logout + anti-duping overhaul - (https://github.com/R4Z0R49/DayZMod/commit/44321a6856f5fd2d5544d1293c2450f9b2df6fbd)
		* [UPDATED] - String tables to include = English, German, Russian, Spanish, Dutch, French
		* [UPDATED] - All base class's have been updated to match the dayz removal proc's (weapons)

		* [Fixed] - Zeds hearing should now be fixed.
		* [Fixed] - Temperature icon color now ranges from iceblue (cold) to red (hot)
		* [Fixed] - German Tranlations updated.
		* [Fixed] - mi17 gunner seat is now fixed (you no longer stand outside)
		* [Fixed] - Bloodbag glitch fixed.
		* [Fixed] - UH1Y_DZ animation issues.
		* [Fixed] - Infection is now fixed loss of blood 3 per sec (will not drop below 3k blood)
		* [FIXED] - Epeen monitor animation should now work correct without the fps drop.
		* [FIXED] - DZ_Czech_Vest_Puch backpack class config. (Warning Message: No entry 'bin\config.bin/CfgMagazines.DZ_Czech_Vest_Puch'.)
		* [FIXED] - Variable spelling mistakes should be corrected now.
		* [FIXED] - Moved all new foods to stringtable.
		* [FIXED] - Fixed infection chance when giving blood.(No longer applies to player giving blood) :-(
		* [FIXED] - ALT F4 Sync issue now fixed
		* [FIXED] - Pause menu can no longer be assigned to mouse keys to bypass respawn.
			
		* [REMOVED]	- BAF_L85A2_RIS_CWS (Based on poll)
		* [REMOVED]	- Banned m136 as it never really worked and served no real purpose.
		* [REMOVED] - In Combat bot removed while we work on speed improvements.
		* [REMOVED] - Peripheral Vision. (Peripheral Dots)
		* [REMOVED] - MPTable Removed.
		* [REMOVED] - Axes now have a small chance to fail due to them being blunt (others later) 9% Chance. ** Can still be used as weapon **
		* [REMOVED] - Matches can now run out (others later) 9% Chance. (at this time this is a random chance)
		* [REMOVED] - Knife will now have a chance to go blunt causing it to give less food from gutting animals 9% chance(Blunt), 50% less food(Gutting)
		* [REMOVED] - You can no longer apply more than one bloodbag per 10 mins per player
		* [REMOVED] - You can no longer regain blood from cooked food for 1 hour after eating. (ie spamming cooked meat to regain hp)
		* [REMOVED] - No longer need tool box to place bear traps.
		* [REMOVED] - You can no longer consume food while your not hungry (within 3 mins of eating)
		* [REMOVED] - You can no longer drink while your not thirsty (within 3 mins of drinking)
		* [REMOVED] - 6 New items added to loot tables. (Inplace of item lockup or braking)
		* [REMOVED] - Food models removed
			
		Hive:
		* [NEW] - Added new constraint to block non Dayz items from being written to the db

		* [UPDATED] - Publish Object will now only publish items allowed. (tents, other deployables)
		* [UPDATED] - Updated Basic SQL Procs.

		* [FIXED] - Crash issue on stale child calls
		
		* [REMOVED]	Upstream hive (public hive):

______________________
Version 1.7.4.4
---------------

* Releasedate 21 November 2012


Affected addons:
* dayz_anim
* dayz_code
* dayz_sfx
* dayz_communityassets

Serverside affected addons:
* dayz_server (server admins only)
* Mission (server admins only)

	Changes:
	
		* [NEW]	class Mi17_TK_EP1 Now Unbanned. (Mi17_DZ)
		* [NEW]	An2_TK_EP1 Now Unbanned.(AN2_DZ)
		* [NEW]	AH6X Now Unbanned. (AH6X_DZ)
		* [NEW]	BAF_Offroad_D Now Unbanned.
		* [NEW]	BAF_Offroad_W Now Added.
		* [NEW]	Fully Removed Save button from action menu.
		* [NEW]	New combat mode icon (G17) thanks Alexander.
		* [NEW]	Gender section screen thanks F0rt.
		* [NEW]	You can no longer place tents in ponds.
		* [NEW]	Disabled greeting menu .
		* [NEW]	Disabled radio messages to be heard and shown in the left lower corner of the screen.
		* [NEW]	General speed up of the login process.
		* [NEW] (*.2 Hotfix)Added some Anti-cheat.
		* [NEW] (*.3 Hotfix)Added local copy of cert if it cant get one online, version checks.


        * [UPDATED] Combat Logging "Fired Near" checks are now limited to 8 metre radius.
		* [UPDATED] Combat Logging "Projectile Near" Have now been removed while we look for a less intensive way to track projectiles.
		* [UPDATED] Combat Logging is now removed on death.
        * [UPDATED] Corrected legs and hands fractures they must be set with actual value.
		* [UPDATED] (*.1 Hotfix)Updated hive .dlls to fix a reconnect issue with prepared statements.
		* [UPDATED] (*.1 Hotfix)Increased m107 loot chance to 0.02. 
		* [UPDATED] (*.1 Hotfix)Lowered As50 loot chance to 0.01
		
		* [FIXED]	Adding checks for female skin humanity/login.
        * [FIXED]   Adding female skin to variables.
        * [FIXED]   Fixed Parachute so jumping out of choppers won?t kill you.
        * [FIXED]   Event Handle for wrecked choppers this should allow the smoke on wrecks to work all the time.
        * [FIXED]   Event Handle for Vehicles this fix's problems with local vehicle damage calls.
        * [FIXED]   Remove objects from DB by objectID and objectUID only. (Should fix Deployable problems)
        * [FIXED]   Debug menu options are no longer editable.
        * [FIXED]   Locked Singleplayer Menu
		* [FIXED]   (*.1 Hotfix) Players with high CharacterID weren't dying properly.
		* [FIXED]   (*.2 Hotfix) Fixed 2nd Parachute removal issue.
		
        * [REMOVED]	Damaged logging to .rpt removed all traces of dmg to a player.
        * [REMOVED]	An2_1_TK_CIV_EP1 Got removed during testing devs felt it lacked purpose in the game.
        * [REMOVED]	An2_2_TK_CIV_EP1 Got removed during testing devs felt it lacked purpose	in the game.
        * [REMOVED]	MV22 Got removed during testing devs felt it lacked perpose in the game.
        * [REMOVED]	S1203_ambulance_EP1 Got replaced during testing to a hmmv class vehicle.
		* [REMOVED]	BAF_L85A2_RIS_CWS From Loot table.
		* [REMOVED]	UH60_wreck_EP1.
		* [REMOVED] HMMWV_Ambulance_CZ_DES_EP1 Removed due to its heal abilty.
		* [REMOVED] Dogs Removed while we rewrite the hud and correct a few other issues. (attak, Getin/out of vehicles)
		* [REMOVED] UH60M_MEV_EP1 Removed due to its heal abilty.
		* [REMOVED]	(*.4 Hotfix) Street Lights Removed.


    Upstream hive (public hive):
	
        Adjusted the respawn rates of vehicles. Previously all vehicles had pretty long respawn time making them a bit too rare.
        Still requires a server restart for vehicles to show up in-game.
        * [UPDATED] Destroyed low-end (boats, bicycles) vehicles now respawn after 3h.
        * [UPDATED] Destroyed medium-end (normal cars, motorcycle, quads) vehicles respawn after 12h.
        * [UPDATED] Destroyed high-end ( aircraft, all-terrain) vehicles respawn after 24h.
        Note: Respawn rates are our recommended rule set, they may differ on some private hive servers.

______________________
Version 1.7.3
---------------

* Releasedate 31 October 2012


Affected addons:
* dayz_code

Serverside affected addons:
* dayz_server (server admins only)
	

	Changes:
	
		* [NEW]		Tents can no longer be placed on concrete.		
		* [NEW]		Vehicle menus now list all damaged parts no matter if you have the item or not.
		* [NEW]		Vehicle repair menus will now let you know the exact item you need to repair on failed repair attempts.
		* [NEW]		New Combat System If you fire a weapon, then you go into combat.  During combat, "ABORT" is disabled. (Need to look at the effects with high player counts)
		* [NEW]		Combat 30 sec timer on all combat actions.		
		* [NEW]		Toolbox is now needed for all repairs.
		* [NEW]		Alt-f4 is now locked and will only open your status menu.
		* [NEW]		combat 30 sec timer on all combat actions.
		
		* [UPDATED]	Vehicle repair menus now all replaced.
		* [UPDATED]	Updated UI control bug.
		* [UPDATED]	ItemWire reduced from 0.06 to 0.01
		* [UPDATED]	PartEngine updated from 0.01 to 0.06
		* [UPDATED]	Version info is now displayed correct
		
		* [FIXED]  Zombie death animation is delayed (now it plays instantly)
		* [FIXED]	Building checks for tent placement (No longer place tents in buildings).
		* [FIXED]	Tents now are one click place.
		* [FIXED]	Fixed function for checking if in buildings
		* [FIXED]	Vehicle Damage is now fully working.
		* [FIXED]	Vehicle Killed is now in effect fully destroyed vehicles will now set correct in db.
		* [FIXED]	Tents Now add and remove from db.
		* [FIXED]	Food can no longer be consumed if the player does not have in inventory.
		* [FIXED]	water can no longer be consumed if the player does not have in inventory.
		* [FIXED]	No longer possible to drink/eat/pitch a tent/put on clothes/build sand bags/cat wire/hedgehogs/consume medical supplies/free filled water without consuming the item.
		* [FIXED]	No longer possible to create axes out of thin air if you already have one
		* [FIXED]	Switching skins no longer repairs pain shakes/broken legs/resets/dupes/screws/resets ammo
		* [FIXED]	Duping no longer possible through zombie corpses/etc
		* [FIXED]	It should now be impossible for a new players spawns to spawn unconscious.
		* [FIXED]	You can no longer cook infinite free meat from camp fires
		* [FIXED]	Survivors should no longer pickup a single item at the same time and both receive it.
		* [FIXED]	You can no longer generate multiple tents while packing up a deployed tent.
		* [FIXED]	You can no longer change clothes/eat/drink/etc. while in a vehicle
		
		Hive:
		* [NEW]		HiveEXT.dll updated with new optimized version that supports both private and public hive.
		* [NEW]		Official public Hive login is now hard coded into the .dll (Outgoing TCP port 80 and 3306 has to be allowed to use public hive)
		* [NEW]		New Hive can now set ingame time to custom, local(local server time), static
		* [FIXED]	Object Gear syncs happen based on radius not just on menu.
		* [FIXED]	Vehicle Position is now updated with client position.
		* [FIXED]	Vehicles save fuel properly
______________________
Version 1.7.2.6
---------------

* Releasedate 6 September 2012


Affected addons:
* dayz
* dayz_code

Serverside affected addons:
* dayz_server (server admins only)

	Changes:
	
		* [NEW] 	Bear trap has chance to spawn on infected hunters
		* [NEW]		Three UI options available: Default (indicators only), Debug (indicators + debug window), None (only base ArmA2 UI)
		
		* [FIXED] 	Graphical glitches with dead bodies (Bodies should now not display graphical glitches)
		* [FIXED] 	Converting between magazine types resets ammo count (Now only contains previous number of rounds)
______________________
Version 1.7.2.5
---------------

* Releasedate 8 August 2012


Affected addons:
* dayz_code

Serverside affected addons:
* dayz_server (server admins only)

	Changes:
	
		* [NEW] 	Additional optimizations to login process (further use of publicVariableClient to reduce network transmission)
		
		* [FIXED] 	Ammunition amounts not loaded in properly (Now records used ammunition correctly)
		* [FIXED] 	Graphical glitches with barbed wire (Rebinarized file should no longer produce graphical artifacts)
		* [FIXED] 	Respawn button not enabled when legs fractured (Now enables for fractured legs https://dev-heaven.net/issues/39161 )
		* [FIXED] 	Excessive logging of player data in server logs (Disabled https://dev-heaven.net/issues/38784 )
		* [FIXED] 	Graphical glitches with dead bodies (Rebinarized file should no longer produce graphical artifacts)
______________________
Version 1.7.2.4
---------------

* Releasedate 26 July 2012


Affected addons:
* dayz
* dayz_code
* dayz_anim

Serverside affected addons:
* dayz_server (server admins only)


	Changes:
	
		* [NEW]		Respawn button is disabled during DayZ play
		* [NEW]		Optimized authentication process on login
		* [NEW]		Singleplayer mode disabled when DayZ is loaded
		* [NEW]		DayZ Logo and Version Number appear in game when DayZ is loaded
		* [NEW]		Hive now tracks login/logout (to assist in analysis for an ALT+F4 solution)
		* [NEW]		Respawn button is enabled if the player has a fracture
		* [NEW]		Players spawning in debug area or "water world" will spawn on beach on next login (with their gear)
		* [NEW]		Client will automatically spawn player out of debug and waterworld to last known position
		* [NEW]		Radar removed from helicopter (UH1H will be added back to vehicle spawns)
		
		* [FIXED]	Infected cannot hear weapon firing (now they actually hear again)
		* [FIXED]	Clothing no longer spawning (now it spawns as it used too)
		* [FIXED]	Tents and items with ID's above 1 million don't syncronize (now it should syncronize, players to confirm)
		* [FIXED]	Players switched to non-player skins (by hackers) sync to database (updates no longer saved for objects non-authorized skins)
		
______________________
Version 1.7.2.2
---------------

* Releasedate 13 July 2012


Affected addons:
* dayz_code
* dayz_anim

Serverside affected addons:
* dayz_server (server admins only)

	Changes:
	
		* [NEW]		Server side performance tweaks and improvments
		
		* [FIXED]	Ghillie and skin removal on login ( https://dev-heaven.net/issues/36666 )
		* [FIXED]	Arma X stuck on loading screen ( https://dev-heaven.net/issues/36647 )
		* [FIXED] 	AKS_74_kobra classname incorrectly named ( https://dev-heaven.net/issues/36680 )
		* [FIXED]	Infected detect players from too far away (reduced by about 20%)
		* [FIXED]	Disconnect updates not being correctly applied (caused inventory issues)
		* [FIXED]	Bear traps not appearing for spawn (low spawn)
______________________
Version 1.7.2.1
---------------

* Releasedate 10 July 2012


Affected addons:
* dayz_code
* dayz_anim

Serverside affected addons:
* dayz_server (server admins only)
		
	Changes:
	
		* [FIXED]	Infected attack those they cannot see ( https://dev-heaven.net/issues/36375 )
		* [FIXED]	Wearing clothes makes you invisible ( https://dev-heaven.net/issues/36371 )
		* [FIXED]	New authentication method causing lockups on full servers (Reverted use of publicVariableServer)
		* [FIXED]	Pressing ALT key caused spamming of server sync ( No longer spams for sync'ing a character )
______________________
Version 1.7.2
---------------

* Releasedate 9 July 2012


Affected addons:
* dayz
* dayz_code
* dayz_anim
* dayz_equip
		
	Changes:

		* [NEW]		Player Syncing system replaced (increased performance and ammo quantity tracking)
		* [NEW]		Visibility now smoothly alters based on sun, moon, cloud, rain, and fog state
		* [NEW]		Aubility now dampened in rain and increased by fog
		* [NEW] 	Exponent driven probability introduced into visibility calculation
		* [NEW]		Set Bear Traps that break player and infected legs, kills animals, when activated
		* [NEW]		Authentication process streamlined with new ArmA2 Beta commands (publicVariableServer and publicVariableClient)
		* [NEW] 	Authentication for duplicate IDs supportive of the new beta patch (ArmAX users)
		
		* [FIXED]	Hatchet/Crowbar requires reloading ( https://dev-heaven.net/issues/34903 )
		* [FIXED]	Unlimited Wire fence/Sandbag/Tank Trap Bug ( https://dev-heaven.net/issues/34283 )
		* [FIXED]	Duplication Exploit on object pickup ( https://dev-heaven.net/issues/34031 )
		* [FIXED]	Not full magazines disappear when you reconnect ( https://dev-heaven.net/issues/33998 )
		* [FIXED]	Dead bodies still have the heart beat for low humanity ( https://dev-heaven.net/issues/35050 )
		* [FIXED]	Object cleanup causing significant (huge) performance issue on servers (reduced by up to 50%, means more players + zombies possible)
		* [FIXED]	Use of "allMissionObjects" causing performance issue on clients (new engine command "entities" used to improve FPS on clients)
		* [FIXED]	Too easy to break legs due to infected (reduced probability of leg damage, reduced amount of leg damage)
		* [FIXED]	Inspection of dead bodies does not work (fix only applies with ArmA2 Beta 94033 and above)
		* [FIXED]	Error reports are almost invisible (has now been fixed)
		* [FIXED]	Daylight calculations causing slight FPS issue
		* [FIXED]	Infected hear perfectly through objects (noise reduced by 50% through an object)
		* [FIXED]	Animal bodies despawn way too fast (now despawn automatically after 2 minutes)
		* [FIXED]	Corrupted update data causes people to spawn in debug forest (now will not save corrupted position data)
		* [FIXED]	States where animal might stop walking around (now should walk around more)
		* [FIXED]	Animal AI routines consuming large amounts of FPS (now in line with Infected AI routines, reduced FPS usage)
		
______________________
Version 1.7.1.5
---------------

* Releasedate 20 June 2012


Affected addons:
* dayz_code
* dayz_weapons
* dayz_equip	

	Changes:

		* [NEW]		Infected raycast for line-of-sight less often (improves performance)
		* [NEW]		Infected bodies will despawn after 5 minutes of their death (improves performance)
		* [NEW]		Flashlights can now be packed to toolbelt also (gear action)
		* [NEW]		New players will spawn with flashlight added to their toolbelt not backpack
		* [NEW]		Flashlights can now be packed to toolbelt also (gear action)
		* [NEW]		New players will spawn with flashlight added to their toolbelt not backpack
		
		* [FIXED]	Infected can see through terrain ( https://dev-heaven.net/issues/33787 )
		* [FIXED]	Raycasting being taken from wrong body position (ensured it is from eye level)
		* [FIXED]	Infected sometimes spawn close to a player (previous check once, now up to ten times)
		* [FIXED]	Sometimes infected will stand still after loosing line-of-sight ( https://dev-heaven.net/issues/33715 )
		* [FIXED]	Can dupe tent's by right clicking (forgot to close the window)
		* [FIXED]	Poor performance caused by infected search behavior (MAJOR performance increase during closed testing)
		* [FIXED]	Audibility is far to high (completely rebalanced, in line with how it was in previous updates)
		* [FIXED]	Can dupe food during cooking if click really fast (now you cannot)
		* [FIXED]	Trying to pick up a hatchet would create fake ammo (now will not)
		* [FIXED]	Hatchet takes up too much room (can now be transferred between toolbelt and primary slot through gear action)
		* [FIXED]	Infected sometimes not inspecting thrown items (they will walk to the location of a noise, 20-40m away)
		* [FIXED]	Unlimited Infected spawning (now has a cooldown enabled so it won't spawn too many at once)
		* [FIXED]	Melee weapon sounds non-existent/terrible (now has placeholder sounds)
		
		* [REVERT]	Hatchet now collected as an Item (toolbelt) and can be equipped to primary (gear action)
______________________
Version 1.7.1.4
---------------

* Releasedate 19 June 2012


Affected addons:
* dayz_code
* dayz_equip	

	Changes:
	
		* [FIXED]	Performance issue with equipment proxies (improves FPS)
______________________
Version 1.7.1.3
---------------

* Releasedate 19 June 2012


Affected addons:
* dayz_code
* dayz_weapons
* dayz_equip

Serverside affected addons:
* dayz_server (server admins only)

	Changes:
	
		* [NEW]		Once infected lose line-of-sight they will try investigate where you are
		* [NEW]		Significant loot rebalancing
		
		* [FIXED]	Melee items causing magazine glitching and eventual server death (fixed)
		* [FIXED]	Unconscious UI Image displays incorrectly
		* [FIXED]	Bleeding never stops unless bandaged (chance of spontanious bleeding stopping now works)
		* [FIXED]	Interior infected spawning inside of building walls etc... (interior infected now spawn inside correctly)
		* [FIXED]	Speed not correctly utilized for checking stealth levels ( https://dev-heaven.net/issues/33630 )
		* [FIXED]	Posture error can occur on stealth check ( https://dev-heaven.net/issues/33628 )
		* [FIXED]	Config error messages on popup (Caused by legacy classnames, error handling implemented to prevent this)
		* [FIXED]	Unable to repair helicopter fuel leak (repair all parts to 95% or above and fuel leak will stop)
		* [FIXED]	Massive lag and desync on some servers (mostly caused by the invisible replicating magazines)
		* [FIXED]	Losing blood from starvation/dehydration cannot receive transfusion ( https://dev-heaven.net/issues/33677 )
		* [FIXED]	Hunger and Thirst no longer continue to drop while you are offline (only ingame time counts)
		* [FIXED]	Flies still heard around removed/hidden bodies ( https://dev-heaven.net/issues/33472 )
		* [FIXED]	"Fus ro dah" melee (now should be the correct release files)
		
		* [REVERT]	Nerf of sickness damage (now will reduce your blood to 6000 rather than 10000)
______________________
Version 1.7.1.2
---------------

* Releasedate 19 June 2012


Affected addons:
* dayz_code
* dayz_weapons
* dayz_equip

Serverside affected addons:
* dayz_server (server admins only)
	
	Changes:
	
		* [NEW]		Tone Mapping to enhance nightlighting conditions
		* [NEW]		Melee Weapon introduced: Hatchet (can only drop through right click in gear menu)
		* [NEW]		Maximum animals increased
		* [NEW]		Melee Weapon introduced: Crowbar (can only drop through right click in gear menu)
		* [NEW]		Double Barrelled shotgun sound
		
		* [FIXED]	Generic Loot not spawning (such as food etc...)
		* [FIXED]	Animals stand still and HURR DURRR (they now walk around)
		* [FIXED]	New blood values not being saved when a player eats (they do now)
		* [FIXED]	Duplicate players not being removed (should now be removed on login)
		* [FIXED]	Gender assignment broken (working correctly)
______________________
Version 1.7.1.1
---------------

* Releasedate 17 June 2012


Affected addons:
* dayz_code

Serverside affected addons:
* dayz_server (server admins only)

	Changes:
	
		* [NEW]		Can select gender for each new character
		* [NEW]		Small tweaks to AI zombie routines to improve performance
		* [NEW]		Marakov spawn rate increased
		* [NEW]		Tweaked audibility and visibility values for kneel walking
		* [NEW]		Small chance Mararov ammo will spawn on an infected
		
		* [FIXED]	Server item cleanup error (thanks Dwarden for identifying)
		* [FIXED]	Server weighted random object error (thanks Dwarden for identifying)
		* [FIXED]	Area not checked for existing infected before spawning new ones ("blind faith" that it had not made a mistake didn't work)
		* [FIXED]	Crippling performance issues caused by loot items never being cleaned up (loot now cleaned up)
		* [FIXED]	Tent pitching (Who the hell codes tent location checks TWICE before pitching? Oh apparently I do)
		* [FIXED]	Infected will stay in one place after losing line-of-sight (now will loiter)
		* [FIXED]	Converting magazines didn't work if you had MORE than one of that magazine type (now works as intended)
		* [FIXED]	Toolboxes aren't spawning (classname error in loot table)
		
		* [REVERT] 	Secret nerf of prone (you noticed)		
		* [REVERT] 	New spawn timer mechanism (back to the old one for now)
		* [REVERT] 	5 second delay for disconnecting (will need to wait till new method developed)
		* [REVERT] 	Disabling of interior raycasting (will mean some buildings you will be invisible/can't be hit in for the moment as they don't have view LODs)
		* [REVERT]	Infected sight based on head not body direction (infected glace around alot, this meant that they had super view directions. Now locked at body direction)
		
______________________
Version 1.7.1
---------------

* Releasedate 17 June 2012


Affected addons:
* dayz
* dayz_code
* dayz_sfx
* dayz_equip
* dayz_anim
* dayz_weapons
	
	Changes:
		
		* [NEW]		Infected can't see through objects any more
		* [NEW]		Infected visibility increased (but limited by LOS)
		* [NEW]		Infected attack range increased (but limited by LOS)
		* [NEW]		Infected can cause greater damage when they hit you
		* [NEW]		You can hide from an infected chasing you
		* [NEW]		Optimized server cleanup routine
		* [NEW]		Player body exists for five seconds after disconnect (UNCONFIRMED IF WORKING)
		* [NEW]		Infected see based on eye direction, not on body direction as before
		* [NEW]		30Rnd_545x39_AK added to loot table
		* [NEW]		More infected attack animations
		* [NEW]		More infected feeding animations
		* [NEW]		Replaced monkey infected crawing run animation
		* [NEW]		Heartbeat when cursor on a player with very low humanity (heart beats faster the lower it is)
		* [NEW]		Humanity GUI indicator removed
		* [NEW]		New Infected and Action sound effects (more AWESOME stuff by Michael Manning)
		* [NEW]		Initial version of double-barreled shotgun added (by Artyom)
		* [NEW]		Infected can't attack through walls
		* [NEW]		Recombine shotgun rounds between 2 and 8 rounds
		* [NEW]		Recombine 45ACP rounds between M1911 and Revolver rounds
		* [NEW]		DayZ: Now with additional cruelty! Spawn with only a bandage, painkillers, and a torch.
		
		* [FIXED]	CZ550 spawning far too often in farms
		* [FIXED]	Winchester decreased spawnrate (% given to double barrel shotty)
		* [FIXED]	Wire Spools, Toolboxes, hedgehog (tank trap) kits not spawning
		* [FIXED]	Bodies still being deleted too quickly sometimes
		* [FIXED]	No backpacks or medical boxes spawning
		* [FIXED]	"No Speaker..." debug report spam
		* [FIXED]	Infected spawning too close to players (minimum 30m now)
		* [FIXED]	Infected not spawning inside buildings any more
		* [FIXED]	General Server Script Errors (big thanks to Dwarden for fixing these!)
		* [FIXED]	Loot/Infected spawning time delay desync'ing with server
		* [FIXED]	Tent placement is completely screwed (now can place anywhere except in building)
		* [FIXED]	Items for Eating and Drinking not removed instantly (allowed some duping)
		
______________________
Version 1.7.0
---------------

* Releasedate 27 May 2012


Affected addons:
* dayz_code
		
	Changes:
	
		* [NEW]	 	Server Side Architecture completely rewritten
		
		* [FIXED]	Long (sometimes infinite) loading times
		* [FIXED]	Saving sometimes will not happen
		* [FIXED]	Vehicles not initialized reliably on servers running multiple instances
		* [FIXED]	Very poor framerate on servers after some time (dead bodies causing it)
		
______________________
Version 1.6.0
---------------

* Releasedate 27 May 2012


Affected addons:
* dayz	
* dayz_equip
* dayz_code
* dayz_sfx
* dayz_weapons
		
	Changes:
		
		* [NEW]		Hatchet for chopping wood in forests
		* [NEW]		Wire Fencing kit model by Artyom Troshin
		* [NEW]		Tank Trap kit model by Artyom Troshin
		* [NEW]		Construction options moved to items in gear menu (right click wire fencing kit to use etc...)
		* [NEW]		Hospital Loot Spawn probabilities changed
		* [NEW]		Players can choose to be a female survivor (once only per CD-Key)
		* [NEW]		Heat packs for increasing temperature in an emergency
		* [NEW]		Bandit Skin transition for low humanity is removed
		* [NEW]		Players will receive an error message if the server they are on is running an incorrect HIVE version
		
		* [FIXED]	Bodies being deleted immediately (now will stay around for 15 minutes)
		* [FIXED]	Player profiles sometimes corrupting and causing stuck in loading issues (error handling by engine)
		* [FIXED]	Temperature listed in percent and not degrees (now displayed in degrees)
		* [FIXED]	Loosing temperature inside vehicles (now will slowly gain or be static in vehicles)
		* [FIXED]	ItemPainkillers popup error (no longer happens: thanks Norbert!)
		* [FIXED]	Spawning in Ocean when switching models (player morphing optimized by TeeTime)
		* [FIXED]	Loosing gear when switching models (player morphing optimized by TeeTime)
		* [FIXED]	Wrong M107 is spawning on occasion (Correct one spawns)
		* [FIXED]	Crashed heli uber-loot not spawning (does now thanks to GhostBear!)
		* [FIXED]	Wire Fencing Kit caused graphical glitches (new model)
		* [FIXED]	Tank Trap Kit caused graphical glitches (new model)
		* [FIXED]	Invisible character models occuring (No longer invisible models)
		* [FIXED]	Panic not being activated (Your character will sometimes panic)
		* [FIXED]	Blood washout sometimes not being displayed (now will always wash out color depending on blood level)
______________________
Version 1.5.8.4
---------------

* Releasedate 24 May 2012


Affected addons:
* dayz_code
		
	Changes:

		* [NEW]	 	Support for more than 1,000,000 characters
______________________________________
