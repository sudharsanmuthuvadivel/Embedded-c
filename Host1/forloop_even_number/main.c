/*
 *
	print Even number by using For loop.
 */
/*
 * print even numbers by using while loop.
 */
#include<stdint.h>
#include<stdio.h>
void wait_user_input(void);

int main(void){

	int32_t start_num , end_num;
	uint32_t even=0;
	printf("Enter stating and ending number with space:");
	scanf("%d %d", &start_num, &end_num);

	if(start_num > end_num){
		printf("\nEnd number must be higher then starting number.");
		wait_user_input();
		return 0;
	}

	for(printf("\n Even Numbers are:"); start_num <= end_num; start_num++){
		if(!(start_num % 2)){ //if(start_num % 2== 0)
			printf("%4d\t", start_num);
			even++;
		}
	}
	printf("\nNumber of Even numbers is: %d",even);
	wait_user_input();
}

void wait_user_input(void){
	printf("\npress Enter to exit from this application.");
	while(getchar() !='\n');
	getchar();
}



