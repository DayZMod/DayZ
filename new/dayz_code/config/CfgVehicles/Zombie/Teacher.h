class DZ_ZombieTeacher : DZ_ZombieBase
{ 
	displayName = $STR_ZNAME_TEACHER;
	
	model = "\ca\characters2\civil\Doctor\Doctor";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\dayz\textures\clothes\teacher_co.paa"};
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\doctor\data\doctor.rvmat", "ca\characters2\civil\doctor\data\W1_doctor.rvmat", "ca\characters2\civil\doctor\data\W2_doctor.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
}; 