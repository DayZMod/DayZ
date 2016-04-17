class DZ_ZombieWorker1 : DZ_ZombieBase
{ 
	displayName = $STR_ZNAME_WORKER;
	
	model = "\ca\characters2\Civil\Worker.p3d";
	hiddenSelections[] = {"Camo"};
	
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"\ca\characters2\Civil\Worker\Data\worker.rvmat",
			"\ca\characters2\Civil\Worker\Data\W1_worker.rvmat",
			"\ca\characters2\Civil\Worker\Data\W2_worker.rvmat"
		};
	};
};

class DZ_ZombieWorker2 : DZ_ZombieWorker1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\Civil\Worker\Data\worker_v2_co.paa"};
};

class DZ_ZombieWorker3 : DZ_ZombieWorker1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\Civil\Worker\Data\worker_v3_co.paa"};
};

class DZ_ZombieWorker4 : DZ_ZombieWorker1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\Civil\Worker\Data\worker_v4_co.paa"};
};