class RscDisplayOptionsDayz
{
	movingEnable = false;
	enableDisplay = true;
	
	class controlsBackground
	{
		class MainbackFaded1 : RscPicture
		{
			idc = 1106;
			x = 0.045;
			y = 0.17;
			w = 0.627451;
			h = 0.8366013;
			colorText[] = {1, 1, 1, 0.25};
			text = "\ca\ui\data\ui_mainmenu_background_ca.paa";
		};
		
		class MainbackFaded2 : RscPicture
		{
			idc = 1107;
			x = 0.092;
			y = 0.17;
			w = 0.627451;
			h = 0.8366013;
			colorText[] = {1, 1, 1, 0.5};
			text = "\ca\ui\data\ui_mainmenu_background_ca.paa";
		};
		
		class Mainback : RscPicture
		{
			idc = 1104;
			x = 0.138;
			y = 0.17;
			w = 0.627451;
			h = 0.8366013;
			text = "\ca\ui\data\ui_audio_background_ca.paa";
		};
	};
	
	class controls
	{
		class Title : CA_Title
		{
			idc = 1;
			x = 0.18;
			y = 0.192;
		//	text = $STR_DISP_DAYZ_OPTIONS;
			text = "DayZ Options";
		};
		
		class ButtonCancel : RscShortcutButton
		{
			idc = 101;
			shortcuts[] = {0x00050000 + 1};
			x = 0.151;
			y = 0.7625;
			text = $STR_DISP_CANCEL;
		};
		
		class ButtonDefault : RscShortcutButton
		{
			idc = 102;
			shortcuts[] = {0x00050000 + 2};
			x = 0.338;
			y = 0.7625;
			text = $STR_DISP_DEFAULT;
		};
		
		class ButtonContinue : RscShortcutButton
		{
			idc = 103;
			shortcuts[] = {0x00050000 + 0, 28, 57, 156};
			x = 0.525;
			y = 0.7625;
			text = $STR_DISP_OK;
			default = 1;
		};
		
		class TextOption0 : RscText
		{
			idc = 200;
			x = 0.159803;
		};
		
		class ListboxOption0 : RscXListBox
		{
			idc = 300;
			x = 0.300534;
		};
		
		class SliderOption0 : RscXSliderH
		{
			idc = 400;
			x = 0.300534;
		};
		
		
		
		
		
		
		
		
		
		class CA_TextVoices : RscText
		{
			idc = 1006;
			x = 0.159803;
			y = "(0.420549 + -2*0.069854)";
			text = "$STR_DISP_OPT_VOICES";
		};
		
		class CA_SliderVoices : RscXSliderH
		{
			idc = 106;
			x = 0.300534;
			y = "(0.420549 + -2*0.069854)";
			w = 0.4;
		};
		
		class CA_TextEffects : RscText
		{
			idc = 1005;
			x = 0.159803;
			y = "(0.420549 + -1*0.069854)";
			text = "$STR_DISP_OPT_EFFECTS";
		};
		
		class CA_SliderEffects : RscXSliderH
		{
			idc = 104;
			x = 0.300534;
			y = "(0.420549 + -1*0.069854)";
			w = 0.4;
		};
		
		class CA_TextMusic : RscText
		{
			idc = 1007;
			x = 0.159803;
			y = "(0.420549 + 0*0.069854)";
			text = "$STR_DISP_OPT_MUSIC";
		};
		
		class CA_SliderMusic : RscXSliderH
		{
			idc = 102;
			x = 0.300534;
			y = "(0.420549 + 0*0.069854)";
			w = 0.4;
		};
		
		class CA_TextVON : RscText
		{
			idc = 1009;
			x = 0.159803;
			y = "(0.420549 + 1*0.069854)";
			text = "VON : ";
		};
		
		class CA_SliderVON : RscXSliderH
		{
			idc = 114;
			x = 0.300534;
			y = "(0.420549 + 1*0.069854)";
			w = 0.4;
		};
		
		class CA_TextMicVolume : RscText
		{
			idc = 1009;
			x = 0.159803;
			y = "(0.420549 + 2*0.069854)";
			text = "$STR_DISP_MICROPHONE";
		};
		
		class CA_SliderMicVolume : RscXSliderH
		{
			idc = 117;
			x = 0.300534;
			y = "(0.420549 + 2*0.069854)";
			w = 0.4;
		};
		
		class CA_AutoAdjustMicSensitivity : RscShortcutButton
		{
			idc = 118;
			x = 0.300534;
			y = 0.597023;
			w = 0.3;
			text = "$STR_DISP_AUTO_ADJUST";
		};
		
		class CA_TextSamplesCount : RscText
		{
			idc = 1011;
			x = 0.159803;
			y = "(0.420549 + 4*0.069854)";
			text = "$STR_AUDIO_SAMPLES";
		};
		
		class CA_SliderSamplesCount : RscXListBox
		{
			idc = 116;
			x = 0.300534;
			y = "(0.420549 + 4*0.069854)";
			w = 0.4;
		};
	};
};
