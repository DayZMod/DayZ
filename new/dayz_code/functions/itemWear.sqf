#define BODY(x) \
private "_cfg"; \
_cfg = configFile >> x >> _this >> "ItemWear"; \
if !isClass _cfg exitWith { _this }; \
if (getNumber (_cfg >> "chance") < random 1) exitWith { _this }; \
getText (_cfg >> "item")

dz_fn_weaponWear = { BODY("CfgWeapons") };
dz_fn_magazineWear = { BODY("CfgMagazines") };