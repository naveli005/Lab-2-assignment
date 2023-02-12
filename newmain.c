/*
 * File:   newmain.c
 * Author: 25078
 *
 * Created on February 11, 2023, 7:12 PM
 */
// PIC16F877A Configuration Bit Settings
// 'C' source line config statements
// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.


#include <xc.h>

#define _XTAL_FREQ 20000000
void main(void) {
    TRISB=0; //All PORTB as output
    TRISC=0; //All PORTC as output
    TRISD=0; //All PORTD as output
    
    while(1){
        RD7=1;
        RC1=1;
        RB1=1; 
        RC6=1; 
        RD3=1; 
        RD6=0;
        RD4=0;
        RD5=0;
        RB0=0; 
        RB2=0; 
        RB3=0;
        RC0=0;
        RC2=0;
        RC3=0;
        RC4=0; 
        RC5=0; 
        RC7=0;
        RD0=0;
        RD1=0;
        RD2=0;
        __delay_ms(5000); // delaying for five second
        RD5=0;
        RB0=1; 
        RC0=1;
        RC5=1; 
        RD2=1;
        RD7=0;
        RD6=0;
        RD4=1;
        RB1=0; 
        RB2=0; 
        RB3=0;
        RC1=0;
        RC2=0;
        RC3=0;
        RC4=0; 
        RC6=0; 
        RC7=0;
        RD0=0;
        RD1=0;
        RD3=0;
        __delay_ms(5000); // delaying for five second
        RD4=0;
        RC3=1;
        RC4=1; 
        RB3=1;
        RD1=1;
        RD7=0;
        RD6=0;
        RD5=1;
        RB0=0; 
        RB1=0; 
        RB2=0; 
        RC0=0;
        RC1=0;
        RC2=0;
        RC5=0; 
        RC6=0; 
        RC7=0;
        RD0=0;
        RD2=0;
        RD3=0;
        __delay_ms(5000); // delaying for five second
        RD6=1;
        RB2=1; 
        RC2=1;
        RC7=1;
        RD0=1;
        RD7=0;
        RD4=0;
        RD5=0;
        RB0=0; 
        RB1=0; 
        RB3=0;
        RC0=0;
        RC1=0;
        RC3=0;
        RC4=0; 
        RC5=0; 
        RC6=0; 
        RD1=0;
        RD2=0;
        RD3=0;
        __delay_ms(5000); // delaying for five second
        
            }
    return;
}
