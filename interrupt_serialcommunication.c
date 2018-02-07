#include<reg51.h>
void serial()interrupt 4
{
P2=SBUF;
RI=0;
return;
}
void main()
{
IE=0x90;
SCON=0x50;
TMOD=0x20;
TH1=0x0FD;
TR1=1;
while(1)
{
P0=P1>>1;
}
}
