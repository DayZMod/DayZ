class CZ550_DZ : Huntingrifle
{
	model = "z\addons\dayz_communityweapons\models\CZ550\CZ550_DZ.p3d";
	magazines[] = {5Rnd_17HMR};
	
	//CZ550_SCOPE
	optics = true;
	modelOptics = "\ca\weapons\2Dscope_Hunter_12";

	class OpticsModes
	{
		class Scope
		{
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0249;
			opticsZoomMax = 0.0711;
			opticsZoomInit= 0.0711;
			distanceZoomMin= 300;
			distanceZoomMax= 300;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera2","OpticsBlur2"};
			cameraDir = "";
		};
		
		class Ironsights
		{
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin= 100;
			distanceZoomMax= 100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[]={};
			cameraDir = "";
		};
	};
	//CZ550_SCOPE end
};
