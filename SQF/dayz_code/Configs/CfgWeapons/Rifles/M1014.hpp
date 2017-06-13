class M1014_DZ : M1014
{
	model = "z\addons\dayz_communityweapons\m1014\m1014.p3d";
	picture = "\z\addons\dayz_communityweapons\m1014\data\w_m1014_ca.paa";
	displayName = $STR_DZ_WPN_M1014_NAME;
		
	magazines[] =
	{
		8Rnd_12Gauge_Slug,
		8Rnd_12Gauge_Buck,
		2Rnd_12Gauge_Slug,
		2Rnd_12Gauge_Buck
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\M1014\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\M1014\sounds\Dry",0.01,1,10};            // new sound
	class Single : Single
	{
		reloadTime = 0.27;
		begin1[] = {"\z\addons\dayz_communityweapons\M1014\sounds\M1014_s1",5,1,1000};      // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\M1014\sounds\M1014_s2",5,1,1000};      // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\M1014\sounds\M1014_s3",5,1,1000};      // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\M1014\sounds\M1014_s4",5,1,1000};      // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};           // new sound
	};
	
	distanceZoomMin=50;
	distanceZoomMax=50;
	
	class Attachments
	{
		Attachment_CCO = "M1014_CCO_DZ";
		Attachment_Holo = "M1014_Holo_DZ";
	};
};

class M1014_CCO_DZ : M1014_DZ
{
	model = "z\addons\dayz_communityweapons\m1014\m1014_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m1014\data\w_m1014_cco_ca.paa";
	displayName = $STR_DZ_WPN_M1014_CCO_NAME;
	
	distanceZoomMin=75;
	distanceZoomMax=75;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M1014_DZ'] call player_removeAttachment";
		};
	};
};

class M1014_Holo_DZ : M1014_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\m1014\m1014_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m1014\data\w_m1014_holo_ca.paa";
	displayName = $STR_DZ_WPN_M1014_HOLO_NAME;
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M1014_DZ'] call player_removeAttachment";
		};
	};
};