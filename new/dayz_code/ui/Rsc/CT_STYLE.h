// Static styles
#define ST_POS                0xF
#define ST_HPOS               0x3
#define ST_VPOS               0xC
#define ST_LEFT               0x0
#define ST_RIGHT              0x1
#define ST_CENTER             0x2
#define ST_DOWN               0x4
#define ST_UP                 0x8
#define ST_VCENTER            0xC

#define ST_TYPE               0xF0
#define ST_SINGLE             0x0
#define ST_MULTI              0x10
#define ST_TITLE_BAR          0x20
#define ST_PICTURE            0x30
#define ST_FRAME              0x40
#define ST_BACKGROUND         0x50
#define ST_GROUP_BOX          0x60
#define ST_GROUP_BOX2         0x70
#define ST_HUD_BACKGROUND     0x80
#define ST_TILE_PICTURE       0x90
#define ST_WITH_RECT          0xA0
#define ST_LINE               0xB0

#define ST_SHADOW             0x100
#define ST_NO_RECT            0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE              ST_TITLE_BAR + ST_CENTER



// Slider styles
#define SL_DIR                0x400
#define SL_VERT               0x0
#define SL_HORZ               0x400

#define SL_TEXTURES           0x10



// progress bar 
#define ST_VERTICAL           0x1
#define ST_HORIZONTAL         0x0



// Listbox styles
#define LB_TEXTURES           0x10
#define LB_MULTI              0x20
#define FontM                 "Zeppelin32"



// Tree styles
#define TR_SHOWROOT           0x1
#define TR_AUTOCOLLAPSE       0x2



// MessageBox styles
#define MB_BUTTON_OK          0x1
#define MB_BUTTON_CANCEL      0x2
#define MB_BUTTON_USER        0x4