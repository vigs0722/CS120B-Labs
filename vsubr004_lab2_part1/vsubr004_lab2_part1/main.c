/*
 * vsubr004_lab2_part2.c
 *
 * Created: 4/9/2019 4:48:15 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>



int main(void)
{
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char cntavail = 0x00;
	unsigned char tmpA;
	while (1)
	{
		tmpA = PINA & 0x0F;
		cntavail = 0x00;
		if ((tmpA & 0x01) == 0x00) {
			++cntavail;
		}
		
		if ((tmpA & 0x02) == 0x00) {
			++cntavail;
		}
		
		if ((tmpA & 0x04) == 0x00) {
			++cntavail;
		}
		
		if ((tmpA & 0x08) == 0x00) {
			++cntavail;
		}
		PORTC = cntavail;//dummy
	}
}