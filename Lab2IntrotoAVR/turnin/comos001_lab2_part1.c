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
	DDRB = 0xFF;
	PORTB = 0X00;

	unsigned char tempA = 0x00;
	unsigned char tempB = 0x00;


    while (1) {
	PORTB = 0x00;
		tempA = PINA & 0x03;
		if (tempA == 0x01)
		{
			tempB = (0x01);
		}
		else
		{
			tempB = (0x00);
		}
		PORTB = tempB;
    }
    return 1;
}
