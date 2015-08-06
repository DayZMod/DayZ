#include "\z\addons\dayz_code\Configs\CfgLoot\LootDefines.hpp"

#define Loot_GetGroup(name) (dayz_lootGroups find (name))
#define Loot_Select(group, count) ([group, count] call loot_select)
#define Loot_SelectSingle(group) (Loot_Select(group, 1) select 0)
#define Loot_Spawn(def, loc) ([def, loc] call loot_spawn)
#define Loot_SpawnGroup(group, loc) ([group, loc] call loot_spawnGroup)
#define Loot_Insert(unit, group, count) ([unit, group, count] call loot_insert)
#define Loot_InsertCargo(object, group, count) ([object, group, count] call loot_insertCargo)