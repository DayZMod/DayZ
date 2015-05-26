//no attachments on either of the M16A2s.
class M16A2_DZ : M16A2
{
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_StanagSD
	};
};

class M16A2_GL_DZ : M16A2
{
	muzzles[] = {this, M203Muzzle};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
	
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_StanagSD
	};
};