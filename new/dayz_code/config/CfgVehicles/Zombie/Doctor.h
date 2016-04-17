class DZ_ZombieDoctor : DZ_ZombieBase
{ 
	displayName = $STR_ZNAME_DOCTOR;
	
	model = "\ca\characters2\civil\Doctor\Doctor";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\dayz\textures\clothes\doctor_co.paa"};
	
	zombieLoot = MedicalHigh;
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\doctor\data\doctor.rvmat", "ca\characters2\civil\doctor\data\W1_doctor.rvmat", "ca\characters2\civil\doctor\data\W2_doctor.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};