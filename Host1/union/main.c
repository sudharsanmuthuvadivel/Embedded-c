/*
 * UNION
 */


#include<stdio.h>
#include<stdint.h>

union address{
	uint16_t short_addr;
	uint32_t long_addr;
};
int main(void){
	union address addr;
	addr.short_addr = 0xABCD;
	addr.long_addr = 0XFFFFCCCC;

	printf("short address: %#X\n", addr.short_addr);
	printf("long address : %#X\n", addr.long_addr);
	getchar();
	return 0;
}
