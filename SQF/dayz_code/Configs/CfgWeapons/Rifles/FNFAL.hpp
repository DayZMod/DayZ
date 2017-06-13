class FNFAL_DZ : FN_FAL
{
	model = "z\addons\dayz_communityweapons\fnfal\fnfal.p3d";
	picture = "\z\addons\dayz_communityweapons\fnfal\data\w_fnfal_ca.paa";
	displayName = $STR_DZ_WPN_FNFAL_NAME;
	
	magazines[] = {20Rnd_762x51_FNFAL};
	
	modes[] = {Single};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\FNFAL\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\FNFAL\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single                                                                   // new sound
	{                                                                                       // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\FNFAL\sounds\FNFAL_s1",5,1,1500};      // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\FNFAL\sounds\FNFAL_s2",5,1,1500};      // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\FNFAL\sounds\FNFAL_s3",5,1,1500};      // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\FNFAL\sounds\FNFAL_s4",5,1,1500};      // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};           // new sound
	};                                                                                      // new sound
	
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	
	class Attachments
	{
		Attachment_CCO = "FNFAL_CCO_DZ";
		Attachment_Holo = "FNFAL_Holo_DZ";
	};
};

class FNFAL_CCO_DZ : FNFAL_DZ
{
	model = "z\addons\dayz_communityweapons\fnfal\fnfal_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\fnfal\data\w_fnfal_cco_ca.paa";
	displayName = $STR_DZ_WPN_FNFAL_CCO_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'FNFAL_DZ'] call player_removeAttachment";
		};
	};
};

class FNFAL_Holo_DZ : FNFAL_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\fnfal\fnfal_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\fnfal\data\w_fnfal_holo_ca.paa";
	displayName = $STR_DZ_WPN_FNFAL_HOLO_NAME;
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'FNFAL_DZ'] call player_removeAttachment";
		};
	};
};

class FNFAL_ANPVS4_DZ : FN_FAL_ANPVS4
{
	modes[] = {Single};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\FNFAL\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\FNFAL\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single                                                                   // new sound
	{                                                                                       // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\FNFAL\sounds\FNFAL_s1",5,1,1500};      // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\FNFAL\sounds\FNFAL_s2",5,1,1500};      // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\FNFAL\sounds\FNFAL_s3",5,1,1500};      // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\FNFAL\sounds\FNFAL_s4",5,1,1500};      // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};           // new sound
	};                                                                                      // new sound
};