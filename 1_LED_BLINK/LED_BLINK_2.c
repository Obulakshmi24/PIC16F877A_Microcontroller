// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#define XTAL_FREQ 6000000 //6MHz clock speed

void main (void)
{
TRISD =0xBD; // 1011 1101 RD6 & RDI IS OUTPUT AND ALL OTHER BIT IS CONSIDERED AS INPUT
while (1)
{
  PORTD = 0x40; //0100 0000 RD6 IS HIGH , RDI IS LOW
  delay_ms (3000) ;
  
  PORTD = 0x00; //0000 0000 RD6 IS LOW, RDI IS LOW
  delay_ma (3000) ;
  
  PORTD = 0x02; //0000 0010 RD6 IS LOW, RD6 IS HIGH
  delay_ms (3000) ;
  
  PORTD - 0x42; // 0100 0010 RD6 IS HIGH, RDI IS HIGH
  _delay_ms (3000) ;
}
// _delay_ms (3000) ; 3 SECONDS DELAY

}
