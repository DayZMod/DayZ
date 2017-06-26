class LeeEnfield_DZ : LeeEnfield
{
	model = "z\addons\dayz_communityweapons\LeeEnfield\LeeEnfield.p3d";
	
	magazines[] = {10Rnd_303British};
	
	reloadSound[] = {"\z\addons\dayz_communityweapons\LeeEnfield\sounds\Bolt",1,1,35};           // new sound
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\LeeEnfield\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\LeeEnfield\sounds\Dry",0.01,1,10};            // new sound
	begin1[] = {"\z\addons\dayz_communityweapons\LeeEnfield\sounds\LeeEnfield_s1",5,1,1500};     // new sound
	begin2[] = {"\z\addons\dayz_communityweapons\LeeEnfield\sounds\LeeEnfield_s2",5,1,1500};     // new sound
	begin3[] = {"\z\addons\dayz_communityweapons\LeeEnfield\sounds\LeeEnfield_s3",5,1,1500};     // new sound
	begin4[] = {"\z\addons\dayz_communityweapons\LeeEnfield\sounds\LeeEnfield_s4",5,1,1500};     // new sound
	soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};                    // new sound
};