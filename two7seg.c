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
		
IODIR0|=(0x01<<16);
IODIR0|=(0x01<<17);
IODIR0|=(0x01<<18);
IODIR0|=(0x01<<19);
IODIR0|=(0x01<<20);
IODIR0|=(0x01<<21);
IODIR0|=(0x01<<22);
	
while(1){
	
IOSET0|=(0x01<<3);
IOSET0|=(0x01<<5);
IOSET0|=(0x01<<4);
IOSET0|=(0x01<<6);
IOSET0|=(0x01<<7);
IOSET0|=(0x01<<8);
	
IOSET0|=(0x01<<16);
IOSET0|=(0x01<<17);
IOSET0|=(0x01<<18);
IOSET0|=(0x01<<19);
IOSET0|=(0x01<<20);
IOSET0|=(0x01<<21);
	delay(200000);
	
	
IOCLR0|=(0x01<<3);
IOCLR0|=(0x01<<4);
IOCLR0|=(0x01<<5);
IOCLR0|=(0x01<<6);
IOCLR0|=(0x01<<7);
IOCLR0|=(0x01<<8);

IOCLR0|=(0x01<<16);
IOCLR0|=(0x01<<17);
IOCLR0|=(0x01<<18);
IOCLR0|=(0x01<<19);
IOCLR0|=(0x01<<20);
IOCLR0|=(0x01<<21);
	
	
	
	
	
	
IOSET0|=(0x01<<3);
IOSET0|=(0x01<<5);
IOSET0|=(0x01<<4);
IOSET0|=(0x01<<6);
IOSET0|=(0x01<<7);
IOSET0|=(0x01<<8);
	
IOSET0|=(0x01<<17);
IOSET0|=(0x01<<18);

	delay(200000);


IOCLR0|=(0x01<<3);
IOCLR0|=(0x01<<4);
IOCLR0|=(0x01<<5);
IOCLR0|=(0x01<<6);
IOCLR0|=(0x01<<7);
IOCLR0|=(0x01<<8);

IOCLR0|=(0x01<<17);
IOCLR0|=(0x01<<18);

IOSET0|=(0x01<<4);
IOSET0|=(0x01<<5);

IOSET0|=(0x01<<16);
IOSET0|=(0x01<<17);
IOSET0|=(0x01<<18);
IOSET0|=(0x01<<19);
IOSET0|=(0x01<<20);
IOSET0|=(0x01<<21);
 delay(200000);
 
IOCLR0|=(0x01<<4);
IOCLR0|=(0x01<<5);

IOCLR0|=(0x01<<16);
IOCLR0|=(0x01<<17);
IOCLR0|=(0x01<<18);
IOCLR0|=(0x01<<19);
IOCLR0|=(0x01<<20);
IOCLR0|=(0x01<<21);
 
 

IOSET0|=(0x01<<4);
IOSET0|=(0x01<<5);

IOSET0|=(0x01<<17);
IOSET0|=(0x01<<18);
  delay(200000);
	
IOCLR0|=(0x01<<4);
IOCLR0|=(0x01<<5);

IOCLR0|=(0x01<<17);
IOCLR0|=(0x01<<18);


	
	


	}
}
	void delay(unsigned int count)
	{
		unsigned int i;
		for(i=0;i<count;i++);
	}