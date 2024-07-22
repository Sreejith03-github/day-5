#include<LPC214X.h>
void delay(unsigned int count);
int main()
	{
	
	


IODIR0|=(0x01<<3);
IODIR0|=(0x01<<4);
IODIR0|=(0x01<<5);
IODIR0|=(0x01<<6);
IODIR0|=(0x01<<7);
IODIR0|=(0x01<<8);
IODIR0|=(0x01<<9);
	
while(1){
	
IOSET0|=(0x01<<4);
IOSET0|=(0x01<<5);
delay(200000);
IOCLR0|=(0x01<<4);
IOCLR0|=(0x01<<5);
	
	
IOSET0|=(0x01<<3);
IOSET0|=(0x01<<4);
IOSET0|=(0x01<<9);
IOSET0|=(0x01<<7);
IOSET0|=(0x01<<6);
delay(200000);
IOCLR0|=(0x01<<3);
IOCLR0|=(0x01<<4);
IOCLR0|=(0x01<<9);
IOCLR0|=(0x01<<7);
IOCLR0|=(0x01<<6);
	

IOSET0|=(0x01<<3);
IOSET0|=(0x01<<4);
IOSET0|=(0x01<<9);
IOSET0|=(0x01<<5);
IOSET0|=(0x01<<6);
delay(200000);
IOCLR0|=(0x01<<3);
IOCLR0|=(0x01<<4);
IOCLR0|=(0x01<<9);
IOCLR0|=(0x01<<5);
IOCLR0|=(0x01<<6);


IOSET0|=(0x01<<8);
IOSET0|=(0x01<<9);
IOSET0|=(0x01<<4);
IOSET0|=(0x01<<5);
delay(200000);
IOCLR0|=(0x01<<8);
IOCLR0|=(0x01<<9);
IOCLR0|=(0x01<<4);
IOCLR0|=(0x01<<5);

IOSET0|=(0x01<<3);
IOSET0|=(0x01<<8);
IOSET0|=(0x01<<9);
IOSET0|=(0x01<<5);
IOSET0|=(0x01<<6);
delay(200000);
IOCLR0|=(0x01<<3);
IOCLR0|=(0x01<<8);
IOCLR0|=(0x01<<9);
IOCLR0|=(0x01<<5);
IOCLR0|=(0x01<<6);

IOSET0|=(0x01<<3);
IOSET0|=(0x01<<8);
IOSET0|=(0x01<<7);
IOSET0|=(0x01<<6);
IOSET0|=(0x01<<5);
IOSET0|=(0x01<<9);
delay(200000);
IOCLR0|=(0x01<<3);
IOCLR0|=(0x01<<8);
IOCLR0|=(0x01<<7);
IOCLR0|=(0x01<<6);
IOCLR0|=(0x01<<5);
IOCLR0|=(0x01<<9);


IOSET0|=(0x01<<3);
IOSET0|=(0x01<<4);
IOSET0|=(0x01<<5);
delay(200000);
IOCLR0|=(0x01<<3);
IOCLR0|=(0x01<<4);
IOCLR0|=(0x01<<5);


IOSET0|=(0x01<<3);
IOSET0|=(0x01<<4);
IOSET0|=(0x01<<5);
IOSET0|=(0x01<<6);
IOSET0|=(0x01<<7);
IOSET0|=(0x01<<8);
IOSET0|=(0x01<<9);
delay(200000);
IOCLR0|=(0x01<<3);
IOCLR0|=(0x01<<4);
IOCLR0|=(0x01<<5);
IOCLR0|=(0x01<<6);
IOCLR0|=(0x01<<7);
IOCLR0|=(0x01<<8);
IOCLR0|=(0x01<<9);

IOSET0|=(0x01<<3);
IOSET0|=(0x01<<4);
IOSET0|=(0x01<<5);
IOSET0|=(0x01<<6);
IOSET0|=(0x01<<8);
IOSET0|=(0x01<<9);
delay(200000);
IOCLR0|=(0x01<<3);
IOCLR0|=(0x01<<4);
IOCLR0|=(0x01<<5);
IOCLR0|=(0x01<<6);
IOCLR0|=(0x01<<8);
IOCLR0|=(0x01<<9);

	}
}
	void delay(unsigned int count)
	{
		unsigned int i;
		for(i=0;i<count;i++);
	}