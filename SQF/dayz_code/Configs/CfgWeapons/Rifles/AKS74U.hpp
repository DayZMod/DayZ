class AKS74U_Kobra_DZ : AKS_74_U
{
	model = "z\addons\dayz_communityweapons\aks74u\aks74u_kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\aks74u\data\w_aks74u_kobra_ca.paa";
	displayName = $STR_DZ_WPN_AKS74U_KOBRA_NAME;
	
	magazines[] =
	{
		30Rnd_545x39_AK,
		30Rnd_545x39_AKSD
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single                                                                    // new sound
	{                                                                                        // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74u_s1",5,1,1000};     // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74u_s2",5,1,1000};     // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74u_s3",5,1,1000};     // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74u_s4",5,1,1000};     // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};            // new sound
	};                                                                                       // new sound
	class Burst : Burst                                                                      // new sound
	{                                                                                        // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74u_s1",5,1,1000};     // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74u_s2",5,1,1000};     // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74u_s3",5,1,1000};     // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74u_s4",5,1,1000};     // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};            // new sound
	};                                                                                       // new sound
	class FullAuto : FullAuto                                                                // new sound
	{                                                                                        // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74u_s1",5,1,1000};     // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74u_s2",5,1,1000};     // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74u_s3",5,1,1000};     // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74u_s4",5,1,1000};     // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};            // new sound
	};                                                                                       // new sound
	
	class Attachments
	{
		Attachment_Sup545 = "AKS74U_Kobra_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'AKS74U_DZ'] call player_removeAttachment";
		};
	};
};

class AKS74U_Kobra_SD_DZ : AKS_74_UN_kobra
{
	model = "z\addons\dayz_communityweapons\aks74u\aks74u_kobra_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\aks74u\data\w_aks74u_kobra_sd_ca.paa";
	displayName = $STR_DZ_WPN_AKS74U_KOBRA_SD_NAME;
	
	magazines[] =
	{
	//	30Rnd_545x39_AK,
		30Rnd_545x39_AKSD
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single                                                                    // new sound
	{                                                                                        // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74U_sd_s1",1,1,90};    // new sound
		soundBegin[] = {"begin1",1};                                                         // new sound
	};                                                                                       // new sound
	class Burst : Burst           	                                                         // new sound
	{                                                                                        // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74U_sd_s1",1,1,90};    // new sound
		soundBegin[] = {"begin1",1};                                                         // new sound
	};                                                                                       // new sound
	class FullAuto : FullAuto                                                                // new sound
	{                                                                                        // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\aks74u\sounds\AKS74U_sd_s1",1,1,90};    // new sound
		soundBegin[] = {"begin1",1};                                                         // new sound
	};                                                                                       // new sound
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'AKS74U_SD_DZ'] call player_removeAttachment";
		};
		
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup545',_id,'AKS74U_Kobra_DZ'] call player_removeAttachment";
		};
	};
};

class AKS74U_DZ : AKS74U_Kobra_DZ
{
	model = "z\addons\dayz_communityweapons\aks74u\aks74u.p3d";
	picture = "\z\addons\dayz_communityweapons\aks74u\data\w_aks74u_ca.paa";
	displayName = $STR_DZ_WPN_AKS74U_NAME;
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {350,500};
	discreteDistanceInitIndex = 0;
	
	class Attachments
	{
		Attachment_Kobra = "AKS74U_Kobra_DZ";
		Attachment_Sup545 = "AKS74U_SD_DZ";
	};
	
	class ItemActions {};
};

class AKS74U_SD_DZ : AKS74U_Kobra_SD_DZ
{
	model = "z\addons\dayz_communityweapons\aks74u\aks74u_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\aks74u\data\w_aks74u_sd_ca.paa";
	displayName = $STR_DZ_WPN_AKS74U_SD_NAME;
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,350,500};
	discreteDistanceInitIndex = 0;
	
	class Attachments
	{
		Attachment_Kobra = "AKS74U_Kobra_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup545',_id,'AKS74U_DZ'] call player_removeAttachment";
		};
	};
};