/*
 * "const" qualifier with example
 */

#include<stdint.h>
#include<stdio.h>

int main(void){
	uint8_t const data = 10;
	//data = 50; its not possible ...compiler show the error " assignement of read only variable 'data'.
	printf("value of data is %d\n", data);
	// but using pointer to change and access the data value.
	uint8_t *ptr = (uint8_t*)&data;
	*ptr = 50;
	printf("value of data is %d\n", data);

	getchar();
}
