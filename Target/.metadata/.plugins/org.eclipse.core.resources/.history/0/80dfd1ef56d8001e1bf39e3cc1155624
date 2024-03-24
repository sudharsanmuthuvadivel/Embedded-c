

#include "main.h"
#include<stdint.h>
/*uint32_t *pClkctrreg = (uint32_t*)0x40023830;
    uint32_t *pPortDmodreg = (uint32_t*)0x40020c00;
    uint32_t *pPortDoutreg = (uint32_t*)0x40020c14;*/
int main(void){
	RCC_AHB1ENR_t volatile *const pClkctrreg     =(RCC_AHB1ENR_t*) 0x40023830;
	GPIOx_ODR_t volatile   *const pPortDoutreg   =(GPIOx_ODR_t*) 0x40020C14;
	GPIOx_MODER_t volatile *const pPortDmodreg   =(GPIOx_MODER_t*) 0x40020C00;

	//1.Enable the clock for GPIOD peripheral in the AHB1ENR.
	pClkctrreg ->gpiod_en = 1;

	//2.configure the mode of the IO pin as output.
	pPortDmodreg ->pin12 = 1;

	while(1){
		//3.SET 12th bit of the output data reg to make I/O pin-12 as HIGH.
		pPortDoutreg ->pin12 = 1;//lED ON
		for(uint32_t i=0; i<300000; i++);//delay
		pPortDoutreg ->pin12 = 0;//LED oFF.
		for(uint32_t i=0; i<300000; i++);//delay
	}


}
