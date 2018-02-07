#include<reg51.h>
void delay()
{
int i=0;
for(i=0;i<60000;i++);
}
void main()
{
while(1)
{
P2=0xFC;
delay();
P2=0x60;
delay();
P2=0xD2;
delay();
P2=0xF2;
delay();
P2=0x66;
delay();
P2=0xB6;
delay();
P2=0xBE;
delay();
P2=0xE0;
delay();
P2=0xFE;
delay();
P2=0xE6;
delay();

}
}