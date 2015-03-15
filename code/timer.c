/*
 * Copyright 2015 (C) Hoani.Bryson@gmail.com
 */


#include "timer.h"

TimerUs_t tick = 0;

void timerInit(void){
  TACTL   = 0x0212; // Use SMCLK, Up mode (count to TACCR0), Interrupts Enabled
  TACCTL0 = 0x0010; // Interrupts Enabled, Compare Mode
  TACCR0  = 8000;  // 8MHz/1000Hz = 8000 gives the number of system clocks required for a 1ms timer
}

TimerUs_t timerGetUs(void){
  return tick;
}

TimerUs_t timerDifferenceUs(Timer_t start_us){
  TimerUs_t difference_us;

  difference_us = timerGetUs() - start_us;

  return difference_us;
}


/* Timer Interrupt Service Routine */
__attribute__((interrupt(TIMERA0_VECTOR)))
void TimerIsr(void)
{
  if (TAIV) // clear interrupt
  {
    ++tick;
  }
}