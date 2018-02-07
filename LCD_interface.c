#include<reg51.h>
sbit rs=P1^1;
sbit rw=P1^2;
sbit en=P1^3;
unsigned char data1[]="Welcome";
unsigned char data2[]=" to cttc";
unsigned int cmmd[]={0x38,0x0E,0x01,0x06,0x80};
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
int a,b;
while(1)
{
for(b=0;b<5;b++)
{
P2=cmmd[b];
cmm();
}
for(a=0;a<7;a++)
{
P2=data1[a];
dat();
}
P2=0xC0;
cmm();
for(a=0;a<8;a++)
{
P2=data2[a];
dat();
}
}
}