/*
 * vsubr004_lab2_part4.c
 *
 * Created: 4/6/2019 6:58:09 AM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0x00; PORTC = 0xFF;
	DDRD = 0xFF; PORTD = 0x00;
	
	unsigned short totalWeight;
	unsigned char weightDifference;
	
    while (1) 
    {
		totalWeight = PINA + PINB + PINC;
		if (totalWeight > 0x0078) {
			PORTD = PORTD | 0x01;
		}
		else {
			PORTD = PORTD & 0xFE;
		}

		if (PINA > PINC) {
			weightDifference = PINA - PINC;
		}
		else {
			weightDifference = PINC - PINA;
		}
		
		if (weightDifference > 0x50) {
			PORTD = PORTD | 0x02;
		}
		else {
			PORTD = PORTD & 0xFD;	
		}
		
		totalWeight = 4 * totalWeight;
		PORTD = PORTD & 0x03;
		PORTD = totalWeight + PORTD;
		
	}
}