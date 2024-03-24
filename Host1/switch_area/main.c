/*
 * find area of different shapes by using switch case.
 */
#include<stdio.h>
#include<stdint.h>
void wait_for_user_input();
int main(void)
{
	int8_t code;
	float radius, height, base, base1;
	float area;
	printf("Area calculation program\n");
	printf("Circle       ---> c\n");
	printf("Triangle     ---> t\n");
	printf("Trapezoidal  ---> z\n");
	printf("Square       ---> s\n");
	printf("Rectangle    ---> r\n");
	printf("Enter the code (use small letter):");
	scanf("%c",&code);


	switch(code){
	case 'c':
		printf("Circle area calculation.\n");
		printf("Enter radius(r) value:");
		scanf("%f",&radius);
		if(radius < 0){
			printf("Warning! radius can't be a -ve\n");
			wait_for_user_input();
			return 0;
		}
		area = 3.141 *(radius*radius);
		break;
	case 't':
		printf("Triangle area calculation.\n");
		printf("Enter height(h) value:");
		scanf("%f",&height);
		printf("Enter base(b) value:");
		scanf("%f",&base);
		if(height < 0 || base < 0){
			printf("Warning! height and base can't be a -ve\n");
			wait_for_user_input();
			return 0;
		}
		area = 0.5 *(height*base);
		break;
	case 'z':
		printf("Trapezoidal area calculation.\n");
		printf("Enter height(h) value:");
		scanf("%f",&height);
		printf("Enter base(bottom) value:");
		scanf("%f",&base);
		printf("Enter base1(upper) value:");
		scanf("%f",&base1);
		if(height < 0 || base < 0 || base1 < 0){
			printf("Warning! height and base can't be a -ve\n");
			wait_for_user_input();
			return 0;
		}
		area = 0.5 *(base+base1)*height;
		break;
	case 's':
		printf("Square area calculation.\n");
		printf("Enter side(a) value:");
		scanf("%f",&base);
		if(base < 0){
			printf("Warning! side(a) can't be a -ve\n");
			wait_for_user_input();
			return 0;
		}
		area = base * base;
		break;
	case 'r':
		printf("Triangle area calculation.\n");
		printf("Enter length(l) value:");
		scanf("%f",&height);
		printf("Enter base(b) value:");
		scanf("%f",&base);
		if(height < 0 || base < 0){
			printf("Warning! height and base can't be a -ve\n");
			wait_for_user_input();
			return 0;
		}
		area = height * base;
		break;
	default:
		printf("Invalid choice.\n");
		break;
	}
	printf("Area is %f\n",area);
	wait_for_user_input();
}
void wait_for_user_input()
{
	printf("press Enter to exit from this application.");
	while(getchar() !='\n')
	{}
	getchar();
}

