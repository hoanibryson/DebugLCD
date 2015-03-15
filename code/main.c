/*
 * Copyright 2015 (C) Hoani.Bryson@gmail.com
 */
 
#include "timer.h"
#include "lcd.h"
#include "receiver.h"

typedef enum {
 STATE_INIT = 0,
 STATE_GET_LINES,
 STATE_START_WRITE,
 STATE_START_WAIT,
 STATE_SCROLL_WRITE,
 STATE_SCROLL_WAIT,
 STATE_END_WAIT,
 STATE_TOTAL
}State_t;
 
static void runLoop(void);
 
static State_t stateMooreInit(void);
static State_t stateMooreGetLines(void);
static State_t stateMooreStartWrite(void);
static State_t stateMooreStartWait(void);
static State_t stateMooreScrollWrite(void);
static State_t stateMooreScrollWait(void);
static State_t stateMooreEndWait(void);

static State_t stateMealyInit(void);
static State_t stateMealyGetLines(void);
static State_t stateMealyStartWrite(void);
static State_t stateMealyStartWait(void);
static State_t stateMealyScrollWrite(void);
static State_t stateMealyScrollWait(void);
static State_t stateMealyEndWait(void);
 
const State_t (*stateMoorePointer)(void)[STATE_TOTAL] = {
  stateMooreInit,
  stateMooreGetLines,
  stateMooreStartWrite,
  stateMooreStartWait,
  stateMooreScrollWrite,
  stateMooreScrollWait,
  stateMooreEndWait
};

const void (*stateMealyPointer)(State_t)[STATE_TOTAL] = {
  stateMealyInit,
  stateMealyGetLines,
  stateMealyStartWrite,
  stateMealyStartWait,
  stateMealyScrollWrite,
  stateMealyScrollWait,
  stateMealyEndWait
};

int main(void) {
  // Hardware setup
  // watchdawg
  // clocks
  
  timerInit();
  receiverInit();
  lcdInit();
  
  __eint();
  
  runLoop();
  
  while(1){
  }
}

static void runLoop(void) {
  while(1) {
    stateMachineRun();
    // poll for new lines
  }
}

static void stateMachineRun() {
  static State_t current_state = STATE_INIT;
  static State_t next_state = STATE_INIT;
  
  next_state = stateMoorePointer[current_state]();
  stateMealyPointer[current_state](next_state);
  
  current_state = next_state;
}

