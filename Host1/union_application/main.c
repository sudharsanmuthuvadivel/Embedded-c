/*
 *
 */

#include<stdio.h>
#include<stdint.h>
union packet{
	uint32_t packetValue;
	struct{
		uint32_t crc      : 2;
		uint32_t status   : 1;
		uint32_t payload  :12;
		uint32_t bat      : 3;
		uint32_t sensor   : 3;
		uint32_t longAddr : 8;
		uint32_t shortAddr: 2;
		uint32_t addrMode : 1;
	}packetfield;
};
int main(void){
	union packet packet;
	printf("Enter the 32bit packet value:");
	scanf("%X", &packet.packetValue);

	printf("crc       :%#X\n",packet.packetfield.crc);
	printf("status    :%#X\n",packet.packetfield.status);
	printf("payload   :%#X\n",packet.packetfield.payload);
	printf("bat       :%#X\n",packet.packetfield.bat);
	printf("sensor    :%#X\n",packet.packetfield.sensor);
	printf("longaddr  :%#X\n",packet.packetfield.longAddr);
	printf("shortaddr :%#X\n",packet.packetfield.shortAddr);
	printf("addrMode  :%#X\n",packet.packetfield.addrMode);

	printf("\nTotal memory consumed by packet %I32u Bytes\n", sizeof(packet));

	while(getchar() !='\n');
	getchar();
	return 0;

}
