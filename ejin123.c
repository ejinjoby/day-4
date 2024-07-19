//LED
#include<LPC214X.h>
void delay(unsigned int count);
int main()
{
  IODIR0|=(1<<4);
  IODIR0|=(1<<5);
  IODIR0|=(1<<6);
  while(1)
  {
    IOSET0|=(1<<4);
	delay(500000);
	IOCLR0|=(1<<4);
	IOSET0|=(1<<5);
	delay(500000);
	IOCLR0|=(1<<5);
	IOSET0|=(1<<6);
	delay(500000);
	IOCLR0|=(1<<6);
	}
}
void delay(unsigned int count)
{
unsigned int i;
for(i=0;i<count;i++);
}