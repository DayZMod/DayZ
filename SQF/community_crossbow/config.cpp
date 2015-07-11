class CfgPatches
{
	class community_crossbow
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_anim"};
	};
};

//Legacy
class CfgWeapons
{
	class FakeWeapon;
	class Crossbow_FL : FakeWeapon {};
	class Crossbow_CCO : FakeWeapon {};
	class Crossbow_CCO_FL : FakeWeapon {};
	class Crossbow_SCOPED : FakeWeapon {};
	class Crossbow_SCOPED_FL : FakeWeapon {};
};