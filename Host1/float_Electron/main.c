/*
Number of electron = (given charge / charge of 1 electron) * -1
*/

#include<stdio.h>
int main(void)
{
	double charge, charge_of_e,Electron;

	printf("Enter the charge:");//0.005
	scanf("%lf",&charge);
	printf("\nEnter the charge of electron:");//-1.602e-19 coulombs
	scanf("%le",&charge_of_e);

	Electron = (charge/charge_of_e) * -1;
	printf("Total Number of electron= %le\n",Electron);
	printf("Total Number of electron= %lf\n",Electron);

	printf("Press Enter to exit from this project\n");
	while(getchar() != '\n')
	{}
	getchar();
}


