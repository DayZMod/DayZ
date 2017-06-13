//no attachments on either of the M16A2s.
class M16A2_DZ : M16A2
{	
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_StanagSD
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_Reload",1,1,35}; // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_Dry",0.01,1,10};	        // new sound
	class Single : Single                                                                       // new sound
	{                                                                                           // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s1",5,1,1000};            // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s2",5,1,1000};            // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s3",5,1,1000};            // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s4",5,1,1000};            // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};               // new sound
	};                                                                                          // new sound
	class Burst : Burst                                                                         // new sound
	{                                                                                           // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s1",5,1,1000};            // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s2",5,1,1000};            // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s3",5,1,1000};            // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s4",5,1,1000};            // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};               // new sound
	};                                                                                          // new sound
	
	class Attachments
	{
		Attachment_M203 = "M16A2_GL_DZ";
	};
};

class M16A2_GL_DZ : M16A2GL
{	
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_StanagSD
	};
	
	reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_Reload",1,1,35};          // new sound
	drySound[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_Dry",0.01,1,10};	                 // new sound
	class Single : Single                                                                                // new sound
	{                                                                                                    // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s1",5,1,1000};                     // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s2",5,1,1000};                     // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s3",5,1,1000};                     // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s4",5,1,1000};                     // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};                        // new sound
	};                                                                                                   // new sound
	class Burst : Burst                                                                                  // new sound
	{                                                                                                    // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s1",5,1,1000};                     // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s2",5,1,1000};                     // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s3",5,1,1000};                     // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\M16A4\sounds\M16_s4",5,1,1000};                     // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};                        // new sound
	};                                                                                                   // new sound
	class M203Muzzle : M203Muzzle                                                                        // new sound
	{                                                                                                    // new sound
		reloadMagazineSound[] = {"\z\addons\dayz_communityweapons\M4A1\sounds\M203\M203_Reload",1,1,35}; // new sound
		drySound[] = {"\z\addons\dayz_communityweapons\M4A1\sounds\M203\M203_Dry",0.01,1,10};            // new sound
		begin1[] = {"\z\addons\dayz_communityweapons\M4A1\sounds\M203\M203_s1",0.1,1,400};               // new sound
		begin2[] = {"\z\addons\dayz_communityweapons\M4A1\sounds\M203\M203_s2",0.1,1,400};               // new sound
		begin3[] = {"\z\addons\dayz_communityweapons\M4A1\sounds\M203\M203_s3",0.1,1,400};               // new sound
		begin4[] = {"\z\addons\dayz_communityweapons\M4A1\sounds\M203\M203_s4",0.1,1,400};               // new sound
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};                        // new sound
	};                                                                                                   // new sound
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M16A2_DZ'] call player_removeAttachment";
		};
	};
};