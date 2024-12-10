#include <xc.h>  // Include the XC8 library

#define _XTAL_FREQ 6000000  // Define clock frequency for delay functions
void main(void) {
    TRISC = 0xFB;  // Set RC2 as output (0) and all other bits as input (1)
    while (1) {
        PORTC = 0x04;  // Set RC2 HIGH (LED ON)
        __delay_ms(1000);  // 1-second delay

        PORTC = 0x00;  // Set RC2 LOW (LED OFF)
        __delay_ms(1000);  // 1-second delay
    }
}
