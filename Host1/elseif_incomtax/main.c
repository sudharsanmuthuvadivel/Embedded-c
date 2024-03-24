/*
 *
	finding Income tax  for user total salary
	formula.....tax payable = income*(tax rate/100)
 */
#include<stdio.h>
#include<stdint.h>
void wait_for_user_input();
int main(void)
{
	uint32_t income, tax;
	float temp_income;
	printf("Enter total salary\n");
	scanf("%f",&temp_income);

	if(temp_income < 0){
		printf("Warning! income can't be -Ve.\n");
		wait_for_user_input();
		return 0;
	}
	income = (uint32_t)temp_income;

	if(income <= 9525){
		tax = 0;
	}else if(income > 9525 && income <= 38700){
		tax = income * 0.12;
	}else if(income > 38700  && income <= 82500){
		tax = income * 0.22;
	}else if(income > 82500){
		tax = (income * 0.32)+1000;
	}
	printf("tax payable is %d $\n",tax);

	wait_for_user_input();

}
void wait_for_user_input()
{
	printf("press Enter to exit from this application.\n");
	while(getchar() != '\n')
	{
			//just read input buffer and do nothing.
	}
	getchar();
}

