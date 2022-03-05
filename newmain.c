/*
 * File:   newmain.c
 * Author: Pawel
 *
 * Created on 5 marca 2022, 21:58
 */

#include <stdio.h>
#include <stdlib.h>
#include "newxc8_header.h"
#include <xc.h>

void main(void) {
   
    TRISBbits.TRISB0 = 0;
    OSCCON = 0x76;
    
    while(1)
    {
        LATBbits.LATB0 = ~LATBbits.LATB0;
        __delay_ms(1000);
    }
}
