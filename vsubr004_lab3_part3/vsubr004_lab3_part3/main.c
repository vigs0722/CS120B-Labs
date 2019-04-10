/*
 * vsubr004_lab3_part3.c
 *
 * Created: 4/9/2019 8:17:23 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
	/* Replace with your application code */
	DDRA = 0x00;
	DDRC = 0xFF;
	PORTA = 0xFF;
	PORTC = 0x00;
	
	unsigned char PA;
	unsigned char PC;
	unsigned char tt;
	while (1)
	{
		PA = PINA & 0x0F;
		PC = 0;
		tt = PINA & 0x30;
		if(PA<=2){
			PC =96;
		}
		else if( PA >2 & PA <= 4){
			PC = 112;
		}
		else if(PA >4 & PA <=6){
			PC = 56;
		}
		else if(PA>6 & PA <=9){
			PC = 60;
		}
		else if(PA>9 & PA <=12){
			PC = 62;
		}
		else if (PA > 12 & PA <= 15){
			PC = 63;
		}
		if(tt){
			if (tt <= 3){
				PC = PC + 128; 
			}
		}
		PORTC = PC;
	}
}


