#include <reg51.h>
void main()
{
unsigned int x;
while (1)
{
for (x=0;x<14;x++)
{
TMOD=0x01;
TH0=0;
TL0=0;
TR0=1;
while(TF0==0);
TF0=0;
TR0=0;
}
P1=~P1;
}}
