#include<reg51.h>
sbit a=P1^5;
sbit b=P3^0;
void main()
{
while(1)
{
if(b==1)
a=1;
else
a=0;
}
}