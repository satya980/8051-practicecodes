#include<reg51.h>
void delay()
{
int I=0;
while(I<21)
{TH1=0;
TL1=0;
	TR1=1;
while(TF1==0);
TR1=0;
TF1=0;
I++;}
}
void main()
{
TMOD=0x10;
while(1)
{
delay();
P1=~P1;
}
}