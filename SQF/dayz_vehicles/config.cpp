class CfgPatches
{
	class dayz_vehicles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_anim"};
	};
};

class CfgVehicles 
{	
	class UH1H_base;
	class UH1H_DZ : UH1H_base
	{
		model = "z\addons\dayz_vehicles\helicopters\huey\huey.p3d";
	}
	class AH6_Base_EP1;
	class AH6X_DZ : AH6_Base_EP1
	{
		model = "z\addons\dayz_vehicles\helicopters\greybird\greybird.p3d";
		cargoAction[] = {"AH6j_Cargo_EP1","UH1Y_Cargo01","UH1Y_Cargo01"};
	};
};