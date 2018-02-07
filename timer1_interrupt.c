#include<reg51.h>
int i=0;
sbit a=P1^5;
void timer1()interrupt 3
{
if(i<3600)
{
i++;
return;
}
else{
a=~a;
i=0;
return;
}
}
void main()
{
IE=0x88;
TMOD=0x20;
TH1=0;
	TR1=1;
	a=0;
	
	P0=4;
while(1)
{
P3=P0+P2;
}
}