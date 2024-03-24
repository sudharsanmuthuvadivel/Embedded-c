
#include<stdio.h>
#include "math.h"//user define header file using" "

int main(void)
{
	printf("Add: %x\n",math_add(0x0fff1111,0x0fff1111));
	printf("Mul: %I64x\n",math_mul(0x0fff1111,0x0fff1111));
	printf("Div: %f\n",math_div(100, 8));
	return 0;
}

