#include<reg51.h>
sbit a=P1^3;
sbit n=P3^3;
void delay1()
{

	TH1=0;
TR1=1;


while(TF1==0);
TF1=0;
}

void delay2()
{
TH0=0XA4;
TR0=1;
while(TF0==0);
TF0=0;
}


void main()
{ int i;
	n=1;
while(1)
{i=0;
if(a==1)
{
TMOD=0x20;
n=~n;
while(i<1800)
{
i++;
	delay1();
}
}
else
{
TMOD=0x02;
n=~n;
delay2();

}
}
}