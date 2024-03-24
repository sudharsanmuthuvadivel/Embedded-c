/*
 * 1. create a char type variable and initialize it to value 100
 * 2. print the address of the above variable.
 * 3. create a pointer variable and store the address of the above variable.
 * 4. perform read operation on the pointer  variable to fetch 1byte of the data from the prt.
 * 5. print the data obtained from the read operation on the pointer.
 * 6. perform write operation on the pointer to store the value 65.
 * 7. print the value of the variable define in step 1.
 */
#include<stdio.h>
int main(void)
{
	char data = 100;//step1.
	printf("value of data is: %d\n",data);
	printf("Address of the data is: %p\n",&data);//step 2.

	char* ptr = &data;//step 3.
	char value = *ptr;//step 4.
	printf("Read value is: %d\n",value);//step 5.

	*ptr = 65;//step 6.
	printf("value of data is: %d\n",data);//step 7.
	return 0;
}

