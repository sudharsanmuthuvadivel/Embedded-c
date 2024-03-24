/*
 * main.c
 *Array swapping
 */

#include<stdint.h>
#include<stdio.h>

void wait_for_userInput(void);
void createArray(int32_t*,int32_t);
void display_array(int32_t const *const , int32_t);
void swap_arrays(int32_t*, int32_t*,int32_t nIntex1, int32_t nIntex2);

int main(void){
	int32_t nIntex1, nIntex2;
	printf("Array swapping.\n");
	printf("Enter No.Of element in array1 and array2: ");
	scanf("%d %d", &nIntex1, &nIntex2);

	if((nIntex1 < 0) || (nIntex2 < 0))
	{
		printf("No.of Element cannot be negative.\n");
		wait_for_userInput();
		return 0;
	}
	int32_t Array1[nIntex1];
	int32_t Array2[nIntex2];

	printf("Enter the Element of Array1:\n");
	createArray(Array1,nIntex1);
	printf("Enter the Element of Array2:\n");
	createArray(Array2,nIntex2);

	printf("Contents of array before swap.\n");
	display_array(Array1, nIntex1);
	printf("\n");
	display_array(Array2, nIntex2);
	printf("\n");

	printf("Contents of array after swap.\n");
	swap_arrays(Array1,Array2,nIntex1,nIntex2);
	display_array(Array1, nIntex1);
	printf("\n");
	display_array(Array2, nIntex2);
	printf("\n");

	printf("press Enter to exit from this Application.");
	wait_for_userInput();
	return 0;
}


void createArray(int32_t *pArray,int32_t length){
	for(uint32_t i = 0; i < length; i++){
		printf("Enter %d Element of array:",i);
		scanf("%d",&pArray[i]);
	}
}

void display_array(int32_t const *const p_Array, int32_t length){
	for (uint32_t i =0; i < length; i++){
		printf("%4d ", p_Array[i]);
	}
}

void swap_arrays(int32_t *array1, int32_t *array2,int32_t nIntex1, int32_t nIntex2)
{
	uint32_t len = nIntex1 < nIntex2 ? nIntex1:nIntex2;
	for(uint32_t i = 0; i < len; i++)
	{
		int32_t temp = array1[i];
		array1[i] = array2[i];
		array2[i] = temp;
	}
}
void wait_for_userInput(void){
	while(getchar() != '\n');
	getchar();
}


