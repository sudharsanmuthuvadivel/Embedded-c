/*
 * Doing bitwise set operation.
 * set 4th and 7th bit is one by using OR operation .
 */
#include<stdio.h>
#include<stdint.h>

void wait_user_input(void);
int main(void)
{
	int32_t num, output;
	printf("Enter the number:");
	scanf("%d", &num);

	//0x90 is hexadecimal value of 10010000
	output = num | 0x90;
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

