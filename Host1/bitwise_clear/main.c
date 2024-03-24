/*
 * write a program to clear (make bit state to 0)
 * 4th, 5th, 6th bit position of given number
 * and print the result.
 */
#include<stdio.h>
#include<stdint.h>

void wait_user_input(void);
int main(void)
{
	int32_t num, output;
	printf("Enter the number:");
	scanf("%d", &num);

	//0x8f is hexadecimal value of 10001111
	output = num & 0x8f;
	printf("[input] [output]: 0x%x 0x%x \n", num, output);
	//other one method 1st not then And.
	//0x70 is hexadecimal value of 01110000
	output = num & ~(0x70);
	printf("[input] [output]: 0x%x 0x%x \n", num, output);
	wait_user_input();
}
void wait_user_input(void)
{
	printf("press Enter to exit from this application.");
	while(getchar() != '\n')
	{
	//just read input buffer and do nothing.
	}
	getchar();
}

