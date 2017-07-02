class M1911_DZ : Colt1911
{
	magazines[] = {7Rnd_45ACP_1911};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\M1911\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\M1911\sounds\Dry",0.01,1,10};            // new sound
	begin1[] = {"\z\addons\dayz_communityweapons\M1911\sounds\M1911_s1",5,1,800};           // new sound
	begin2[] = {"\z\addons\dayz_communityweapons\M1911\sounds\M1911_s2",5,1,800};           // new sound
	begin3[] = {"\z\addons\dayz_communityweapons\M1911\sounds\M1911_s3",5,1,800};           // new sound
	begin4[] = {"\z\addons\dayz_communityweapons\M1911\sounds\M1911_s4",5,1,800};           // new sound
	soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};               // new sound
};