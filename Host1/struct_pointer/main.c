/*
 * passing structure reference to pointer
 * and passing structure data to the pointer.
 */


#include<stdio.h>
#include<stdint.h>

typedef struct{
	char data1;
	int data2;
	char data3;
	short data4;
}Dataset_t;

void displaymemberElement(Dataset_t *pdata);//prototype declared after structure other throw the error.
void displaymemberdata(Dataset_t data);
int main(void){
	Dataset_t data;

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	displaymemberElement(&data);//send reference to the pointer variable.
	displaymemberdata(data);//sending structure data to the another structure sized variable
	getchar();
	return 0;
}
void displaymemberElement(Dataset_t *pdata){
	printf("data1 = %X\n",pdata->data1);
	printf("data2 = %X\n",pdata->data2);
	printf("data3 = %X\n",pdata->data3);
	printf("data4 = %X\n",pdata->data4);
}


void displaymemberdata(Dataset_t data){
	printf("\ndata1 = %X\n",data.data1);
	printf("data2 = %X\n",data.data2);
	printf("data3 = %X\n",data.data3);
	printf("data4 = %X\n",data.data4);
}
