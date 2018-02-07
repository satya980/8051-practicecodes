#include<reg51.h>
void delay1()
{
int I=0;
while(I<7)
{TH1=0;
TL1=0;
	TR1=1;
while(TF1==0);
TR1=0;
TF1=0;
I++;}
}
void delay2()
{
TH1=0x93;
TL1=0xFE;

}