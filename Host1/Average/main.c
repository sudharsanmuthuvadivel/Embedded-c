/*
 * main.c
 *
 *  Created on: Jan 3, 2024
 *      Author: sudh1
 */
/*Finding average of three numbers */
#include<stdio.h>

int main(void)
{
	float num1, num2, num3,average;
	printf("\nEnter three Number: ");
	fflush(stdout);
	scanf ("%f",&num1);
	printf("\nEnter the 2nd number: ");
	fflush(stdout);
	scanf ("%f",&num2);
	printf("\nEnter the 3rd number: ");
	fflush(stdout);
	scanf ("%f",&num3);

	average = (num1+num2+num3)/3;
	printf("\nAverage is: %f",average);

	/* without below code the system console close immediately */
	printf("\nPress enter to exit the application");
	while (getchar() !='\n')
	{}
	getchar();
}

