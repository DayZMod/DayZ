class House_F: House
{
	class DestructionEffects;
};
	
class Land_houseV_2T2 : House_F
{
	vehicleclass="DS_houses";
	scope=2;
	model="z\addons\dayz_buildings\a2_HouseV_2t2\d_HouseV_2t2.p3d";
	armor=1000;
	mapSize=20;
	displayName="HouseV_2t2";
	numberOfDoors = 10;
	class HitPoints
	{
		class Hit1
		{
			armor=1;
			material=-1;
			name="dam 1";
			visual="damT1";
			passThrough=1;
			convexComponent="dam 1";
			class DestructionEffects
			{
				class Dust
				{
					simulation="particles";
					type="HousePartDust";
					position="";
					intensity=1;
					interval=1;
					lifeTime=0.0099999998;
				};
				class Dust2 : Dust {type="HousePartDustLong";};
				class Walls : Dust {type="HousePartWall";};
			};
		};
		class Glass_1_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_1";
			visual="Glass_1_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_1_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_1_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_1_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_1_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_1_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_1_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_1_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_1_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_1_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_1_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_1_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_2_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_2";
			visual="Glass_2_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_2_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_2_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_2_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_2_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_2_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_2_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_2_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_2_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_2_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_2_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_2_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_3_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_3";
			visual="Glass_3_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_3_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_3_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_3_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_3_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_3_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_3_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_3_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_3_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_3_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_3_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_3_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_4_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_4";
			visual="Glass_4_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_4_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_4_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_4_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_4_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_4_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_4_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_4_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_4_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_4_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_4_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_4_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_5_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_5";
			visual="Glass_5_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_5_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_5_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_5_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_5_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_5_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_5_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_5_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_5_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_5_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_5_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_5_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_6_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_6";
			visual="Glass_6_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_6_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_6_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_6_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_6_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_6_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_6_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_6_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_6_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_6_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_6_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_6_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_7_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_7";
			visual="Glass_7_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_7_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_7_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_7_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_7_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_7_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_7_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_7_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_7_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_7_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_7_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_7_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_8_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_8";
			visual="Glass_8_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_8_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_8_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_8_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_8_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_8_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_8_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_8_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_8_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_8_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_8_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_8_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_9_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_9";
			visual="Glass_9_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_9_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_9_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_9_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_9_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_9_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_9_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_9_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_9_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_9_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_9_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_9_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_10_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_10";
			visual="Glass_10_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_10_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_10_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_10_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_10_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_10_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_10_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_10_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_10_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_10_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_10_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_10_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_11_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_11";
			visual="Glass_11_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_11_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_11_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_11_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_11_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_11_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_11_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_11_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_11_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_11_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_11_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_11_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_12_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_12";
			visual="Glass_12_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_12_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_12_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_12_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_12_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_12_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_12_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_12_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_12_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_12_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_12_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_12_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_13_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_13";
			visual="Glass_13_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_13_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_13_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_13_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_13_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_13_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_13_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_13_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_13_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_13_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_13_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_13_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		class Glass_14_hitpoint
		{
			armor=0.0049999999;
			material=-1;
			name="Glass_14";
			visual="Glass_14_hide";
			passThrough=0;
			radius=0.375;
			convexComponent="Glass_14_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation="particles";
					type="BrokenGlass1NS";
					position="Glass_14_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2
				{
					simulation="particles";
					type="BrokenGlass2NS";
					position="Glass_14_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3
				{
					simulation="particles";
					type="BrokenGlass3NS";
					position="Glass_14_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4
				{
					simulation="particles";
					type="BrokenGlass4NS";
					position="Glass_14_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5
				{
					simulation="particles";
					type="BrokenGlass5NS";
					position="Glass_14_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass1S
				{
					simulation="particles";
					type="BrokenGlass1SS";
					position="Glass_14_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass2S
				{
					simulation="particles";
					type="BrokenGlass2SS";
					position="Glass_14_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass3S
				{
					simulation="particles";
					type="BrokenGlass3SS";
					position="Glass_14_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass4S
				{
					simulation="particles";
					type="BrokenGlass4SS";
					position="Glass_14_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
				class BrokenGlass5S
				{
					simulation="particles";
					type="BrokenGlass5SS";
					position="Glass_14_effects";
					intensity=0.15000001;
					interval=1;
					lifeTime=0.050000001;
				};
			};
		};
		
	};
	replaceDamagedHitpoints[]=
	{
		"Glass_1_hitpoint",
		"Glass_2_hitpoint",
		"Glass_3_hitpoint",
		"Glass_4_hitpoint",
		"Glass_5_hitpoint",
		"Glass_6_hitpoint",
		"Glass_7_hitpoint",
		"Glass_8_hitpoint",
		"Glass_9_hitpoint",
		"Glass_9_hitpoint",
		"Glass_10_hitpoint",
		"Glass_11_hitpoint",
		"Glass_12_hitpoint",
		"Glass_13_hitpoint",
		"Glass_14_hitpoint"
	};
	class Damage
	{
		tex[]=
		{
			"A3\Structures_F\Data\Windows\window_set_CA.paa",
			"A3\Structures_F\Data\Windows\destruct_half_window_set_CA.paa"
		};
		mat[]=
		{
			"A3\Structures_F\Data\Windows\window_set.rvmat",
			"A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat",
			"A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat"
		};
	};
	class AnimationSources
	{
		class dvere_1_source
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="GenericDoorsSound";
		};
		class dvere_2_source : dvere_1_source {};	
		class dvere_3_source : dvere_1_source {};
		class dvere_4_source : dvere_1_source {};
		class dvere_5_source : dvere_1_source {};
		class dvere_6_source : dvere_1_source {};
		class dvere_7_source : dvere_1_source {};
		class dvere_8_source : dvere_1_source {};
		class dvere_9_source : dvere_1_source {};
		class dvere_10_source: dvere_1_source {};
		class Glass_1_source
		{
			source="Hit";
			hitpoint="Glass_1_hitpoint";
			raw=1;
		};
		class Glass_2_source : Glass_1_source {hitpoint="Glass_2_hitpoint";};
		class Glass_3_source : Glass_1_source {hitpoint="Glass_3_hitpoint";};
		class Glass_4_source : Glass_1_source {hitpoint="Glass_4_hitpoint";};
		class Glass_5_source : Glass_1_source {hitpoint="Glass_5_hitpoint";};
		class Glass_6_source : Glass_1_source {hitpoint="Glass_6_hitpoint";};
		class Glass_7_source : Glass_1_source {hitpoint="Glass_7_hitpoint";};
		class Glass_8_source : Glass_1_source {hitpoint="Glass_8_hitpoint";};
		class Glass_9_source : Glass_1_source {hitpoint="Glass_9_hitpoint";};
		class Glass_10_source: Glass_1_source {hitpoint="Glass_10_hitpoint";};
		class Glass_11_source: Glass_1_source {hitpoint="Glass_11_hitpoint";};
		class Glass_12_source: Glass_1_source {hitpoint="Glass_12_hitpoint";};
		class Glass_13_source: Glass_1_source {hitpoint="Glass_13_hitpoint";};
		class Glass_14_source: Glass_1_source {hitpoint="Glass_14_hitpoint";};	
	};
	class UserActions
	{
		class OpenDoors1
		{
			//displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName=$STR_DN_OUT_o_DOOR;
			position=akce_dvere1;
			radius=1.5;
			onlyForPlayer=false;
			condition="this animationPhase ""dvere1"" < 0.5 && ((this getVariable ['bis_disabled_Door_1',0]) != 1)";
			statement="this animate [""dvere1"", 1]";
		};
		class CloseDoors1
		{
			//displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName=$STR_DN_OUT_C_DOOR;
			position=akce_dvere1;
			radius=1.5;
			onlyForPlayer=false;
			condition="this animationPhase ""dvere1"" >= 0.5 && ((this getVariable ['bis_disabled_Door_1',0]) != 1)";
			statement="this animate [""dvere1"", 0]";
		};
		class OpenDoors2 : OpenDoors1
		{
			position=akce_dvere2;
			condition="this animationPhase ""dvere2"" < 0.5 && ((this getVariable ['bis_disabled_Door_2',0]) != 1)";
			statement="this animate [""dvere2"", 1]";
		};
		class CloseDoors2 : CloseDoors1
		{
			position=akce_dvere2;
			condition="this animationPhase ""dvere2"" >= 0.5 && ((this getVariable ['bis_disabled_Door_2',0]) != 1)";
			statement="this animate [""dvere2"", 0]";
		};
		class OpenDoors3 : OpenDoors1
		{
			position=akce_dvere3;
			condition="this animationPhase ""dvere3"" < 0.5 && ((this getVariable ['bis_disabled_Door_3',0]) != 1)";
			statement="this animate [""dvere3"", 1]";
		};
		class CloseDoors3 : CloseDoors1
		{
			position=akce_dvere3;
			condition="this animationPhase ""dvere3"" >= 0.5 && ((this getVariable ['bis_disabled_Door_3',0]) != 1)";
			statement="this animate [""dvere3"", 0]";
		};
		class OpenDoors4 : OpenDoors1
		{
			position=akce_dvere4;
			condition="this animationPhase ""dvere4"" < 0.5 && ((this getVariable ['bis_disabled_Door_4',0]) != 1)";
			statement="this animate [""dvere4"", 1]";
		};
		class CloseDoors4 : CloseDoors1
		{
			position=akce_dvere4;
			condition="this animationPhase ""dvere4"" >= 0.5 && ((this getVariable ['bis_disabled_Door_4',0]) != 1)";
			statement="this animate [""dvere4"", 0]";
		};
		class OpenDoors5 : OpenDoors1
		{
			position=akce_dvere5;
			condition="this animationPhase ""dvere5"" < 0.5 && ((this getVariable ['bis_disabled_Door_5',0]) != 1)";
			statement="this animate [""dvere5"", 1]";
		};
		class CloseDoors5 : CloseDoors1
		{	
			position=akce_dvere5;
			condition="this animationPhase ""dvere5"" >= 0.5 && ((this getVariable ['bis_disabled_Door_5',0]) != 1)";
			statement="this animate [""dvere5"", 0]";
		};
		class OpenDoors6 : OpenDoors1
		{
			position=akce_dvere6;
			condition="this animationPhase ""dvere6"" < 0.5 && ((this getVariable ['bis_disabled_Door_6',0]) != 1)";
			statement="this animate [""dvere6"", 1]";
		};
		class CloseDoors6 : CloseDoors1
		{	
			position=akce_dvere6;
			condition="this animationPhase ""dvere6"" >= 0.5 && ((this getVariable ['bis_disabled_Door_6',0]) != 1)";
			statement="this animate [""dvere6"", 0]";
		};
		class OpenDoors7 : OpenDoors1
		{
			position=akce_dvere7;
			condition="this animationPhase ""dvere7"" < 0.5 && ((this getVariable ['bis_disabled_Door_7',0]) != 1)";
			statement="this animate [""dvere7"", 1]";
		};
		class CloseDoors7 : CloseDoors1
		{
			position=akce_dvere7;
			condition="this animationPhase ""dvere7"" >= 0.5 && ((this getVariable ['bis_disabled_Door_7',0]) != 1)";
			statement="this animate [""dvere7"", 0]";
		};
		class OpenDoors8 : OpenDoors1
		{
			position=akce_dvere8;
			condition="this animationPhase ""dvere8"" < 0.5 && ((this getVariable ['bis_disabled_Door_8',0]) != 1)";
			statement="this animate [""dvere8"", 1]";
		};
		class CloseDoors8 : CloseDoors1
		{	
			position=akce_dvere8;
			condition="this animationPhase ""dvere8"" >= 0.5 && ((this getVariable ['bis_disabled_Door_8',0]) != 1)";
			statement="this animate [""dvere8"", 0]";
		};
		class OpenDoors9 : OpenDoors1
		{
			position=akce_dvere910;
			condition="this animationPhase ""dvere9"" < 0.5 && ((this getVariable ['bis_disabled_Door_9',0]) != 1)";
			statement="this animate [""dvere9"", 1]";
		};
		class CloseDoors9 : CloseDoors1
		{
			position=akce_dvere910;
			condition="this animationPhase ""dvere9"" >= 0.5 && ((this getVariable ['bis_disabled_Door_9',0]) != 1)";
			statement="this animate [""dvere9"", 0]";
		};
		class OpenDoors10 : OpenDoors1
		{
			position=akce_dvere910;
			condition="this animationPhase ""dvere10"" < 0.5 && ((this getVariable ['bis_disabled_Door_10',0]) != 1)";
			statement="this animate [""dvere10"", 1]";
		};
		class CloseDoors10 : CloseDoors1
		{
			position=akce_dvere910;
			condition="this animationPhase ""dvere10"" >= 0.5 && ((this getVariable ['bis_disabled_Door_10',0]) != 1)";
			statement="this animate [""dvere10"", 0]";
		};
	};
	actionBegin1 = "OpenDoors1";
	actionEnd1   = "OpenDoors1";
	actionBegin2 = "OpenDoors2";
	actionEnd2   = "OpenDoors2";
	actionBegin3 = "OpenDoors3";
	actionEnd3   = "OpenDoors3";
	actionBegin4 = "OpenDoors4";
	actionEnd4   = "OpenDoors4";
	actionBegin5 = "OpenDoors5";
	actionEnd5   = "OpenDoors5";
	actionBegin6 = "OpenDoors6";
	actionEnd6   = "OpenDoors6";
	actionBegin7 = "OpenDoors7";
	actionEnd7   = "OpenDoors7";
	actionBegin8 = "OpenDoors8";
	actionEnd8   = "OpenDoors8";
	actionBegin9 = "OpenDoors9";
	actionEnd9   = "OpenDoors9";
	actionBegin10= "OpenDoors10";
	actionEnd10  = "OpenDoors10";
};