/**
 ******************************************************************************
 To turn ON the LED using bitwise operator
 *
 ******************************************************************************
 */

#include <stdint.h>



int main(void)
{
    uint32_t *pClkctrreg = (uint32_t*)0x40023830;
    uint32_t *pPortDmodreg = (uint32_t*)0x40020c00;
    uint32_t *pPortDoutreg = (uint32_t*)0x40020c14;

    //1.Enable the clock for GPIOD peripheral in the AHB1ENR.
    *pClkctrreg |= (1 << 3);
    //*pClkctrreg = *pClkctrreg | (1<<3);//enable 3 bit only high others are 0.

    //2.configure the mode of the IO pin as output.(explore GPIO mode register)
    //a.clear the 24 and 25th bit position(CLEAR).
    *pPortDmodreg &= ~(3 << 24);//3 in binary form 0011
    //*pPortDmodreg = *pPortDmodreg & ~(3 << 24);

    //b.Make 24th bit as 1 (SET)
    *pPortDmodreg |= (1 << 24);

    //3.SET 12th bit of the output data reg to make I/O pin-12 as HIGH.
    *pPortDoutreg |= (1 << 12);

    while(1);
}
