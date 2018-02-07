#include<reg51.h>
sbit rs=P1^1;
sbit rw=P1^2;
sbit en=P1^3;
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
void main()
{
int b;
for(b=0;b<5;b++)
{
P2=cmmd[b];
cmm();
}
if(P3<25)
{
for(b=0;b<19;b++)
{
P2=data3[b];
dat();
}
}
else if(P3>25 && P3<35)
{
for(b=0;b<18;b++)
{
P2=data2[b];
dat();
}
}

else
{
for(b=0;b<18;b++)
{
P2=data1[b];
dat();
}
}
}