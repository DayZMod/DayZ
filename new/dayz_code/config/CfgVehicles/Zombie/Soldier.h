class DZ_ZombieSoldier : DZ_ZombieBase
{
	displayName = $STR_ZNAME_SOLDIER;
	model = "\ca\characters2\Blufor\Soldier_Light";
	
	zombieLoot = ZombieMilitary;
	
	class HitPoints : HitPoints
	{
		class HitHead
		{
			armor = 0.6;
			material = -1;
			name = "head_hit";
			passThrough = true;
		};
		
		class HitBody
		{
			armor = 5;
			material = -1;
			name = "body";
			passThrough = true;
		};
		
		class HitHands
		{
			armor = 1;
			material = -1;
			name = "hands";
			passThrough = true;
		};
		
		class HitLegs
		{
			armor = 1;
			material = -1;
			name = "legs";
			passThrough = true;
		};
	};
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\Blufor\data\Soldier.RVmat", "ca\characters2\Blufor\data\Soldier_W1.RVmat", "ca\characters2\Blufor\data\Soldier_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Light.RVmat", "ca\characters2\Blufor\data\Soldier_Light_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Light_W2.RVmat", "ca\characters2\Blufor\data\Soldier_EQUIP_Light.RVmat", "ca\characters2\Blufor\data\Soldier_Light_EQUIP_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Light_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_GL.RVmat", "ca\characters2\Blufor\data\Soldier_GL_W1.RVmat", "ca\characters2\Blufor\data\Soldier_GL_W2.RVmat", "ca\characters2\Blufor\data\Soldier_NCO.RVmat", "ca\characters2\Blufor\data\Soldier_NCO_W1.RVmat", "ca\characters2\Blufor\data\Soldier_NCO_W2.RVmat", "ca\characters2\Blufor\data\Soldier_MG.RVmat", "ca\characters2\Blufor\data\Soldier_MG_W1.RVmat", "ca\characters2\Blufor\data\Soldier_MG_W2.RVmat", "ca\characters2\Blufor\data\Soldier_AT.RVmat", "ca\characters2\Blufor\data\Soldier_AT_W1.RVmat", "ca\characters2\Blufor\data\Soldier_AT_W2.RVmat", "ca\characters2\Blufor\data\Soldier_CO.RVmat", "ca\characters2\Blufor\data\Soldier_CO_W1.RVmat", "ca\characters2\Blufor\data\Soldier_CO_W2.RVmat", "ca\characters2\Blufor\data\Soldier_CO_EQUIP.RVmat", "ca\characters2\Blufor\data\Soldier_CO_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_CO_EQUIP_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_EQUIP.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_EQUIP_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Guard.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Crew.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_EQUIP.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_EQUIP_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_EQUIP.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_EQUIP_W2.RVmat"};
	};
};

class DZ_ZombieSoldierPilot : DZ_ZombieSoldier
{
	displayName = $STR_ZNAME_PILOT;
	model = "\ca\characters_d_BAF\BAF_Pilot_BAF";
	hiddenSelections[] = {"Camo", "Camo2", "Camo3"};
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\camo_dpm_co.paa", "\ca\characters_W_baf\data\armour_dpm_co.paa", "\ca\characters_W_baf\data\equip_dpm_co.paa"};
	
	zombieLoot = ZombieMilitary;
	
	class HitPoints : HitPoints
	{
		class HitHead
		{
			armor = 2;
			material = -1;
			name = "head_hit";
			passThrough = true;
		};
		
		class HitBody
		{
			armor = 3;
			material = -1;
			name = "body";
			passThrough = true;
		};
		
		class HitHands
		{
			armor = 1;
			material = -1;
			name = "hands";
			passThrough = true;
		};
		
		class HitLegs
		{
			armor = 1;
			material = -1;
			name = "legs";
			passThrough = true;
		};
	};
};

class DZ_ZombieSoldierHeavy : DZ_ZombieSoldier
{
	displayName = $STR_ZNAME_SOLDIERHEAVY;
	model = "\ca\characters2\Blufor\Soldier";
	
	zombieLoot = ZombieMilitary;
	
	class HitPoints : HitPoints
	{
		class HitHead
		{
			armor = 1;
			material = -1;
			name = "head_hit";
			passThrough = true;
		};
		
		class HitBody
		{
			armor = 10;
			material = -1;
			name = "body";
			passThrough = true;
		};
		
		class HitHands
		{
			armor = 1;
			material = -1;
			name = "hands";
			passThrough = true;
		};
		
		class HitLegs
		{
			armor = 1;
			material = -1;
			name = "legs";
			passThrough = true;
		};
	};
};