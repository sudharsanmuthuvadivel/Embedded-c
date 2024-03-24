/*
 * print number pyramid by using for loop
 */

#include<stdint.h>
#include<stdio.h>
void wait_user_input(void);

int main(void){
	uint32_t height;
	printf("Enter the Height of the pyramid:");
	scanf("%d",&height);

	for(uint32_t i = 1; i <= height; i++){
		for(uint32_t j = i; j > 0; j--){
			printf("%d  ", j);
		}
		printf("\n");
	}
	wait_user_input();
}
void wait_user_input(void){
	printf("\npress Enter to exit from this application.");
	while(getchar() != '\n');
	getchar();
}

