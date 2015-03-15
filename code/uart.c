/*
 * Copyright 2015 (C) Hoani.Bryson@gmail.com
 */

#include "uart.h"

#define UART_BUFFER_SIZE (8*SCHEDULE_FREQUENCY/UART_BAUD)

static volatile char rx_buffer[UART_BUFFER_SIZE];
static volatile uint16_t rx_index = 0;
static volatile uint16_t rx_last;

void uartInit(void){
  UCA0CTL0 = 0x00; //UART 1 stop, no parity
  UCA0CTL1 = UCSSEL2 | UCSWRST;



  UCA0CTL1 &= ~UCSWRST;
}

uint16_t uartRead(char * data_out, uint16_t length){
  
}

/* Timer Interrupt Service Routine */
__attribute__((interrupt(TIMERA0_VECTOR)))
void uartIsr(void){

}
