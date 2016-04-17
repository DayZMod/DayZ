#include "CT_TYPE.h"
#include "CT_STYLE.h"

class RscPicture;
class RscButton;
class CA_IGUI_Title;
class CA_Title;
class RscText;
class RscControlsGroup;
class RscLineBreak;
class RscIGUIShortcutButton;
class RscGearShortcutButton;
class RscIGUIListNBox;
class RscActiveText;
class RscShortcutButton;
class RscShortcutButtonMain;
class RscPictureKeepAspect;
class RscStandardDisplay;
class RscProgress;
class RscProgressNotFreeze;
class RscButtonTextOnly;
class RscObject;
class IGUIBack;
class RscIGUIListBox;
class RscHTML;
class RscDisplayGetReady;
class CA_TextLanguage;
class RscXListBox;
class RscListNBox;
class RscStructuredText
{
	class Attributes;
};

class RscPictureGUI
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.38,0.63,0.26,0.75};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = 0x30 + 0x100;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};

class RscStructuredTextGUI : RscStructuredText
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	class Attributes : Attributes
	{
		align = "center";
		valign = "middle";
	};
};

#include "RscDisplayGear.h"
#include "RscDisplaySelectGender.h"
#include "RscDisplaySelectRegion.h"
#include "RscDisplayStart.h"
#include "RscDisplayLoading.h"
#include "RscCompass.h"
#include "RscDisplayClientGetReady.h"
#include "RscDisplayDebriefing.h"
#include "RscDisplayMultiplayerSetup.h"
#include "RscPendingInvitation.h"
#include "RscPendingInvitationInGame.h"
#include "RscDisplayMissionFail.h"
//#include "RscDisplayGameOptions.h"
#include "RscDisplayMain.h"
#include "RscDisplayDiary.h"
#include "RscButtonActionMenu.h"
#include "RscDisplayMPInterrupt.h"
#include "RscDisplayLogout.h"
#include "RscDisplayMainMap.h"
#include "RscDisplayCraftingMenu.h"
#include "RscTitles.h"
#include "bloodTest.h"
#include "padlock.h"

#include "Journal\defines.h"
#include "Journal\p_bandits_killed.h"
#include "Journal\p_cover.h"
#include "Journal\p_headshots.h"
#include "Journal\p_humanity_art.h"
#include "Journal\p_journal_humanity.h"
#include "Journal\p_murders.h"
#include "Journal\p_zombies_killed.h"
#include "Journal\sound.h"