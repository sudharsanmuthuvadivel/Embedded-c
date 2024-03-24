

#include<stdint.h>
#include<stdio.h>
void delay(void){
	for(uint32_t i = 0; i<300000; i++);
}

int main(void){
	//peripherals register address
	uint32_t volatile *const pGPIODModReg   = (uint32_t*)(0x40020C00+00);
	uint32_t volatile *const pClkCtrlReg    = (uint32_t*)(0x40023800+0x30);
	uint32_t volatile *const pInDataReg     = (uint32_t*)(0x40020C00+0x10);
	uint32_t volatile *const pOutDataReg    = (uint32_t*)(0x40020C00+0x14);
	uint32_t volatile *const pPullupDownReg = (uint32_t*)(0x40020C00+0x0C);
	//1.Enable the peripheral clock of GPIOD peripheral
	*pClkCtrlReg |= (1 << 3);

	//2. Configure PD0,PD1,PD2,PD3 as OUTPUT (rows)
	*pGPIODModReg &= ~(0xFF);//clear
	*pGPIODModReg |= (0x55);//set

	//3. configure PD8, PD9, PD10, PD11 as input(columns)
	*pGPIODModReg &= ~(0xFF << 16);//clear (automatically set zero)
	//*pGPIODModReg |= (0x00 << 16);//set.

	//4.Enable internal pullup down resister for PD8, PD9, PD10, PD11
	*pPullupDownReg &= ~(0xFF << 16);//clear
	*pPullupDownReg |= (0x55 << 16);//set.

	while(1){

		//make all the row are high.
		*pOutDataReg |= 0x0F;
		//Make R1 LOw (PD0)
		*pOutDataReg &= ~(1<<0);//clear

		//scan the columns
		// check c1(PD8) low or high
		if(!(*pInDataReg & (1<<8))){
			//key pressed
			delay();
			printf("1\n");
		}
		// check c2(PD9) low or high
		if(!(*pInDataReg & (1<<9))){
			//key pressed
			delay();
			printf("2\n");
		}
		// check c3(PD10) low or high
		if(!(*pInDataReg & (1<<10))){
			//key pressed
			delay();
			printf("3\n");
		}
		// check c4(PD11) low or high
		if(!(*pInDataReg & (1<<11))){
			//key pressed
			delay();
			printf("A\n");
		}
		//make all the row are high.
		*pOutDataReg |= 0x0F;
		//Make R2 LOw (PD1)
		*pOutDataReg &= ~(1<<1);//clear

		//scan the columns
		// check c1(PD8) low or high
		if(!(*pInDataReg & (1<<8))){
			//key pressed
			delay();
			printf("4\n");
		}
		// check c2(PD9) low or high
		if(!(*pInDataReg & (1<<9))){
			//key pressed
			delay();
			printf("5\n");
		}
			// check c3(PD10) low or high
		if(!(*pInDataReg & (1<<10))){
			//key pressed
			delay();
			printf("6\n");
		}
		// check c4(PD11) low or high
		if(!(*pInDataReg & (1<<11))){
			//key pressed
			delay();
			printf("B\n");
		}
		//make all the row are high.
		*pOutDataReg |= 0x0F;
		//Make R3 LOw (PD2)
		*pOutDataReg &= ~(1<<2);//clear

		//scan the columns
		// check c1(PD8) low or high
		if(!(*pInDataReg & (1<<8))){
			//key pressed
			delay();
			printf("7\n");
		}
		// check c2(PD9) low or high
		if(!(*pInDataReg & (1<<9))){
			//key pressed
			delay();
			printf("8\n");
		}
		// check c3(PD10) low or high
		if(!(*pInDataReg & (1<<10))){
			//key pressed
			delay();
			printf("9\n");
		}
		// check c4(PD11) low or high
		if(!(*pInDataReg & (1<<11))){
			//key pressed
			delay();
			printf("C\n");
		}
		//make all the row are high.
		*pOutDataReg |= 0x0F;
		//Make R4 LOw (PD3)
		*pOutDataReg &= ~(1<<3);//clear

		//scan the columns
		// check c1(PD8) low or high
		if(!(*pInDataReg & (1<<8))){
			//key pressed
			delay();
			printf("*\n");
		}
		// check c2(PD9) low or high
		if(!(*pInDataReg & (1<<9))){
			//key pressed
			delay();
			printf("0\n");
		}
		// check c3(PD10) low or high
		if(!(*pInDataReg & (1<<10))){
			//key pressed
			delay();
			printf("#\n");
		}
		// check c4(PD11) low or high
		if(!(*pInDataReg & (1<<11))){
			//key pressed
			delay();
			printf("D\n");
		}
	}//while end.

}
