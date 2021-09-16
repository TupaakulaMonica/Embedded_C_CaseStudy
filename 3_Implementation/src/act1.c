#include <avr/io.h>
#include <util/delay.h>
#include "act1.h"
void act1()
{
    DDRD &= ~(1<<PD0); //input pin Port D pin 0
    DDRD &= ~(1<<PD1);  //input pin Port D pin 1


    PORTD |= (1<<PD0);
    PORTD |= (1<<PD1);


    DDRB |= (1<<PB7);

    if  ( (!(PIND & (1<<PD0))) & (!(PIND & (1<<PD1))) )
    {
        PORTB |= (1<<PB7);
        _delay_ms(2000);
    }
    else
    {
       PORTB &= ~(1<<PB7);
        _delay_ms(2000);
    }
}
