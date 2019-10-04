/*	Author: oocho002
 *  Partner(s) Name: Gurparam
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
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char tmpC = 0x00;
	unsigned char tmpA = 0x00;
	unsigned char curA = 0x00;
	int numAvailable = 4;
	while(1) {
		tmpA = PINA & 0x0F;
		curA = tmpA & 0x01
		numAvailable = 4;
		if (curA == 0x01) {
			
		}
		else {
			printf("0")
		}
		curA = tmpA & 0x02
                if (curA == 0x02) {
                        printf("1")
                }
                else {
                        printf("0")
                }
		curA = tmpA & 0x04
                if (curA == 0x04) {
                        printf("1")
                }
                else {
                        printf("0")
                }
		curA = tmpA & 0x08
                if (curA == 0x08) {
                        printf("1")
                }
                else {
                        printf("0")
                }
	}
	return 1;
}
