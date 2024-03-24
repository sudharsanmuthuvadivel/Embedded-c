/*
 * learn about structure padding
 */

#include<stdint.h>
#include<stdio.h>

struct dataset{
	char data1;
	int data2;
	char data3;
	short data4;
};//__attribute__((packed));

struct dataset data;

int main(void){
	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	uint32_t totalsize = sizeof(data);

	printf("total memory consumed by struct %d:\n", totalsize);

	printf("Memory address      content\n");
	printf("=============================\n");

	uint8_t *ptr = (uint8_t*)&data;

	for (uint32_t i=0; i <= totalsize; i++){
		printf("%p       %X\n",ptr , *ptr);
		ptr++;
	}
	getchar();
}
