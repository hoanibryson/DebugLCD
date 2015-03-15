/*
 * Copyright 2015 (C) Hoani.Bryson@gmail.com
 */

#include "spi.h"

static uint8_t out_buffer[SPI_WRITE_LENGTH];
static uint16_t out_next = 0;
static uint16_t out_last = 0;


void spiInit(void){
  // Master mode, capture on falling edge, inactive low
  UCB0CTL0 = UCCKPH|UCCKPL|UCMST|UCMODE0;
  UCB0CTL1 = UCSSEL2|UCSWRST;
  
  
  UCB0CTL1 &= ~UCSWRST; // software reset
}

bool spiWriteBuffer(char * data_out, uint16_t length){
  
}

/* SPI Interrupt Service Routine */
__attribute__((interrupt(TIMERA0_VECTOR)))
void spiIsr(void){

}
