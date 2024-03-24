/*
 * using bitwise operator to find
 * given number is odd or even.
 */

#include<stdio.h>
#include<stdint.h>
void wait_for_user_input(void);
int main()
{
	int32_t num;
	printf("Enter the Number:");
	scanf("%d", &num);

	if(num & 1){//inside if condition value is non zero 1st statement will execute else next statement execute.
		printf("Given number %d is odd.\n",num);
	}else{
		printf("Given number %d is Even.\n",num);
	}
	wait_for_user_input();
}
void wait_for_user_input(void)
{
	printf("press Enter to exit from this application.\n");
	while(getchar() != '\n')
	{}
	getchar();
}
