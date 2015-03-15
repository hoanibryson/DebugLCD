/*
 * Copyright 2015 (C) Hoani.Bryson@gmail.com
 */

#ifndef _HOANI_DEBUG_LCD_RECEIVER_H_
#define _HOANI_DEBUG_LCD_RECEIVER_H_
 
#include <stdint.h>
#include <stdbool.h>

#include "uart.h"
#include "timer.h"

void receiverInit(void);

uint16_t receiverGetLine(char * line_out, uint16_t length);

uint16_t receiverEmpty(char * data_out, uint16_t length);

#endif //_HOANI_DEBUG_LCD_RECEIVER_H_