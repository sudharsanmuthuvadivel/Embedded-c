/**
 ******************************************************************************
 To turn ON the LED using bitwise operator
 *
 ******************************************************************************
 */

/* this program using volatile to remove optimization of the particular variable
 * by using volatile keyword  */

#include <stdint.h>
#include<stdio.h>
int main(void)
{
    uint32_t volatile *pClkctrreg = (uint32_t*)0x40023830;
    uint32_t volatile *pPortAmodreg = (uint32_t*)0x40020000+0x00;//00 is offset
    uint32_t volatile *pPortAINreg = (uint32_t*)0x40020000+0x14;//0x14 is offset.
    uint32_t volatile *pPortDmodreg = (uint32_t*)0x40020c00;
    uint32_t volatile *pPortDoutreg = (uint32_t*)0x40020c14;


    //1.Enable the clock for GPIOD, GPIOA peripheral in the AHB1ENR.
    *pClkctrreg |= (1 << 3);//set 3bit for GPIOD
    *pClkctrreg |= (1 << 0); // set 0th bit for GPIOA.

    //2.configure PA0 for  input mode (GPIOA mode reg).
    *pPortAmodreg &= ~(3 << 0);//clear 0th bit   1100.

    //3.configure PD12 as output.(explore GPIOD mode register)
    //a.clear the 24 and 25th bit position(CLEAR).
    *pPortDmodreg &= ~(3 << 24);//3 in binary form 0011
    //b.Make 24th bit as 1 (SET)
    *pPortDmodreg |= (1 << 24);

    while(1){//super loop that will run forever as per pinstatus.
    	//4.Read the pin status of the pin PA0 (GPIOA input data reg).
    	uint8_t pinstatus = (uint8_t) (*pPortAINreg & 0x1);//get only 0th bit status all other are 0.

    	if(pinstatus){
    		//3.SET 12th bit of the output data reg to make I/O pin-12 as HIGH.
    		*pPortDoutreg |= (1 << 12);//led on (pd12).
    	}else{
    		*pPortDoutreg &= ~(1 << 12); //led off
    	}
    }
}
