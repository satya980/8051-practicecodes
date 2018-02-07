#include <reg51.h>
void main()
{
while (1)
{TMOD=0x01;
TH0=0x93;
TL0=0xFF;
TR0=1;
while(TF0==0);
TF0=0;
TR0=0;
P1=~P1;
}}
