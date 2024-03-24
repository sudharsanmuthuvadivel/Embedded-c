/*signification of pointer
 * using different pointer data type.
 */
#include<stdio.h>

long long int g_data = 0xFFFEABCD11112345;
int main(void)
{
	char* ptr1;
	ptr1 = (char*)&g_data;
	printf("value at address %p is: %x\n",ptr1, *ptr1);

	short* ptr2 = (short*)&g_data;//this and next line both are same.
	//ptr2 = (short*)&g_data;
	printf("value at address %p is: %x\n",ptr2, *ptr2);

	int* ptr3 = (int*)&g_data;//this and next line both are same.
	//ptr3 = (int*)&g_data;
	printf("value at address %p is: %x\n",ptr3, *ptr3);

	long long int* ptr4 = (long long int*)&g_data;//this and next line both are same.
	//ptr4 = (long long int*)&g_data;
	printf("value at address %p is: %I64x\n",ptr4, *ptr4);
	return 0;
}
