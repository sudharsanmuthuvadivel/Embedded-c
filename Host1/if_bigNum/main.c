/*find biggest number of given 2 number */
#include<stdio.h>
#include<stdint.h>

void wait_for_user_input();

int main(void)
{
	float num1, num2;//store real number.
	printf("Enter first number(integer):");
	if(scanf("%f",&num1) == 0){//if number are not stored due to char then condition false(0).
		printf("Invalid input! Exiting..\n");
		wait_for_user_input();//
		return 0;
	}
	printf("\nEnter second number(integer):");
	if(scanf("%f",&num2) == 0){//if number are not stored due to char then condition false(0).
		printf("Invalid input! Exiting..\n");
		wait_for_user_input();
		return 0;
	}
//only storing integer number.
	int32_t n1, n2;
	n1 = num1;
	n2 = num2;
	if(n1 != num1 || n2 != num2){
		printf("\nWarning! compare only integer part.");
	}

	if(n1 > n2)
		printf("\n%d is bigger.", n1);
	else if (n1 < n2)
		printf("\n%d is bigger.", n2);
	else
		printf("\nBoth number are same.");
	wait_for_user_input();
}

void wait_for_user_input()
{
	printf("\nPress Enter to exit from this application.");
	while(getchar() !='\n')
	{
		//just read input buffer and do nothing.
	}
	getchar();
}
