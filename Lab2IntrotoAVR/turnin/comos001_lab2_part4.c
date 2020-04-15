/*	Author: comos001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	DDRA = 0x00; 
	DDRA = 0x00; 
	DDRC = 0x00; 
	DDRD = 0xFF; PORTD = 0x00;
	
	unsigned char A = 0x00;
	unsigned char B = 0x00;
	unsigned char C = 0x00;
	unsigned char maxweight  = 0x8C;
	unsigned char minweight = 0x50;
	unsigned char sumweight = 0x00;
	signed short diffweight = 0x00;

    while (1) {
	PORTD = 0x00;
	A = PINA;
	B = PINB;
	C = PINC;	
	maxweight  = 0x8C;
        minweight = 0x50;
        sumweight = 0x00;
        diffweight = 0x00;
	
	sumweight = A + B + C;
	diffweight = A - C;

	if (sumweight > maxweight){
		PORTD = (PORTD & 0xFC) | 0x01; //sets P0 to 1;
	}
	
	if (diffweight >  minweight){
		PORTD = (PORTD & 0xFC) | 0x02; //sets P1 to 1;
	}

	PORTD = (PORTD & 0x03) | sumweight;
	}
    return 1;
}
