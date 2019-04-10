/*
 * vsubr004_lab3_part1.c
 *
 * Created: 4/9/2019 6:11:01 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;
    unsigned char cnta;
	unsigned char tempA; 
	unsigned char cntb;
	unsigned char tempB;
	unsigned char num = 0x00;
	unsigned char num2 = 0x00;
	int a = 8;
	int b = 8;
	while (1) 
    {
		tempA = PINA;
		tempB = PINB;
		while(a!=0){
		num = tempA & 0x01;
			if(num){
				++cnta;
			}
		--a;
		tempA >> 1;
	    }
		while(b!=0){
			num2 = tempB & 0x01;
			if(num2){
				++cntb;
			}
			--b;
			tempB >> 1;
		}
}
PORTC = cnta+cntb;
}

