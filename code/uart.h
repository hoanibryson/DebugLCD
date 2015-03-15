/*
 * Copyright 2015 (C) Hoani.Bryson@gmail.com
 */

#ifndef _HOANI_DEBUG_LCD_UART_H_
#define _HOANI_DEBUG_LCD_UART_H_

#include <msp430.h>
#include <stdint.h>
#include <stdbool.h>

#define UART_BAUD (9600)

void uartInit(void);

uint16_t uartRead(char * data_out, uint16_t length);

#endif //_HOANI_DEBUG_LCD_UART_H_