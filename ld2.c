//SWITCH
#include<LPC214X.h>
int main(){
while(1){
IODIR1&=(~(0x01<<16));//set direction as output
IODIR1&=(~(0x01<<17));	
IODIR0|=(0x01<<3);//set direction as output
IODIR0|=(0x01<<4);
if((0x01<<16)&IOPIN1){
IOCLR0|=(0x01<<3);
}
	else{
IOSET0|=(0x01<<3);
	}
	
if((0x01<<17)&IOPIN1){
IOCLR0|=(0x01<<4);
}
	else{
IOSET0|=(0x01<<4);
	}
	}	
}