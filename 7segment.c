
#include<LPC214X.h>
int main(){
	
	


IODIR0|=(0x01<<3);//set direction as output
IODIR0|=(0x01<<4);
IODIR0|=(0x01<<5);
IODIR0|=(0x01<<6);
IODIR0|=(0x01<<7);
IODIR0|=(0x01<<8);
IODIR0|=(0x01<<9);
	
while(1){
	
IOSET0|=(0x01<<3);
IOSET0|=(0x01<<4);
IOSET0|=(0x01<<5);


	}
		
}