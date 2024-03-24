/*
 *In last Exercise programm that structure take 10byte
 *memory space . but project need only 3byte(32bit)
 using packed bitfield method to allogate requird memory space.

 */

#include<stdio.h>
#include<stdint.h>
struct packet{
/* That all these variables will be referring to
 * diffrent bit fields of single uint32_t memory.*/
	uint32_t crc      : 2;
	uint32_t status   : 1;
	uint32_t payload  :12;
	uint32_t bat      : 3;
	uint32_t sensor   : 3;
	uint32_t longAddr : 8;
	uint32_t shortAddr: 2;
	uint32_t addrMode : 1;
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

	printf("\nTotal memory consumed by packet %I32u bytes\n", sizeof(packet));

	while(getchar() !='\n');
	getchar();
	return 0;

}
