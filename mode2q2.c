#include<reg51.h>
void delay1()
{
	int i=0;
TH0=0;
TR0=1;
	while(i<540)
		{
			i++;
	while(TF0==0);
	TF0=0;
}
	}
void delay2()
{
	TH1=0x94;
	TL1=0x00;
	TR1=1;
	while(TF1==0);
	TR1=0;
	TF1=0;
}
sbit a=P3^7;
void main()
{
	
while(1)
{
	int i=0;
	TMOD=0x02;
a=~a;
	delay1();
	a=~a;
	delay1();
	TMOD=0x10;
	while(i<3)
	{
		i++;
	a=~a;
	delay2();
	a=~a;
	delay2();
}
}
}