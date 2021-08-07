/*
 * File:   7Segment.c
 * Author: SUGIRA
 * 1.SUGIRA Emmanuel  218002227
 * 2. IRANZI Olivier  217173020
 *
 * Created on August 6, 2021, 7:11 PM
 */


#include <xc.h>
#define _XTAL_FREQ 8000000 //define crystal frequency to 8MHz

// This array stores display bit pattern that will be send to PORTC
unsigned char display[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};

void main(void) {
    
      TRISC = 0b00000000; //define PORTC as a output pin
    while (1) {
        //this loop sends all displays to PORTC
        for (int k = 0; k < 10; k++) {
            PORTC = display[k];
            __delay_ms(1000); //add delay of one second
        }
    }
}
