
/*get 6 char or number or symbol from user to print respective ascii number */

#include<stdio.h>

int main(void)
{
	char c1,c2,c3,c4,c5,c6;
	printf("\nEnter any 6 character of your choice: ");
	fflush(stdout);
	scanf("%c,%c,%c,%c,%c,%c",&c1,&c2,&c3,&c4,&c5,&c6);

	printf("\nASCII number is:%u, %u, %u, %u, %u, %u",c1,c2,c3,c4,c5,c6);

	/* without below code the system console close immediately */
	printf("\nPress Enter to exit from project.");
	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing.
	}
	getchar();

}


