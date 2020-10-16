#pragma once
#include "config_common.h"



#undef PRODUCT
#define PRODUCT 		9A-GH60

//#define DESCRIPTION 	qmk firmware for GH60

/* config mouse key */
//Constant mode
#define MK_3_SPEED

/* KC_ACL0 */
#define MK_C_OFFSET_0 		2
#define MK_C_INTERVAL_0 	16

/* KC_ACL1 */
#define MK_C_OFFSET_1		5
#define MK_C_INTERVAL_1 	16

/* KC_ACL2 */
#define MK_C_OFFSET_2		8
#define MK_C_INTERVAL_2 	16

/* BackLight */
#define BACKLIGHT_PIN F6
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 4