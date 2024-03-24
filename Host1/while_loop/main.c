/*
 * print the number 1 to 10 by using while loop
 */
#include<stdint.h>
#include<stdio.h>
void wait_user_input(void);
int main(void)
{
	uint8_t num = 1;

	while( num <= 10 ){
		printf("Number is %d\n", num);
		num++;
	}
	wait_user_input();
}

void wait_user_input(void){
	printf("press Enter to exit from this Application.");
	while(getchar() != '\n')
	{}
	getchar();
}


