class M240_DZ : M240
{
	picture = "\z\addons\dayz_communityweapons\m240\data\w_m240_ca.paa";
	displayName = $STR_DZ_WPN_M240_NAME;
	type = WeaponSlotPrimary;
	
	magazines[] = {100Rnd_762x51_M240};
	
	modes[] = {FullAuto};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\M240\sounds\Reload",1,1,35};	// new sound
	drySound[] = {"\z\addons\dayz_communityweapons\M240\sounds\Dry",0.01,1,10};             // new sound
	class FullAuto : Manual                                                                 // new sound
	{                                                                                       // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\M240\sounds\M240_s1",5,1,1600};        // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\M240\sounds\M240_s2",5,1,1600};        // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\M240\sounds\M240_s3",5,1,1600};        // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\M240\sounds\M240_s4",5,1,1600};        // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};           // new sound
	};                                                                                      // new sound
	
	class Attachments
	{
		Attachment_CCO = M240_CCO_DZ;
		Attachment_Holo = M240_Holo_DZ;
	};
};

class M240_CCO_DZ : M240_DZ
{
	model = "z\addons\dayz_communityweapons\m240\m240_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m240\data\w_m240_cco_ca.paa";
	displayName = $STR_DZ_WPN_M240_CCO_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M240_DZ'] call player_removeAttachment";
		};
	};
};

class M240_Holo_DZ : M240_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\m240\m240_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m240\data\w_m240_holo_ca.paa";
	displayName = $STR_DZ_WPN_M240_HOLO_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M240_DZ'] call player_removeAttachment";
		};
	};
};