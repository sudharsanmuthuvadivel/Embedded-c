/*
 *
 */
#include<stdint.h>
#include<stdio.h>
void wait_user_input(void);
int main()
{
	uint16_t data = 0xB410;
	uint8_t output;
	output = (uint8_t) ((data >> 9) & 0x003f);
	printf("output is %d\n", output);
	wait_user_input();
}
void wait_user_input(void)
{
	printf("press Enter to exit from this application.");
	while(getchar() !='\n')
	{}
	getchar();
}
