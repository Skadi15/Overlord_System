#include <stdint.h>
#include "grlib/grlib.h"

#define BATT_ICON_XMIN_OFFSET   2
#define BATT_ICON_YMIN_OFFSET   1

#define BATT_ICON_XMAX_OFFSET   2
#define BATT_ICON_YMAX_OFFSET   2

#define BATT_ICON_DRAW_WIDTH    15

const uint8_t g_pui8BatteryIcon[] =
{
    IMAGE_FMT_1BPP_UNCOMP,
    18, 0,
    8, 0,

    0x7f, 0xff, 0xc0, 0x40, 0x00, 0x40, 0xc0, 0x00, 0x40, 0xc0, 0x00, 0x40,
    0xc0, 0x00, 0x40, 0xc0, 0x00, 0x40, 0x40, 0x00, 0x40, 0x7f, 0xff, 0xc0,
};
