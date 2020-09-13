#ifndef __printing_H
#define __printing_H

#include "includes.h"
#include "main.h"
#include "tgui.h"
#include "tgui_printscreenfuncs.h"
#include "prtfiles.h"
#include "files_pws.h"
#include "config.h"
#include "usb_host.h"
#include "ff.h"
#include "rtc.h"
#include "datetime.h"



#define LAYERBUFF_SIZE		4096


typedef struct
{
} PRINT_STATE;




uint8_t		PRINT_Init();
uint8_t		PRINT_Complete();

uint8_t		PRINT_ReadLayerBegin();


#endif /*__printing_H */

