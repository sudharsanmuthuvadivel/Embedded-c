//macros//conditional compilation

#include<stdint.h>
#include<stdio.h>
#define pi 3.1415

int main(void){

#if 0//1 then circle calculation will run.
	float radius = 0;
	printf("This is circle calculation program\n");
	fflush(stdout);
	printf("Enter the radius :");
	fflush(stdout);
	scanf("%f", &radius);
	printf("Area of the circle = %f \n", (pi * radius * radius));
	fflush(stdout);

#else
	float base, height;
	printf("This is triangle calculation.\n");
	fflush(stdout);
	printf("Enter base and height :");
	fflush(stdout);
	scanf("%f %f",&base, &height);
	printf("Area of Triangle: %f", (0.5 * base * height));
	fflush(stdout);

#endif
	return 0;
}
