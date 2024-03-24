/*
 * using two number to understand
 * bitwise operation.
 */
#include<stdio.h>
#include<stdint.h>
void wait_for_user_input(void);
int main()
{
	int32_t num1, num2;
	printf("Enter the two number with space:");
	scanf("%d %d", &num1, &num2);

	printf("Bitwise AND(&)   :%d\n",(num1 & num2));
	printf("Bitwise OR(|)    :%d\n",(num1 | num2));
	printf("Bitwise NOT(~)   :%d\n", ~(num1));
	printf("Bitwise XOR(^)   :%d\n",(num1 ^ num2));
	printf("Bitwise XNOR~(^) :%d\n",~(num1 ^ num2));
	wait_for_user_input();
}
void wait_for_user_input(void)
{
	printf("press Enter to exit from this application.");
	while(getchar() != '\n')
	{//just read input buffer and do nothing.
	}
	getchar();
}

