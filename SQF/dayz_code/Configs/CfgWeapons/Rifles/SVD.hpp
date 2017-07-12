class SVD_DZ : SVD
{
	picture = "\ca\weapons\data\equip\w_svd_ca.paa";
	displayName = $STR_DZ_WPN_SVD_NAME;
	
	weaponInfoType = "RscWeaponEmpty";
	discreteDistance[] = {};
	discreteDistanceInitIndex = 0;
	distanceZoomMin = 200;
	distanceZoomMax = 200;
	
	magazines[] = {10Rnd_762x54_SVD};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\SVD\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\SVD\sounds\Dry",0.01,1,10};            // new sound
	begin1[] = {"\z\addons\dayz_communityweapons\SVD\sounds\SVD_s1",5,1,1600};            // new sound
	begin2[] = {"\z\addons\dayz_communityweapons\SVD\sounds\SVD_s2",5,1,1600};            // new sound
	begin3[] = {"\z\addons\dayz_communityweapons\SVD\sounds\SVD_s3",5,1,1600};            // new sound
	begin4[] = {"\z\addons\dayz_communityweapons\SVD\sounds\SVD_s4",5,1,1600};            // new sound
	soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};             // new sound
	
	reloadTime = 0.06;
	
	recoil = "recoil_single_primary_4outof10";
	recoilProne = "recoil_single_primary_prone_4outof10";
	
	dispersion = 0.00045;
	
	class Attachments
	{
		Attachment_Ghillie = "SVD_Gh_DZ";
	};
};

class SVD_Gh_DZ : SVD_DZ
{
	model = "ca\weapons\svd_camo.p3d";
	picture = "\ca\weapons\data\equip\w_svd_camo_ca.paa";
	displayName = $STR_DZ_WPN_SVD_GH_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'SVD_DZ'] call player_removeAttachment";
		};
	};
};
