class HitDamage
{
	class Group0
	{
		// HIT sound - played once
		hitSounds[] =
		{
			{{"ca\sounds\Characters\Noises\Damage\banz-hit-01", db-15, 1, 120}, 0.2},
			{{"ca\sounds\Characters\Noises\Damage\banz-hit-02", db-15, 1, 120}, 0.2},
			{{"ca\sounds\Characters\Noises\Damage\banz-hit-03", db-15, 1, 120}, 0.2},
			{{"ca\sounds\Characters\Noises\Damage\banz-hit-04", db-15, 1, 120}, 0.1},
			{{"ca\sounds\Characters\Noises\Damage\banz-hit-05", db-15, 1, 120}, 0.1},
			{{"ca\sounds\Characters\Noises\Damage\banz-hit-06", db-15, 1, 120}, 0.1},
			{{"ca\sounds\Characters\Noises\Damage\banz-hit-07", db-15, 1, 120}, 0.1}
		};

		// DAMAGE sound - played repeately
		damageSounds[] =
		{
			// sampl, vol, freq, listDistance, prob, min, mid, max
			{"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-01", db-25, 1, 120, 0.25, 5, 6, 10}},
			{"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-02", db-25, 1, 120, 0.25, 5, 7.5, 10}},
			{"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-03", db-25, 1, 120, 0.25, 5, 6, 10}},
			{"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-04", db-25, 1, 120, 0.25, 5, 7.5, 10}},
			
			{"hands", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-07-arm", db-25, 1, 120, 0.5, 0, 2.5, 5}},
			{"hands", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-08-arm", db-25, 1, 120, 0.5, 0, 2.5, 5}},
			
			{"legs", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-05-leg", db-25, 1, 120, 0.5, 0, 1, 2}},
			{"legs", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-06-leg", db-25, 1, 120, 0.5, 0, 1, 2}}
		};
	};
};

class SoundBreath
{
	breath0[] =
	{
		{{{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-01", db-25, 1, 8}, 0.25},
		 {{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-02", db-25, 1, 8}, 0.25},
		 {{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-03", db-25, 1, 8}, 0.25},
		 {{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-04", db-18, 1, 8}, 0.25}},
		
		{{{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-01", db-25, 1, 15}, 0.25},
		 {{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-02", db-25, 1, 15}, 0.25},
		 {{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-03", db-25, 1, 15}, 0.25},
		 {{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-04", db-18, 1, 15}, 0.25}},
		
		{{{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-01", db-20, 1, 20}, 0.25},
		 {{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-02", db-20, 1, 20}, 0.25},
		 {{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-03", db-20, 1, 20}, 0.25},
		 {{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-04", db-20, 1, 20}, 0.25}}
	};
};

class SoundEquipment
{
	soldier[] =
	{
		{"walk", {"", db-55, 1, 13}},
		{"run", {"", db-50, 1, 20}},
		{"sprint", {"", db-48, 1, 25}}
	};
	
	civilian[] =
	{
		{"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-01", db-15, 1, 8}},
		{"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-02", db-15, 1, 8}},
		{"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-03", db-15, 1, 8}},
		{"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-04", db-15, 1, 8}},
		{"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-05", db-15, 1, 8}},
		{"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-06", db-15, 1, 8}},
		{"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-07", db-15, 1, 8}},
		{"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-08", db-15, 1, 8}},
		
		{"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-01", db-20, 1, 15}},
		{"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-02", db-20, 1, 15}},
		{"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-03", db-20, 1, 15}},
		{"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-04", db-20, 1, 15}},
		{"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-05", db-20, 1, 15}},
		{"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-06", db-20, 1, 15}},
		{"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-07", db-20, 1, 15}},
		{"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-08", db-20, 1, 15}},
		
		{"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-01", db-25, 1, 20}},
		{"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-02", db-25, 1, 20}},
		{"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-03", db-25, 1, 20}},
		{"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-04", db-25, 1, 20}},
		{"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-05", db-25, 1, 20}},
		{"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-06", db-25, 1, 20}},
		{"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-07", db-25, 1, 20}},
		{"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-08", db-25, 1, 20}}
	};
};
