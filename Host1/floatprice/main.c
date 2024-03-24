/*
 * main.c
 *
 *  Created on: Jan 3, 2024
 *      Author: sudh1
 */
#include<stdio.h>

int main(void)
{/*using double data type to store too big or too small
    fractional or float data type
	and improve the result accuracy */
	double charge_E = -1.60217662e-19;
	printf ("charge_E = %0.28f\n",charge_E);
	printf ("charge_E = %0.9le\n",charge_E);
}

