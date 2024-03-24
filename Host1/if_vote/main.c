/*
 Using if statement to check that person
 is eligible for vote or not
 */
#include<stdio.h>

int main(void)
{
	int age = 0;
	printf("Enter your age:");
	scanf("%d",&age);

	if(age < 18)
		printf("Sorry! you are not eligible for vote.\n");

	else
		printf("Congrats! you are eligible for vote.\n");


	printf("press Enter to exit from this project.\n");
	while(getchar() != '\n')
	{
		//just read input buffer and do nothing.
	}
	getchar();
}

