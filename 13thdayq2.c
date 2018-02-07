#include<reg51.h>
sbit a=P3^0;
void delay()
{
	int i=0;
	while(i<14)
	{
		i++;
TH0=0;
TL0=0;
	TR0=1;
while(TF0==0);
TR0=0;
TF0=0;
}
	return;
	}
void main()
{
TMOD=0x01;
	

{
if(a==1)
{
P2=0x06;
delay();
P2=0x03;
delay();
P2=0x09;
delay();
P2=0x0C;
delay();  
}
else
{
P2=0x06;
delay();
P2=0x0C;
delay();
P2=0x09;
delay();
P2=0x03;
delay();
}
}
}