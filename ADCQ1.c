#include<reg51.h>
sbit rd=P3^0;
sbit wr=P3^1;
sbit intr=P3^2;
sbit rs=P3^3;
sbit rw=P3^4;
sbit en=P3^5;
unsigned int cmmd[]={0x38,0x0E,0x01,0x06,0x80};
unsigned char data1[]="weather is too hot";
unsigned char data2[]="weather is moderate";
unsigned char data3[]="weather is too cold";
void delay()
{
unsigned int x;
	for(x=0;x<6000;x++);
}
void cmm()
{
rs=0;
rw=0;
en=1;
	delay();
en=0;
}
void dat()
{
rs=1;
rw=0;
en=1;
	delay();
en=0;
}
void adc()
{
rd=1;
wr=0;
	wr=1;
while(intr==1);
rd=0;
}
void main()
{
		int b;
	for(b=0;b<5;b++)
{
P2=cmmd[b];
cmm();
}
while(1)
{

	adc();

if(P1<64)
{
	P2=0x01;
	cmm();
for(b=0;b<19;b++)
{
P2=data3[b];
dat();
}
}
else if(P1>64&&P1<89)
{
		P2=0x01;
	cmm();
for(b=0;b<18;b++)
{
P2=data2[b];
dat();
}
}

else 
{
		P2=0x01;
	cmm();
for(b=0;b<18;b++)
{
P2=data1[b];
dat();
}
}

}
}