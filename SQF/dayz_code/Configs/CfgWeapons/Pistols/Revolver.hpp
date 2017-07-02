class Revolver_DZ : revolver_EP1
{
	magazines[] = {6Rnd_45ACP};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\Revolver\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\Revolver\sounds\Dry",0.01,1,10};            // new sound
	begin1[] = {"\z\addons\dayz_communityweapons\Revolver\sounds\revolver_s1",5,1,800};        // new sound
	begin2[] = {"\z\addons\dayz_communityweapons\Revolver\sounds\revolver_s2",5,1,800};        // new sound
	begin3[] = {"\z\addons\dayz_communityweapons\Revolver\sounds\revolver_s3",5,1,800};        // new sound
	begin4[] = {"\z\addons\dayz_communityweapons\Revolver\sounds\revolver_s4",5,1,800};        // new sound
	soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};                  // new sound
};