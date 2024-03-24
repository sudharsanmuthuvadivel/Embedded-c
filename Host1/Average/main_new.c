/*
 * main_new.c
 *
 *  Created on: Jan 3, 2024
 *      Author: sudh1
 */

/*Finding average of three numbers
 * using double instead of float for more accurate ouput*/
#include<stdio.h>

int main(void)
{
	double num1, num2, num3,average;
	printf("\nEnter three Number: ");
	fflush(stdout);
	scanf ("%lf %lf %lf",&num1, &num2, &num3);


	average = (num1+num2+num3)/3;
	printf("\nAverage is: %0.3lf",average);

	/* without below code the system console close immediately */
	printf("\nPress enter to exit the application");
	while (getchar() !='\n')
	{
		//just read the input buffer and do nothing.
	}
	getchar();
}
