/*
 * Copyright 2015 (C) Hoani.Bryson@gmail.com
 */

#ifndef _HOANI_DEBUG_LCD_SPI_H_
#define _HOANI_DEBUG_LCD_SPI_H_

#include <msp430.h>
#include <stdint.h>
#include <stdbool.h>

void spiInit(void);

bool spiWriteBuffer(char * data_out, uint16_t length);

#endif //_HOANI_DEBUG_LCD_SPI_H_