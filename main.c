/*
 * LED-Blink-Button_Press.c
 *
 * Created: 2/1/2021 4:44:15 PM
 * Author : lenovo
 */ 
#define F_CPU 16000000UL // 16MHz
#include <avr/io.h>
#include <util/delay.h>

#define LED_ON	PORTB |= (1<<PORTB5)
#define LED_OFF	PORTB &= ~(1<<PORTB5)
#define LED_TOGGLE	PINB |= (1<<PINB) // Registers and associated bit number


int main(void)
{
	DDRB |= (1<<DDB5);
	DDRB &= ~(1<<DDB7);
	
	   while (1) 
    { 
		if (!(PINB & (1<<PINB7))) //IF PINB 7 is low
		{
			LED_ON;
		} 
		else
		{
			LED_OFF;
		}
    }
}

