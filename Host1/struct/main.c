/*
 * structure basics..
 */

#include<stdint.h>
#include<stdio.h>

struct carModel{
	uint32_t carnumber;
	uint32_t carprice;
	uint16_t max_speed;
	float    carweight;
};

int main(void){
	struct carModel carBmw ={1050,0,0,0};
	struct carModel const carBenz = {2022, 500000, 450, 1150};
	//struct carModel carhonda = {.carweight = 950};
	printf("size of structure carmodel %u\n", sizeof(carBmw));

	printf("datails of car BMW\n");
	printf("car number is    :%u\n", carBmw.carnumber);
	printf("car price is     :%u\n", carBmw.carprice);
	printf("car max_speed is :%u\n", carBmw.max_speed);
	printf("car carweight is :%0.2f\n", carBmw.carweight);

	//carBenz.carnumber = 2024;
	printf("\ndatails of carBenz\n");
	printf("car number is    :%u\n", carBenz.carnumber);
	printf("car price is     :%u\n", carBenz.carprice);
	printf("car max_speed is :%u\n", carBenz.max_speed);
	printf("car carweight is :%0.2f\n", carBenz.carweight);

	getchar();
}
