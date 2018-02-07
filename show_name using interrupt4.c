#include<reg51.h>
int i=0;
int w=0;
sbit a=P3^7;
char k[]="Satyakam";
void serial()interrupt 4
{
	TI=0;
if(w<8)
{
SBUF=k[w];
w++;
	return;
}
else
{
w=0;
SBUF=' ';
return;
}
}
void timer0()interrupt 1
{
if(i<14){
TH0=0;
TL0=0;
i++;
return;
}
else
{
TH0=0;
TL0=0;
a=~a;
i=0;
return;
}
}
void main()
{
IE=0x92;
SCON=0x50;
TMOD=0x21;
TH1=0xFD;
TH0=0;
TL0=0;
TR1=1;
TR0=1;
	SBUF=' ';
while(1)
{
P0=P1^P2;
}
}