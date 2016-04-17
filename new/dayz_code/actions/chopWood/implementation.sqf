#include "\dayz\dayz_code\util\array.hpp"
#include "\dayz\dayz_code\util\string.hpp"
#include "\dayz\dayz_code\util\request.hpp"
#include "\dayz\dayz_code\util\object.hpp"

//If defined, tree damage is set by server
//#define FELL_SERVER

#ifdef FELL_SERVER
	#define FELL(tree, dmg) Request_Send("fellTree", Array_New3(tree, dmg), false)
#else
	#define FELL(tree, dmg) tree setDamage (dmg + damage tree)
#endif

#define SOUND_EFFECT "chopwood"
#define SOUND_DISTANCE 20

#define HATCHET_ITEM "ItemHatchet"
#define HATCHET_WEAPON "MeleeHatchet"
#define LOGS_ITEM "ItemLog"

//Max 2d distance to tree
#define MAX_DISTANCE 4
#define SEARCH_RADIUS 30

//One log per x meters
#define HEIGHT_MODIFIER 5

dz_fn_player_chopWood =
{
	if !(player hasWeapon HATCHET_ITEM || { player hasWeapon HATCHET_WEAPON || { dz_carry == HATCHET_WEAPON }}) exitWith
		{ "Hatchet not found". call dz_fn_rollmsg };
	
	private "_tree";
	
	#define IS_TREE(x) String_Substring(str x, String_Finds(str x, ":", 0) + 2, -1) in dz_trees
	#define IS_VALID_TREE(x) damage x != 1 && { IS_TREE(x) && { Object_Distance2D_Fast(player, x) < MAX_DISTANCE } }
	
	_tree = Array_First(nearestObjects Array_New3(player, [], SEARCH_RADIUS), { IS_VALID_TREE(_x) });
	
	#undef IS_TREE
	#undef IS_VALID_TREE
	
	if isNil "_tree" exitWith
		{ localize "str_player_23" call dz_fn_rollmsg };
	
	#define GET_HEIGHT(tree) ((boundingBox tree select 1 select 2) - (boundingBox tree select 0 select 2))
	
#ifdef FELL_TREES
	#define GET_LOGS_COUNT(tree) round ((GET_HEIGHT(tree) / HEIGHT_MODIFIER) * (1 - damage tree))
#else
	#define GET_LOGS_COUNT(tree) round (GET_HEIGHT(tree) / HEIGHT_MODIFIER)
#endif
	
	["chopWood", [_tree, GET_LOGS_COUNT(_tree) max 1, 0]] call dz_fn_action;
	
	#undef GET_HEIGHT
	#undef GET_LOGS_COUNT
};

#define GET_MAX(x) (x select 1)
#define GET_COUNTER(x) (x select 2)
#define INCREMENT_COUNTER(x) x set [2, GET_COUNTER(x) + 1]

_begin =
{
	[player, SOUND_EFFECT, 0, false, SOUND_DISTANCE] call dayz_zombieSpeak;
	[player, SOUND_DISTANCE, true, getPosATL player] call player_alertZombies;
};

_finish =
{
	["Working", 0, [100, 15, 10, 0]] call dayz_NutritionSystem;
	
	Player_DropMagazine(LOGS_ITEM);
	
	//Increase counter and return true if counter is less than max
	INCREMENT_COUNTER(_this);
	
#ifdef FELL_TREES
	_continue = GET_COUNTER(_this) < GET_MAX(_this);
	
	if !_continue then
		{ FELL(_this select 0, GET_COUNTER(_this) / GET_MAX(_this)) };
	
	_continue
#else
	GET_COUNTER(_this) < GET_MAX(_this)
#endif
};

#ifdef FELL_TREES
_cancel =
{
	if { GET_COUNTER(_this) > 0 } then
		{ FELL(_this select 0, GET_COUNTER(_this) / GET_MAX(_this)) };
};
#endif
	
#undef GET_MAX
#undef GET_COUNTER
#undef INCREMENT_COUNTER

["chopWood", _finish, _begin
#ifdef FELL_TREES
, _cancel
#endif
] call dz_fn_action_register;

dz_trees =
[
	"t_larix3s.p3d",
	"t_pyrus2s.p3d",
	"str_briza_kriva.p3d",
	"dd_borovice.p3d",
	"les_singlestrom_b.p3d",
	"les_singlestrom.p3d",
	"smrk_velky.p3d",
	"smrk_siroky.p3d",
	"smrk_maly.p3d",
	"les_buk.p3d",
	"str krovisko vysoke.p3d",
	"str_fikovnik_ker.p3d",
	"str_fikovnik.p3d",
	"str vrba.p3d",
	"hrusen2.p3d",
	"str dub jiny.p3d",
	"str lipa.p3d",
	"str briza.p3d",
	"p_akat02s.p3d",
	"jablon.p3d",
	"p_buk.p3d",
	"str_topol.p3d",
	"str_topol2.p3d",
	"p_osika.p3d",
	"t_picea3f.p3d",
	"t_picea2s.p3d",
	"t_picea1s.p3d",
	"t_fagus2w.p3d",
	"t_fagus2s.p3d",
	"t_fagus2f.p3d",
	"t_betula1f.p3d",
	"t_betula2f.p3d",
	"t_betula2s.p3d",
	"t_betula2w.p3d",
	"t_alnus2s.p3d",
	"t_acer2s.p3d",
	"t_populus3s.p3d",
	"t_quercus2f.p3d",
	"t_sorbus2s.p3d",
	"t_malus1s.p3d",
	"t_salix2s.p3d",
	"t_picea1s_w.p3d",
	"t_picea2s_w.p3d",
	"t_ficusb2s_ep1.p3d",
	"t_populusb2s_ep1.p3d",
	"t_populusf2s_ep1.p3d",
	"t_amygdalusc2s_ep1.p3d",
	"t_ficusb2s_ep1.p3d",
	"t_pistacial2s_ep1.p3d",
	"t_pinuse2s_ep1.p3d",
	"t_pinuss3s_ep1.p3d",
	"t_prunuss2s_ep1.p3d",
	"t_pinusn2s.p3d",
	"t_pinusn1s.p3d",
	"t_pinuss2f.p3d",
	"t_poplar2f_dead_pmc.p3d",
	"misc_torzotree_pmc.p3d",
	"misc_burnspruce_pmc.p3d",
	"brg_cocunutpalm8.p3d",
	"brg_umbrella_acacia01b.p3d",
	"brg_jungle_tree_canopy_1.p3d",
	"brg_jungle_tree_canopy_2.p3d",
	"brg_cocunutpalm4.p3d",
	"brg_cocunutpalm3.p3d",
	"palm_01.p3d",
	"palm_02.p3d",
	"palm_03.p3d",
	"palm_04.p3d",
	"palm_09.p3d",
	"palm_10.p3d",
	"brg_cocunutpalm2.p3d",
	"brg_jungle_tree_antiaris.p3d",
	"brg_cocunutpalm1.p3d"
];