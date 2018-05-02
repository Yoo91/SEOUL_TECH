/*
 * LED_onoff.cpp
 *
 * Created: 2018-05-02 오전 10:51:43
 * Author : stc_174
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
    DDRD = 0xff;
	PORTD = 0xff;
	
	while (1) 
    {
		for(int i=0; i<7; i++)
		{
			PORTD = ~(0x01 << i);
			_delay_ms(500);
		}
		for(int j=0; j<7; j++)
		{
			PORTD = ~(0x80 >> j);
			_delay_ms(500);
		}
		
// 		PORTD = 0x00;
// 		_delay_ms(500);
// 		PORTD = 0xff;
// 		_delay_ms(500);
    }
}



