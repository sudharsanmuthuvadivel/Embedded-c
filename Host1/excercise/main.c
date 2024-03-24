/*
 *
 */

#include<stdio.h>
#include<stdint.h>
struct packet{

	uint8_t crc;
	uint8_t status;
	uint16_t payload;
	uint8_t bat;
	uint8_t sensor;
	uint8_t longAddr;
	uint8_t shortAddr;
	uint8_t addrMode;
};
int main(void){
	uint32_t packetValue;
	printf("Enter the 32bit packet value:");
	scanf("%X", &packetValue);

	struct packet packet;
	packet.crc       = (uint8_t)(packetValue & 0x3);
	packet.status    = (uint8_t)((packetValue >> 2) & 0x1);
	packet.payload   = (uint16_t)((packetValue >> 3) & 0xFFF);
	packet.bat       = (uint8_t)((packetValue >> 15) & 0x7);
	packet.sensor    = (uint8_t)((packetValue >> 18) & 0x7);
	packet.longAddr  = (uint8_t)((packetValue >> 21) & 0xFF);
	packet.shortAddr =(uint8_t)((packetValue >> 29) & 0x3);
	packet.addrMode  = (uint8_t)((packetValue >>31) & 0x1);

	printf("crc       :%#X\n",packet.crc);
	printf("status    :%#X\n",packet.status);
	printf("payload   :%#X\n",packet.payload);
	printf("bat       :%#X\n",packet.bat);
	printf("sensor    :%#X\n",packet.sensor);
	printf("longaddr  :%#X\n",packet.longAddr);
	printf("shortaddr :%#X\n",packet.shortAddr);
	printf("addrMode  :%#X\n",packet.addrMode);

	printf("\nTotal memory consumed by packet %I32u Bytes\n", sizeof(packet));

	while(getchar() !='\n');
	getchar();
	return 0;

}
