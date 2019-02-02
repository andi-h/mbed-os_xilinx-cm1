/*
 * Copyright:
 * ----------------------------------------------------------------
 * This confidential and proprietary software may be used only as
 * authorised by a licensing agreement from ARM Limited
 *   (C) COPYRIGHT 2014, 2016 ARM Limited
 *       ALL RIGHTS RESERVED
 * The entire notice above must be reproduced on all authorised
 * copies and copies may only be made to the extent permitted
 * by a licensing agreement from ARM Limited.
 * ----------------------------------------------------------------
 * File:     main.c
 * ----------------------------------------------------------------
 *
 */
 
/*
 * --------Included Headers--------
 */

#include "mbed.h"

/*******************************************************************/

uint8_t LED_val = 0; // Value will be toggled for making the LED's Blink
DigitalOut led0(LED0, 1);
Serial uart(STDIO_UART_TX, STDIO_UART_RX);
Thread thread;

void led0_thread() {
    while (true) {
      led0 = !led0;
			printf("Hello World!\n");
			wait(1);
    }
}

int main (void)
{
	thread.start(led0_thread);
    
  while(1)
  {

  }
}
