#define OPTION_SELECT 0
#define OPTION_SLIDER 1

class CfgOptions
{
/*
	class ExampleSelect
	{
		//Option name.
		text = "My example select option";
		
		//List of choices.
		data[] = {"Option 1", "Option 2", "Option 3"};
		
		//Default option index. (Optional. Default: 0)
		default = 1;
		
		//Script to execute when the option is changed during the game. (Optional.)
		//Arguments: [string: option name, any: new value, any: old value]
		onChanged = "my_option_value = _this select 1";
	};
	
	class ExampleSlider
	{
		text = "My example text option";
		
		//Default slider position. (Optional. Default: 0)
		default = 1;
	};
	
*/
	class QuickbarToggle
	{
		text = "Quickbar";
		data[] = {"Enabled", "Disabled"};
	};
	
	class HudToggle
	{
		text = "Heads up display";
		data[] = {"Enabled", "Disabled"};
	};
	
	class EarplugsVolume
	{
		text = "Earplugs volume";
		type = OPTION_SLIDER;
		default = 0.5;
	//	onChanged = "_this call dz_fn_earplugs_update";
	};
};

#define 