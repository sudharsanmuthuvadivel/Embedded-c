

#include "main.h"
#include<stdint.h>
/*uint32_t *pClkctrreg = (uint32_t*)0x40023830;
    uint32_t *pPortDmodreg = (uint32_t*)0x40020c00;
    uint32_t *pPortDoutreg = (uint32_t*)0x40020c14;*/
int main(void){
	RCC_AHB1ENR_t volatile *const pClkctrreg     = ADDR_REG_AHB1ENR;
	GPIOx_ODR_t volatile   *const pPortDoutreg   = ADDE_REG_GPIOD_OD;
	GPIOx_MODER_t volatile *const pPortDmodreg   = ADDR_REG_GPIOD_MODE;

	//1.Enable the clock for GPIOD peripheral in the AHB1ENR.
	pClkctrreg ->gpiod_en = CLOCK_ENABLE;

	//2.configure the mode of the IO pin as output.
	pPortDmodreg ->pin12 = MODE_CONF_OUTOUT;

	while(1){
		//3.SET 12th bit of the output data reg to make I/O pin-12 as HIGH.
		pPortDoutreg ->pin12 = PIN_STATE_HIGH;//lED ON

		for(uint32_t i=0; i<COUNT_DELAY; i++);//delay

		pPortDoutreg ->pin12 = PIN_STATE_LOW;//LED oFF.

		for(uint32_t i=0; i<COUNT_DELAY; i++);//delay
	}


}
