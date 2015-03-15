/*
 * Copyright 2015 (C) Hoani.Bryson@gmail.com
 */

#ifndef _HOANI_DEBUG_LCD_TIMER_H_
#define _HOANI_DEBUG_LCD_TIMER_H_
 
#include <msp430.h>
#include <stdint.h>
#include <stdbool.h>

typedef uint64_t TimerUs_t;

void timerInit(void);

TimerUs_t timerGetUs(void);

TimerUs_t timerDifferenceUs(Timer_t start_us);

#endif //_HOANI_DEBUG_LCD_TIMER_H_