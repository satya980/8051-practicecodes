#include<reg51.h>
sbit rs=P1^1;
sbit rw=P1^2;
sbit en=P1^3;
sbit a=P1^6;
unsigned char data1[]="Satyakam";
unsigned char data2[]="sahoo";
unsigned int cmmd1[]={0x38,0x0E,0x01,0x06,0x80};
unsigned int cmmd2[]={0x38,0x0E,0x01,0x10,0x07,0xCF};
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
{rs=1;
rw=0;
en=1;
delay();
en=0;
}
void main()
{
int c,b;
while(1)
{
if(a==1)
{
for(b=0;b<5;b++)
{
P2=cmmd1[b];
cmm();
}
for(c=0;c<8;c++)
{
P2=data1[c];
dat();
}
}
else
{
for(b=0;b<6;b++)
{
P2=cmmd2[b];
cmm();
}
for(c=0;c<5;c++)
{
P2=data2[c];
dat();
}
}
}
}