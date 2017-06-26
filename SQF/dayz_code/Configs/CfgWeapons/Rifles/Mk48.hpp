class Mk48_CCO_DZ : Mk_48
{
	model = "z\addons\dayz_communityweapons\mk48\mk48_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\mk48\data\w_mk48_cco_camo_ca.paa";
	displayName = $STR_DZ_WPN_MK48_CCO_NAME;
	type = WeaponSlotPrimary;
	
	magazines[] = {100Rnd_762x51_M240};
	
	modes[] = {FullAuto};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\MK48\sounds\Reload",1,1,35};	// new sound
	drySound[] = {"\z\addons\dayz_communityweapons\MK48\sounds\Dry",0.01,1,10};             // new sound
	class FullAuto : Manual                                                                 // new sound
	{                                                                                       // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\MK48\sounds\MK48_s1",5,1,1500};        // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\MK48\sounds\MK48_s2",5,1,1500};        // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\MK48\sounds\MK48_s3",5,1,1500};        // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\MK48\sounds\MK48_s4",5,1,1500};        // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};           // new sound
	};                                                                                      // new sound
	
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Mk48_DZ'] call player_removeAttachment";
		};
	};
};

class Mk48_DZ : Mk48_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\mk48\mk48.p3d";
	picture = "\z\addons\dayz_communityweapons\mk48\data\w_mk48_camo_ca.paa";
	displayName = $STR_DZ_WPN_MK48_NAME;
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
	
	class Attachments
	{
		Attachment_CCO = "Mk48_CCO_DZ";
		Attachment_Holo = "Mk48_Holo_DZ";
	};
	
	class ItemActions {};
};

class Mk48_Holo_DZ : Mk48_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\mk48\mk48_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\mk48\data\w_mk48_holo_camo_ca.paa";
	displayName = $STR_DZ_WPN_MK48_HOLO_NAME;
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'Mk48_DZ'] call player_removeAttachment";
		};
	};
};