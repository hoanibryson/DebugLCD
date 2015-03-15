/*
 * Copyright 2015 (C) Hoani.Bryson@gmail.com
 */

#include "lcd.h"

// 10 times the number of us to send one UART character
#define RECEIVER_TIMEOUT_US ((10)*((8*1000000)/UART_BAUD))

static char line_buffer_a[LCD_LINE_LENGTH];
static char line_buffer_b[LCD_LINE_LENGTH];

static TimerUs_t receiver_timeout_us;

void lcdInit(void){
  
}

void lcdSetup(void){
  
}

bool lcdCommand(LcdCommand_t command){
  
}

bool lcdWriteString(char * string, uint16_t length){
  
}
