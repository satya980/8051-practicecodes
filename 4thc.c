#include<reg51.h>
void main()
{
if(P1>50)
P0=P1;
if(P1<50)
P3=P1;
}