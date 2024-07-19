#include <LPC214x.h>

// Delay function
void delay(unsigned int count) {
    unsigned int i;
    for (i = 0; i < count; i++);
}

int main(void) {
    // Set P0.10 as output
	int i,j;
    IODIR0 |= (1 << 7);
	  IODIR0 |=(1<<12);
	IODIR0 |=(1<<13);
	IODIR0 |=(1<<8);
	IODIR0 |=(1<<9);
	IODIR0 |=(1<<10);
	IODIR0 |=(1<<11);
	IODIR0 |=(1<<14);
	IODIR0 |=(1<<15);
	
    
    for(i=7;i<=15;i++) {
			for(j=7;j<=i;j++)
			{
				
        IOSET0 |= (1 << j);
        delay(100000);
			}
			for(j=7;j<=i;j++)
			{
        IOCLR0 |= (1 << j);
        delay(10000);
			}
		}
			return 0;
	}