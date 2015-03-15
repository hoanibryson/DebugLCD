/*
 * Copyright 2015 (C) Hoani.Bryson@gmail.com
 */

#ifndef _HOANI_DEBUG_LCD_LCD_H_
#define _HOANI_DEBUG_LCD_LCD_H_

#include <stdint.h>
#include <stdbool.h>

#include "spi.h"

void lcdInit(void);

void lcdSetup(void);

bool lcdCommand(LcdCommand_t command);

bool lcdWriteString(char * string, uint16_t length);

#endif //_HOANI_DEBUG_LCD_LCD_H_