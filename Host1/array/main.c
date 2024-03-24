/*
 * main.c
 *Array
 */
#include<stdint.h>
#include<stdio.h>
void display(uint8_t const *const, uint32_t);
int main(void){
	uint8_t Data[10]={0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};
	printf("Content of this array is:\n");


	for(uint32_t i=0; i < 10; i++)
	{
		Data[i]= i;
		//printf("%#x\t", Data[i]);
	}
	uint32_t length = sizeof(Data) / sizeof(uint8_t);
	display(&Data[2], length-2);

	return 0;
}
void display(uint8_t const *const pArray, uint32_t length)
{
	for(uint32_t i = 0; i < length; i++)
	{
		printf("%x\t", pArray[i]);

	}
}

