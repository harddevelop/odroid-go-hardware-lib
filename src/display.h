#pragma once

#include <stdint.h>

#include "gbuf.h"


#define DISPLAY_WIDTH (320)
#define DISPLAY_HEIGHT (240)

gbuf_t *fb;

void display_init(void);
void display_poweroff(void);
void display_clear(uint16_t color);
void display_update(void);
void display_update_rect(short x, short y, short width, short height);
void display_drain(void);
