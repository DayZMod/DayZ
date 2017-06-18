class Makarov_DZ : Makarov
{
	displayName = $STR_DZ_WPN_PM_NAME;
	magazines[] =
	{
		8Rnd_9x18_Makarov,
		8Rnd_9x18_MakarovSD
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\Makarov\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\Makarov\sounds\Dry",0.01,1,10};            // new sound
	begin1[] = {"\z\addons\dayz_communityweapons\Makarov\sounds\Maka_s1",5,1,700};            // new sound
	begin2[] = {"\z\addons\dayz_communityweapons\Makarov\sounds\Maka_s2",5,1,700};            // new sound
	begin3[] = {"\z\addons\dayz_communityweapons\Makarov\sounds\Maka_s3",5,1,700};            // new sound
	begin4[] = {"\z\addons\dayz_communityweapons\Makarov\sounds\Maka_s4",5,1,700};            // new sound
	soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};                 // new sound
	
	class Attachments
	{
		Attachment_SupMakarov = "Makarov_SD_DZ"; //left to maintain old suppressor attachment
		Attachment_Sup9 = "Makarov_SD_DZ";
	};
};

class Makarov_SD_DZ : MakarovSD
{
	displayName = $STR_DZ_WPN_PM_SD_NAME;
	magazines[] =
	{
		8Rnd_9x18_MakarovSD,
		8Rnd_9x18_Makarov
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\Makarov\sounds\Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\Makarov\sounds\Dry",0.01,1,10};            // new sound
	begin1[] = {"\z\addons\dayz_communityweapons\Makarov\sounds\Maka_SD_s1",5,1,50};          // new sound
	begin2[] = {"\z\addons\dayz_communityweapons\Makarov\sounds\Maka_SD_s2",5,1,50};          // new sound
	begin3[] = {"\z\addons\dayz_communityweapons\Makarov\sounds\Maka_SD_s3",5,1,50};          // new sound
	begin4[] = {"\z\addons\dayz_communityweapons\Makarov\sounds\Maka_SD_s4",5,1,50};          // new sound
	soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};                 // new sound
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'Makarov_DZ'] call player_removeAttachment";
		};
	};
};